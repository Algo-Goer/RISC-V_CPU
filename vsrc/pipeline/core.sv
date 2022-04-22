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
`include "pipeline/writeback/writeback.sv"
`include "pipeline/registers/fetch_decode.sv"
`include "pipeline/registers/decode_execute.sv"
`include "pipeline/registers/execute_memory.sv"
`include "pipeline/registers/memory_writeback.sv"
`include "pipeline/hazard/forward.sv"
`include "pipeline/hazard/hazard.sv"
`include "pipeline/hazard/controller.sv"
`else

`endif

module core 
	import common::*;
	import pipes::*; (
	input logic clk, reset,
	output ibus_req_t  ireq,
	input  ibus_resp_t iresp,
	output dbus_req_t  dreq,
	input  dbus_resp_t dresp
);
	/* TODO: Add your pipeline here. */
	u64 pc, pcnext;
	u32 instruction;
	u1 clear;
	creg_addr_t ra1, ra2;
	word_t rd1, rd2;
	word_t memread_data;
	u1 fetch_delay;
	u1 memory_delay;
	u1 jump_delay;

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
	hazard_data_out hazardOut;
	
	// 访存状态信号
	assign fetch_delay = ireq.valid == 1 && iresp.data_ok == 0;
	assign memory_delay = dreq.valid == 1 && dresp.data_ok == 0;

	// 指令访存设置
	assign ireq.valid = 1;
	assign ireq.addr = pc;
	assign instruction = iresp.data;

	// 数据访存设置
	// 发送请求同时处理访存握手
	assign dreq.valid = dataE_out.ctl.memread | dataE_out.ctl.memwrite;
	assign dreq.strobe = (dataE_out.ctl.memwrite) ? '1 : '0;
	assign dreq.addr = 
		(dataE_out.ctl.memread | dataE_out.ctl.memwrite)
		? dataE_out.result : '0;
	assign dreq.data = dataE_out.memdata;
	assign memread_data = dresp.data;

	// 控制冒险与取指的冲突信号
	assign jump_delay = dataE.ctl.jump && fetch_delay;

	always_ff @( posedge clk ) begin
		// 在不阻塞时更新pc
		if( ~hazardOut.stall ) begin
			if (reset) begin
				pc <= 64'h8000_0000;
			end 
			else if (~fetch_delay && ~memory_delay && ~jump_delay) begin
				pc <= pcnext;
			end
		end
	end

	pcselect pcselect(
		.jump(dataE.ctl.jump),
		.pcplus4(pc + 4),
		.j_addr(dataE.j_addr),
		.pcselected(pcnext)
	);

	fetch fetch(
		.instruction(instruction),
		.pc(pc),
		.dataF(dataF)
	);

	fetch_decode fetch_decode(
		.clk(clk),
		.reset(clear || reset || fetch_delay),
		.stall(hazardOut.stall || memory_delay),
		.dataF(dataF),
		.dataF_out(dataF_out)
	);

	decode decode(
		.dataF(dataF_out),
		.rd1(rd1),
		.rd2(rd2),
		.ra1(ra1),
		.ra2(ra2),
		.dataD(dataD)
	);

	decode_execute decode_execute(
		.clk(clk),
		.reset(clear || reset),
		.stall(hazardOut.stall || memory_delay || jump_delay),
		.dataD(dataD),
		.dataD_out(dataD_out)
	);

	execute execute(
		.dataD(dataD_out),
		.rs1_mux(hazardOut.srca_mux),
		.rs1_forward(hazardOut.srca_forward),
		.rs2_mux(hazardOut.srcb_mux),
		.rs2_forward(hazardOut.srcb_forward),
		.dataE(dataE)
	);

	execute_memory execute_memory(
		.clk(clk),
		.reset(hazardOut.clear || reset || jump_delay),
		.stall(memory_delay),
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
		.reset(reset || memory_delay),
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
		.stall(hazardOut.stall || memory_delay || jump_delay || dataE.ctl.op == UNKNOWN),
		.regwrite(dataE.ctl.regwrite && ~(dataE.ctl.memread)),
		.dst(dataE.dst),
		.data(dataE.result),
		.dataForward(forward_execute)
	);

	// memory转发器
	forward forward2(
		.clk(clk),
		.stall(memory_delay || dataM.op == UNKNOWN),
		.regwrite(dataM.regwrite),
		.dst(dataM.dst),
		.data(dataM.regdata),
		.dataForward(forward_memory)
	);

	// writeback转发器
	forward forward3(
		.clk(clk),
		.stall(dataW.op == UNKNOWN),
		.regwrite(dataW.regwrite),
		.dst(dataW.dst),
		.data(dataW.regdata),
		.dataForward(forward_writeback)
	);

	hazard hazard(
		.regwrite(dataM.regwrite),
		.memread(dataE_out.ctl.memread),
		.rs(dataD_out.ra1), 
		.rt(dataD_out.ra2),
		.dst(dataM.dst),
		.forward_execute(forward_execute),
		.forward_memory(forward_memory),
		.forward_writeback(forward_writeback),
		.hazardOut(hazardOut)
	);

	controller controller(
		.jump(dataE.ctl.jump),
		.clear(clear)
	);

`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (0),
		.index              (0),
		.valid              (dataW.op != UNKNOWN),
		.pc                 (dataW.pc),
		.instr              (dataW.instruction),
		.skip               (dataW.skip & (dreq.addr[31] == 0)),
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
		.clock              (clk),
		.coreid             (0),
		.priviledgeMode     (3),
		.mstatus            (0),
		.sstatus            (0),
		.mepc               (0),
		.sepc               (0),
		.mtval              (0),
		.stval              (0),
		.mtvec              (0),
		.stvec              (0),
		.mcause             (0),
		.scause             (0),
		.satp               (0),
		.mip                (0),
		.mie                (0),
		.mscratch           (0),
		.sscratch           (0),
		.mideleg            (0),
		.medeleg            (0)
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