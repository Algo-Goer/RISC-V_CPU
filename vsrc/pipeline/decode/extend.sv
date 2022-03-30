`ifndef __EXTEND__SV
`define __EXTEND__SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module extend 
    import common::*;
    import pipes::*; (
    
    input u32 instruction,
    input decode_op_t op,
    output word_t sextimm
);

    u64 imm = '0;
    always_latch begin
        unique case(op)
            ADDI, ORI, ANDI, XORI, LD, JALR: begin
                imm = {
                    {52{instruction[31]}}, 
                    instruction[31 : 20]
                };
            end
            LUI, AUIPC : begin
                imm = {
                    {32{instruction[31]}},
                    instruction[31 : 12],
                    12'b0
                };
            end
            SD : begin
                imm = {
                    { 52{instruction[31]} },//offset[63 : 12]
                    instruction[31 : 25],   //offset[11 : 5]
                    instruction[11 : 7]	
                };
            end
            JAL : begin
                imm = {
                    {43{instruction[31]}},  //offset[63 : 21]
                    instruction[31], 		//offset[20]			
                    instruction[19 : 12], 	//offset[19 : 12]	
                    instruction[20], 		//offset[11]
                    instruction[30 : 21], 	//offset[10 : 1]
                    1'b0 
                };
            end
            BEQ : begin
                imm = {
                    {51{instruction[31]}},	//offset[63 : 13]
                    instruction[31],		//offset[12]
                    instruction[7],			//offset[11]
                    instruction[30 : 25],   //offset[10 : 5]
                    instruction[11 : 8],	//offset[4 : 1]
                    1'b0	
                };
            end
            default: begin

            end
        endcase
    end

    assign sextimm = imm;
    
endmodule

`endif