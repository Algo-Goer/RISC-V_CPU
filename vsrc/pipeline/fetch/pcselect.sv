`ifndef __PCSELECT_SV
`define __PCSELECT_SV
`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module pcselect 
    import common::*;(

    input u1 jump,
    input u64 pcplus4,
    input u64 j_addr,
    input exception,
    input u64 exception_pc,
    output u64 pcselected
);
    
    // 触发异常的话进入异常处理程序
    assign pcselected = exception ? exception_pc : 
        (jump ? j_addr : pcplus4);

endmodule


`endif