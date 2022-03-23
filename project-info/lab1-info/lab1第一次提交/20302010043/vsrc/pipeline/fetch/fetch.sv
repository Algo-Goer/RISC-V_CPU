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

    assign dataF.instruction = instruction;
    assign dataF.pc = pc;
    
endmodule

`endif