
`ifndef __DCACHE_SV

`define __DCACHE_SV


`ifdef VERILATOR
`include "include/common.sv"
`include "ram/RAM_SinglePort.sv"
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

localparam WORDS_PER_LINE = 16;
localparam ASSOCIATIVITY = 2;
localparam SET_NUM = 8;

localparam OFFSET_BITS = $clog2(WORDS_PER_LINE);   //4
localparam INDEX_BITS = $clog2(SET_NUM);           //3
localparam TAG_BITS = 32 - INDEX_BITS - OFFSET_BITS - 3+8; /* Maybe 32, orsmaller */    //22+8=30
localparam META_SIZE=32;
localparam META_SET_SIZE=META_SIZE*ASSOCIATIVITY;
localparam WORD_SIZE=64;

localparam type offset_t = logic [OFFSET_BITS-1:0];
localparam type index_t = logic [INDEX_BITS-1:0];
localparam type tag_t = logic [TAG_BITS-1:0];

function offset_t get_offset(addr_t addr);
        return addr[3+OFFSET_BITS-1:3];
endfunction

function index_t get_index(addr_t addr);
        return addr[3+INDEX_BITS+OFFSET_BITS-1:OFFSET_BITS+3];
endfunction

function tag_t get_tag(addr_t addr);
        return addr[3+INDEX_BITS+OFFSET_BITS+TAG_BITS-1:3+INDEX_BITS+OFFSET_BITS];
endfunction

//IDLE init 
//READY read or write data from ram

localparam type state_t = enum logic[2:0] {
      
      IDLE,
      FETCH,
      READY, 
      FLUSH,
      UNCACHED
};

typedef struct packed {
     u1 valid;
     u1 dirty;    //not use
     tag_t tag;
} meta_t;

struct packed {
        logic    en;             //1
        u8 strobe;              //8
        index_t addr;          //3
        word_t   wdata;        //64
      
} ram_meta;

struct packed {
        logic    en;                //1
        u16 strobe;          //16
       // u7 addr;                //  [6:4]=index   [3:0]=offset
        u128    wdata;           //128
        u128    rdata;             //128
} ram_data;

typedef logic[7:0][1:0][2:0] LRU;

u3 counter;

u64 ram_meta_rdata;
u7 ram_data_addr,ram_data_addr_exp;

state_t state;
LRU lru;    
//use latch store 

u1 hit ,dirty,choose,choose_2,uncache,isread,iswrite;   
meta_t meta_0,meta_1,meta_0_old,meta_1_old;
//

logic [SET_NUM-1:0][ASSOCIATIVITY-1:0] DIRTY;

//the value will keep
offset_t offset;
index_t index;
tag_t tag;


//

word_t rdata;

// //debug
// u64 debug;


assign offset=get_offset(dreq.addr);
assign index=get_index(dreq.addr);
assign tag=get_tag(dreq.addr);

assign uncache=dreq.valid&dreq.addr[31]==0;
assign isread=dreq.valid&(~(|dreq.strobe));
assign iswrite=dreq.valid&(|dreq.strobe);

always_comb begin
    
    unique case(state) 
    IDLE:begin
      if(reset)begin
    ram_meta.en=1;
    ram_meta.strobe='1;
    ram_meta.addr=counter;
    ram_meta.wdata='0;
    
   

    ram_data.en=1;
    ram_data.strobe='1;
    ram_data.wdata='0;
  
      end else begin

     ram_meta.en=0;
    ram_meta.strobe='0;
    ram_meta.addr=index;
    ram_meta.wdata='0;


    if(iswrite&hit&(~uncache)) begin
    ram_data.en=1;
    if(choose)begin
   
    ram_data.strobe={dreq.strobe,8'b0};
    ram_data.wdata={dreq.data,64'b0};
    end else begin
    
    ram_data.strobe={8'b0,dreq.strobe};
    ram_data.wdata={64'b0,dreq.data};
    end

    end else begin
    ram_data.en=0;
    ram_data.strobe='0;
    ram_data.wdata='0;
    end
   
    
    
      end
    end


    FETCH:begin
   
    ram_meta.en=0;
    ram_meta.strobe='0;
    ram_meta.addr=index;
    ram_meta.wdata='0;

   

    ram_data.en=1;
    if(choose_2)begin
    ram_data.strobe={8'b11111111,8'b0};
    ram_data.wdata={cresp.data,64'b0};
    end else begin
    ram_data.strobe={8'b0,8'b11111111};
    ram_data.wdata={64'b0,cresp.data};
    end
     
    end
    FLUSH:begin
    ram_meta.en=0;
    ram_meta.strobe='0;
    ram_meta.addr=index;
    ram_meta.wdata='0;

    ram_data.en=0;
    ram_data.strobe='0;
    ram_data.wdata='0;
    
    end

    READY:begin

     //change tag and dirty
    ram_meta.en=1;
    ram_meta.addr=index;
    if(choose_2)begin
   
    ram_meta.strobe={4'b1111,4'b0};
    ram_meta.wdata={1'b1, 1'b0,tag,32'b0};              //dirty bit need to   (|dreq.strobe)|old_data_dirty
    end else begin
   
    ram_meta.strobe={4'b0,4'b1111};
    ram_meta.wdata={32'b0,1'b1, 1'b0,tag};
    end

    ram_data.en=|dreq.strobe;
    if(choose_2)begin
    ram_data.strobe={dreq.strobe,8'b0};
    ram_data.wdata={dreq.data,64'b0};
    end else begin
    ram_data.strobe={8'b0,dreq.strobe};
    ram_data.wdata={64'b0,dreq.data};
    end

    
    end
  
    
    default:begin
    
    ram_meta.en=0;
    ram_meta.strobe='0;
    ram_meta.addr=index;
    ram_meta.wdata='0;

    ram_data.en=0;
    ram_data.strobe='0;
    ram_data.wdata='0;
    end
    endcase

end

always_comb begin
    if(state==IDLE&&dreq.valid)begin
        ram_data_addr_exp={index,offset};
    end else begin
         ram_data_addr_exp=ram_data_addr;
    end

end

//read and write two metas in same set
 RAM_SinglePort #(
		.ADDR_WIDTH(INDEX_BITS),  //3
		.DATA_WIDTH(META_SET_SIZE),   //64
		.BYTE_WIDTH(8),     //64
		.READ_LATENCY(0)
 ) ram_for_meta (
        .clk(clk), 
        .en(ram_meta.en),
        .addr(ram_meta.addr),         //3
        .strobe(ram_meta.strobe),   //  
        .wdata(ram_meta.wdata),      //64
        .rdata(ram_meta_rdata)       //64
    );

//read and write two words in same set
 RAM_SinglePort #(
		.ADDR_WIDTH(OFFSET_BITS+INDEX_BITS),         //7
		.DATA_WIDTH(WORD_SIZE*ASSOCIATIVITY),     //128
		.BYTE_WIDTH(8),     //8
		.READ_LATENCY(0)
 ) ram_for_data (
        .clk(clk), 
        .en(ram_data.en),
        .addr(ram_data_addr_exp),          //7
        .strobe(ram_data.strobe),        //16
        .wdata(ram_data.wdata),         //128
        .rdata(ram_data.rdata)         //128
    );


always_comb begin
    if(state==IDLE&&dreq.valid&&(~uncache))begin
    meta_0=ram_meta_rdata[31:0];
    meta_1=ram_meta_rdata[63:32];
     //hit
    if(meta_0.tag==tag && meta_0.valid)begin
        hit=1;
        dirty=DIRTY[index][0];
        choose=0;
       
    end
    else if (meta_1.tag==tag &&meta_1.valid )begin
        hit=1;
        dirty=DIRTY[index][1];
        choose=1;
       
    end 

     //miss
    else begin
        hit=0;
        //choose invalid 
        if(~meta_0.valid)begin
            dirty=0;
            choose=0;
         
        end else if(~meta_1.valid) begin
            dirty=0;
            choose=1;
          
        end 
        //choos LRU
        else if(lru[index][0]<lru[index][1]) begin
            dirty=DIRTY[index][1];
            choose=1;
         
        end  else begin
            dirty=DIRTY[index][0];
            choose=0;
           
        end
        

    end
    
    end else begin
        hit=0;
        dirty=0;
        meta_0='0;
        meta_1='0;
        choose=0;
     
    end

end


always_comb begin
    if(state==IDLE)  begin
     if(choose)begin
       rdata=ram_data.rdata[127:64];
    end else begin
       rdata=ram_data.rdata[63:0];
    end
    end else 
    begin
     if(choose_2)begin
       rdata=ram_data.rdata[127:64];
    end else begin
       rdata=ram_data.rdata[63:0];
    end
    end
end
 // DBus driver

assign dresp.addr_ok = state == IDLE;     //ok
assign dresp.data_ok =uncache? (state==UNCACHED&&cresp.ready):state == READY||(state==IDLE&(isread|iswrite)&hit);    
assign dresp.data    = state==UNCACHED?cresp.data:rdata;           


// CBus driver               
always_comb begin
    if(state==UNCACHED)begin
         creq.valid=1;
         creq.is_write=|dreq.strobe;
          creq.size=dreq.size;
          creq.addr=dreq.addr;
          creq.strobe=dreq.strobe;
          creq.data=dreq.data;
          creq.len=MLEN1;
          creq.burst=AXI_BURST_FIXED;
    end else begin
 creq.valid    = state == FETCH || state == FLUSH; 
 creq.is_write = state == FLUSH;                   
 creq.size     = MSIZE8;
 creq.addr     =state == FLUSH?(choose_2? {24'b0,meta_1_old.tag,index,7'b0}:{24'b0,meta_0_old.tag,index,7'b0}):{dreq.addr[63:7],7'b0};
 creq.strobe   = 8'b11111111;
 creq.data     = rdata;
 creq.len      = MLEN16;
 creq.burst	 = AXI_BURST_INCR;
end
end


always_ff @(posedge clk) begin
   
      if (~reset) begin
        unique case (state)
       
        IDLE:if(dreq.valid)begin
            if(uncache)begin
                state<=UNCACHED;
              
            end else begin
            lru[index][choose]<=0;
            lru[index][1-choose]<=(&lru[index][1-choose])?lru[index][1-choose]:lru[index][1-choose]+1;
            if(hit) begin
                if(isread|iswrite) begin
                    state<=IDLE;
                    DIRTY[index][choose]<=DIRTY[index][choose]|(|dreq.strobe);
                end else begin
                state<=READY;
                ram_data_addr<={index,offset};
                end
            end else if(dirty)begin
                 //  debug<=debug+1;
                state  <= FLUSH;
                ram_data_addr<={index,4'b0};
               
            end else begin
                 
                state  <= FETCH;
                ram_data_addr<={index,4'b0};
              
            end
            meta_0_old<=meta_0;
            meta_1_old<=meta_1;
            choose_2<=choose;
            end
        end 

        FETCH: if (cresp.ready) begin
            state  <= cresp.last ? READY : FETCH;
            ram_data_addr <= cresp.last ?{index,offset}:ram_data_addr + 1;
            DIRTY[index][choose_2]<=cresp.last ? DIRTY[index][choose_2]:(|dreq.strobe);
        end

        READY: begin
           
            state  <=IDLE;
        end

        FLUSH: if (cresp.ready) begin
            state  <= cresp.last ?FETCH: FLUSH;
            ram_data_addr <= cresp.last ?{index,4'b0}:ram_data_addr + 1;
        end
        UNCACHED:if (cresp.ready) begin
            state  <= IDLE;
            
        end
        default:begin
        end
        endcase
    end else begin
        state <= IDLE;
        
        DIRTY<='0;
        ram_data_addr<='0;
        counter<=counter+1;
      //  debug<='0;
    end
    
end














































//****************************************************


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
    assign start = dreq.addr[6:3];

    // the RAM
    struct packed {
        logic    en;
        strobe_t strobe;
        word_t   wdata;
    } ram;
    word_t ram_rdata;

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
    assign creq.valid    = state == FETCH || state == FLUSH;
    assign creq.is_write = state == FLUSH;
    assign creq.size     = MSIZE8;
    assign creq.addr     = req.addr;
    assign creq.strobe   = 8'b11111111;
    assign creq.data     = ram_rdata;
    assign creq.len      = MLEN16;
	assign creq.burst	 = AXI_BURST_INCR;

    // the FSM
    always_ff @(posedge clk)
   
    if (~reset) begin
        unique case (state)
        IDLE: if (dreq.valid) begin
            req<=dreq;
            state  <= FETCH;
            offset <= start;
        end

        FETCH: if (cresp.ready) begin
            state  <= cresp.last ? READY : FETCH;
            offset <= offset + 1;
        end

        READY: begin
            state  <= (|req.strobe) ? FLUSH : IDLE;
        end

        FLUSH: if (cresp.ready) begin
            state  <= cresp.last ? IDLE : FLUSH;
            offset <= offset + 1;
        end

        endcase
    end else begin
        state <= IDLE;
        offset<= '0;
       
    end
	
`endif

endmodule

`endif


