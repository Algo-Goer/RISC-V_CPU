`ifndef __CSR_PKG_SV
`define __CSR_PKG_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif
package csr_pkg;
	import common::*;

	// csrs
	// 这些parms可以理解为：定义了Csr寄存器中每个字段的寻址下标，便于通过地址查找状态寄存器内容
	parameter u12 CSR_MHARTID = 12'hf14;	// mhart字段下标，即Hart编号，lab4恒为0
	parameter u12 CSR_MIE = 12'h304;		// mie字段下标，即对不同中断屏蔽后的结果
	parameter u12 CSR_MIP = 12'h344;		// mip字段下标，即还未处理（pending）状态的中断
	parameter u12 CSR_MTVEC = 12'h305;		// mtvec字段下标，即异常处理入口pc
	parameter u12 CSR_MSTATUS = 12'h300;	// mstatus字段下标，即机器模式全局状态寄存器
	parameter u12 CSR_MSCRATCH = 12'h340;	// mscratch字段下标，即机器模式下的暂存数据（一个字大小）
	parameter u12 CSR_MEPC = 12'h341;		// mepc字段下标，即异常指令返回地址
	parameter u12 CSR_SATP = 12'h180;		// satp字段下标，即监管者模式数据，不需要维护
	parameter u12 CSR_MCAUSE = 12'h342;		// mcause字段下标，即引起的异常原因（或类型）
	parameter u12 CSR_MCYCLE = 12'hb00;		// mcycle字段下标，处理器计数器
	parameter u12 CSR_MTVAL = 12'h343;		// mtval字段下标，保存异常信息（指令编码值/访存地址值）


	typedef struct packed {
		u1 sd;			// 只读域，反映了XS域或FS域处于（dirty）状态（方便快速查阅）。
		logic [MXLEN-2-36:0] wpri1;
		u2 sxl;
		u2 uxl;
		u9 wpri2;
		u1 tsr;
		u1 tw;
		u1 tvm;
		u1 mxr;
		u1 sum;
		u1 mprv;
		u2 xs;			// 用于维护或反映用户自定义的扩展指令单元状态，这个域主要由软件控制。
		u2 fs;			// 用于维护或反映浮点单元的状态，默认值为0，意味着浮点单元的状态为off，即不可用
		u2 mpp;			// 异常发生后，保存进入异常前的mode旧权限模式，
						//作用是在异常结束后，能够使用mode的值恢复出异常发生之前的工作模式。
		u2 wpri3;
		u1 spp;
		u1 mpie;		// 异常发生后，保存进入异常前的mie旧使能
						//作用是在异常结束后，能够使用mie的值恢复出异常发生之前的使能
		u1 wpri4;
		u1 spie;
		u1 upie;
		u1 mie;			// 全局中断使能，置0表示禁用中断，进入异常服务程序后置为0，表示中断被屏蔽
		u1 wpri5;
		u1 sie;
		u1 uie;
	} mstatus_t;

	typedef struct packed {
		u4 mode;
		u16 asid;
		u44 ppn;
	} satp_t;
	
	

	typedef struct packed {
		// 以下为u64类型数据：
		u64
		mhartid, 	// 只读寄存器，反映当前Hart的编号，当前恒为0
		mie,	 	// 每个中断的处理使能，包含在某一位，用于控制不同中断类型的局部屏蔽（即仲裁）
		mip,	 	// 当前待处理的所有中断，编码与mie一致，用于查询中断的等待状态
		mtvec;	 	// 机器模式异常入口基地址寄存器，进入异常后跳入的pc地址由mtvec指定
		// status_t
		mstatus_t mstatus; 	// 机器模式（machine mode）下的全局状态寄存器，包含很多功能域
		// 以下为u64类型数据：
		u64
		mscratch, 	// 用于机器模式下的程序临时保存某些数据
		mepc,	 	// 异常指令pc
					// 出现中断时：中断返回地址mepc被指向下一条尚未执行的指令，因为中断时的指令能够被正确执行。
					// 出现异常时：mepc则指向当前指令，因为当前指令触发了异常。
		satp,	 	// Supervisor address translation and protection, read-only as 0 in this work
		mcause,  	// 机器模式异常原因寄存器，用于保存进入异常之前的出错原因
		mcycle,  	// 一个64bit 的时钟周期计数
		mtval;		// 机器模式异常值寄存器，用于保存进入异常之前出错指令的编码值或存储器访问的地址值
	} csr_regs_t;
	
endpackage

`endif
