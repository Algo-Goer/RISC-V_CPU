`ifndef __FETCH_DECODE_SV
`define __FETCH_DECODE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module fetch_decode 
    import common::*;
    import pipes::*;(

    input u1 clk, reset,
    input u1 stall,
    input fetch_data_t dataF,
    output fetch_data_t dataF_out
);
    always_ff @(posedge clk) begin
        if( ~stall ) begin
            if (reset) begin
                dataF_out.pc = 64'h8000_0000;
                dataF_out.instruction = '0;
            end
            else begin
                dataF_out.pc = dataF.pc;
                dataF_out.instruction = dataF.instruction;
            end
        end
    end
    
endmodule

`endif