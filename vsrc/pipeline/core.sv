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
`include "pipeline/pipelinereg/fetch_decode"
`include "pipeline/pipelinereg/decode_execute"
`include "pipeline/pipelinereg/execute_memory"
`include "pipeline/pipelinereg/memory_writeback"
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
	creg_addr_t ra1, ra2;
	word_t rd1, rd2;
	word_t memread_data;

	fetch_data_t dataF;
	fetch_data_t dataF_out;
	decode_data_t dataD;
	decode_data_t dataD_out;
	execute_data_t dataE;
	execute_data_t dataE_out;
	memory_data_t dataM;
	memory_data_t dataM_out;
	
	assign ireq.addr = pc;
	assign instruction = iresp.data;
	assign dreq.addr = 
		(dataE_out.ctl.memread |dataE_out.ctl.memwrite)
		? dataE_out.result : '0;
	assign dreq.data = dataE_out.memdata;
	assign dreq.valid = dataE_out.ctl.memwrite;
	assign memread_data = dresp.data;

	always_ff @(posedge clk ) begin
		if (reset) begin
			pc <= 64'h8000_0000;
		end else begin
			pc <= pcnext;
		end
	end

	pcselect pcselect(
		.jump(dataD.ctl.jump),
		.pcplus4(pc + 4),
		.j_addr(dataD.j_addr),
		.pcselected(pcnext)
	);

	fetch fetch(
		.instruction(instruction),
		.pc(pc),
		.dataF(dataF)
	);

	fetch_decode fetch_decode(
		.clk(clk),
		.reset(dataE.ctl.jump),
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
		.reset(dataE.ctl.jump),
		.dataD(dataD),
		.dataD_out(dataD_out)
	);

	execute execute(
		.dataD(dataD_out),
		.dataE(dataE)
	);

	execute_memory execute_memory(
		.clk(clk),
		.reset(0),
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
		.reset(0),
		.dataM(dataM),
		.dataM_out(dataM_out)
	);

	regfile regfile(
		.clk, .reset,
		.ra1(ra1),
		.ra2(ra2),
		.rd1(rd1),
		.rd2(rd2),
		.wvalid(dataM_out.regwrite),
		.wa(dataM_out.dst),
		.wd(dataM_out.regdata)
	);

`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (0),
		.index              (0),
		.valid              (~reset),
		.pc                 (pc),
		.instr              (instruction),
		.skip               (dreq.addr[31] == 0),
		.isRVC              (0),
		.scFailed           (0),
		.wen                (dataM_out.regwrite),
		.wdest              (dataM_out.dst),
		.wdata              (dataM_out.regdata)
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