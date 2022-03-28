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
parameter F7_R_TYPE = 7'b0110011;
parameter F7_LUI = 7'b0110111;
parameter F7_AUIPC = 7'b0010111;
parameter F7_LD = 7'b0000011;
parameter F7_SD = 7'b0100011;
parameter F7_JAL = 7'b1101111;
parameter F7_JALR = 7'b1100111;
parameter F7_BEQ = 7'b1100011;

parameter F7_ADD = 7'b0000000;
parameter F7_SUB = 7'b0100000;
parameter F3_ADD = 3'b000;
parameter F3_AND = 3'b111;
parameter F3_OR = 3'b110;
parameter F3_XOR = 3'b100;


/* Define pipeline structures here */
// alu进行的操作类型
typedef enum logic [4:0] {
	ALU_ADD, ALU_SUB, 
	ALU_OR, ALU_AND, ALU_XOR,
	ALU_EQUAL
} alufunc_t;

// decode判断出的指令类型
typedef enum logic [5 : 0] { 
	UNKNOWN, 
	ADDI, ORI, ANDI, XORI, 
	LUI, AUIPC,
	ADD, SUB, OR, AND, XOR,
	LD, SD,
	JAL, JALR, 
	BEQ
} decode_op_t;

// decode流水段产生的控制信号
typedef struct packed {
    // fetch控制信号
    u1 jump;					//无条件跳转
    // execute控制信号
    alufunc_t func;				// alu操作
    // memory控制信号
    u1 memread;					// 内存读使能
    u1 memwrite;				// 内存写使能
    // writeback控制信号
    u1 regwrite;				// regfile写使能
    creg_addr_t dst;			// 写回regfile编号
} decode_control_t;

// execute阶段传递的控制信号
typedef struct packed {
    // fetch控制信号
    u1 jump;					// 条件跳转
    // memory控制信号
    u1 memread;					// 内存读使能
    u1 memwrite;				// 内存写使能
    // writeback控制信号
    u1 regwrite;				// regfile写使能
    creg_addr_t dst;			// 写回regfile编号
} execute_control_t;

// fetch阶段产生的信号
typedef struct packed {
	u32 instruction;			//指令
	u64 pc;						//pc
} fetch_data_t;

// decode阶段产生的信号
typedef struct packed {
    u64 j_addr;					//跳转pc的地址（在decode进行选择将多余的地址过滤掉）
	word_t srca, srcb;			// 操作数
    word_t memdata;				// 待写入内存的数据，x[instruction[24 : 20]]
    decode_control_t ctl;		// 控制信号
} decode_data_t;

// execute阶段产生的信号
typedef struct packed {
    u64 j_addr;                 //跳转地址
    word_t memdata;				// 待写入内存的数据
    word_t result;				// 计算结果，可能作为访存地址，也可能作为regfile写回数据
    execute_control_t ctl;		// 控制信号
} execute_data_t;

// memory阶段产生的信号
typedef struct packed {
	u1 regwrite;				// regfile写使能
	creg_addr_t dst;			// 写回regfile编号
	word_t regdata;				// 写回的数据
	// word_t memdata;				// 待写入内存的数据
} memory_data_t;

endpackage

`endif
