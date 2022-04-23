# RISC-V_CPU
计算机组成体系结构课程项目，本课程项目测试基于助教给出的测试框架，System Verilog源代码在`vsrc`文件夹中。

## 项目结构

RISC-V_CPU  
│── build：仿真测试时才会生成的目录  
│── difftest：仿真测试框架  
│── project-info：每次lab更新信息与实验文档  
│　　├── lab1-info：lab1相关文档  
│　　├── lab2-info：lab2相关文档  
│　　└── ...  
│── ready-to-run：仿真测试文件目录  
│　　├── lab1：包含lab1相关的测试文件，需要关注其中的 .S 汇编文件  
│　　├── lab2：包含lab2相关的测试文件，需要关注其中的 .S 汇编文件  
│　　└── ...  
│── vivado  
│　　└── src：vivado项目源文件  
│　　├── test1  
│　　　　　└── project：vivado项目工程目录  
│　　├── test2  
│　　　　　└── project：vivado项目工程目录  
│　　└── ...  
│── vsrc：需要写的CPU代码所在目录  
│　　├── include：头文件目录  
│　　├── pipeline  
│　　　　　├── fetch：取指流水段目录  
│　　　　　├── decode：译码流水段目录  
│　　　　　├── execute：执行流水段目录  
│　　　　　├── memory：访存流水段目录  
│　　　　　├── writeback：写回流水段目录  
│　　　　　├── regfile：寄存器文件目录  
│　　　　　├── registers：流水段寄存器目录  
│　　　　　├── hazard：流水段冲突处理目录  
│　　　　　└── core.sv：五级流水线主体代码  
│　　├── ram：内存控制相关目录  
│　　├── util：访存接口相关目录  
│　　├── add_sources.tcl  
│　　├── mycpu_top_nodelay.sv：以下是项目头文件  
│　　├── mycpu_top.sv  
│　　├── SimTop.sv  
│　　└── VTop.sv  
│── xpm_memory：Xilinx的内存IP  
│── Makefile：仿真测试的命令汇总  
│── README.md: 此文件  

## lab1 RISC-V基本五级流水线
需要实现指令：addi xori ori andi lui jal beq ld sd add sub and or xor auipc jalr

利用转发和阻塞处理流水线导致的数据冒险与控制冒险。

## lab2 引入访存延迟的cpu

1、需要在原有的基础上实现更多的指令

跳转指令：bne blt bge bltu bgeu 

移位与比较指令：slti sltiu slli srli srai sll slt sltu srl sra 

对字的操作指令：addiw slliw srliw sraiw addw subw sllw srlw sraw

2、添加握手总线，实现访存延迟下的流水线正常运转

3、支持不同粒度的内存读写

内存读：`lb`（1字节）`lh`（2字节）`lw`（4字节）`ld`（8字节）`lbu`（无符号1字节）`lhu`（无符号2字节）`lwu`（无符号4字节）

内存写：`sb`（1字节）`sh`（2字节）`sw`（4字节）`sd`（8字节）
