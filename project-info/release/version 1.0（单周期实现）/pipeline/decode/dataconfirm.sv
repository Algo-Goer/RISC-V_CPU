`ifndef __DATACONFIRM_SV
`define __DATACONFIRM_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module dataconfirm 
    import common::*;
    import pipes::*;(
    
    input u64 pc,
    input decode_op_t op,
    input word_t rd1, rd2,
    input word_t imm,

    output word_t srca, srcb 
);

    word_t data1 = '0;
    word_t data2 = '0;

    always_latch begin 
        unique case(op)
            ADD, SUB, OR, AND, XOR, BEQ: begin
                data1 = rd1;
                data2 = rd2;
            end
            ADDI, ORI, ANDI, XORI, LD, SD: begin
                data1 = rd1;
                data2 = imm;
            end
            LUI : begin
                data1 = imm;
                data2 = '0;
            end
            AUIPC : begin
                data1 = pc;
                data2 = imm;
            end
            JAL, JALR: begin 
                data1 = pc;
                data2 = 4;
            end
            default: begin
                
            end
        endcase
        
    end

    assign srca = data1;
    assign srcb = data2;
    
endmodule

`endif