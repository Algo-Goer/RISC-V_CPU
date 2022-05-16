`ifndef __DECODER_SV
`define __DECODER_SV
`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else
`endif

module decoder 
    import common::*;
    import pipes::*;(
        
    input u32 instruction,
    output decode_control_t ctl
);

    wire [6 : 0] f7 = instruction[6 : 0];
    wire [2 : 0] f3 = instruction[14 : 12];
    wire [5 : 0] func6 = instruction[31 : 26];
    wire [6 : 0] func7 = instruction[31 : 25];

    always_comb begin
        ctl = '0;
        unique case(f7)
            F7_I_TYPE: begin
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
                unique case(f3) 
                    F3_ADD_SUB_MUL : begin
                        ctl.op = ADDI;
                        ctl.func = ALU_ADD;
                    end
                    F3_AND_MODU : begin
                        ctl.op = ANDI;
                        ctl.func = ALU_AND;
                    end
                    F3_OR_MOD : begin
                        ctl.op = ORI;
                        ctl.func = ALU_OR;
                    end
                    F3_XOR_DIV : begin
                        ctl.op = XORI;
                        ctl.func = ALU_XOR;
                    end
                    F3_SLT : begin
                        ctl.op = SLTI;
                        ctl.func = ALU_LESS;
                    end
                    F3_SLTU : begin
                        ctl.op = SLTIU;
                        ctl.func = ALU_LESS_U;
                    end
                    F3_SLL : begin
                        ctl.op = SLLI;
                        ctl.func = ALU_SHIFTL;
                    end
                    F3_SRL_SRA_DIVU : begin
                        if(func6 == F6_SRL) begin
                            ctl.op = SRLI;
                            ctl.func = ALU_SHIFTR;
                        end
                        else begin
                            ctl.op = SRAI;
                            ctl.func = ALU_SHIFTRS;
                        end
                    end
                    default : begin
                    end
                endcase
            end
            F7_R_TYPE: begin
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
                ctl.srcb_r = 1'b1;
                unique case(f3) 
                    F3_ADD_SUB_MUL : begin
                        if(func7 == F7_ADD) begin
                            ctl.op = ADD;
                            ctl.func = ALU_ADD;
                        end else if(func7 == F7_SUB) begin
                            ctl.op = SUB;
                            ctl.func = ALU_SUB;
                        end else if(func7 == F7_MUL_DIV) begin
                            ctl.op = MUL;
                            ctl.func = ALU_MUL;
                        end
                    end
                    F3_AND_MODU : begin
                        if(func7 == F7_MUL_DIV) begin
                            ctl.op = MODU;
                            ctl.func = ALU_MODU;
                        end
                        else begin
                            ctl.op = AND;
                            ctl.func = ALU_AND;
                        end
                    end
                    F3_OR_MOD : begin
                        if(func7 == F7_MUL_DIV) begin
                            ctl.op = MOD;
                            ctl.func = ALU_MOD;
                        end
                        else begin
                            ctl.op = OR;
                            ctl.func = ALU_OR;
                        end
                    end
                    F3_XOR_DIV : begin
                        if(func7 == F7_MUL_DIV) begin
                            ctl.op = DIV;
                            ctl.func = ALU_DIV;
                        end else begin
                            ctl.op = XOR;
                            ctl.func = ALU_XOR;
                        end
                    end
                    F3_SLL : begin
                        ctl.op = SLL;
                        ctl.func = ALU_SHIFTL;
                    end
                    F3_SLT : begin
                        ctl.op = SLT;
                        ctl.func = ALU_LESS;
                    end
                    F3_SLTU : begin
                        ctl.op = SLTU;
                        ctl.func = ALU_LESS_U;
                    end
                    F3_SRL_SRA_DIVU : begin
                        if(func7 == F7_SRL) begin
                            ctl.op = SRL;
                            ctl.func = ALU_SHIFTR;
                        end
                        else if(func7 == F7_SRA)begin
                            ctl.op = SRA;
                            ctl.func = ALU_SHIFTRS;
                        end 
                        else if(func7 == F7_MUL_DIV) begin
                            ctl.op = DIVU;
                            ctl.func = ALU_DIVU;
                        end
                    end
                    default : begin
                    end
                endcase
            end
            F7_LUI : begin
                ctl.op = LUI;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_AUIPC : begin
                ctl.op = AUIPC;
                ctl.func = ALU_ADD;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_L_TYPE : begin
                ctl.func = ALU_ADD;
                ctl.memread = 1'b1;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
                unique case(f3)
                    F3_B : begin
                        ctl.op = LB;
                        ctl.msize = MSIZE1;
                    end
                    F3_H : begin
                        ctl.op = LH;
                        ctl.msize = MSIZE2;
                    end
                    F3_W : begin
                        ctl.op = LW;
                        ctl.msize = MSIZE4;
                    end
                    F3_D : begin
                        ctl.op = LD;
                        ctl.msize = MSIZE8;
                    end
                    F3_BU : begin
                        ctl.op = LBU;
                        ctl.msize = MSIZE1;
                        ctl.mem_unsigned = 1;
                    end
                    F3_HU : begin
                        ctl.op = LHU;
                        ctl.msize = MSIZE2;
                        ctl.mem_unsigned = 1;
                    end
                    F3_WU : begin
                        ctl.op = LWU;
                        ctl.msize = MSIZE4;
                        ctl.mem_unsigned = 1;
                    end
                    default : begin
                    end
                endcase
            end
            F7_S_TYPE : begin
                ctl.func = ALU_ADD;
                ctl.memwrite = 1'b1;
                ctl.srca_r = 1'b1;
                unique case(f3)
                    F3_B : begin
                        ctl.op = SB;
                        ctl.msize = MSIZE1;
                    end
                    F3_H : begin
                        ctl.op = SH;
                        ctl.msize = MSIZE2;
                    end
                    F3_W : begin
                        ctl.op = SW;
                        ctl.msize = MSIZE4;
                    end
                    F3_D : begin
                        ctl.op = SD;
                        ctl.msize = MSIZE8;
                    end
                    default : begin
                    end
                endcase
            end
            F7_JAL : begin
                ctl.op = JAL;
                ctl.jump = 1'b1;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_JALR : begin
                ctl.op = JALR;
                ctl.jump = 1'b1;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_B_TYPE : begin
                ctl.btype = 1'b1;
                ctl.srca_r = 1'b1;
                ctl.srcb_r = 1'b1;
                unique case(f3) 
                    F3_BEQ : begin
                        ctl.op = BEQ;
                        ctl.func = ALU_EQUAL;
                    end
                    F3_BNE : begin
                        ctl.op = BNE;
                        ctl.func = ALU_NOT_EQUAL;
                    end
                    F3_BLT : begin
                        ctl.op = BLT;
                        ctl.func = ALU_LESS;
                    end
                    F3_BGE : begin
                        ctl.op = BGE;
                        ctl.func = ALU_GREATER;
                    end
                    F3_BLTU : begin
                        ctl.op = BLTU;
                        ctl.func = ALU_LESS_U;
                    end
                    F3_BGEU : begin
                        ctl.op = BGEU;
                        ctl.func = ALU_GREATER_U;
                    end
                    default : begin
                    end
                endcase
            end
            F7_IW_TYPE : begin
                ctl.word = 1'b1;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
                unique case (f3)
                    F3_ADD_SUB_MUL : begin
                        ctl.op = ADDIW;
                        ctl.func = ALU_ADD;
                        ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                    end
                    F3_SLL : begin
                        if(instruction[25]) begin
                            ctl.op = UNKNOWN;
                            ctl.regwrite = 1'b0;
                        end
                        else begin
                            ctl.op = SLLIW;
                            ctl.func = ALU_SHIFTL;
                            ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                        end
                    end
                    F3_SRL_SRA_DIVU : begin
                        if(instruction[25]) begin
                            ctl.op = UNKNOWN;
                            ctl.regwrite = 1'b0;
                        end
                        else begin
                            if(func7 == F7_SRL) begin
                                ctl.op = SRLIW;
                                ctl.func = ALU_SHIFTR;
                                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                            end
                            else begin
                                ctl.op = SRAIW;
                                ctl.func = ALU_SHIFTRS;
                                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                            end
                        end
                    end
                    default : begin
                    end
                endcase
            end
            F7_RW_TYPE : begin
                ctl.word = 1'b1;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
                ctl.srcb_r = 1'b1;
                unique case(f3)
                    F3_ADD_SUB_MUL : begin
                        if(func7 == F7_ADD) begin
                            ctl.op = ADDW;
                            ctl.func = ALU_ADD;
                        end 
                        else if(func7 == F7_SUB) begin
                            ctl.op = SUBW;
                            ctl.func = ALU_SUB;
                        end
                        else if(func7 == F7_MUL_DIV) begin
                            ctl.op = MULW;
                            ctl.func = ALU_MUL;
                        end
                    end
                    F3_SLL : begin
                        ctl.op = SLLW;
                        ctl.func = ALU_SHIFTL;
                    end
                    F3_SRL_SRA_DIVU : begin
                        if(func7 == F7_SRL) begin
                            ctl.op = SRLW;
                            ctl.func = ALU_SHIFTR;
                        end
                        else if(func7 == F7_SRA) begin
                            ctl.op = SRAW;
                            ctl.func = ALU_SHIFTRS;
                        end
                        else if(func7 == F7_MUL_DIV) begin
                            ctl.op = DIVUW;
                            ctl.func = ALU_DIVU;
                        end
                    end
                    F3_XOR_DIV : begin
                        ctl.op = DIVW;
                        ctl.func = ALU_DIV;
                    end
                    F3_OR_MOD : begin
                        ctl.op = MODW;
                        ctl.func = ALU_MOD;
                    end
                    F3_AND_MODU : begin
                        ctl.op = MODUW;
                        ctl.func = ALU_MODU;
                    end
                    default : begin
                    end
                endcase
            end
            default : begin
                ctl = '0;
            end
        endcase
        
    end
    
endmodule

`endif