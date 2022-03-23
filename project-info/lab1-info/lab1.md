# lab 1中需要实现的指令与分析

## 一、需要实现的指令与具体功能

需要实现：addi xori ori andi lui jal beq ld sd add sub and or xor auipc jalr

指令的具体功能：

### 1、addi （I-type）

![](img/addi.png)

alu进行**加法运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]符号扩展作为加法运算一位加数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为加数

### 2、xori（I-type）

![](img/xori.png)

alu进行**异或运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]符号扩展作为一个运算数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为操作数2

### 3、ori（I-type）

![]( img/ori.png)

![]( img/ori2.png)

alu进行**或运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]符号扩展作为一个运算数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为操作数2

### 4、andi（I-type）

![]( img/andi.png)

alu进行**与运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]共12位，符号扩展作为一个运算数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为操作数2

### 5、lui（U-type）

![]( img/lui.png)

alu进行**UNKNOWN**运算，结果写回寄存器rd，instruction[11 : 7]

立即数扩展，instruction[21 : 12]共20位立即数，左移12位，低12位置0，高32位为符号扩展；

### 6、auipc （U-type）

![]( img/auipc.png)

alu进行**加法**运算，结果写回寄存器rd，instruction[11 : 7]

立即数扩展，instruction[21 : 12]共20位立即数，左移12位，低12位置0，高32位为符号扩展；

将扩展后的64位立即数与64位pc相加，写回寄存器

### 7、add （R-type）

![]( img/add.png)

alu进行**加法**操作，结果写回寄存器；

### 8、sub （R-type）

![]( img/sub.png)

alu进行**减法**操作，结果写回寄存器；

### 9、and （R-type）

![]( img/and.png)

alu进行**与**操作，结果写回寄存器；

### 10、or （R-type）

![]( img/or.png)

alu进行**或**操作，结果写回寄存器；

### 11、xor （R-type）

![]( img/xor.png)

alu进行**异或**操作，结果写回寄存器；

### 12、ld （I-type）

![]( img/ld.png)

alu进行**加法**操作，结果（不是运算结果，而是访存结果）写回寄存器；

访存地址：从rs 1号instruction[19 : 15]寄存器中读取数据，和offset符号扩展后的结果相加（由alu完成）

### 13、sd （S-type）

![]( img/sd.png)

alu进行**加法**操作，结果不写回寄存器；

访存地址：从rs 1号（instruction[19 : 15]）寄存器中读取数据，与offset扩展后结果相加（由alu完成）

offset扩展：offset的[11 : 0]（12位）被打散在指令中，对应关系为：offset[11 : 5] = instruction[31 : 25]	offset[4 : 0] = instruction[11 : 7]

扩展后的offset为

```verilog
{
    { 52{instruction[31]} },			//offset[63 : 12]
    instruction[31 : 25],				//offset[11 : 5]
    instruction[11 : 7]					//offset[4 : 0]
}
```

