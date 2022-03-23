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
    output control_t ctl
);

    wire [6 : 0] f7 = instruction[6 : 0];
    wire [2 : 0] f3 = instruction[14 : 12];
    wire [6 : 0] func = instruction[31 : 25];

    always_comb begin
        ctl = '0;
        unique case(f7)
            F7_I_TYPE: begin
                ctl.regwrite = 1'b1;
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
                ctl.regwrite = 1'b1;
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
            default : begin
                ctl = '0;
            end
        endcase
        
    end
    
endmodule

`endif