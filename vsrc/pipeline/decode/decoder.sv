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
    output decode_control_t ctl,
    output decode_op_t op
);

    wire [6 : 0] f7 = instruction[6 : 0];
    wire [2 : 0] f3 = instruction[14 : 12];
    wire [6 : 0] func = instruction[31 : 25];

    always_latch begin
        ctl = '0;
        unique case(f7)
            F7_I_TYPE: begin
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
                unique case(f3) 
                    F3_ADD : begin
                        op = ADDI;
                        ctl.func = ALU_ADD;
                    end
                    F3_AND : begin
                        op = ANDI;
                        ctl.func = ALU_AND;
                    end
                    F3_OR : begin
                        op = ORI;
                        ctl.func = ALU_OR;
                    end
                    F3_XOR : begin
                        op = XORI;
                        ctl.func = ALU_XOR;
                    end
                    default : begin
                    end
                endcase
            end
            F7_R_TYPE: begin
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
                unique case(f3) 
                    F3_ADD : begin
                        if(func == F7_ADD) begin
                            op = ADD;
                            ctl.func = ALU_ADD;
                        end else begin
                            op = SUB;
                            ctl.func = ALU_SUB;
                        end
                    end
                    F3_AND : begin
                        op = AND;
                        ctl.func = ALU_AND;
                    end
                    F3_OR : begin
                        op = OR;
                        ctl.func = ALU_OR;
                    end
                    F3_XOR : begin
                        op = XOR;
                        ctl.func = ALU_XOR;
                    end
                    default : begin
                    end
                endcase
            end
            F7_LUI : begin
                op = LUI;
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_AUIPC : begin
                op = AUIPC;
                ctl.func = ALU_ADD;
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_LD : begin
                op = LD;
                ctl.func = ALU_ADD;
                ctl.memread = 1'b1;
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_SD : begin
                op = SD;
                ctl.func = ALU_ADD;
                ctl.memwrite = 1'b1;
            end
            F7_JAL : begin
                op = JAL;
                ctl.jump = 1'b1;
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_JALR : begin
                op = JALR;
                ctl.jump = 1'b1;
                ctl.regwrite = 1'b1;
                ctl.dst = instruction[11 : 7];
            end
            F7_BEQ : begin
                op = BEQ;
                ctl.func = ALU_EQUAL;
            end
            default : begin
            end
        endcase
        
    end
    
endmodule

`endif