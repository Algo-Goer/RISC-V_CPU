`ifndef __CSRALU_SV
`define __CSRALU_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module csralu
	import common::*;
	import pipes::*;(
	input u64 a, b,
	input alufunc_t alufunc,
	output u64 c
);
	u64 srca, srcb;
	u64 result;

	// 驱动数据
	always_comb begin
		result = '0;
		unique case(alufunc)
			ALU_OR  : result = srca | srcb;
			ALU_AND : result = srca & srcb;
			default: begin
				result = srcb;
			end
		endcase
	end

	// 截断操作数
    assign srca = a;
	assign srcb = b;
	// 扩展结果
	assign c = result;

endmodule

`endif
