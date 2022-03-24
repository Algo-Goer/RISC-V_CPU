`ifndef __MEMORY_SV
`define __MEMORY_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module memory 
    import common::*;
    import pipes::*;(
    
    input execute_data_t dataE,
    input word_t memread_data,
    output memory_data_t dataM
);

    execute_control_t ctl = dataE.ctl;

    assign dataM.regwrite = ctl.regwrite;
    assign dataM.dst = ctl.dst;
    assign dataM.regdata = (ctl.memread) ? 
                    memread_data : dataE.result;
    assign dataM.memdata = dataE.memdata;

endmodule

`endif 