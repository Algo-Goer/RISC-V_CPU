`ifndef __CSRCONFIRM_SV
`define __CSRCONFIRM_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module csrconfirm 
    import common::*;
    import pipes::*;(
    
    input u64 pc,
    input decode_op_t op,
    input word_t rd1,
    input word_t imm,

    output word_t srcb
);

    word_t data2;

    always_comb begin 
        data2 = '0;
        unique case(op)
            CSRRW, CSRRS : begin
                data2 = rd1;
            end
            CSRRC : begin
                data2 = ~rd1;
            end
            CSRRWI, CSRRSI : begin
                data2 = imm;
            end
            CSRRCI : begin
                data2 = ~imm;
            end
            default: begin
                data2 = '0;
            end
        endcase
    end

    assign srcb = data2;
    
endmodule

`endif