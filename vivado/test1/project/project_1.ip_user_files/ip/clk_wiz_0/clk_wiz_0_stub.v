// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Wed Mar 30 13:23:23 2022
// Host        : HUAWEI-Su running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               D:/WorkSpace/Git_Project/RISC-V_CPU/vivado/test1/src/ip/clk_wiz_0/clk_wiz_0_stub.v
// Design      : clk_wiz_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a35tcpg236-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module clk_wiz_0(cpu_clk, reset, locked, sys_clk)
/* synthesis syn_black_box black_box_pad_pin="cpu_clk,reset,locked,sys_clk" */;
  output cpu_clk;
  input reset;
  output locked;
  input sys_clk;
endmodule
