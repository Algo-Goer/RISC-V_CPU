`ifndef __MULTIPLIER_SV
`define __MULTIPLIER_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module multiplier 
    import common::*;
    import pipes::*; #(
        parameter WORD_BITS = 64
    )(
    input logic clk, resetn, valid,
    input logic[WORD_BITS - 1 : 0] a, b,
    output logic done,      // 握手信号，done 上升沿时的输出是有效的
    output logic[WORD_BITS - 1 : 0] c         // c = a * b，取低64位
);

    localparam type count_t = logic [WORD_BITS : 0];
    localparam type p_t = logic [2 * WORD_BITS : 0];
    localparam type word_com_t = logic [WORD_BITS - 1 : 0];

    enum logic { INIT, DOING } state, state_nxt;
    count_t count, count_nxt;
    localparam count_t MULT_DELAY = {1'b1, {WORD_BITS{1'b0}}};      // 64位计数器
    p_t p, p_nxt;                                   // 计算数据

    // 进行计算的数据
    word_com_t srca, srcb;

    // 符号处理后的操作数
    assign srca = a[WORD_BITS - 1] ? (~a + 1) : a;
    assign srcb = b[WORD_BITS - 1] ? (~b + 1) : b;
    
    always_comb begin
        {state_nxt, count_nxt} = {state, count}; // default
        unique case(state)
            INIT: begin
                if (valid) begin
                    state_nxt = DOING;
                    count_nxt = MULT_DELAY;
                end
            end
            DOING: begin
                count_nxt = {1'b0, count_nxt[WORD_BITS : 1]};
                if (count_nxt == '0) begin
                    state_nxt = INIT;
                end
            end
        endcase
    end
    
    always_comb begin
        p_nxt = p;
        unique case(state)
            INIT: begin
                p_nxt = {{WORD_BITS{1'b0}}, 1'b0, srca};
            end
            DOING: begin
                if (p_nxt[0]) begin
                    p_nxt[2 * WORD_BITS : WORD_BITS] = p_nxt[2 * WORD_BITS : WORD_BITS] + srcb;
            	end
                // 右移1位
            	p_nxt = {1'b0, p_nxt[2 * WORD_BITS : 1]};
            end
        endcase
    end

    // 时序控制驱动状态机
    always_ff @(posedge clk) begin
        // 通过resetn控制外部的数据抖动（memory访存的数据转发到execute进行计算）
        if (~resetn) begin
            {state, count} <= '0;
        end else begin
            {state, count} <= {state_nxt, count_nxt};
        end
    end
    // 时序控制驱动数据计算
    always_ff @(posedge clk) begin
        if (~resetn) begin
            p <= '0;
        end else begin
            p <= p_nxt;
        end
    end

    // 信号驱动
    assign done = (state_nxt == INIT);
    assign c = (a[WORD_BITS - 1] ^ b[WORD_BITS - 1]) ? ~(p[WORD_BITS - 1 : 0] - 1) : p[WORD_BITS - 1 : 0];         // 取积的低64位，进行符号处理

endmodule

`endif