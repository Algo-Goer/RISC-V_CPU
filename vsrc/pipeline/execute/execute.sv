`ifndef __EXECUTE_SV
`define __EXECUTE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`include "pipeline/execute/alu.sv"
`include "pipeline/execute/csralu.sv"
`else

`endif

module execute 
    import common::*;
    import pipes::*;(
    
    input u1 clk, reset,
    input decode_data_t dataD,
    input u1 rs1_mux,
    input word_t rs1_forward,
    input u1 rs2_mux,
    input word_t rs2_forward,
    input u1 csr_mux,
    input word_t csr_forward,
    output logic data_ok,
    output execute_data_t dataE
);

    word_t srca, srcb;
    word_t csrb;
    word_t pcdata;      // 这两个数据肯定是从寄存器读出的，
    word_t memdata;     // 只管更新就行，会有信号进行过滤
    word_t result;
    logic done;
    word_t csr_result;

    alu alu(
        .clk(clk),
        .reset(reset),
        .a(srca),
        .b(srcb),
        .alufunc(dataD.ctl.func),
        .word(dataD.ctl.word),
        .done(done),
        .c(result)
    );

    csralu csralu(
        .a(dataD.csra),
        .b(csrb),
        .alufunc(dataD.ctl.csr_func),
        .c(csr_result)
    );
    
    // 从转发器中更新读到的数据
    assign pcdata = (rs1_mux) ? rs1_forward : dataD.pcdata;
    assign memdata = (rs2_mux) ? rs2_forward : dataD.memdata;
    assign srca = (dataD.ctl.srca_r && rs1_mux) ?
                (rs1_forward) : dataD.srca;
                
    // 这里需要处理一下移位的运算；
    always_comb begin
        if(dataD.ctl.srcb_r && rs2_mux) begin
            if(dataD.ctl.op == SLL || dataD.ctl.op == SRL || dataD.ctl.op == SRA) begin
                srcb = {
                    58'b0,
                    rs2_forward[5 : 0]
                };
            end
            else if (dataD.ctl.op == SLLW || dataD.ctl.op == SRLW || dataD.ctl.op == SRAW) begin
                srcb = {
                    59'b0,
                    rs2_forward[4 : 0]
                };
            end
            else begin
                srcb = rs2_forward;
            end
        end
        else begin
            srcb = dataD.srcb;
        end
    end

    // 转发要写入csr的数据
    assign csrb = (csr_mux) ? csr_forward : dataD.csrb;
    
    // 计算跳转pc
    assign dataE.j_addr = (dataD.ctl.op == JALR) ? 
        (pcdata + dataD.imm) & (~1) : dataD.pc + dataD.imm;

    // 得到输出端口信号
    assign dataE.pc = dataD.pc;
    assign dataE.instruction = dataD.instruction;
    assign dataE.memdata = memdata;
    assign dataE.result = result;
    assign dataE.ctl.jump = (dataD.ctl.jump) | 
        (dataD.ctl.btype == 1 && result == 1) ? 1'b1 : 1'b0;
    assign dataE.ctl.op = dataD.ctl.op;
    assign dataE.ctl.memread = dataD.ctl.memread;
    assign dataE.ctl.memwrite = dataD.ctl.memwrite;
    assign dataE.ctl.regwrite = dataD.ctl.regwrite;
    assign dataE.dst = dataD.ctl.dst;
    // 接收访存参数
    assign dataE.ctl.msize = dataD.ctl.msize;
    assign dataE.ctl.mem_unsigned = dataD.ctl.mem_unsigned;
    assign data_ok = done;
    // csr信号
    assign dataE.csr_dst = dataD.ctl.csr_dst;
    assign dataE.csrdata = csr_result;
    assign dataE.ctl.csrwrite = dataD.ctl.csrwrite;
endmodule

`endif