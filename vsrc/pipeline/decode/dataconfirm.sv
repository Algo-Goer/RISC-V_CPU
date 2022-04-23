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
            ADD, SUB, OR, AND, XOR, 
            SLT, SLTU, ADDW, SUBW,
            BEQ, BNE, BLT, BGE, BLTU, BGEU: begin
                data1 = rd1;
                data2 = rd2;
            end
            SLL, SRL, SRA : begin
                data1 = rd1;
                data2 = {
                    58'b0,			// 高位补0
                    rd2[5 : 0]		// rd2的低六位作为移位数据
                };
            end
            SLLW, SRLW, SRAW : begin
                data1 = rd1;
                data2 = {
                    59'b0,			// 高位补0
                    rd2[4 : 0]		// rd2的低六位作为移位数据
                };
            end
            ADDI, ORI, ANDI, XORI, 
            SLTI, SLTIU, SLLI, SRLI, SRAI,
            ADDIW, SLLIW, SRLIW, SRAIW,
            LB, LH, LW, LD, LBU, LHU, LWU,
            SB, SH, SW, SD: begin
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