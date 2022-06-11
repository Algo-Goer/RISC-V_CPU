`ifndef __DECODE_SV
`define __DECODE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/decode/decoder.sv"
`include "pipeline/decode/extend.sv"
`include "pipeline/decode/dataconfirm.sv"
`include "pipeline/decode/csrconfirm.sv"
`else

`endif

module decode 
    import common::*;
    import pipes::*;(
    
    //取指的信号
    input fetch_data_t dataF,   
    //regfile读到的数据
    input word_t rd1, rd2,
    // csr读到的数据
    input word_t csr,

    output creg_addr_t ra1, ra2,
    output u12 csr_addr,
    //译码得到的数据(交给excute运算)与控制信号
    output decode_data_t dataD
);
    
    word_t imm;
    decode_control_t ctl;
    word_t srca, srcb;
    word_t csrb;
    exception_data_t exception;
    
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
        .csr(csr),
        .srca(srca),
        .srcb(srcb)
    );

    csrconfirm csrconfirm(
        .pc(dataF.pc),
        .op(ctl.op),
        .rd1(rd1),
        .imm(imm),
        .srcb(csrb)
    );

    assign ra1 = dataF.instruction[19 : 15];
    assign ra2 = dataF.instruction[24 : 20];
    assign csr_addr = dataF.instruction[31 : 20];

    // pc
    assign dataD.pc = dataF.pc;
    assign dataD.instruction = dataF.instruction;

    //regfile address
    assign dataD.ra1 = dataF.instruction[19 : 15];
    assign dataD.ra2 = dataF.instruction[24 : 20];

    // 确定excute的两个操作数
    assign dataD.srca = srca;
    assign dataD.srcb = srcb;
    assign dataD.csra = csr;
    assign dataD.csrb = csrb;

    // 立即数
    assign dataD.imm = imm;

    // 确定用来计算pc的值
    assign dataD.pcdata = (ctl.op == JALR) ? rd1 : '0;

    // 确定要写入内存的数据
    assign dataD.memdata = (ctl.op == SD || ctl.op == SB || ctl.op == SH || ctl.op == SW) ? rd2 : '0;

    // 确定控制信号
    assign dataD.ctl = ctl;

    // 确定异常信号，若前面流水段未发生异常则设置异常
    assign dataD.ex_data = dataF.ex_data.exception ? dataF.ex_data : exception;

    // 检查是否为非法指令
    always_comb begin
        if(dataF.instruction == 32'h5006b) begin
            // 跳过该异常指令
            exception = '0;
        end 
        else if(ctl.op == UNKNOWN) begin
            // 触发非法指令异常
            exception.exception = 1'b1;
            exception.code = ILLEGAL_INSTR;     // 非法指令
            exception.value = dataF.pc;
        end
        else begin
            exception = '0;
        end
    end

endmodule

`endif