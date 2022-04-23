`ifndef __DECODE_SV
`define __DECODE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/decode/decoder.sv"
`include "pipeline/decode/extend.sv"
`include "pipeline/decode/dataconfirm.sv"
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
    decode_control_t ctl;
    word_t srca, srcb;
    
    decoder decoder(
        .instruction(dataF.instruction),
        .ctl(ctl)
    );

    extend extend(
        .instruction(dataF.instruction),
        .op(ctl.op),
        .sextimm(imm)
    );

    dataconfirm dataconfirm(
        .pc(dataF.pc),
        .op(ctl.op),
        .rd1(rd1),
        .rd2(rd2),
        .imm(imm),
        .srca(srca),
        .srcb(srcb)
    );

    assign ra1 = dataF.instruction[19 : 15];
    assign ra2 = dataF.instruction[24 : 20];

    // pc
    assign dataD.pc = dataF.pc;
    assign dataD.instruction = dataF.instruction;

    //regfile address
    assign dataD.ra1 = dataF.instruction[19 : 15];
    assign dataD.ra2 = dataF.instruction[24 : 20];

    // 确定excute的两个操作数
    assign dataD.srca = srca;
    assign dataD.srcb = srcb;

    // 立即数
    assign dataD.imm = imm;

    // 确定用来计算pc的值
    assign dataD.pcdata = (ctl.op == JALR) ? rd1 : '0;

    // 确定要写入内存的数据
    assign dataD.memdata = (ctl.op == SD || ctl.op == SB || ctl.op == SH || ctl.op == SW) ? rd2 : '0;

    // 确定控制信号
    assign dataD.ctl = ctl;

endmodule

`endif