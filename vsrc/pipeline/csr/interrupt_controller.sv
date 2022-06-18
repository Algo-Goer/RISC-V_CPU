`ifndef __INTERRUPT_CONTROLLER_SV
`define __INTERRUPT_CONTROLLER_SV


`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else
`endif

module interrupt_controller
	import common::*;
	import pipes::*; (
	
    input u1 exint,
    input u1 swint,
    input u1 trint,
    input u1 mie,
    input writeback_data_t dataW,
    input u1 fetch_delay,
    input u1 memory_delay,
    input u1 jump,
    input fetch_data_t dataF,
    input decode_data_t dataD,
    input execute_data_t dataE,
    input memory_data_t dataM,

    output u1 interrupt,
    output u64 return_pc,
    output interrupt_type i_type
);
	/**
        * (1) 若`dataW`出现异常，则不管是否有中断信号，都要先处理W阶段的异常，
        * `interrupt`信号拉高，且`pc`设置为发生异常的pc;
        * (2) 若`dataW`无异常，观察全局中断使能`mie`是否为高电位，若不是则静置中断信号不处理，直到使能为1。
        * (3) 若全局中断使能为1，判断流水线当前是否存在访存阻塞，如果有则等待访存全部握手再处理中断。
        * (4) 若流水线状态允许，判断是否存在跳转（`mret`、`csr_flush`与`jump`），
        * 即当前流水线的指令是错误指令，如果存在则等待跳转完成，再处理中断。
     */
	always_comb begin
        {interrupt, return_pc, i_type} = '0;
        // 是否为异常
        if(dataW.ex_data.exception) begin
            // 进入异常处理程序
            interrupt = 1'b1;
            return_pc = dataW.pc;
            i_type = EXCEPTION;
        end
        // 若存在中断信号
        else if({exint, swint, trint} != '0) begin
            // 判断全局中断使能是否为1，是否存在访存阻塞，是否需要跳转
            if(mie == 1'b1 && ~fetch_delay && ~memory_delay && ~jump) begin
                // 允许下个周期处理中断，设置参数
                interrupt = 1'b1;

                // 确定返回的pc，从高的流水段向前判断，直到某一个流水段指令有效
                if(dataM.op != FLUSH) begin
                    return_pc = dataM.pc;
                end
                else if(dataE.ctl.op != FLUSH) begin
                    return_pc = dataE.pc;
                end
                else if(dataD.ctl.op != FLUSH) begin
                    return_pc = dataD.pc;
                end
                else begin
                    return_pc = dataF.pc;
                end

                // 确定中断的类型
                if(exint) begin
                    i_type = EXTERNAL;
                end
                else if(swint) begin
                    i_type = SOFTWARE;
                end
                else begin
                    i_type = TIMER;
                end
            end
        end
    end

endmodule

`endif