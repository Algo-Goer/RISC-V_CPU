`ifndef __CORE_SV
`define __CORE_SV
`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/regfile/regfile.sv"
`include "pipeline/fetch/pcselect.sv"
`include "pipeline/fetch/fetch.sv"
`include "pipeline/decode/decode.sv"
`include "pipeline/execute/execute.sv"
`include "pipeline/memory/memory.sv"
`include "pipeline/memory/readdata.sv"
`include "pipeline/memory/writedata.sv"
`include "pipeline/writeback/writeback.sv"
`include "pipeline/registers/fetch_decode.sv"
`include "pipeline/registers/decode_execute.sv"
`include "pipeline/registers/execute_memory.sv"
`include "pipeline/registers/memory_writeback.sv"
`include "pipeline/hazard/forward.sv"
`include "pipeline/hazard/hazard.sv"
`include "pipeline/hazard/controller.sv"
`include "pipeline/csr/csr.sv"
`include "pipeline/csr/interrupt_controller.sv"
`else

`endif

module core 
	import common::*;
	import pipes::*; (
	input logic clk, reset,
	output ibus_req_t  ireq,
	input  ibus_resp_t iresp,
	output dbus_req_t  dreq,
	input  dbus_resp_t dresp,
	input logic trint, swint, exint
);
	/* TODO: Add your pipeline here. */
	u64 pc, pcnext;
	u32 instruction;
	u1 clear;
	creg_addr_t ra1, ra2;
	word_t rd1, rd2;
	u12 csr_addr;					// csr读的地址
	word_t csr_read;				// csr寄存器读出字段
	word_t memread_data;
	u1 fetch_delay;
	u1 memory_delay;
	u1 jump_delay;
	strobe_t strobe;
	u1 execute_stall;
	u1 memory_stall;
	u1 execute_data_ok;

	fetch_data_t dataF;
	fetch_data_t dataF_out;
	decode_data_t dataD;
	decode_data_t dataD_out;
	execute_data_t dataE;
	execute_data_t dataE_out;
	memory_data_t dataM;
	memory_data_t dataM_out;
	writeback_data_t dataW;
	writeback_data_t dataW_out;		//多一层转发
	forward_data_out forward_execute;
	forward_data_out forward_memory;
	forward_data_out forward_writeback;
	forward_data_out forward_memory_copy;
	forward_data_out forward_writeback_copy;
	hazard_data_out hazardOut;

	u1 debug;
	assign debug = dataE.ctl.op == SD && dataE.result == 64'h8000_ffa8;

	u64 mtvec;
	u64 mepc;
	u2 mode;
	u1 mie;

	// u1 exception;				// 是否引发异常
	// assign exception = dataW.ex_data.exception;

	// 离开中断
	u1 leave;
	assign leave = (dataW.op == MRET);

	// 进入中断状态
	u1 interrupt;
	interrupt_type i_type;
	u64 return_pc;

	// 更新csr寄存器，异常/中断/离开/写入
	u1 update_csr;
	assign update_csr = interrupt | leave | dataW.csrwrite;

	// csr控制清除流水线遇到前面的取值/访存阻塞
	u1 csr_stall;
	assign csr_stall = update_csr & fetch_delay;
	
	// 访存状态信号
	assign fetch_delay = ireq.valid == 1 && iresp.data_ok == 0;
	assign memory_delay = dreq.valid == 1 && dresp.data_ok == 0;

	// 指令访存设置
	assign ireq.valid = ~(|pc[1 : 0]);
	assign ireq.addr = pc;
	assign instruction = iresp.data;

	// 阻塞信号
	assign execute_stall = hazardOut.stall || memory_delay || jump_delay || ~execute_data_ok;
	assign memory_stall = memory_delay;

	// 数据访存设置
	// 发送请求同时处理访存握手，若出现地址不对齐的情况则不发起请求
	assign dreq.valid = (dataE_out.ctl.memread | dataE_out.ctl.memwrite)  
		& ~dataE_out.ex_data.exception & ~(dataW.ex_data.exception | leave | dataW.csrwrite);	// 若writeback阶段发生异常则不请求
	assign dreq.strobe = (dataE_out.ctl.memwrite) ? strobe : '0;
	assign dreq.addr = 
		(dataE_out.ctl.memread | dataE_out.ctl.memwrite)
		? dataE_out.result : '0;
	assign dreq.size = dataE_out.ctl.msize;

	// 控制冒险与取指的冲突信号
	assign jump_delay = dataE.ctl.jump && fetch_delay;

	always_ff @( posedge clk ) begin
		// 在不阻塞时更新pc
		if( ~hazardOut.stall ) begin
			if (reset) begin
				pc <= 64'h8000_0000;
			end 
			else if (~fetch_delay && ~memory_delay && ~jump_delay && execute_data_ok) begin
				pc <= pcnext;
			end
		end
	end

	pcselect pcselect(
		.jump(dataE.ctl.jump),
		.pcplus4(pc + 4),
		.j_addr(dataE.j_addr),
		.interrupt(interrupt),
		.interrupt_pc(mtvec),
		.leave(leave),
		.leave_pc(mepc),
		.csrwrite(dataW.csrwrite),
		.csrwrite_pc(dataW.pc + 4),
		.pcselected(pcnext)
	);

	fetch fetch(
		.instruction(instruction),
		.pc(pc),
		.dataF(dataF)
	);

	fetch_decode fetch_decode(
		.clk(clk),
		.reset(clear || reset || fetch_delay || update_csr),
		.stall(hazardOut.stall || memory_delay || ~execute_data_ok || csr_stall),
		.dataF(dataF),
		.dataF_out(dataF_out)
	);

	decode decode(
		.dataF(dataF_out),
		.rd1(rd1),
		.rd2(rd2),
		.csr(csr_read),
		.mode(mode),
		.ra1(ra1),
		.ra2(ra2),
		.csr_addr(csr_addr),
		.dataD(dataD)
	);

	decode_execute decode_execute(
		.clk(clk),
		.reset(clear || reset || update_csr),
		.stall(execute_stall || csr_stall),
		.dataD(dataD),
		.dataD_out(dataD_out)
	);

	execute execute(
		.clk(clk),
		.reset(hazardOut.stall),
		.dataD(dataD_out),
		.rs1_mux(hazardOut.srca_mux),
		.rs1_forward(hazardOut.srca_forward),
		.rs2_mux(hazardOut.srcb_mux),
		.rs2_forward(hazardOut.srcb_forward),
		.csr_mux(hazardOut.csr_mux),
		.csr_forward(hazardOut.csr_forward),
		.data_ok(execute_data_ok),
		.dataE(dataE)
	);

	execute_memory execute_memory(
		.clk(clk), 
		.reset(hazardOut.clear || reset || jump_delay || ~execute_data_ok || update_csr),
		.stall(memory_stall || csr_stall),
		.dataE(dataE),
		.dataE_out(dataE_out)
	);

	memory memory(
		.dataE(dataE_out),
		.memread_data(memread_data),
		.dataM(dataM)
	);

	memory_writeback memory_writeback(
		.clk(clk),
		.reset(reset || memory_delay || update_csr),
		.stall(csr_stall),
		.dataM(dataM),
		.dataM_out(dataM_out)
	);

	writeback writeback(
		.dataM(dataM_out),
		.dataW(dataW)
	);

	// 为转发器生成writeback阶段数据
	always_ff @( posedge clk ) begin
		dataW_out <= dataW;	
	end

	regfile regfile(
		.clk, .reset,
		.ra1(ra1),
		.ra2(ra2),
		.rd1(rd1),
		.rd2(rd2),
		.wvalid(dataW.regwrite),
		.wa(dataW.dst),
		.wd(dataW.regdata)
	);

	// execute转发器
	forward forward1(
		.clk(clk),
		.reset(update_csr),
		.stall(execute_stall || dataE.ctl.op == FLUSH),
		.regwrite(dataE.ctl.regwrite && ~(dataE.ctl.memread)),
		.dst(dataE.dst),
		.data(dataE.result),
		.dataForward(forward_execute)
	);

	// memory转发器
	forward forward2(
		.clk(clk),
		.reset(update_csr),
		.stall(memory_stall || dataM.op == FLUSH),
		.regwrite(dataM.regwrite),
		.dst(dataM.dst),
		.data(dataM.regdata),
		.dataForward(forward_memory)
	);

	// writeback转发器
	forward forward3(
		.clk(clk),
		.reset(update_csr),
		.stall(dataW.op == FLUSH),
		.regwrite(dataW.regwrite),
		.dst(dataW.dst),
		.data(dataW.regdata),
		.dataForward(forward_writeback)
	);

	// memory备份转发器，execute阻塞但memory不阻塞时保存数据
	forward forward4(
		.clk(clk),
		.reset(update_csr),
		.stall(memory_stall || (execute_stall && ~memory_stall && dataM.dst != forward_memory_copy.dst) || dataM.op == FLUSH),
		.regwrite(dataM.regwrite),
		.dst(dataM.dst),
		.data(dataM.regdata),
		.dataForward(forward_memory_copy)
	);

	// writeback备份转发器，execute阻塞但memory不阻塞时保存数据
	forward forward5(
		.clk(clk),
		.reset(update_csr),
		.stall( (execute_stall && ~memory_stall && dataW.dst != forward_writeback_copy.dst)  || memory_stall || dataW.op == FLUSH),
		.regwrite(dataW.regwrite),
		.dst(dataW.dst),
		.data(dataW.regdata),
		.dataForward(forward_writeback_copy)
	);

	hazard hazard(
		.regwrite(dataM.regwrite),
		.memread(dataE_out.ctl.memread),
		.rs(dataD_out.ra1), 
		.rt(dataD_out.ra2),
		.dst(dataM.dst),
		.csr(dataD_out.ra1),
		.forward_execute(forward_execute),
		.forward_memory(forward_memory),
		.forward_writeback(forward_writeback),
		.forward_memory_copy(forward_memory_copy),
		.forward_writeback_copy(forward_writeback_copy),
		.hazardOut(hazardOut)
	);

	controller controller(
		.jump(dataE.ctl.jump),
		.clear(clear)
	);

	// 设置不同粒度读内存
	readdata readdata(
		._rd(dresp.data),
		.addr(dataE_out.result[2 : 0]),
		.msize(dataE_out.ctl.msize),
		.mem_unsigned(dataE_out.ctl.mem_unsigned),
		.rd(memread_data)
	);

	// 设置不同粒度写内存
	writedata writedata(
		.addr(dataE_out.result[2 : 0]),
		._wd(dataE_out.memdata),
		.msize(dataE_out.ctl.msize),
		.wd(dreq.data),
		.strobe(strobe)
	);

	// csr控制状态寄存器
	csr csr(
		.clk(clk),
		.reset(reset),
		.ra(csr_addr),
		.rd(csr_read),
		.we(dataW.csrwrite),
		.wa(dataW.csr_dst),
		.wd(dataW.csrdata),
		.enter(interrupt & ~fetch_delay),				// 是否进入中断
		.pc(return_pc),					// 返回的pc
		.i_type(i_type),
		.code(dataW.ex_data.code),			// 异常编码
		.value(dataW.ex_data.value),
		.leave(leave),						// 离开异常，dataW的操作为mret
		.mtvec(mtvec),
		.mepc(mepc),
		.mode(mode),
		.mie(mie)
	);

	// 处理中断情况
	interrupt_controller interrupt_controller(
		.exint(exint),
		.swint(swint),
		.trint(trint),
		.mie(mie),
		.dataW(dataW),
		.dataF(dataF),
		.dataD(dataD),
		.dataE(dataE),
		.dataM(dataM),
		.fetch_delay(fetch_delay),
		.memory_delay(memory_delay),
		.jump(dataE.ctl.jump | leave | dataW.csrwrite),
		.interrupt(interrupt),
		.return_pc(return_pc),
		.i_type(i_type)
	);

