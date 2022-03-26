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
    decode_op_t op;
    word_t srca, srcb;
    
    decoder decoder(
        .instruction(dataF.instruction),
        .ctl(ctl),
        .op(op)
    );

    extend extend(
        .instruction(dataF.instruction),
        .op(op),
        .sextimm(imm)
    );

    dataconfirm dataconfirm(
        .pc(dataF.pc),
        .op(op),
        .rd1(rd1),
        .rd2(rd2),
        .imm(imm),
        .srca(srca),
        .srcb(srcb)
    );

    // 确定pc跳转的地址
    assign dataD.j_addr = (op == JALR) ? 
                (rd1 + imm) & (~1) : dataF.pc + imm;
    
    // 确定excute的两个操作数
    assign dataD.srca = srca;
    assign dataD.srcb = srcb;

    // 确定要写入内存的数据
    assign dataD.memdata = (op == SD) ? '0 : rd2;

    // 确定控制信号
    assign dataD.ctl = ctl;

    //regfile address
    assign ra1 = dataF.instruction[19 : 15];
    assign ra2 = dataF.instruction[24 : 20];

endmodule

`endif