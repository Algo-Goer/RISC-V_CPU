`ifndef __EXECUTE_MEMORY_SV
`define __EXECUTE_MEMORY_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module execute_memory 
    import common::*;
    import pipes::*;(
    
    input u1 clk, reset,
    input execute_data_t dataE,
    output execute_data_t dataE_out
);

    always_ff @(posedge clk) begin
        if(reset) begin
            dataE_out <= '0;
        end
        else begin
            dataE_out <= dataE;
        end
    end
    
endmodule

`endif