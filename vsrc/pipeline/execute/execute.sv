`ifndef __EXECUTE_SV
`define __EXECUTE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/execute/alu.sv"
`else

`endif

module execute 
    import common::*;
    import pipes::*;(
    
    input decode_data_t dataD,
    input u1 rs1_mux,
    input word_t rs1_forward,
    input u1 rs2_mux,
    input word_t rs2_forward,
    output execute_data_t dataE
);

    word_t srca, srcb;
    word_t pcdata;      // 这两个数据肯定是从寄存器读出的，
    word_t memdata;     // 只管更新就行，会有信号进行过滤
    word_t result;

    alu alu(
        .a(srca),
        .b(srcb),
        .alufunc(dataD.ctl.func),
        .c(result)
    );
    
    // 从转发器中更新读到的数据
    assign pcdata = (rs1_mux) ? rs1_forward : dataD.pcdata;
    assign memdata = (rs2_mux) ? rs2_forward : dataD.memdata;
    assign srca = (dataD.ctl.srca_r && rs1_mux) ?
                (rs1_forward) : dataD.srca;
    assign srcb = (dataD.ctl.srcb_r && rs2_mux) ?
                (rs2_forward) : dataD.srcb;
    
    // 计算跳转pc
    assign dataE.j_addr = (dataD.ctl.op == JALR) ? 
        (pcdata + dataD.imm) & (~1) : dataD.pc + dataD.imm;

    // 得到输出端口信号
    assign dataE.pc = dataD.pc;
    assign dataE.instruction = dataD.instruction;
    assign dataE.memdata = memdata;
    assign dataE.result = result;
    assign dataE.ctl.jump = (dataD.ctl.jump) | 
        (dataD.ctl.op == BEQ && result == 1) ? 1'b1 : 1'b0;
    assign dataE.ctl.op = dataD.ctl.op;
    assign dataE.ctl.memread = dataD.ctl.memread;
    assign dataE.ctl.memwrite = dataD.ctl.memwrite;
    assign dataE.ctl.regwrite = dataD.ctl.regwrite;
    assign dataE.ctl.dst = dataD.ctl.dst;

endmodule

`endif