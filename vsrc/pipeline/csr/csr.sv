`ifndef __CSR_SV
`define __CSR_SV


`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/csr/csr_pkg.sv"
`else
`endif

module csr
	import common::*;
	import pipes::*;
	/*import decode_pkg::*;*/
	import csr_pkg::*;(
	input logic clk, reset,
	// 读出字段
	input u12 ra,				
	output word_t rd,
	// 写入字段
	input u1 we,
	input u12 wa,
	input word_t wd,
	// 开始中断的更新
	input u1 enter,					// 是否为进入中断
	input u64 pc,					// 异常pc
	input u1 interrupt,				// 是否为中断
	input logic[62 : 0] code,		// 异常原因
	input word_t value,				// 异常信息值
	// 结束中断的更新
	input u1 leave,
	// 中断类型
	input u1 exint,
	input u1 swint,
	input u1 trint,
	// 异常入口pc
	output u64 mtvec,
	// 出口pc
	output u64 mepc,
	// 当前模式
	output u2 mode,
	// 全局中断使能
	output u1 mie
);
	csr_regs_t regs, regs_nxt;

	always_ff @(posedge clk) begin
		if (reset) begin
			regs <= '0;
			regs.mcause[1] <= 1'b1;
			regs.mepc[31] <= 1'b1;
			regs.mode <= 2'b11;
		end else begin
			regs <= regs_nxt;
		end
	end

	// 读出某个字段
	always_comb begin
		rd = '0;
		unique case(ra)
			CSR_MIE: rd = regs.mie;
			CSR_MIP: rd = regs.mip;
			CSR_MTVEC: rd = regs.mtvec;
			CSR_MSTATUS: rd = regs.mstatus;
			CSR_MSCRATCH: rd = regs.mscratch;
			CSR_MEPC: rd = regs.mepc;
			CSR_MCAUSE: rd = regs.mcause;
			CSR_MCYCLE: rd = regs.mcycle;
			CSR_MTVAL: rd = regs.mtval;
			default: begin
				rd = '0;
			end
		endcase
	end

	// 写入某个字段
	always_comb begin
		regs_nxt = regs;
		regs_nxt.mcycle = regs.mcycle + 1;
		regs_nxt.mip[7] = trint;
		regs_nxt.mip[3] = swint;
		regs_nxt.mip[11] = exint;
		// Writeback: W stage
		if (we) begin
			unique case(wa)
				CSR_MIE: regs_nxt.mie = wd;
				CSR_MIP:  regs_nxt.mip = wd;
				CSR_MTVEC: regs_nxt.mtvec = wd;
				CSR_MSTATUS: regs_nxt.mstatus = wd;
				CSR_MSCRATCH: regs_nxt.mscratch = wd;
				CSR_MEPC: regs_nxt.mepc = wd;
				CSR_MCAUSE: regs_nxt.mcause = wd;
				CSR_MCYCLE: regs_nxt.mcycle = wd;
				CSR_MTVAL: regs_nxt.mtval = wd;
				default: begin
				end
			endcase
			regs_nxt.mstatus.sd = regs_nxt.mstatus.fs != 0;
		end
		/* 离开异常的Csr寄存器更新处理 */
		else if (leave) begin
			regs_nxt.mode = regs.mstatus.mpp;
			regs_nxt.mstatus.mie = regs.mstatus.mpie;
			regs_nxt.mstatus.mpie = 1'b1;
			regs_nxt.mstatus.mpp = 2'b0;
		end
		/* 进入异常的Csr寄存器更新处理 */
		else if (enter) begin
			regs_nxt.mode = 2'b11;
			regs_nxt.mepc = pc;
			regs_nxt.mcause[63] = 1'b0;
			regs_nxt.mcause[62 : 0] = code;
			regs_nxt.mstatus.mpie = regs.mstatus.mie;
			regs_nxt.mstatus.mie = 1'b0;
			regs_nxt.mstatus.mpp = regs.mode;
			// regs_nxt.mtval = value;
		end
		/* 计时器中断 */
		else if(regs.mstatus.mie & regs.mie[7] & trint) begin
			regs_nxt.mepc = pc;
			regs_nxt.mcause[63] = 1'b1;
			regs_nxt.mcause[62 : 0] = INTERRUPT_TIMER;
            regs_nxt.mstatus.mpie = regs.mstatus.mie;
            regs_nxt.mstatus.mie = 1'b0;
            regs_nxt.mstatus.mpp = mode;
			regs_nxt.mode = 2'b11;
		end
		/* 软件中断 */
		else if (regs.mstatus.mie & regs.mie[3] & swint) begin
            regs_nxt.mepc = pc;
			regs_nxt.mcause[63] = 1'b1;
			regs_nxt.mcause[62 : 0] = INTERRUPT_SOFTWARE;
            regs_nxt.mstatus.mpie = regs.mstatus.mie;
            regs_nxt.mstatus.mie = 1'b0;
            regs_nxt.mstatus.mpp = mode;
			regs_nxt.mode = 2'b11;
		end
		/* 外部中断 */
		else if (regs.mstatus.mie & regs.mie[11] & exint) begin
            regs_nxt.mepc = pc;
			regs_nxt.mcause[63] = 1'b1;
			regs_nxt.mcause[62 : 0] = INTERRUPT_EXTERNAL;
            regs_nxt.mstatus.mpie = regs.mstatus.mie;
            regs_nxt.mstatus.mie = 1'b0;
            regs_nxt.mstatus.mpp = mode;
			regs_nxt.mode = 2'b11;
		end
	end

	assign mtvec = regs.mtvec;
	assign mepc = regs.mepc;
	assign mode = regs.mode;
	assign mie = regs.mstatus.mie;
	
endmodule

`endif