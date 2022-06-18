`ifndef __PIPES_SV
`define __PIPES_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif
package pipes;
	import common::*;
/* Define instrucion decoding rules here */

// parameter F7_RI = 7'bxxxxxxx;
parameter F7_I_TYPE = 7'b0010011;
parameter F7_IW_TYPE = 7'b0011011;
parameter F7_R_TYPE = 7'b0110011;
parameter F7_RW_TYPE = 7'b0111011;
parameter F7_LUI = 7'b0110111;
parameter F7_AUIPC = 7'b0010111;
parameter F7_L_TYPE = 7'b0000011;
parameter F7_S_TYPE = 7'b0100011;
parameter F7_JAL = 7'b1101111;
parameter F7_JALR = 7'b1100111;
parameter F7_B_TYPE = 7'b1100011;
parameter F7_CSR = 7'b1110011;

parameter F7_ADD = 7'b0000000;
parameter F7_SUB = 7'b0100000;
parameter F7_MUL_DIV = 7'b0000001;
parameter F7_SRL = 7'b0000000;
parameter F6_SRL = 6'b000000;
parameter F7_SRA = 7'b0100000;
parameter F6_SRA = 6'b010000;
parameter F3_ADD_SUB_MUL = 3'b000;
parameter F3_AND_MODU = 3'b111;
parameter F3_OR_MOD = 3'b110;
parameter F3_XOR_DIV = 3'b100;
parameter F3_SLL = 3'b001;
parameter F3_SLT = 3'b010;
parameter F3_SLTU = 3'b011;
parameter F3_SRL_SRA_DIVU = 3'b101;
parameter F3_BEQ = 3'b000;
parameter F3_BNE = 3'b001;
parameter F3_BLT = 3'b100;
parameter F3_BGE = 3'b101;
parameter F3_BLTU = 3'b110;
parameter F3_BGEU = 3'b111;
parameter F3_B = 3'b000;
parameter F3_H = 3'b001;
parameter F3_W = 3'b010;
parameter F3_D = 3'b011;
parameter F3_BU = 3'b100;
parameter F3_HU = 3'b101;
parameter F3_WU = 3'b110;
parameter F3_CSRRW = 3'b001;
parameter F3_CSRRS = 3'b010;
parameter F3_CSRRC = 3'b011;
parameter F3_CSRRWI = 3'b101;
parameter F3_CSRRSI = 3'b110;
parameter F3_CSRRCI = 3'b111;
parameter F3_MRET_ECALL = 3'b000;
parameter F7_MRET = 7'b0011000;

// 异常码类型
parameter INSTR_ADDR_MISALIGNED = 63'b0;
parameter LOAD_ADDR_MISALIGNED = 63'h4;
parameter STORE_ADDR_MISALIGNED = 63'h6;
parameter INVALID_INSTR = 63'h2;
parameter ECALL_FROM_M = 63'hB;
parameter ECALL_FROM_S = 63'h9;
parameter ECALL_FROM_U = 63'h8;
parameter INTERRUPT_TIMER = 63'h7;
parameter INTERRUPT_SOFTWARE = 63'h3;
parameter INTERRUPT_EXTERNAL = 63'hB;
parameter M_MODE = 2'b11;
parameter S_MODE = 2'b01;
parameter U_MODE = 2'b00;

/* Define pipeline structures here */
// alu进行的操作类型
typedef enum logic [4 : 0] {
	ALU_ADD, ALU_SUB, 
	ALU_OR, ALU_AND, ALU_XOR,
	ALU_EQUAL, ALU_NOT_EQUAL,
    ALU_LESS, ALU_GREATER,
    ALU_LESS_U, ALU_GREATER_U,
    ALU_SHIFTL, ALU_SHIFTR,
    ALU_SHIFTRS,
    ALU_MUL, ALU_DIV, ALU_DIVU,
    ALU_MOD, ALU_MODU
} alufunc_t;

// decode判断出的指令类型
typedef enum logic [6 : 0] { 
	FLUSH, 
	ADDI, ORI, ANDI, XORI, LUI, AUIPC,
    SLTI, SLTIU, SLLI, SRLI, SRAI, 
    ADDIW, SLLIW, SRLIW, SRAIW,
	ADD, SUB, OR, AND, XOR,
    SLL, SLT, SLTU, SRL, SRA,
    ADDW, SUBW, SLLW, SRLW, SRAW,
	LD, LB, LH, LW, LBU, LHU, LWU,
    SD, SB, SH, SW,
	JAL, JALR, 
	BEQ, BNE, BLT, BGE, BLTU, BGEU,
    MUL, MULW, DIV, DIVW, MOD, MODW,
    DIVU, DIVUW, MODU, MODUW,
    CSRRW, CSRRS, CSRRC, 
    CSRRWI, CSRRSI, CSRRCI,
    MRET, ECALL,
    UNKNOWN
} decode_op_t;

