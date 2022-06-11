`ifndef __WRITEBACK_SV
`define __WRITEBACK_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module writeback 
    import common::*;
    import pipes::*;(
    
    input memory_data_t dataM,
    output writeback_data_t dataW
);
    
    assign dataW.pc = dataM.pc;
    assign dataW.instruction  = dataM.instruction;
    assign dataW.op = dataM.op;
    assign dataW.jump = dataM.jump;
    assign dataW.regwrite = dataM.regwrite;
    assign dataW.dst = dataM.dst;
    assign dataW.regdata = dataM.regdata;
    assign dataW.skip = dataM.skip;
    assign dataW.address = dataM.address;

    // csr信号
    assign dataW.csrwrite = dataM.csrwrite;
    assign dataW.csr_dst = dataM.csr_dst;
    assign dataW.csrdata = dataM.csrdata;
endmodule

`endif