写入内存的数据：rs 2号（instruction[24 : 20）寄存器中的数据

### 14、jal （J-type）

![]( img/jal.png)

指令解释：有返回，无条件跳转指令；设置pc + 4为返回地址，存到寄存器rd中，instruction[11 : 7]；将pc跳转到pc + sext(offset)

offset值的20位 被打散存在instruction[31 : 12]位中，具体关系如下：

offset[20] = instruction[31]	offset[10 : 1] = instruction[30 : 21]	offset[11] = instruction[20]	offset[19 : 12] = instruction[19 : 12]

扩展后的offset（共64位）为：

```verilog
{ 
    {43{instruction[31]}}(符号扩展43位),  	//offset[63 : 21]
    instruction[31], 					  //offset[20]			
    instruction[19 : 12], 				  //offset[19 : 12]	
    instruction[20], 					  //offset[11]
    instruction[30 : 21], 				  //offset[10 : 1]
    0 									//offset[0]
}
```

alu进行**加**运算，结果写回寄存器rd，instruction[11 : 7]；

### 15、jalr（J-type）

![]( img/jalr.png)

![]( img/jalr2.png)

指令解释：有返回，无条件跳转指令；设置pc + 4为返回地址，存到寄存器rd中，instruction[11 : 7]；

将pc跳转到（pc + sext(offset)）& ~1；即计算得到的运算结果最低位取0；offset直接符号扩展即可；

### 16、beq （B-type）

![]( img/beq.png)

alu进行**equal**运算，结果不写回寄存器；

条件跳转，读取rs 1，instruction[19 : 15]与rs 2，instruction[24 : 20]寄存器的数据是否相等，相等则跳转pc，pc += sext(offset)

offset值的12位被打散存在instruction中，具体关系如下：

offset[12] = instruction[31]	offset[10 : 5] = instruction[30 : 25]	offset[4 : 1] = instruction[11 : 8]	offset[11] = instruction[7]

扩展后的offset为（共64位）：

```verilog
{
    {51{instruction[12]}},		//offset[63 : 13]
    instruction[31],		   //offset[12]
    instruction[7],			   //offset[11]
    instruction[30 : 25],       //offset[10 : 5]
    instruction[11 : 8],	    //offset[4 : 1]
    0						  //offset[0]
}
```

## 二、各流水段模块输入端口设计

流水线分为五个阶段：fetch（取指）、decode（译码）、excute（执行）、memory（访存）、writeback（写回）；

下面分析各阶段分别需要什么信号，即模块输入端口（**暂不考虑流水线冲突问题**）：

### 1、fetch

fetch阶段需要得到pc的值并从指令存储器中取出instruction（32位）。

pc的可能取值：1、pc + 4 （正常执行）2、无条件跳转（jal、jalr）3、条件跳转（beq）

因此，fetch阶段需要pc的选择器控制信号：

​	1、是否进行无条件跳转	----	由decode阶段产生

​	2、是否进行条件跳转       ----	由excute阶段产生

同时，为了支持pc的跳转指令，fetch阶段需要跳转地址的信号，此次lab中需要实现的指令中只有jal，jalr与beq三条指令需跳转：

​	1、jal跳转：pc = pc + sext(immediate)；

​		pc和立即数扩展均在decode阶段完成，该指令的pc跳转地址信号可由decode阶段产生

​	2、jalr跳转：pc = ( x[rs1] + sext(immediate) ) & (~1)；

​		访问regfile与立即数扩展均在decode阶段完成，该指令的pc跳转地址可由decode阶段产生

​	3、beq跳转：pc = pc + sext(immediate)；

​		与jal指令计算方式相同，该指令的pc跳转地址可由decode阶段产生

因此，fetch模块的输入端口信号如下：

|             输入端口信号             |              产生信号的阶段               |
| :----------------------------------: | :---------------------------------------: |
|      jump（是否进行无条件跳转）      |          decode，译码后即可产生           |
|      b_jump（是否进行条件跳转）      |        excute，得到运算结果后产生         |
| j_add1（jal指令与beq指令跳转的地址） |       decode，进行立即数扩展后产生        |
|      j_add2（jalr指令跳转地址）      | decode，访问regfile并进行立即数扩展后产生 |

### 2、decode

decode阶段需要进行如下操作：

1、对指令进行译码产生控制信号；2、从regfile中读取数据；3、进行立即数扩展，

4、判断是否跳转并计算跳转pc  5、产生excute用到的计算数据（寄存器数据 / 立即数扩展）

（这里无需考虑是否需要跳转，是否跳转由特定控制信号控制，只需要将正确计算方式得到的pc算出即可；当跳转pc值有误时，说明该指令一定不是规定的跳转指令，会有控制信号将错误的pc值过滤掉；当特定的跳转信号成立时，说明**按跳转指令的格式**得到的**跳转pc计算方式**肯定是正确的）

（decode阶段的难点在于产生何种控制信号，这里暂不考虑，在各个阶段的输入端口确定后反推每个模块的输出端口）

​	（1）对指令进行译码，需要32位RISC-V指令instruction；	----	由fetch阶段产生

​	（2）从regfile中读取数据，需要拿到读取的regfile编号rs1与rs2；	----	由decode阶段自己产生

​	（这里rs1与rs2编号的读取不需要考虑指令种类，若存在的话，rs1均在instruction[19 : 15]，rs2均在instruction[24 : 20]）

​	（3）进行立即数扩展，需要明确立即数扩展类型（即指令类型）	----	由decode阶段自己产生；从指令中取出立即数，并根据指令类型做相应的扩展

​	（4）计算pc_nxt需要已知现有的pc以及更新pc用到的扩展后的立即数	----	由fetch阶段产生；

​	（5）产生excute用到的计算数据，需要确定两个计算数据的类型（立即数 + 寄存器 / 寄存器 + 寄存器，）及立即数的扩展方式（由不同指令决定）；	----	由decode阶段自己产生

​	（寄存器 + 寄存器的数据计算只出现在R-type的指令中，通过判断7位操作码确定第二个操作数是否为寄存器）

​		需要特殊注意的是，**auipc指令中两个操作数为pc和扩展后的立即数**！

decode的操作比较复杂，属于整个处理器的控制角色，几个操作之间虽有前后依赖，但在电路信号中没有顺序结构，信号同步产生后根据依赖关系进行异步更新；

可以确定，除了instruction与pc外，decode阶段执行的其余操作所依赖的信号都可以由自己译码与访问regfile产生；

因此，decode模块的输入端口信号如下：

| 输入端口信号 |         产生信号的阶段          |
| :----------: | :-----------------------------: |
| instruction  |      fetch阶段，取值后产生      |
|      pc      | fetch阶段，在时钟上升沿更新得到 |

### 3、excute

excute阶段主要为alu操作，对两个操作数进行相应的运算得到结果。

所需信号为：

alu的操作信号alu_func；		----		由decode阶段产生

同时需要接受2个进行运算的操作数，将操作数运算得到计算结果；	----	由decode阶段产生；

在excute阶段，不需要考虑操作数的类型是寄存器数据、立即数扩展还是待备份的pc，这些在decode阶段处理，excute阶段屏蔽了对数据类型的判断，只需要拿到在该指令下，正确的两个操作数并进行运算即可；

该阶段的**计算结果后续的用途**（只考虑本次lab需要实现的16条指令），共四大类：

​	1、在R-type（add，sub，and，or，xor）、I-type（addi、xori、ori、andi）、U-type（lui、auipc）中：

​		excute阶段计算产生的结果**作为直接数据，在writeback（数据写回阶段）写入rd号寄存器**；

​		这些指令为上面顺序的1-11条指令，无需访问内存，既不写入也不读出；

​	2、在ld与sd（12、13）两条指令中：

​		excute阶段计算产生的结果**作为访存地址，在memory（访存阶段）作为访问的内存地址使用；**

​		其中ld指令为 将内存地址中的数据读出，写回rd号寄存器（rd编号为instruction[11 : 7]）；

​		sd指令为 将rs2号寄存器的数据（rs2编号为instruction[24 ： 20]），写入内存地址中；

​	3、在J-type（jal、jalr）中：

​		jal、jalr均为有返回、无条件跳转指令，因为有返回，所以需要将返回的指令地址（pc + 4）写入regfile；

​		因此，excute阶段计算产生的结果**作为备份pc，在writeback（数据写回阶段）写入rd号寄存器**；

​		不需要访存，与第1大类的指令在计算结果用途的方面一致；

​	4、在B-type（beq）中：

​		beq指令为无返回、有条件跳转指令，因为无返回，不需要进行数据备份写回的操作，也不需要进行访存；

​		excute阶段计算产生的结果仅仅作为是否满足跳转条件的信号，用来控制pc的选择；

​		该信号可用一个单独的1bit信号控制，而不需要用alu得到的64为运算结果，因此，**计算结果在后续没有使用**；

由此得到，excute模块的输入端口信号如下：

|         输入端口信号          |                        产生信号的阶段                        |
| :---------------------------: | :----------------------------------------------------------: |
| alu_func（alu的操作控制信号） |        decode阶段，在进行译码后得到应该进行的alu操作         |
| srca、srcb（alu的两个操作数） | decode阶段，解析指令后判断需要传入下一阶段的操作数是寄存器数据还是立即数 |

### 4、memory

memory阶段向data memory提供访存地址，并读出该地址上的数据；若写使能为真，将数据写入目标地址；在

（1）读取内存地址中的数据：

​	首先需要数据读使能，在memory需要读出的数据时，一定是要将读出的数据写入regfile，因此需要读使能，防止在非ld指令时读出的数据覆盖本应该写入regfile的计算结果；	----	由decode阶段产生；

​	其次需要内存的访问地址，在ld与sd指令中，访存的地址都是由excute计算得到	----	由excute阶段产生；

（2）在内存地址中写入数据，写入数据的信号三件套：

​	内存写使能	----	由decode阶段产生；写入的内存地址	----	由excute阶段产生；写入的数据	----	由decode阶段产生；

在当前需要实现的指令中，访存指令只有ld与sd，二者的访存地址都是由excute阶段产生，且在同一条指令中，要么是只读取内存数据，要么是只写入内存数据，因此地址无需重复传入；

因此，memory模块的输入端口信号如下：

|      输入端口信号       |              产生信号的阶段               |
| :---------------------: | :---------------------------------------: |
|  memread（读数据使能）  | decode阶段，译码后确定是否要读取内存数据  |
| memwrite（写数据使能）  | decode阶段，译码后确定是否要写入内存数据  |
| memdata（待写入的数据） | decode阶段，在读取regfile时得到寄存器数据 |
|  address（访存的地址）  |     excute阶段，由alu计算得到访存地址     |

### 5、writeback

writeback阶段只需要向regfile中写入准备好的数据，writeback阶段同样屏蔽了写入数据的选择（计算结果 / 备份pc / 内存数据），在前面的阶段中将写入的数据更新为指令要求的内容。

同样需要写入数据三件套：

​	regfile写使能	----	由decode阶段产生；写入的寄存器编号	----	由decode阶段产生；写入的数据	----	由memory阶段产生；

因此writeback模块的输入端口如下：

|        输入端口信号         |               产生信号的阶段               |
| :-------------------------: | :----------------------------------------: |
|  regwrite（regfile写使能）  |   decode阶段，译码后确定是否要写回寄存器   |
|   dst（写入的寄存器编号）   |   decode阶段，译码后确定写回的寄存器编号   |
| regdata（写回寄存器的数据） | memory阶段，由读使能确定选择写回的最终数据 |

注：以上所有模块输入端口信号的产生阶段，均为首次产生有效信号的阶段。实际流水线中，因大部分阶段为组合逻辑而非时序逻辑，为防止下一条指令的控制信号产生覆盖，每个阶段的信号输入都是由直接前驱的阶段传入。若信号首次产生的阶段与使用阶段不直接相连，则信号会在不同流水段间传输。

### 6、各流水段模块的初步输出端口

由此，为了为直接后续流水段提供所需信号，可以初步得到每个流水段的输出数据包如下：

fetch为decode直接提供的数据：

```verilog
typedef struct packed {
	u32 instruction;	 //指令
	u64 pc;
} fetch_data_t;
```

decode阶段为excute直接提供的数据：

```verilog
typedef struct packed {
	word_t srca, srcb;	//操作数
    alu_func func;		//alu操作
} decode_data_t;

```

excute阶段为memory直接提供的数据：

```verilog
typedef struct packed {
    u1 memread;			//内存读使能
    u1 memwrite;		//内存写使能
    word_t memdata;		//待写入内存的数据
    word_t address;		//访存的地址
} excute_data_t;
```

memory阶段为writeback直接提供的数据：

```verilog
typedef struct packed {
	u1 regwrite;		//regfile写使能
	creg_addr_t dst;	//写回regfile编号
	word_t regdata;		//写回的数据
} memory_data_t;
```

注：以上数据端口忽略了各个流水段之间的数据信号传递，只是依靠后续流水段的需求得到的必要数据，后续为了数据的传输需要更新数据端口，当前端口只是最终端口的一个子集。

## 三、各流水段模块输出端口设计

### 1、fetch

