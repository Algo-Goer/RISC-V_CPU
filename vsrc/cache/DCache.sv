`ifndef __DCACHE_SV
`define __DCACHE_SV

`ifdef VERILATOR
`include "include/common.sv"
/* You should not add any additional includes in this file */
`endif

module DCache 
	import common::*; #(
		/* You can modify this part to support more parameters */
		/* e.g. OFFSET_BITS, INDEX_BITS, TAG_BITS */
		parameter X = 1
	)(
	input logic clk, reset,

	input  dbus_req_t  dreq,
    output dbus_resp_t dresp,
    output cbus_req_t  creq,
    input  cbus_resp_t cresp
);

`ifndef REFERENCE_CACHE

	/* TODO: Lab3 Cache */
    /* 定义一些取位函数与类型 */
    localparam LINE_SUM = 16;
    localparam WORDS_PER_LINE = 16;                             // 块大小
    localparam ASSOCIATIVITY = 4;                               // 关联度
    localparam SET_NUM = 16 / ASSOCIATIVITY;                    // set个数
    localparam ASSOCIATIVITY_BITS = $clog2(ASSOCIATIVITY);      // 关联度位数
    localparam OFFSET_BITS = $clog2(WORDS_PER_LINE);            // offset块内偏移的位数
    localparam INDEX_BITS = $clog2(SET_NUM);                    // index组号的位数
    localparam TAG_BITS = 64 - INDEX_BITS - OFFSET_BITS - 3;    // tag块标志的位数
    localparam TAG_START = 3 + OFFSET_BITS + INDEX_BITS;        // tag开始下标
    localparam TAG_END = 63;                                    // tag结束下标
    localparam ADDR_BITS = $clog2(LINE_SUM * WORDS_PER_LINE);   // ram的地址位数
    localparam COUNTER_BITS = $clog2(SET_NUM * ASSOCIATIVITY);  // meta的个数对应地址位数
    localparam type offset_t = logic [OFFSET_BITS-1:0];    
    localparam type index_t = logic [INDEX_BITS-1:0];
    localparam type tag_t = logic [TAG_BITS-1:0];
    localparam type addr_t = logic [ADDR_BITS - 1: 0];          // 访问数据时的地址

    /* 定义用到的信号 */
    // reset的计时器
    logic [COUNTER_BITS - 1 : 0] counter;
    // 定义cache的状态
    localparam type state_t = enum logic[2:0] {
        IDLE, COMPARE, ALLOCATE, WRITEBACK, UNCACHED
    };

    // state寄存器保存状态
    state_t state, state_nxt;

    // 定义cache元数据类型
    typedef struct packed {
        logic valid;
        logic dirty;
        tag_t tag;
    } meta_t;
    typedef meta_t[ASSOCIATIVITY - 1 : 0] meta_sets;        // 一个set内的所有meta
    typedef addr_t[ASSOCIATIVITY - 1 : 0] addr_sets;        // 一个set内的所有data address
    // 一个set中cache line的组内编号
    // （四路组相联为00, 01, 10, 11）
    typedef logic [ASSOCIATIVITY_BITS - 1 : 0] line_index;  
    typedef logic [ASSOCIATIVITY_BITS : 0] for_index;
    for_index max_line_index = {1'b0, {ASSOCIATIVITY_BITS{1'b1}}};
    typedef line_index [ASSOCIATIVITY - 1 : 0] used_t;      // 一个set中的数据块访问情况，ASSO

    // 定义管理每个cache set的信号
    typedef struct packed {
        // meta的信号
        meta_sets metas;
        // data_address的信号
        addr_sets addrs;
        // 驱动LRU的信号
        used_t used_line;
    } cache_sets;
    cache_sets sets[SET_NUM];
    meta_t meta_to_line;                // 写入的meta
    logic meta_en;
    line_index windex;                  // hit的块的组内编号

    used_t used_line_data;

    // 操作的块，cache set的内部下标
    line_index position;
    line_index position_pre;
    meta_sets meta_from_set;     // 指定的cache set的meta信号
    line_index max;

    // 解析cpu请求地址参数
    tag_t tag;
    index_t index;
    offset_t offset;

    // 命中信号
    u1 hit;

    // 定义访问ram的接口信号
    struct packed {
        logic    en;            // 访问使能
        addr_t   addr;          // 访问地址（字的地址）
        strobe_t strobe;        // 写入的位数（一个）
        word_t   wdata;         // 写入的数据（一个字）
    } ram;
    offset_t ram_offset;
    word_t   rdata;             // 读出的数据
    word_t   uncached_data;     // UNCACHED状态下不经过cache直接由cresp得到的数据

    /* 驱动不同信号 */
    // 解析地址
    assign tag = dreq.addr[TAG_END : TAG_START];
    assign index = dreq.addr[2 + OFFSET_BITS + INDEX_BITS : 3 + OFFSET_BITS];
    assign offset = dreq.addr[2 + OFFSET_BITS : 3];

    // 获取指定的元数据
    assign meta_from_set = sets[index].metas;

    // 驱动dresp信号
    assign dresp.addr_ok = dreq.valid;
    assign dresp.data_ok = (hit && state == COMPARE) | (cresp.last && state == UNCACHED);
    assign dresp.data = state == UNCACHED ? uncached_data : rdata;

    // 驱动creq信号
    assign creq.valid = state == ALLOCATE || state == WRITEBACK || state == UNCACHED;
    assign creq.is_write = state == WRITEBACK || (state == UNCACHED & |dreq.strobe);
    assign creq.size = state == UNCACHED ? dreq.size : MSIZE8;
    assign creq.addr = state == UNCACHED ? dreq.addr : 
                {meta_from_set[position].tag, index, {OFFSET_BITS{'0}}, 3'b0};
    assign creq.strobe = state == UNCACHED ? dreq.strobe : (state == WRITEBACK ? '1 : '0);
    assign creq.data = state == UNCACHED ? dreq.data : rdata;
    assign creq.len = state == UNCACHED ? MLEN1 : MLEN16;
    assign creq.burst = state == UNCACHED ? AXI_BURST_FIXED : AXI_BURST_INCR;

    // 遍历并驱动sets，块首地址是不改变的
    for(genvar i = 0; i < SET_NUM; i++) begin : cache_sets_info
        // 驱动sets[i].addrs
        for(genvar j = 0; j < ASSOCIATIVITY; j++) begin
            assign sets[i].addrs[j] = i * ASSOCIATIVITY * WORDS_PER_LINE + j * WORDS_PER_LINE;
            // 驱动used_line
            always_ff@(posedge clk) begin
                if(sets[i].metas[j].valid == 0) begin
                    sets[i].used_line[j] <= '1;
                end
                else if(state == IDLE || state_nxt != COMPARE) begin
                    sets[i].used_line[j] <= sets[i].used_line[j];
                end
                else if(j == position) begin
                    sets[i].used_line[j] <= '0;
                end
                else if(sets[i].used_line[j] >= sets[index].used_line[position]) begin
                    sets[i].used_line[j] <= sets[i].used_line[j];
                end
                else if(sets[i].used_line[j] < sets[index].used_line[position])begin
                    sets[i].used_line[j] <= sets[i].used_line[j] + 1;
                end
                else begin
                    sets[i].used_line[j] <= '1;
                end
            end
        end
    end : cache_sets_info

    // 驱动used_line_data
    for(genvar i = 0; i < ASSOCIATIVITY; i++) begin
        assign used_line_data[i] = sets[index].used_line[i];
    end

    // 驱动max，查找index组内的最大值对应下标
    always_comb begin
        // 判断最大值
        if(used_line_data[0] >= used_line_data[1] && 
            used_line_data[0] >= used_line_data[2] && 
            used_line_data[0] >= used_line_data[3])begin
            max = 0;
        end 
        else if(used_line_data[1] >= used_line_data[0] && 
            used_line_data[1] >= used_line_data[2] && 
            used_line_data[1] >= used_line_data[3]) begin
            max = 1;
        end
        else if(used_line_data[2] >= used_line_data[0] && 
            used_line_data[2] >= used_line_data[1] && 
            used_line_data[2] >= used_line_data[3]) begin
            max = 2;
        end
        else if(used_line_data[3] >= used_line_data[0] && 
            used_line_data[3] >= used_line_data[1] && 
            used_line_data[3] >= used_line_data[2]) begin
            max = 3;
        end
        else begin
            max = 0;
        end
    end

    // 驱动ram的访存信号
    always_comb begin
        unique case (state)
            COMPARE: begin
                ram.en = 1;
                ram.strobe = hit ? dreq.strobe : '0;
                ram.wdata  = dreq.data;
                ram.addr = sets[index].addrs[position] + {4'b0, offset};
            end
            ALLOCATE: begin
                ram.en = 1;
                ram.strobe = 8'b11111111;
                ram.wdata  = cresp.data;
                ram.addr = sets[index].addrs[position] + {4'b0, ram_offset};
            end
            WRITEBACK : begin
                ram.en = 1;
                ram.strobe = '0;
                ram.addr = sets[index].addrs[position] + {4'b0, ram_offset};
            end
            default: begin 
                ram = '0;
            end
        endcase
    end

    // 判断是否命中，并得到命中的组内编号或要替换的组内编号
    always_comb begin
        position = 2'b00;
        hit = 0;
        if(meta_from_set[0].valid && meta_from_set[0].tag == tag) begin
            hit = 1;
            position = 2'b00;
        end 
        else if(meta_from_set[1].valid && meta_from_set[1].tag == tag) begin
            hit = 1;
            position = 2'b01;
        end
        else if(meta_from_set[2].valid && meta_from_set[2].tag == tag) begin
            hit = 1;
            position = 2'b10;
        end
        else if(meta_from_set[3].valid && meta_from_set[3].tag == tag) begin
            hit = 1;
            position = 2'b11;
        end
        else begin
            /**
             * TODO : 设计替换LRU算法
             * 当组内空间未满时，position直接指向valid的空的块，若都有数据则进行替换
             * 设置LRU算法，得到position缺失状态下的position
             * 写回时position为要写回的块的组内编号，（读取数据的块位置）
             * 分配时position为要分配的块的组内编号（存放数据的块位置）
             */
            position = max;
        end
    end

    // 驱动ram_offset，每个时钟上升沿，如果state == ALLOCATE || WRITEBACK，且ready == 1，则+1；
    always_ff@(posedge clk) begin
        unique case(state)
            ALLOCATE, WRITEBACK: begin
                if(cresp.last) begin
                    ram_offset <= '0;
                end
                else if(cresp.ready) begin
                    ram_offset <= ram_offset + 1;
                end
                else begin
                    ram_offset <= ram_offset;
                end
            end
            default : begin
                ram_offset <= '0;
            end
        endcase
    end

    // FSM
    /**
     * TODO : 添加Uncached状态
     * IDLE校验dreq.addr[31]，判断是否经过cache
     */
    always_comb begin
        state_nxt = IDLE;
        meta_to_line = '0;
        meta_en = 0;
        uncached_data = '0;
        unique case(state)
            // IDLE状态下，接收cpu请求dreq，转变为COMPARE状态
            IDLE : begin
                if(dreq.valid) begin
                    if(dreq.addr[31] == 0) begin
                        state_nxt = UNCACHED;
                    end
                    else begin
                        state_nxt = COMPARE;
                    end
                end
                else begin
                    state_nxt = IDLE;
                end
            end
            // COMPARE状态
            COMPARE : begin
                // 若命中，信号已经驱动完毕，无需设置其他信号，只需要设置状态
                if(hit) begin
                    // 写请求则改为脏数据
                    if(|dreq.strobe) begin
                        meta_to_line.valid = 1;
                        meta_to_line.dirty = 1;
                        meta_to_line.tag = tag;
                        meta_en = 1;
                    end // 读请求不需要更改
                    state_nxt = IDLE;
                end
                // 考虑miss的情况：
                else begin
                    /**
                     * miss时，肯定会发起主存请求，
                     * 读请求需要一个一个写入ram，写请求需要一个一个读出ram
                     * 一个一个读写由ram_offset控制，从0开始
                     * 设置好ram.addr从块首地址开始，
                     * 读出cache（ram.wdata，写入memory）
                     * 或写入cache（rdata，从memory读）
                     */
                    // 如果是脏数据，则下一周期为WRITEBACK，自动发起写请求
                    if(meta_from_set[position].valid && meta_from_set[position].dirty) begin
                        state_nxt = WRITEBACK;
                    end
                    else begin
                        // 写之前需要设置新的tag，下个周期写入
                        meta_to_line.valid = 1;
                        meta_to_line.dirty = 0;
                        meta_to_line.tag = tag;
                        meta_en = 1;
                        state_nxt = ALLOCATE;
                    end
                end
            end
            // ALLOCATE状态
            ALLOCATE : begin
                // 如果整个事务握手，设置信号存储最后一个数据，下个周期为COMPARE
                if(cresp.last) begin
                    state_nxt = COMPARE;
                end
                // 如果单个数据握手，则设置信号存储这个数据，下个周期为ALLOCATE
                else if(cresp.ready) begin
                    state_nxt = ALLOCATE;
                end
                // 寻址时保持请求数据
                else begin
                    state_nxt = ALLOCATE;
                end
            end
            // WRITEBACK状态
            WRITEBACK : begin
                // 如果整个事务握手，事务完毕，重置ram_offset，下个周期为ALLOCATE
                if(cresp.last) begin
                    // 写之前需要设置新的tag
                    meta_to_line.valid = 1;
                    meta_to_line.dirty = 0;
                    meta_to_line.tag = tag;
                    meta_en = 1;
                    state_nxt = ALLOCATE;
                end
                // 如果单个数据握手，调整ram_offset更新ram访存地址，读取到下一个数据写入memory
                else if(cresp.ready) begin
                    state_nxt = WRITEBACK;
                end
                // 寻址时保持请求数据
                else begin
                    state_nxt = WRITEBACK;
                end
            end
            UNCACHED : begin
                if(cresp.ready) begin
                    uncached_data = cresp.data;
                    state_nxt = IDLE;
                end 
                else begin
                    state_nxt = UNCACHED;
                end
            end
            default: begin
            end
        endcase
    end

    // 时序控制
    always_ff@(posedge clk) begin
        if(reset) begin
            state <= IDLE;
        end
        else begin
            state <= state_nxt;
        end
    end

    // 控制counter时序
    always_ff@(posedge clk) begin
        if(reset) begin
            counter <= counter + 1;
        end
        else begin
            counter <= 0;
        end
    end

    // 控制meta的写入
    always_ff@(posedge clk) begin
        if(reset) begin
            // TODO : 实现reset时对缓存清零
            // 清除meta
            sets[counter[COUNTER_BITS - 1 : ASSOCIATIVITY_BITS]].metas[counter[ASSOCIATIVITY_BITS - 1 : 0]] <= '0;
        end
        if(~reset && meta_en) begin
            sets[index].metas[position] <= meta_to_line;
        end
    end

    // 例化cache内的数据ram
    RAM_SinglePort #(
		.ADDR_WIDTH(ADDR_BITS),
		.DATA_WIDTH(64),
		.BYTE_WIDTH(8),
		.READ_LATENCY(0)
	) ram_inst (
        .clk(clk), .en(ram.en),
        .addr(ram.addr),
        .strobe(ram.strobe),
        .wdata(ram.wdata),
        .rdata(rdata)
    );

`else

	typedef enum u2 {
		IDLE,
		FETCH,
		READY,
		FLUSH
	} state_t /* verilator public */;

	// typedefs
    typedef union packed {
        word_t data;
        u8 [7:0] lanes;
    } view_t;

    typedef u4 offset_t;

    // registers
    state_t    state /* verilator public_flat_rd */;
    dbus_req_t req;  // dreq is saved once addr_ok is asserted.
    offset_t   offset;

    // wires
    offset_t start;
    // dreq.addr[6 : 3]，4bit信号，为一个字在块内的偏移offset
    assign start = dreq.addr[6:3];

    // the RAM
    // 缓存和存储cache line数据域的ram通信信号
    struct packed {
        logic    en;
        strobe_t strobe;
        word_t   wdata;
    } ram;
    word_t ram_rdata;

    // 根据状态设置不同行为
    always_comb
    unique case (state)
    FETCH: begin
        ram.en     = 1;
        ram.strobe = 8'b11111111;
        ram.wdata  = cresp.data;
    end

    READY: begin
        ram.en     = 1;
        ram.strobe = req.strobe;
        ram.wdata  = req.data;
    end

    default: ram = '0;
    endcase

    RAM_SinglePort #(
		.ADDR_WIDTH(4),
		.DATA_WIDTH(64),
		.BYTE_WIDTH(8),
		.READ_LATENCY(0)
	) ram_inst (
        .clk(clk), .en(ram.en),
        .addr(offset),
        .strobe(ram.strobe),
        .wdata(ram.wdata),
        .rdata(ram_rdata)
    );

    // DBus driver
    assign dresp.addr_ok = state == IDLE;
    assign dresp.data_ok = state == READY;
    assign dresp.data    = ram_rdata;

    // CBus driver
    // 向内存发起的访存请求，以块为单位
    assign creq.valid    = state == FETCH || state == FLUSH;
    assign creq.is_write = state == FLUSH;
    assign creq.size     = MSIZE8;
    assign creq.addr     = req.addr;
    assign creq.strobe   = 8'b11111111;
    assign creq.data     = ram_rdata;
    assign creq.len      = MLEN16;
	assign creq.burst	 = AXI_BURST_INCR;

    // the FSM
    // always_ff驱动state更改
    always_ff @(posedge clk)
    if (~reset) begin
        unique case (state)
        IDLE: if (dreq.valid) begin
        	// 如果dreq的请求有效，则更新为FETCH状态，req保存cpu的请求信息
            state  <= FETCH;
            req    <= dreq;
            offset <= start;
        end

        FETCH: if (cresp.ready) begin
            // 若
            state  <= cresp.last ? READY : FETCH;
            offset <= offset + 1;
        end

        READY: begin
        	/** 
        	 * 如果strobe不全为0，即对内存发起的是写入操作，
        	 * 则下周期为FLUSH状态；反之为IDLE状态
        	 */
            state  <= (|req.strobe) ? FLUSH : IDLE;
        end

        FLUSH: if (cresp.ready) begin
            state  <= cresp.last ? IDLE : FLUSH;
            offset <= offset + 1;
        end

        endcase
    end else begin
        state <= IDLE;
        {req, offset} <= '0;
    end

`endif

endmodule

`endif
