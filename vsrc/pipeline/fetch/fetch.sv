`ifndef __FETCH_SV
`define __FETCH_SV

`ifdef VARILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module fetch 
    import common::*;
    import pipes::*;(

    input u32 instruction,
    input u64 pc,

    output fetch_data_t dataF

);

    exception_data_t exception;

    assign dataF.instruction = instruction;
    assign dataF.pc = pc;
    assign dataF.ex_data = exception;

    // 检查指令地址是否对齐，指令地址末3位为0
    always_comb begin
        if(|pc[1 : 0]) begin
        // 若有一个不为1，取消访存指令，并记录异常
            exception.exception = 1'b1;
            exception.code = INSTR_ADDR_MISALIGNED;     // 指令地址不对齐
            exception.value = pc;
        end
        else begin
            exception = '0;
        end
    end
    
endmodule

`endif