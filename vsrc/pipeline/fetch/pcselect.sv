`ifndef __PCSELECT_SV
`define __PCSELECT_SV
`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module pcselect 
    import common::*;(

    input u1 jump,
    input u1 b_jump,
    input u64 pcplus4,
    input u64 j_addr,
    output u64 pcselected
);
    
    assign pcselected = (jump | b_jump) ? 
                        j_addr : pcplus4;

endmodule


`endif