// divider的计算类型
typedef enum logic {
    DIVOP, MODOP
} divider_op_t;

// exception信息
typedef struct packed {
    u1 exception;               // 是否触发异常
    logic[62 : 0] code;         // 异常代码
    word_t value;               // 异常具体信息
} exception_data_t;

// decode流水段产生的控制信号，添加对csr寄存器的控制信号
typedef struct packed {
    // 指令信息
    decode_op_t op;
    u1 word;                    // 是否为32位计算
    // fetch控制信号
    u1 jump;					// 无条件跳转
    u1 btype;                   // 条件跳转
    // execute控制信号
    alufunc_t func;				// alu操作
    alufunc_t csr_func;         // 得到csr数据的alu操作
    u1 srca_r; 
    u1 srcb_r;                  // 两个操作数是否可能需要更新
    u1 csr_r;                   // csr操作数是否需要转发
    // memory控制信号
    u1 memread;					// 内存读使能
    u1 memwrite;				// 内存写使能
    msize_t msize;              // 内存访存大小
    u1 mem_unsigned;            // 内存访存方式
    // writeback控制信号
    u1 regwrite;				// regfile写使能
    creg_addr_t dst;			// 写回regfile编号
    u1 csrwrite;                // csr写使能
    u12 csr_dst;                // csr写入字段
} decode_control_t;

// execute阶段传递的控制信号
typedef struct packed {
    // 指令信息
    decode_op_t op;
    // fetch控制信号
    u1 jump;					// 条件跳转
    // memory控制信号
    u1 memread;					// 内存读使能
    u1 memwrite;				// 内存写使能
    msize_t msize;              // 内存访存大小
    u1 mem_unsigned;            // 内存访存方式
    // writeback控制信号
    u1 regwrite;				// regfile写使能
    u1 csrwrite;                // csr写使能
} execute_control_t;

// fetch阶段产生的信号
typedef struct packed {
	u32 instruction;			//指令
	u64 pc;						//pc
    // 异常情况
    exception_data_t ex_data;
} fetch_data_t;

// decode阶段产生的信号
typedef struct packed {
    u64 pc;
    u32 instruction;
	creg_addr_t ra1;
    creg_addr_t ra2;
    word_t srca, srcb;			// 操作数
    word_t csra, csrb;          // csr操作数
    word_t imm;                 //立即数扩展结果
    word_t pcdata;              // 待计算pc的数据，x[instruction[19 : 15]]
    word_t memdata;				// 待写入内存的数据，x[instruction[24 : 20]]
    decode_control_t ctl;		// 控制信号
    // 异常情况
    exception_data_t ex_data;
} decode_data_t;

// execute阶段产生的信号
typedef struct packed {
    u64 pc;
    u32 instruction;
    creg_addr_t dst;			// 写回regfile编号
    u12 csr_dst;                // csr写入字段
    u64 j_addr;                 // 跳转地址
    word_t memdata;				// 待写入内存的数据
    word_t result;				// 计算结果，可能作为访存地址，也可能作为regfile写回数据
    word_t csrdata;             // 写入csr的数据结果
    execute_control_t ctl;		// 控制信号
    // 异常情况
    exception_data_t ex_data;
} execute_data_t;

// memory阶段产生的信号
typedef struct packed {
    u64 pc;
    decode_op_t op;
    u32 instruction;
    u1 jump;
	u1 regwrite;				// regfile写使能
	creg_addr_t dst;			// 写回regfile编号
	word_t regdata;				// 写回的数据
    u1 csrwrite;                // csr写使能
    u12 csr_dst;                // csr写入字段
    word_t csrdata;             // 写入csr的数据结果
    u1 skip;
    word_t address;
    // 异常情况
    exception_data_t ex_data;
} memory_data_t;

// writeback阶段产生的信号
typedef struct packed {
    u64 pc;
    decode_op_t op;
    u32 instruction;
    u1 jump;
    u1 skip;
    word_t address;
	u1 regwrite;				// regfile写使能
	creg_addr_t dst;			// 写回regfile编号
	word_t regdata;				// 写回的数据
    u1 csrwrite;                // csr写使能
    u12 csr_dst;                // csr写入字段
    word_t csrdata;             // 写入csr的数据结果
    // 异常情况
    exception_data_t ex_data;
} writeback_data_t;

// forward寄存器模块输入
typedef struct packed {
    u1 valid;
    creg_addr_t dst;
    word_t data;
} forward_data_out;

// hazard寄存器模块输出
typedef struct packed {
    u1 stall;
    u1 clear;
    u1 srca_mux;
    word_t srca_forward;
    u1 srcb_mux;
    word_t srcb_forward;
    u1 csr_mux;
    word_t csr_forward;
} hazard_data_out;

endpackage

`endif
