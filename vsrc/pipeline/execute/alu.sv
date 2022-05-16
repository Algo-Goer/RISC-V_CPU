`ifndef __ALU_SV
`define __ALU_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/execute/multiplier.sv"
`include "pipeline/execute/divider.sv"
`else

`endif

module alu
	import common::*;
	import pipes::*;(
	input clk, reset,
	input u64 a, b,
	input alufunc_t alufunc,
	input u1 word,
	output u1 done,
	output u64 c
);
	u64 srca, srcb;
	u64 result;

	u64 mul_result, div_result;				// multiplier与divider的计算机结果
	u64 mul_result_32, div_result_32;		// multiplier与divider的计算机结果
	u1 mul, div;							// multiplier与divider的计算使能
	u1 mul_done, div_done;					// multiplier与divider的握手信号
	u1 mul_done_32, div_done_32;			// multiplier与divider的握手信号
	divider_op_t op;						// divider的计算类型
	u1 unsign;								// divider的是否无符号计算
	u1 data_ok;								// alu的握手信号

	// 驱动multiplier与divider的信号
	assign mul = alufunc == ALU_MUL;
	assign div = alufunc == ALU_DIV || alufunc == ALU_DIVU || alufunc == ALU_MOD || alufunc == ALU_MODU;
	assign op = (alufunc == ALU_DIV || alufunc == ALU_DIVU) ? DIVOP : MODOP;
	assign unsign = alufunc == ALU_DIVU || alufunc == ALU_MODU;
	assign mul_result_32[63 : 32] = '0;
	assign div_result_32[63 : 32] = '0;

	// 驱动数据
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
			ALU_MUL : result = word ? mul_result_32 : mul_result;
			ALU_DIV, ALU_DIVU, ALU_MOD, ALU_MODU : result = word ? div_result_32 : div_result;
			default: begin
				result = srca;
			end
		endcase
	end

	// 驱动data_ok
	always_comb begin
		data_ok = 1;
		unique case(alufunc)
			ALU_MUL : data_ok = word ? mul_done_32 : mul_done;
			ALU_DIV, ALU_DIVU, ALU_MOD, ALU_MODU : data_ok = word ? div_done_32 : div_done;
			default : data_ok = 1;
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
	assign done = data_ok;

	// 例化multiplier与divider
	multiplier multiplier_64bits(
		.clk(clk),
		.resetn(~reset),
		.valid(mul & ~word),
		.a(srca), .b(srcb),
		.done(mul_done),
		.c(mul_result)
	);

	// 32位乘法器
	multiplier #(
		.WORD_BITS(32)
	) multiplier_32bits(
		.clk(clk),
		.resetn(~reset),
		.valid(mul & word),
		.a(srca[31 : 0]), .b(srcb[31 : 0]),
		.done(mul_done_32),
		.c(mul_result_32[31 : 0])
	);

	divider divider_64bits(
		.clk(clk),
		.resetn(~reset),
		.valid(div & ~word),
		.op(op),
		.unsign(unsign),
		.a(srca), .b(srcb),
		.done(div_done),
		.c(div_result)
	);

	// 32位除法器
	divider #(
		.WORD_BITS(32)
	) divider_32bits(
		.clk(clk),
		.resetn(~reset),
		.valid(div & word),
		.op(op),
		.unsign(unsign),
		.a(srca[31 : 0]), .b(srcb[31 : 0]),
		.done(div_done_32),
		.c(div_result_32[31 : 0])
	);
endmodule

`endif
