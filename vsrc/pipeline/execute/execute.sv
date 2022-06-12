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
    exception_data_t exception;

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
    assign csrb = (dataD.ctl.csr_r & csr_mux) ? csr_forward : dataD.csrb;
    
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

    // 执行阶段暂无可能的异常，只需要传递前面检测到的异常即可
    assign dataE.ex_data = dataD.ex_data.exception ? dataD.ex_data : exception;

    // 检测读写内存是否对齐
    always_comb begin
        // 若不需要访存，则不会触发异常
        if(~dataD.ctl.memread & ~dataD.ctl.memwrite) begin
            exception = '0;
        end
        // 需要访存则判断低位是否对齐
        // MSIZE为8，即读写8字节，则低3位不能有1
        // MSIZE为4，即读写4字节，则低2位不能有1
        // MSIZE为2，即读写2字节，则低1位不能位1
        // MSIZE为1，即读写1字节，对地址低位对齐无要求
        else if(
            (dataD.ctl.msize == MSIZE8 & |result[2 : 0]) ||
            (dataD.ctl.msize == MSIZE4 & |result[1 : 0]) ||
            (dataD.ctl.msize == MSIZE2 & result[0])
        ) begin
            // 触发访存地址未对齐异常
            exception.exception = 1'b1;
            // 存取异常
            exception.code = dataD.ctl.memread ? LOAD_ADDR_MISALIGNED : STORE_ADDR_MISALIGNED;
            exception.value = result;
        end
        else begin
            exception = '0;
        end 
    end

endmodule

`endif