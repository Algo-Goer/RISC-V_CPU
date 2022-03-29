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
    
    input u1 clk,
    input u1 regwrite,
    input creg_addr_t dst,
    input word_t data,
    output forward_data_out dataForward
);
    
    // 时钟上升沿触发
    always_ff @( posedge clk ) begin
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