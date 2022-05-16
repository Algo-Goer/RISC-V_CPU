`ifndef __DIVIDER_SV
`define __DIVIDER_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module divider 
    import common::*;
    import pipes::*; #(
        parameter WORD_BITS = 64
    ) (
    input logic clk, resetn, valid,
    input divider_op_t op,
    input logic unsign,
    input logic[WORD_BITS - 1 : 0] a, b,
    output logic done,
    output logic[WORD_BITS - 1 : 0] c // c = {a % b, a / b}
);

    localparam type count_t = logic [WORD_BITS : 0];
    localparam type p_t = logic [2 * WORD_BITS - 1 : 0];
    localparam type word_com_t = logic [WORD_BITS - 1 : 0];

    // 定义状态
    enum i1 { INIT, DOING } state, state_nxt;
    count_t count, count_nxt;
    localparam count_t DIV_DELAY = {1'b1, {WORD_BITS{1'b0}}};
    p_t p, p_nxt;
    word_com_t div, mod;           // 商和余数

    // 进行计算的数据
    word_com_t srca, srcb;

    // 符号处理后的操作数
    assign srca = unsign ? a : (a[WORD_BITS - 1] ? (~a + 1) : a);
    assign srcb = unsign ? b : (b[WORD_BITS - 1] ? (~b + 1) : b);
    
    // FSM
    always_comb begin
        {state_nxt, count_nxt} = {state, count};    // default
        unique case(state)
            INIT: begin
                if (valid) begin
                    state_nxt = DOING;
                    count_nxt = DIV_DELAY;
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

    // data
    always_comb begin
        p_nxt = p;
        unique case(state)
            INIT: begin
                p_nxt = {{WORD_BITS{1'b0}}, srca};
            end
            DOING: begin
                // 左移1位
                p_nxt = {p_nxt[2 * WORD_BITS - 2:0], 1'b0};
                if (p_nxt[2 * WORD_BITS - 1 : WORD_BITS] >= srcb) begin
                    p_nxt[2 * WORD_BITS - 1 : WORD_BITS] -= srcb;
                    p_nxt[0] = 1'b1;
                end
            end
        endcase
    end

    // 驱动商和余数
    always_comb begin
        // 无符号操作，直接取结果
        if(unsign) begin
            div = p[WORD_BITS - 1 : 0];
            mod = p[2 * WORD_BITS - 1 : WORD_BITS];
        end
        else if(b == '0) begin
            // 除数为0
            div = '1;
            mod = a;
        end
        // 有符号操作，处理得到有符号的结果
        else begin
            unique case({a[WORD_BITS - 1], b[WORD_BITS - 1]}) 
                2'b00 : begin
                    div = p[WORD_BITS - 1 : 0];
                    mod = p[2 * WORD_BITS - 1 : WORD_BITS];
                end
                2'b01 : begin
                    div = ~(p[WORD_BITS - 1 : 0] - 1);
                    mod = p[2 * WORD_BITS - 1 : WORD_BITS];
                end
                2'b10 : begin
                    div = ~(p[WORD_BITS - 1 : 0] - 1);
                    mod = ~(p[2 * WORD_BITS - 1 : WORD_BITS] - 1);
                end
                2'b11 : begin
                    div = p[WORD_BITS - 1 : 0];
                    mod = ~(p[2 * WORD_BITS - 1 : WORD_BITS] - 1);
                end
                default : begin
                    div = '0;
                    mod = '0;
                end
            endcase
        end
    end

    // 时序控制状态机
    always_ff @(posedge clk) begin
        if (~resetn) begin
            {state, count} <= '0;
        end else begin
            {state, count} <= {state_nxt, count_nxt};
        end
    end

    // 时序控制数据计算
    always_ff @(posedge clk) begin
        if (~resetn) begin
            p <= '0;
        end else begin
            p <= p_nxt;
        end
    end

    // 驱动输出信号
    assign done = (state_nxt == INIT);
    // 前64位为余数，后64位为商
    assign c = op == DIVOP ? div : mod;

endmodule

`endif