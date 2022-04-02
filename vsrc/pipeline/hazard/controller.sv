`ifndef __CONTROLLER_SV
`define __CONTROLLER_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif
/*
* 这个模块只是为了处理原来连线导致的逻辑循环
*/
module controller 
    import common::*;
    import pipes::*;(

    input u1 jump,
    output u1 clear
);

    assign clear = jump;
    
endmodule

`endif