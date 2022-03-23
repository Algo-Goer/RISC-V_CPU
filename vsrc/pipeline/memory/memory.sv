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
    
    input excute_data_t dataE,
    output memory_data_t dataM
);

    // 产生Writeback的信号
    assign dataM.dst = dataE.dst;
    assign dataM.regwrite = dataE.regfile;
    assign dataM.wdata = dataE.wdata;

    // 执行访存
    
    
endmodule

`endif 