`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (0),
		.index              (0),
		.valid              (dataW.op != FLUSH & ~csr_stall),
		.pc                 (dataW.pc),
		.instr              (dataW.instruction),
		.skip               (dataW.skip & (dataW.address[31] == 0)),
		.isRVC              (0),
		.scFailed           (0),
		.wen                (dataW.regwrite),
		.wdest              ({3'b0, dataW.dst}),
		.wdata              (dataW.regdata)
	);
	      
	DifftestArchIntRegState DifftestArchIntRegState (
		.clock              (clk),
		.coreid             (0),
		.gpr_0              (regfile.regs_nxt[0]),
		.gpr_1              (regfile.regs_nxt[1]),
		.gpr_2              (regfile.regs_nxt[2]),
		.gpr_3              (regfile.regs_nxt[3]),
		.gpr_4              (regfile.regs_nxt[4]),
		.gpr_5              (regfile.regs_nxt[5]),
		.gpr_6              (regfile.regs_nxt[6]),
		.gpr_7              (regfile.regs_nxt[7]),
		.gpr_8              (regfile.regs_nxt[8]),
		.gpr_9              (regfile.regs_nxt[9]),
		.gpr_10             (regfile.regs_nxt[10]),
		.gpr_11             (regfile.regs_nxt[11]),
		.gpr_12             (regfile.regs_nxt[12]),
		.gpr_13             (regfile.regs_nxt[13]),
		.gpr_14             (regfile.regs_nxt[14]),
		.gpr_15             (regfile.regs_nxt[15]),
		.gpr_16             (regfile.regs_nxt[16]),
		.gpr_17             (regfile.regs_nxt[17]),
		.gpr_18             (regfile.regs_nxt[18]),
		.gpr_19             (regfile.regs_nxt[19]),
		.gpr_20             (regfile.regs_nxt[20]),
		.gpr_21             (regfile.regs_nxt[21]),
		.gpr_22             (regfile.regs_nxt[22]),
		.gpr_23             (regfile.regs_nxt[23]),
		.gpr_24             (regfile.regs_nxt[24]),
		.gpr_25             (regfile.regs_nxt[25]),
		.gpr_26             (regfile.regs_nxt[26]),
		.gpr_27             (regfile.regs_nxt[27]),
		.gpr_28             (regfile.regs_nxt[28]),
		.gpr_29             (regfile.regs_nxt[29]),
		.gpr_30             (regfile.regs_nxt[30]),
		.gpr_31             (regfile.regs_nxt[31])
	);
	      
	DifftestTrapEvent DifftestTrapEvent(
		.clock              (clk),
		.coreid             (0),
		.valid              (0),
		.code               (0),
		.pc                 (0),
		.cycleCnt           (0),
		.instrCnt           (0)
	);
	      
	DifftestCSRState DifftestCSRState(
		.clock (clk),
		.coreid (0),
		.priviledgeMode (csr.regs_nxt.mode),
		.mstatus (csr.regs_nxt.mstatus),
		.sstatus (csr.regs_nxt.mstatus & 64'h800000030001e000),
		.mepc (csr.regs_nxt.mepc),
		.sepc (0),
		.mtval (csr.regs_nxt.mtval),
		.stval (0),
		.mtvec (csr.regs_nxt.mtvec),
		.stvec (0),
		.mcause (csr.regs_nxt.mcause),
		.scause (0),
		.satp (0),
		.mip (csr.regs_nxt.mip),
		.mie (csr.regs_nxt.mie),
		.mscratch (csr.regs_nxt.mscratch),
		.sscratch (0),
		.mideleg (0),
		.medeleg (0)
		);
	      
	DifftestArchFpRegState DifftestArchFpRegState(
		.clock              (clk),
		.coreid             (0),
		.fpr_0              (0),
		.fpr_1              (0),
		.fpr_2              (0),
		.fpr_3              (0),
		.fpr_4              (0),
		.fpr_5              (0),
		.fpr_6              (0),
		.fpr_7              (0),
		.fpr_8              (0),
		.fpr_9              (0),
		.fpr_10             (0),
		.fpr_11             (0),
		.fpr_12             (0),
		.fpr_13             (0),
		.fpr_14             (0),
		.fpr_15             (0),
		.fpr_16             (0),
		.fpr_17             (0),
		.fpr_18             (0),
		.fpr_19             (0),
		.fpr_20             (0),
		.fpr_21             (0),
		.fpr_22             (0),
		.fpr_23             (0),
		.fpr_24             (0),
		.fpr_25             (0),
		.fpr_26             (0),
		.fpr_27             (0),
		.fpr_28             (0),
		.fpr_29             (0),
		.fpr_30             (0),
		.fpr_31             (0)
	);
	
`endif
endmodule
`endif