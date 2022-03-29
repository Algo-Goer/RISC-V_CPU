`ifndef __FORWARD_SV
`define __FORWARD_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module forward
    import common::*;
    import pipes::*;(
    
    input u1 regwrite,
    input creg_addr_t dst,
    input word_t data,
    output forward_data_out dataForward
);
    
    // 组合逻辑
    always_comb begin
        if( regwrite ) begin
            dataForward.valid = 1'b1;
            dataForward.dst = dst;
            dataForward.data = data;
        end 
        else begin
            dataForward.valid = 1'b0;
        end
    end
endmodule

`endif