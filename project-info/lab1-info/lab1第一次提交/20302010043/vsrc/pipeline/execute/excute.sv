`ifndef __EXCUTE_SV
`define __EXCUTE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/excute/alu.sv"
`else

`endif

module excute 
    import common::*;
    import pipes::*;(
    
    input decode_data_t dataD,
    output excute_data_t dataE
);

    word_t result;
    alu alu(
        .a(dataD.srca),
        .b(dataD.srcb),
        .alufunc(dataD.ctl.func),
        .c(result)
    );

    assign dataE.result = result;
    assign dataE.wdata = dataD.srcb;
    assign dataE.memwrite = dataD.ctl.memwrite;
    assign dataE.dst = dataD.dst;
    assign dataE.regwrite = dataD.ctl.regwrite;
    
endmodule

`endif