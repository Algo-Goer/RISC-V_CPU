`ifndef __MEMORY_WRITEBACK_SV
`define __MEMORY_WRITEBACK_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module memory_writeback 
    import common::*;
    import pipes::*;(
    
    input u1 clk, reset, stall,
    input memory_data_t dataM,
    output memory_data_t dataM_out
);

    always_ff @( posedge clk ) begin
        if(~stall) begin
            if(reset) begin
                dataM_out <= '0;
            end
            else begin
                dataM_out <= dataM;
            end
        end
    end
    
endmodule

`endif