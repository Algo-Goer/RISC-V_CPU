`ifndef __MEMORY_SV
`define __MEMORY_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module memory 
    import common::*;
    import pipes::*;(
    
    input execute_data_t dataE,
    input word_t memread_data,
    output memory_data_t dataM
);

    execute_control_t ctl = dataE.ctl;

    assign dataM.pc = dataE.pc;
    assign dataM.op = dataE.ctl.op;
    assign dataM.jump = dataE.ctl.jump;
    assign dataM.instruction = dataE.instruction;
    assign dataM.regwrite = ctl.regwrite;
    assign dataM.dst = dataE.dst;
    assign dataM.regdata = (ctl.memread) ? 
                    memread_data : dataE.result;
    assign dataM.skip = dataE.ctl.memread | dataE.ctl.memwrite;
    assign dataM.address = dataE.result;

    // csr信号
    assign dataM.csrwrite = dataE.ctl.csrwrite;
    assign dataM.csr_dst = dataE.csr_dst;
    assign dataM.csrdata = dataE.csrdata;

    // 指令是否异常信号
    assign dataM.ex_data = dataE.ex_data;

endmodule

`endif 