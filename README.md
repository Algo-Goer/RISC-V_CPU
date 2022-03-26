# RISC-V_CPU
计算机组成体系结构课程项目，本课程项目测试基于助教给出的测试框架

## 项目结构

RISC-V_CPU  
│── build：仿真测试时才会生成的目录  
│── difftest：仿真测试框架  
│── project-info：每次lab更新信息与实验文档  
│── ready-to-run：仿真测试文件目录  
│　　├── lab1：包含lab1相关的测试文件，需要关注其中的 .S 汇编文件  
│　　└── ...  
│── vivado  
│　　└── test1  
│　　　　　└── project：vivado项目工程目录  
│── vsrc：需要写的CPU代码所在目录  
│　　├── include：头文件目录  
│　　├── pipeline  
│　　　　　├── regfile：寄存器文件目录，寄存器组模块已给出  
│　　　　　├── execute：流水线执行阶段目录，alu模块已给出  
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
