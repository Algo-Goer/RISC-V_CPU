`ifndef __DECODE_EXECUTE_SV
`define __DECODE_EXECUTE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module decode_execute 
    import common::*;
    import pipes::*;(
    
    input u1 clk, reset,
    input decode_data_t dataD,
    output decode_data_t dataD_out
);

    always_ff @(posedge clk) begin
        if(reset) begin
            dataD_out <= '0;
        end
        else begin
            dataD_out <= dataD;
        end
    end
    
endmodule

`endif