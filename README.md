# RISC-V_CPU
计算机组成体系结构课程项目，本课程项目测试基于助教给出的测试框架，System Verilog源代码在`vsrc`文件夹中。

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
### 需要实现指令

addi xori ori andi lui jal beq ld sd add sub and or xor auipc jalr

利用转发和阻塞处理流水线导致的数据冒险与控制冒险。

### verilator仿真

共两个verilator仿真测试文件，`lab1a.S`与`lab1.S`，前者指令少，后者多了`R-type`的部分指令。

仿真操作：在Linux环境下，运行指令`make test-lab1`（或`make test-lab1a`）执行`lab1.S`（或`lab1a.S`）中的汇编指令。

通过指令`make test-lab1 VOPT="--dump-wave"`可生成此次仿真的波形图，默认在`build`文件夹下。

若通过仿真，会在终端输出`HIT GOOD TRAP`，此输出后伴随着报错，报错是因为后续指令问题，`lab1a.S`中指令提交到`3c90`即可。
