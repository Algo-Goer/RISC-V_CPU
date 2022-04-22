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
parameter F7_LD = 7'b0000011;
parameter F7_SD = 7'b0100011;
parameter F7_JAL = 7'b1101111;
parameter F7_JALR = 7'b1100111;
parameter F7_B_TYPE = 7'b1100011;

parameter F7_ADD = 7'b0000000;
parameter F7_SUB = 7'b0100000;
parameter F7_SRL = 7'b0000000;
parameter F7_SRA = 7'b0100000;
parameter F3_ADD_SUB = 3'b000;
parameter F3_AND = 3'b111;
parameter F3_OR = 3'b110;
parameter F3_XOR = 3'b100;
parameter F3_SLL = 3'b001;
parameter F3_SLT = 3'b010;
parameter F3_SLTU = 3'b011;
parameter F3_SRL_SRA = 3'b101;
parameter F3_BEQ = 3'b000;
parameter F3_BNE = 3'b001;
parameter F3_BLT = 3'b100;
parameter F3_BGE = 3'b101;
parameter F3_BLTU = 3'b110;
parameter F3_BGEU = 3'b111;



/* Define pipeline structures here */
// alu进行的操作类型
typedef enum logic [4 : 0] {
	ALU_ADD, ALU_SUB, 
	ALU_OR, ALU_AND, ALU_XOR,
	ALU_EQUAL, ALU_NOT_EQUAL,
    ALU_LESS, ALU_GREATER,
    ALU_LESS_U, ALU_GREATER_U,
    ALU_SHIFTL, ALU_SHIFTR,
    ALU_SHIFTRS
} alufunc_t;

// decode判断出的指令类型
typedef enum logic [5 : 0] { 
	UNKNOWN, 
	ADDI, ORI, ANDI, XORI, LUI, AUIPC,
    SLTI, SLTIU, SLLI, SRLI, SRAI, 
    ADDIW, SLLIW, SRLIW, SRAIW,
	ADD, SUB, OR, AND, XOR,
    SLL, SLT, SLTU, SRL, SRA,
    ADDW, SUBW, SLLW, SRLW, SRAW,
	LD, SD,
	JAL, JALR, 
	BEQ, BNE, BLT, BGE, BLTU, BGEU
} decode_op_t;

// decode流水段产生的控制信号
typedef struct packed {
    // 指令信息
    decode_op_t op;
    u1 word;                    // 是否为32位计算
    // fetch控制信号
    u1 jump;					// 无条件跳转
    u1 btype;                   // 条件跳转
    // execute控制信号
    alufunc_t func;				// alu操作
    u1 srca_r; 
    u1 srcb_r;                  //两个操作数是否可能需要更新
    // memory控制信号
    u1 memread;					// 内存读使能
    u1 memwrite;				// 内存写使能
    // writeback控制信号
    u1 regwrite;				// regfile写使能
    creg_addr_t dst;			// 写回regfile编号
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
    // writeback控制信号
    u1 regwrite;				// regfile写使能
} execute_control_t;

// fetch阶段产生的信号
typedef struct packed {
	u32 instruction;			//指令
	u64 pc;						//pc
} fetch_data_t;

// decode阶段产生的信号
typedef struct packed {
    u64 pc;
    u32 instruction;
	creg_addr_t ra1;
    creg_addr_t ra2;
    word_t srca, srcb;			// 操作数
    word_t imm;                 //立即数扩展结果
    word_t pcdata;              // 待计算pc的数据，x[instruction[19 : 15]]
    word_t memdata;				// 待写入内存的数据，x[instruction[24 : 20]]
    decode_control_t ctl;		// 控制信号
} decode_data_t;

// execute阶段产生的信号
typedef struct packed {
    u64 pc;
    u32 instruction;
    creg_addr_t dst;			// 写回regfile编号
    u64 j_addr;                 //跳转地址
    word_t memdata;				// 待写入内存的数据
    word_t result;				// 计算结果，可能作为访存地址，也可能作为regfile写回数据
    execute_control_t ctl;		// 控制信号
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
    u1 skip;
    word_t address;
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
} hazard_data_out;

endpackage

`endif
