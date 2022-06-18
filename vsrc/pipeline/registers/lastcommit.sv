`ifndef __LASTCOMMIT_SV
`define __LASTCOMMIT_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module lastcommit
    import common::*;
    import pipes::*;(
    
    input u1 clk,
    input writeback_data_t dataW,
    output u64 pc
);

    writeback_data_t commit;

    always_ff @( posedge clk ) begin
        if(dataW.op != FLUSH) begin
            // 有效指令则覆盖
            commit = dataW;
        end
    end

    assign pc = commit.pc;
    
endmodule

`endif