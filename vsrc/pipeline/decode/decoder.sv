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
    wire [6 : 0] func = instruction[31 : 25];

    always_comb begin
        ctl = '0;
        unique case(f7)
            F7_I_TYPE: begin
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
                unique case(f3) 
                    F3_ADD : begin
                        ctl.op = ADDI;
                        ctl.func = ALU_ADD;
                    end
                    F3_AND : begin
                        ctl.op = ANDI;
                        ctl.func = ALU_AND;
                    end
                    F3_OR : begin
                        ctl.op = ORI;
                        ctl.func = ALU_OR;
                    end
                    F3_XOR : begin
                        ctl.op = XORI;
                        ctl.func = ALU_XOR;
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
                    F3_ADD : begin
                        if(func == F7_ADD) begin
                            ctl.op = ADD;
                            ctl.func = ALU_ADD;
                        end else begin
                            ctl.op = SUB;
                            ctl.func = ALU_SUB;
                        end
                    end
                    F3_AND : begin
                        ctl.op = AND;
                        ctl.func = ALU_AND;
                    end
                    F3_OR : begin
                        ctl.op = OR;
                        ctl.func = ALU_OR;
                    end
                    F3_XOR : begin
                        ctl.op = XOR;
                        ctl.func = ALU_XOR;
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
            F7_LD : begin
                ctl.op = LD;
                ctl.func = ALU_ADD;
                ctl.memread = 1'b1;
                ctl.regwrite = (instruction[11 : 7] == '0) ? 1'b0 : 1'b1;
                ctl.dst = instruction[11 : 7];
                ctl.srca_r = 1'b1;
            end
            F7_SD : begin
                ctl.op = SD;
                ctl.func = ALU_ADD;
                ctl.memwrite = 1'b1;
                ctl.srca_r = 1'b1;
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
            F7_BEQ : begin
                ctl.op = BEQ;
                ctl.func = ALU_EQUAL;
                ctl.srca_r = 1'b1;
                ctl.srcb_r = 1'b1;
            end
            default : begin
                ctl = '0;
            end
        endcase
        
    end
    
endmodule

`endif