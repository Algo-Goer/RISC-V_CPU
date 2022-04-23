`ifndef __ALU_SV
`define __ALU_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module alu
	import common::*;
	import pipes::*;(
	input u64 a, b,
	input alufunc_t alufunc,
	input u1 word,
	output u64 c
);
	u64 srca, srcb;
	u64 result;
	
	always_comb begin
		result = '0;
		unique case(alufunc)
			ALU_ADD : result = srca + srcb;
			ALU_SUB : result = srca - srcb;
			ALU_OR  : result = srca | srcb;
			ALU_AND : result = srca & srcb;
			ALU_XOR : result = srca ^ srcb;
			ALU_EQUAL : result = (srca == srcb) ? 64'h0000_0001 : '0;
			ALU_NOT_EQUAL : result = (srca != srcb) ? 64'h0000_0001 : '0;
			ALU_LESS : result = ($signed(srca) < $signed(srcb)) ? 64'h0000_0001 : '0;
			ALU_GREATER : result = ($signed(srca) >= $signed(srcb)) ? 64'h0000_0001 : '0;
			ALU_LESS_U : result = (srca < srcb) ? 64'h0000_0001 : '0;
			ALU_GREATER_U  : result = (srca >= srcb) ? 64'h0000_0001 : '0;
			ALU_SHIFTL : result = srca << srcb;
			ALU_SHIFTR : result = srca >> srcb;
			ALU_SHIFTRS : result = ($signed(srca)) >>> srcb;
			default: begin
				result = srca;
			end
		endcase
	end

	// 截断操作数
	assign srcb = word ? {32'b0, b[31 : 0]} : b;
	always_comb begin
		if(word) begin
			if(alufunc == ALU_SHIFTRS) begin
				srca = {{32{a[31]}}, a[31 : 0]};
			end
			else begin
				srca = {32'b0, a[31 : 0]};
			end
		end
		else begin
			srca = a;
		end
	end
	// 扩展结果
	assign c = word ? {{32{result[31]}}, result[31 : 0]} : result;
endmodule

`endif
