`ifndef __DECODE_SV
`define __DECODE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/decode/decoder.sv"
`include "pipeline/decode/extend.sv"
`else

`endif

module decode 
    import common::*;
    import pipes::*;(
    
    //取指的信号
    input fetch_data_t dataF,   
    //regfile读到的数据
    input word_t rd1, rd2,

    output creg_addr_t ra1, ra2,
    //译码得到的数据(交给excute运算)与控制信号
    output decode_data_t dataD
);
    
    word_t imm;
    control_t ctl;
    
    decoder decoder(
        .instruction(dataF.instruction),
        .ctl(ctl)
    );

    extend extend(
        .instruction(dataF.instruction),
        .op(ctl.op),
        .sextimm(imm)
    );

    assign dataD.srca = rd1;
    assign dataD.srcb = rd2;
    assign dataD.ctl = ctl;
    assign dataD.dst = dataF.instruction[11 : 7];
    assign dataD.pc = dataF.pc;
    assign dataD.sextimm = imm;

    //regfile address
    assign ra1 = dataF.instruction[19 : 15];
    assign ra2 = dataF.instruction[24 : 20];

endmodule

`endif