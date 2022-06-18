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
    input u1 interrupt,
    input u64 interrupt_pc,
    input u1 leave,
    input u64 leave_pc,
    input u1 csrwrite,
    input u64 csrwrite_pc,
    output u64 pcselected
);
    
    // 触发异常的话进入异常处理程序
    always_comb begin
        if(interrupt) begin
            pcselected = interrupt_pc;
        end
        else if(leave) begin
            pcselected = leave_pc;
        end
        else if(csrwrite) begin
            pcselected = csrwrite_pc;
        end
        else if(jump) begin
            pcselected = j_addr;
        end
        else begin
            pcselected = pcplus4;
        end
    end

endmodule


`endif