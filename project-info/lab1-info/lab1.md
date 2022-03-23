# lab 1中需要实现的指令与分析

## 一、需要实现的指令与具体功能

需要实现：addi xori ori andi lui jal beq ld sd add sub and or xor auipc jalr

指令的具体功能：

### 1、addi （I-type）

![](img\addi.png)

alu进行**加法运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]符号扩展作为加法运算一位加数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为加数

### 2、xori（I-type）

![](img\xori.png)

alu进行**异或运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]符号扩展作为一个运算数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为操作数2

### 3、ori（I-type）

![]( img\ori.png)

![]( img\ori2.png)

alu进行**或运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]符号扩展作为一个运算数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为操作数2

### 4、andi（I-type）

![]( img\andi.png)

alu进行**与运算**，结果写回寄存器rd，instruction[11 : 7]

立即数扩展：instruction[31 : 20]共12位，符号扩展作为一个运算数；寄存器标号rs instruction[19 : 15]，读出regfile的数据作为操作数2

### 5、lui（U-type）

![]( img\lui.png)

alu进行**UNKNOWN**运算，结果写回寄存器rd，instruction[11 : 7]

立即数扩展，instruction[21 : 12]共20位立即数，左移12位，低12位置0，高32位为符号扩展；

### 6、auipc （U-type）

![]( img\auipc.png)

alu进行**加法**运算，结果写回寄存器rd，instruction[11 : 7]

立即数扩展，instruction[21 : 12]共20位立即数，左移12位，低12位置0，高32位为符号扩展；

将扩展后的64位立即数与64位pc相加，写回寄存器

### 7、add （R-type）

![]( img\add.png)

alu进行**加法**操作，结果写回寄存器；

### 8、sub （R-type）

![]( img\sub.png)

alu进行**减法**操作，结果写回寄存器；

### 9、and （R-type）

![]( img\and.png)

alu进行**与**操作，结果写回寄存器；

### 10、or （R-type）

![]( img\or.png)

alu进行**或**操作，结果写回寄存器；

### 11、xor （R-type）

![]( img\xor.png)

alu进行**异或**操作，结果写回寄存器；

### 12、ld （I-type）

![]( img\ld.png)

alu进行**加法**操作，结果（不是运算结果，而是访存结果）写回寄存器；

访存地址：从rs 1号instruction[19 : 15]寄存器中读取数据，和offset符号扩展后的结果相加（由alu完成）

### 13、sd （S-type）

![]( img\sd.png)

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

![]( img\jal.png)

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

![]( img\jalr.png)

![]( img\jalr2.png)

指令解释：有返回，无条件跳转指令；设置pc + 4为返回地址，存到寄存器rd中，instruction[11 : 7]；

将pc跳转到（pc + sext(offset)）& ~1；即计算得到的运算结果最低位取0；offset直接符号扩展即可；

### 16、beq （B-type）

![]( img\beq.png)

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

## 二、指令信号分析

## 三、各流水段信号设计
