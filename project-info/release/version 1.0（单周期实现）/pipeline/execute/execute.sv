`ifndef __EXECUTE_SV
`define __EXECUTE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/execute/alu.sv"
`else

`endif

module execute 
    import common::*;
    import pipes::*;(
    
    input decode_data_t dataD,
    output execute_data_t dataE
);

    word_t result;

    alu alu(
        .a(dataD.srca),
        .b(dataD.srcb),
        .alufunc(dataD.ctl.func),
        .c(result)
    );

    assign dataE.memdata = dataD.memdata;
    assign dataE.result = result;
    assign dataE.ctl.b_jump = 
        (dataD.ctl.func == ALU_EQUAL & result == 1) ? 1'b1 : 1'b0;
    assign dataE.ctl.memread = dataD.ctl.memread;
    assign dataE.ctl.memwrite = dataD.ctl.memwrite;
    assign dataE.ctl.regwrite = dataD.ctl.regwrite;
    assign dataE.ctl.dst = dataD.ctl.dst;
    
endmodule

`endif