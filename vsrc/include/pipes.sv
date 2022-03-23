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
typedef enum logic [4:0] {
	ALU_ADD, ALU_SUB, 
	ALU_OR, ALU_AND, ALU_XOR
} alufunc_t;

typedef enum logic [5 : 0] { 
	UNKNOWN, 
	ADDI, ORI, ANDI, XORI, 
	LUI, AUIPC,
	ADD, SUB, OR, AND, XOR,
	LD, SD,
	JAL, JALR, 
	BEQ
} decode_op_t;

typedef struct packed {
	alufunc_t func;
	decode_op_t op;
	u1 regwrite;
	u1 memwrite;
	u1 jump;
} control_t;

typedef struct packed {
	u32 instruction;
	u64 pc;
} fetch_data_t;

typedef struct packed {
	word_t srca, srcb;
	word_t sextimm;
	creg_addr_t dst;
	control_t ctl;
	u64 pc;
} decode_data_t;

typedef struct packed {
	word_t result;		//访存地址 或 写回的数据
	//访存信号
	word_t wdata;		//写入内存的数据
	u1 memwrite;		//内存写使能
	//写回信号
	creg_addr_t dst;	//写回regfile编号
	u1 regwrite;		//regfile写使能
} excute_data_t;

typedef struct packed {
	creg_addr_t dst;	//写回regfile编号
	u1 regwrite;		//regfile写使能
	word_t wdata;		//写回的数据
} memory_data_t;

endpackage

`endif
