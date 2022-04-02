// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+418,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+419,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+420,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+422,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+424,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+426,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+427,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+428,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+429,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+430,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+431,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+418,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+419,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+420,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+422,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+424,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+426,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+427,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+428,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+429,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+430,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+431,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1,"SimTop ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+2,"SimTop ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+4,"SimTop iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+5,"SimTop iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+6,"SimTop iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+7,"SimTop dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+8,"SimTop dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+11,"SimTop dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+12,"SimTop dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+14,"SimTop dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+15,"SimTop dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+16,"SimTop dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+419,"SimTop core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"SimTop core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+2,"SimTop core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+4,"SimTop core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"SimTop core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+6,"SimTop core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+7,"SimTop core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+8,"SimTop core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+11,"SimTop core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+12,"SimTop core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+14,"SimTop core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"SimTop core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+16,"SimTop core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+18,"SimTop core pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+20,"SimTop core pcnext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop core instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+22,"SimTop core clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+23,"SimTop core ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+24,"SimTop core ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+25,"SimTop core rd1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop core rd2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+16,"SimTop core memread_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop core dataF\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+29,"SimTop core dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+31,"SimTop core dataF_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+32,"SimTop core dataF_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+34,"SimTop core dataD\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+35,"SimTop core dataD\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+37,"SimTop core dataD\206 ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+38,"SimTop core dataD\206 ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+39,"SimTop core dataD\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop core dataD\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+43,"SimTop core dataD\206 imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+45,"SimTop core dataD\206 pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+47,"SimTop core dataD\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"UNKNOWN", "ADDI", "ORI", "ANDI", "XORI", 
                                                "LUI", 
                                                "AUIPC", 
                                                "ADD", 
                                                "SUB", 
                                                "OR", 
                                                "AND", 
                                                "XOR", 
                                                "LD", 
                                                "SD", 
                                                "JAL", 
                                                "JALR", 
                                                "BEQ"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000"};
            tracep->declDTypeEnum(2, "pipes::decode_op_t", 17, 6, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+49,"SimTop core dataD\206 ctl\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+50,"SimTop core dataD\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_ADD", "ALU_SUB", "ALU_OR", "ALU_AND", 
                                                "ALU_XOR", 
                                                "ALU_EQUAL"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101"};
            tracep->declDTypeEnum(3, "pipes::alufunc_t", 6, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+51,"SimTop core dataD\206 ctl\206 func",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+52,"SimTop core dataD\206 ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+53,"SimTop core dataD\206 ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+54,"SimTop core dataD\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+55,"SimTop core dataD\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+56,"SimTop core dataD\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+57,"SimTop core dataD\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+58,"SimTop core dataD_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+59,"SimTop core dataD_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+61,"SimTop core dataD_out\206 ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+62,"SimTop core dataD_out\206 ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+63,"SimTop core dataD_out\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+65,"SimTop core dataD_out\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+67,"SimTop core dataD_out\206 imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop core dataD_out\206 pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop core dataD_out\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+73,"SimTop core dataD_out\206 ctl\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+74,"SimTop core dataD_out\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+75,"SimTop core dataD_out\206 ctl\206 func",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+76,"SimTop core dataD_out\206 ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+77,"SimTop core dataD_out\206 ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+78,"SimTop core dataD_out\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+79,"SimTop core dataD_out\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+80,"SimTop core dataD_out\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+81,"SimTop core dataD_out\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+82,"SimTop core dataE\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+83,"SimTop core dataE\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core dataE\206 j_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core dataE\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+89,"SimTop core dataE\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+91,"SimTop core dataE\206 ctl\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+22,"SimTop core dataE\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+92,"SimTop core dataE\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+93,"SimTop core dataE\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+94,"SimTop core dataE\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+95,"SimTop core dataE\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+96,"SimTop core dataE_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+97,"SimTop core dataE_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+99,"SimTop core dataE_out\206 j_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core dataE_out\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core dataE_out\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+105,"SimTop core dataE_out\206 ctl\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+106,"SimTop core dataE_out\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+107,"SimTop core dataE_out\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+108,"SimTop core dataE_out\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+109,"SimTop core dataE_out\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+110,"SimTop core dataE_out\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+111,"SimTop core dataM\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+112,"SimTop core dataM\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declQuad(c+113,"SimTop core dataM\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+115,"SimTop core dataM\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+116,"SimTop core dataM\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+117,"SimTop core dataM\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+118,"SimTop core dataM\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+120,"SimTop core dataM\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+121,"SimTop core dataM\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+123,"SimTop core dataM_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+124,"SimTop core dataM_out\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declQuad(c+125,"SimTop core dataM_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+127,"SimTop core dataM_out\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+128,"SimTop core dataM_out\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+129,"SimTop core dataM_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+130,"SimTop core dataM_out\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+132,"SimTop core dataM_out\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+133,"SimTop core dataM_out\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+135,"SimTop core dataW\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+136,"SimTop core dataW\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declQuad(c+137,"SimTop core dataW\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+139,"SimTop core dataW\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+140,"SimTop core dataW\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+141,"SimTop core dataW\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+143,"SimTop core dataW\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+144,"SimTop core dataW\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+145,"SimTop core dataW\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+147,"SimTop core dataW_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+148,"SimTop core dataW_out\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declQuad(c+149,"SimTop core dataW_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+151,"SimTop core dataW_out\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+152,"SimTop core dataW_out\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+153,"SimTop core dataW_out\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+155,"SimTop core dataW_out\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+156,"SimTop core dataW_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+157,"SimTop core dataW_out\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+159,"SimTop core forward_execute\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+160,"SimTop core forward_execute\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+161,"SimTop core forward_execute\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+163,"SimTop core forward_memory\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+164,"SimTop core forward_memory\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+165,"SimTop core forward_memory\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core forward_writeback\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+168,"SimTop core forward_writeback\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop core forward_writeback\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop core hazardOut\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+172,"SimTop core hazardOut\206 clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+173,"SimTop core hazardOut\206 srca_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+174,"SimTop core hazardOut\206 srca_forward",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+176,"SimTop core hazardOut\206 srcb_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+177,"SimTop core hazardOut\206 srcb_forward",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop core pcselect jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+179,"SimTop core pcselect pcplus4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core pcselect j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+20,"SimTop core pcselect pcselected",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop core fetch instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+18,"SimTop core fetch pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop core fetch dataF\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+29,"SimTop core fetch dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core fetch_decode clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+432,"SimTop core fetch_decode reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+171,"SimTop core fetch_decode stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+6,"SimTop core fetch_decode dataF\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+29,"SimTop core fetch_decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+31,"SimTop core fetch_decode dataF_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+32,"SimTop core fetch_decode dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+31,"SimTop core decode dataF\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+32,"SimTop core decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+25,"SimTop core decode rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop core decode rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+23,"SimTop core decode ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+24,"SimTop core decode ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+34,"SimTop core decode dataD\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+35,"SimTop core decode dataD\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"SimTop core decode dataD\206 ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+38,"SimTop core decode dataD\206 ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+39,"SimTop core decode dataD\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop core decode dataD\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+43,"SimTop core decode dataD\206 imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+45,"SimTop core decode dataD\206 pcdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+47,"SimTop core decode dataD\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+49,"SimTop core decode dataD\206 ctl\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+50,"SimTop core decode dataD\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+51,"SimTop core decode dataD\206 ctl\206 func",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+52,"SimTop core decode dataD\206 ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"SimTop core decode dataD\206 ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"SimTop core decode dataD\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"SimTop core decode dataD\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop core decode dataD\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"SimTop core decode dataD\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+181,"SimTop core decode imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+183,"SimTop core decode ctl\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+184,"SimTop core decode ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+185,"SimTop core decode ctl\206 func",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+186,"SimTop core decode ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+187,"SimTop core decode ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+188,"SimTop core decode ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+189,"SimTop core decode ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+190,"SimTop core decode ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+191,"SimTop core decode ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+192,"SimTop core decode srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+194,"SimTop core decode srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+31,"SimTop core decode decoder instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+183,"SimTop core decode decoder ctl\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+184,"SimTop core decode decoder ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+185,"SimTop core decode decoder ctl\206 func",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+186,"SimTop core decode decoder ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+187,"SimTop core decode decoder ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+188,"SimTop core decode decoder ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+189,"SimTop core decode decoder ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+190,"SimTop core decode decoder ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+191,"SimTop core decode decoder ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+196,"SimTop core decode decoder f7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+197,"SimTop core decode decoder f3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+198,"SimTop core decode decoder func",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+31,"SimTop core decode extend instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+183,"SimTop core decode extend op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+181,"SimTop core decode extend sextimm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+181,"SimTop core decode extend imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop core decode dataconfirm pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+183,"SimTop core decode dataconfirm op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+25,"SimTop core decode dataconfirm rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+27,"SimTop core decode dataconfirm rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+181,"SimTop core decode dataconfirm imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+192,"SimTop core decode dataconfirm srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+194,"SimTop core decode dataconfirm srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+192,"SimTop core decode dataconfirm data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+194,"SimTop core decode dataconfirm data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core decode_execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+432,"SimTop core decode_execute reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+171,"SimTop core decode_execute stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+34,"SimTop core decode_execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+35,"SimTop core decode_execute dataD\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+37,"SimTop core decode_execute dataD\206 ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+38,"SimTop core decode_execute dataD\206 ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+39,"SimTop core decode_execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+41,"SimTop core decode_execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+43,"SimTop core decode_execute dataD\206 imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+45,"SimTop core decode_execute dataD\206 pcdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+47,"SimTop core decode_execute dataD\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+49,"SimTop core decode_execute dataD\206 ctl\206 op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+50,"SimTop core decode_execute dataD\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+51,"SimTop core decode_execute dataD\206 ctl\206 func",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+52,"SimTop core decode_execute dataD\206 ctl\206 srca_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"SimTop core decode_execute dataD\206 ctl\206 srcb_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"SimTop core decode_execute dataD\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"SimTop core decode_execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop core decode_execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"SimTop core decode_execute dataD\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+58,"SimTop core decode_execute dataD_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+59,"SimTop core decode_execute dataD_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+61,"SimTop core decode_execute dataD_out\206 ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+62,"SimTop core decode_execute dataD_out\206 ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+63,"SimTop core decode_execute dataD_out\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+65,"SimTop core decode_execute dataD_out\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+67,"SimTop core decode_execute dataD_out\206 imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop core decode_execute dataD_out\206 pcdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop core decode_execute dataD_out\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+73,"SimTop core decode_execute dataD_out\206 ctl\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+74,"SimTop core decode_execute dataD_out\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"SimTop core decode_execute dataD_out\206 ctl\206 func",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+76,"SimTop core decode_execute dataD_out\206 ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"SimTop core decode_execute dataD_out\206 ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"SimTop core decode_execute dataD_out\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core decode_execute dataD_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+80,"SimTop core decode_execute dataD_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+81,"SimTop core decode_execute dataD_out\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+58,"SimTop core execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+59,"SimTop core execute dataD\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+61,"SimTop core execute dataD\206 ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+62,"SimTop core execute dataD\206 ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+63,"SimTop core execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+65,"SimTop core execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+67,"SimTop core execute dataD\206 imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop core execute dataD\206 pcdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop core execute dataD\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+73,"SimTop core execute dataD\206 ctl\206 op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+74,"SimTop core execute dataD\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"SimTop core execute dataD\206 ctl\206 func",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+76,"SimTop core execute dataD\206 ctl\206 srca_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"SimTop core execute dataD\206 ctl\206 srcb_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"SimTop core execute dataD\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+80,"SimTop core execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+81,"SimTop core execute dataD\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+173,"SimTop core execute rs1_mux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+174,"SimTop core execute rs1_forward",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+176,"SimTop core execute rs2_mux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+177,"SimTop core execute rs2_forward",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+82,"SimTop core execute dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+83,"SimTop core execute dataE\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core execute dataE\206 j_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core execute dataE\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+89,"SimTop core execute dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+91,"SimTop core execute dataE\206 ctl\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+22,"SimTop core execute dataE\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop core execute dataE\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop core execute dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"SimTop core execute dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+95,"SimTop core execute dataE\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+199,"SimTop core execute srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop core execute srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+203,"SimTop core execute pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+205,"SimTop core execute memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+207,"SimTop core execute result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+199,"SimTop core execute alu a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+201,"SimTop core execute alu b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+75,"SimTop core execute alu alufunc",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+207,"SimTop core execute alu c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core execute_memory clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+433,"SimTop core execute_memory reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+82,"SimTop core execute_memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+83,"SimTop core execute_memory dataE\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core execute_memory dataE\206 j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core execute_memory dataE\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+89,"SimTop core execute_memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+91,"SimTop core execute_memory dataE\206 ctl\206 op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+22,"SimTop core execute_memory dataE\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop core execute_memory dataE\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop core execute_memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"SimTop core execute_memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+95,"SimTop core execute_memory dataE\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+96,"SimTop core execute_memory dataE_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+97,"SimTop core execute_memory dataE_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+99,"SimTop core execute_memory dataE_out\206 j_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core execute_memory dataE_out\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core execute_memory dataE_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+105,"SimTop core execute_memory dataE_out\206 ctl\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+106,"SimTop core execute_memory dataE_out\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+107,"SimTop core execute_memory dataE_out\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+108,"SimTop core execute_memory dataE_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+109,"SimTop core execute_memory dataE_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"SimTop core execute_memory dataE_out\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+96,"SimTop core memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+97,"SimTop core memory dataE\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+99,"SimTop core memory dataE\206 j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core memory dataE\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+105,"SimTop core memory dataE\206 ctl\206 op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+106,"SimTop core memory dataE\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+107,"SimTop core memory dataE\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+108,"SimTop core memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+109,"SimTop core memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"SimTop core memory dataE\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+16,"SimTop core memory memread_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+111,"SimTop core memory dataM\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+112,"SimTop core memory dataM\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+113,"SimTop core memory dataM\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+115,"SimTop core memory dataM\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+116,"SimTop core memory dataM\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+117,"SimTop core memory dataM\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+118,"SimTop core memory dataM\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+120,"SimTop core memory dataM\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+121,"SimTop core memory dataM\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+105,"SimTop core memory ctl\206 op",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+106,"SimTop core memory ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+107,"SimTop core memory ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+108,"SimTop core memory ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+109,"SimTop core memory ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+110,"SimTop core memory ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+418,"SimTop core memory_writeback clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+419,"SimTop core memory_writeback reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+111,"SimTop core memory_writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+112,"SimTop core memory_writeback dataM\206 op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+113,"SimTop core memory_writeback dataM\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+115,"SimTop core memory_writeback dataM\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+116,"SimTop core memory_writeback dataM\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+117,"SimTop core memory_writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+118,"SimTop core memory_writeback dataM\206 regdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+120,"SimTop core memory_writeback dataM\206 skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+121,"SimTop core memory_writeback dataM\206 address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+123,"SimTop core memory_writeback dataM_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+124,"SimTop core memory_writeback dataM_out\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+125,"SimTop core memory_writeback dataM_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+127,"SimTop core memory_writeback dataM_out\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+128,"SimTop core memory_writeback dataM_out\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"SimTop core memory_writeback dataM_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+130,"SimTop core memory_writeback dataM_out\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+132,"SimTop core memory_writeback dataM_out\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+133,"SimTop core memory_writeback dataM_out\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+123,"SimTop core writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+124,"SimTop core writeback dataM\206 op",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+125,"SimTop core writeback dataM\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+127,"SimTop core writeback dataM\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+128,"SimTop core writeback dataM\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"SimTop core writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+130,"SimTop core writeback dataM\206 regdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+132,"SimTop core writeback dataM\206 skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+133,"SimTop core writeback dataM\206 address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+135,"SimTop core writeback dataW\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+136,"SimTop core writeback dataW\206 op",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+137,"SimTop core writeback dataW\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+139,"SimTop core writeback dataW\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+140,"SimTop core writeback dataW\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+141,"SimTop core writeback dataW\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+143,"SimTop core writeback dataW\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+144,"SimTop core writeback dataW\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+145,"SimTop core writeback dataW\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+419,"SimTop core regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop core regfile ra1(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+24,"SimTop core regfile ra2(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+209,"SimTop core regfile rd1(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+211,"SimTop core regfile rd2(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+144,"SimTop core regfile wa(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+143,"SimTop core regfile wvalid(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+145,"SimTop core regfile wd(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+213,"SimTop core regfile regs(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+215,"SimTop core regfile regs(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+217,"SimTop core regfile regs(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+219,"SimTop core regfile regs(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+221,"SimTop core regfile regs(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+223,"SimTop core regfile regs(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+225,"SimTop core regfile regs(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+227,"SimTop core regfile regs(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+229,"SimTop core regfile regs(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+231,"SimTop core regfile regs(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+233,"SimTop core regfile regs(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+235,"SimTop core regfile regs(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+237,"SimTop core regfile regs(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+239,"SimTop core regfile regs(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+241,"SimTop core regfile regs(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+243,"SimTop core regfile regs(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+245,"SimTop core regfile regs(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+247,"SimTop core regfile regs(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+249,"SimTop core regfile regs(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+251,"SimTop core regfile regs(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+253,"SimTop core regfile regs(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+255,"SimTop core regfile regs(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+257,"SimTop core regfile regs(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+259,"SimTop core regfile regs(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+261,"SimTop core regfile regs(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+263,"SimTop core regfile regs(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+265,"SimTop core regfile regs(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+267,"SimTop core regfile regs(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+269,"SimTop core regfile regs(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+271,"SimTop core regfile regs(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+273,"SimTop core regfile regs(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+275,"SimTop core regfile regs(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+277,"SimTop core regfile regs_nxt(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+279,"SimTop core regfile regs_nxt(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+281,"SimTop core regfile regs_nxt(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+283,"SimTop core regfile regs_nxt(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+285,"SimTop core regfile regs_nxt(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+287,"SimTop core regfile regs_nxt(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+289,"SimTop core regfile regs_nxt(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+291,"SimTop core regfile regs_nxt(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+293,"SimTop core regfile regs_nxt(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+295,"SimTop core regfile regs_nxt(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+297,"SimTop core regfile regs_nxt(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+299,"SimTop core regfile regs_nxt(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+301,"SimTop core regfile regs_nxt(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop core regfile regs_nxt(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+305,"SimTop core regfile regs_nxt(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+307,"SimTop core regfile regs_nxt(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+309,"SimTop core regfile regs_nxt(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop core regfile regs_nxt(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+313,"SimTop core regfile regs_nxt(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+315,"SimTop core regfile regs_nxt(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+317,"SimTop core regfile regs_nxt(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+319,"SimTop core regfile regs_nxt(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+321,"SimTop core regfile regs_nxt(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+323,"SimTop core regfile regs_nxt(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+325,"SimTop core regfile regs_nxt(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+327,"SimTop core regfile regs_nxt(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+329,"SimTop core regfile regs_nxt(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+331,"SimTop core regfile regs_nxt(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+333,"SimTop core regfile regs_nxt(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop core regfile regs_nxt(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+337,"SimTop core regfile regs_nxt(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+339,"SimTop core regfile regs_nxt(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[1] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[2] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[3] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[4] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[5] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[6] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[7] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[8] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[9] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[10] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[11] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[12] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[13] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[14] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[15] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[16] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[17] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[18] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[19] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[20] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[21] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[22] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[23] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[24] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[25] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[26] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[27] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[28] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[29] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[30] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+434,"SimTop core regfile genblk2[31] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+341,"SimTop core forward1 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"SimTop core forward1 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+103,"SimTop core forward1 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+159,"SimTop core forward1 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+160,"SimTop core forward1 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+161,"SimTop core forward1 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core forward2 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"SimTop core forward2 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+130,"SimTop core forward2 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+163,"SimTop core forward2 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+164,"SimTop core forward2 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+165,"SimTop core forward2 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+155,"SimTop core forward3 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+156,"SimTop core forward3 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+157,"SimTop core forward3 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core forward3 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop core forward3 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop core forward3 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+116,"SimTop core hazard regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+107,"SimTop core hazard memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+61,"SimTop core hazard rs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+62,"SimTop core hazard rt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+117,"SimTop core hazard dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+159,"SimTop core hazard forward_execute\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+160,"SimTop core hazard forward_execute\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+161,"SimTop core hazard forward_execute\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+163,"SimTop core hazard forward_memory\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+164,"SimTop core hazard forward_memory\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+165,"SimTop core hazard forward_memory\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core hazard forward_writeback\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop core hazard forward_writeback\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop core hazard forward_writeback\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop core hazard hazardOut\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+172,"SimTop core hazard hazardOut\206 clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+173,"SimTop core hazard hazardOut\206 srca_mux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+174,"SimTop core hazard hazardOut\206 srca_forward",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+176,"SimTop core hazard hazardOut\206 srcb_mux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+177,"SimTop core hazard hazardOut\206 srcb_forward",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+22,"SimTop core controller jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop core controller clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+418,"SimTop core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+435,"SimTop core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+435,"SimTop core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+342,"SimTop core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+343,"SimTop core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+345,"SimTop core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+346,"SimTop core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+436,"SimTop core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+436,"SimTop core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+143,"SimTop core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+347,"SimTop core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+145,"SimTop core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+435,"SimTop core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+348,"SimTop core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+350,"SimTop core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+352,"SimTop core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+354,"SimTop core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+356,"SimTop core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+358,"SimTop core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+360,"SimTop core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+362,"SimTop core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+364,"SimTop core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+366,"SimTop core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+368,"SimTop core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+370,"SimTop core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+372,"SimTop core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+374,"SimTop core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+378,"SimTop core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+380,"SimTop core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+382,"SimTop core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+384,"SimTop core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+386,"SimTop core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+392,"SimTop core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+394,"SimTop core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+396,"SimTop core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+398,"SimTop core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+400,"SimTop core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+402,"SimTop core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+404,"SimTop core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+406,"SimTop core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+408,"SimTop core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+410,"SimTop core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+435,"SimTop core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+436,"SimTop core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+437,"SimTop core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+438,"SimTop core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+435,"SimTop core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+440,"SimTop core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop core DifftestArchFpRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+435,"SimTop core DifftestArchFpRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchFpRegState fpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+418,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+419,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"SimTop ram ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+2,"SimTop ram ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+4,"SimTop ram iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"SimTop ram iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+6,"SimTop ram iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+7,"SimTop ram dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+8,"SimTop ram dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop ram dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+11,"SimTop ram dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+12,"SimTop ram dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+14,"SimTop ram dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"SimTop ram dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+16,"SimTop ram dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+412,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+414,"SimTop ram iidx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+416,"SimTop ram didx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+2,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__ireq[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+4,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                               >> 0x21U)))));
        tracep->fullBit(oldp+5,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                               >> 0x20U)))));
        tracep->fullIData(oldp+6,((IData)(vlSelf->SimTop__DOT__iresp)),32);
        tracep->fullBit(oldp+7,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                       >> 0xbU))));
        tracep->fullQData(oldp+8,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__dreq[4U])) 
                                    << 0x35U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[3U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[2U])) 
                                                    >> 0xbU)))),64);
        tracep->fullCData(oldp+10,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+11,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+14,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+15,((1U & vlSelf->SimTop__DOT__dresp[2U])));
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dresp[0U])))),64);
        tracep->fullQData(oldp+18,(vlSelf->SimTop__DOT__core__DOT__pc),64);
        tracep->fullQData(oldp+20,(((0x100U & vlSelf->SimTop__DOT__core__DOT__dataE[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                              >> 0xfU)))
                                     : (4ULL + vlSelf->SimTop__DOT__core__DOT__pc))),64);
        tracep->fullBit(oldp+22,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                        >> 8U))));
        tracep->fullCData(oldp+23,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+24,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullQData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__pc),64);
        tracep->fullIData(oldp+31,(vlSelf->SimTop__DOT__core__DOT__dataF_out[2U]),32);
        tracep->fullQData(oldp+32,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataF_out[0U])))),64);
        tracep->fullIData(oldp+34,(vlSelf->SimTop__DOT__core__DOT__dataD[0xdU]),32);
        tracep->fullQData(oldp+35,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])))),64);
        tracep->fullCData(oldp+37,((vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] 
                                    >> 0x1bU)),5);
        tracep->fullCData(oldp+38,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] 
                                             >> 0x16U))),5);
        tracep->fullQData(oldp+39,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+41,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+43,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+45,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                     >> 0x16U)))),64);
        tracep->fullCData(oldp+49,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                             >> 0x10U))),6);
        tracep->fullBit(oldp+50,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                        >> 0xfU))));
        tracep->fullCData(oldp+51,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                             >> 0xaU))),5);
        tracep->fullBit(oldp+52,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                        >> 9U))));
        tracep->fullBit(oldp+53,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                        >> 8U))));
        tracep->fullBit(oldp+54,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                        >> 7U))));
        tracep->fullBit(oldp+55,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                        >> 6U))));
        tracep->fullBit(oldp+56,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                        >> 5U))));
        tracep->fullCData(oldp+57,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),5);
        tracep->fullIData(oldp+58,(vlSelf->SimTop__DOT__core__DOT__dataD_out[0xdU]),32);
        tracep->fullQData(oldp+59,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[0xcU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_out[0xbU])))),64);
        tracep->fullCData(oldp+61,((vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU] 
                                    >> 0x1bU)),5);
        tracep->fullCData(oldp+62,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU] 
                                             >> 0x16U))),5);
        tracep->fullQData(oldp+63,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_out[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+65,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_out[7U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_out[5U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_out[3U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_out[1U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])) 
                                                     >> 0x16U)))),64);
        tracep->fullCData(oldp+73,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                             >> 0x10U))),6);
        tracep->fullBit(oldp+74,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                        >> 0xfU))));
        tracep->fullCData(oldp+75,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                             >> 0xaU))),5);
        tracep->fullBit(oldp+76,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                        >> 9U))));
        tracep->fullBit(oldp+77,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                        >> 8U))));
        tracep->fullBit(oldp+78,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                        >> 7U))));
        tracep->fullBit(oldp+79,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                        >> 6U))));
        tracep->fullBit(oldp+80,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                        >> 5U))));
        tracep->fullCData(oldp+81,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])),5);
        tracep->fullIData(oldp+82,(((vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                     << 0x11U) | (vlSelf->SimTop__DOT__core__DOT__dataE[8U] 
                                                  >> 0xfU))),32);
        tracep->fullQData(oldp+83,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataE[8U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                                     >> 0xfU)))),64);
        tracep->fullQData(oldp+85,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                                     >> 0xfU)))),64);
        tracep->fullQData(oldp+87,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                                     >> 0xfU)))),64);
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                                     >> 0xfU)))),64);
        tracep->fullCData(oldp+91,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                             >> 9U))),6);
        tracep->fullBit(oldp+92,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                        >> 7U))));
        tracep->fullBit(oldp+93,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                        >> 6U))));
        tracep->fullBit(oldp+94,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                        >> 5U))));
        tracep->fullCData(oldp+95,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),5);
        tracep->fullIData(oldp+96,(((vlSelf->SimTop__DOT__core__DOT__dataE_out[9U] 
                                     << 0x11U) | (vlSelf->SimTop__DOT__core__DOT__dataE_out[8U] 
                                                  >> 0xfU))),32);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataE_out[8U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_out[7U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_out[6U])) 
                                                     >> 0xfU)))),64);
        tracep->fullQData(oldp+99,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataE_out[6U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_out[5U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                                     >> 0xfU)))),64);
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_out[3U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                                      >> 0xfU)))),64);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_out[1U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])) 
                                                      >> 0xfU)))),64);
        tracep->fullCData(oldp+105,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                              >> 9U))),6);
        tracep->fullBit(oldp+106,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                         >> 8U))));
        tracep->fullBit(oldp+107,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                         >> 7U))));
        tracep->fullBit(oldp+108,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+109,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+110,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])),5);
        tracep->fullIData(oldp+111,(((vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                                      << 0x12U) | (
                                                   vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+112,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                                              >> 8U))),6);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                                      >> 8U)))),64);
        tracep->fullBit(oldp+115,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+116,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+117,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+118,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+120,((1U & vlSelf->SimTop__DOT__core__DOT__dataM[2U])));
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataM[0U])))),64);
        tracep->fullIData(oldp+123,(((vlSelf->SimTop__DOT__core__DOT__dataM_out[7U] 
                                      << 0x12U) | (
                                                   vlSelf->SimTop__DOT__core__DOT__dataM_out[6U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+124,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataM_out[6U] 
                                              >> 8U))),6);
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_out[6U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_out[5U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_out[4U])) 
                                                      >> 8U)))),64);
        tracep->fullBit(oldp+127,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_out[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+128,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_out[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+129,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_out[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+130,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_out[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_out[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+132,((1U & vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])));
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataM_out[0U])))),64);
        tracep->fullIData(oldp+135,(((vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                      << 0x12U) | (
                                                   vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+136,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                              >> 8U))),6);
        tracep->fullQData(oldp+137,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                                      >> 8U)))),64);
        tracep->fullBit(oldp+139,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+140,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                         >> 6U))));
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+143,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+144,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataW[2U])),5);
        tracep->fullQData(oldp+145,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[0U])))),64);
        tracep->fullIData(oldp+147,(((vlSelf->SimTop__DOT__core__DOT__dataW_out[7U] 
                                      << 0x12U) | (
                                                   vlSelf->SimTop__DOT__core__DOT__dataW_out[6U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+148,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataW_out[6U] 
                                              >> 8U))),6);
        tracep->fullQData(oldp+149,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW_out[6U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW_out[5U])) 
                                                    << 0x18U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW_out[4U])) 
                                                      >> 8U)))),64);
        tracep->fullBit(oldp+151,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW_out[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+152,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW_out[4U] 
                                         >> 6U))));
        tracep->fullQData(oldp+153,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW_out[4U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW_out[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW_out[2U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+155,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW_out[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+156,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataW_out[2U])),5);
        tracep->fullQData(oldp+157,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW_out[0U])))),64);
        tracep->fullBit(oldp+159,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_execute[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+160,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_execute[2U])),5);
        tracep->fullQData(oldp+161,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__forward_execute[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__forward_execute[0U])))),64);
        tracep->fullBit(oldp+163,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_memory[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+164,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_memory[2U])),5);
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__forward_memory[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__forward_memory[0U])))),64);
        tracep->fullBit(oldp+167,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_writeback[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+168,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_writeback[2U])),5);
        tracep->fullQData(oldp+169,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__forward_writeback[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__forward_writeback[0U])))),64);
        tracep->fullBit(oldp+171,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                         >> 3U))));
        tracep->fullBit(oldp+172,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                         >> 2U))));
        tracep->fullBit(oldp+173,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                         >> 1U))));
        tracep->fullQData(oldp+174,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__hazardOut[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+176,((1U & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])));
        tracep->fullQData(oldp+177,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__hazardOut[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__hazardOut[0U])))),64);
        tracep->fullQData(oldp+179,((4ULL + vlSelf->SimTop__DOT__core__DOT__pc)),64);
        tracep->fullQData(oldp+181,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
        tracep->fullCData(oldp+183,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0x10U))),6);
        tracep->fullBit(oldp+184,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0xfU))));
        tracep->fullCData(oldp+185,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+186,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 9U))));
        tracep->fullBit(oldp+187,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 8U))));
        tracep->fullBit(oldp+188,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 7U))));
        tracep->fullBit(oldp+189,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 6U))));
        tracep->fullBit(oldp+190,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                         >> 5U))));
        tracep->fullCData(oldp+191,((0x1fU & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)),5);
        tracep->fullQData(oldp+192,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
        tracep->fullQData(oldp+194,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
        tracep->fullCData(oldp+196,((0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF_out[2U])),7);
        tracep->fullCData(oldp+197,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+198,((vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                     >> 0x19U)),7);
        tracep->fullQData(oldp+199,(((1U & ((vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                             >> 9U) 
                                            & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                               >> 1U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__hazardOut[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])) 
                                               >> 1U)))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataD_out[9U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+201,(((1U & ((vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                             >> 8U) 
                                            & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U]))
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__hazardOut[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__hazardOut[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataD_out[7U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+203,(((2U & vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__hazardOut[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])) 
                                               >> 1U)))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataD_out[3U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+205,(((1U & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__hazardOut[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__hazardOut[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataD_out[1U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
        tracep->fullQData(oldp+209,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+211,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullQData(oldp+213,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
        tracep->fullQData(oldp+215,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
        tracep->fullQData(oldp+217,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
        tracep->fullQData(oldp+219,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
        tracep->fullQData(oldp+221,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
        tracep->fullQData(oldp+223,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
        tracep->fullQData(oldp+225,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
        tracep->fullQData(oldp+227,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
        tracep->fullQData(oldp+229,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
        tracep->fullQData(oldp+233,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
        tracep->fullQData(oldp+235,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
        tracep->fullQData(oldp+237,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
        tracep->fullQData(oldp+239,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
        tracep->fullQData(oldp+241,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
        tracep->fullQData(oldp+243,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
        tracep->fullQData(oldp+245,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
        tracep->fullQData(oldp+247,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
        tracep->fullQData(oldp+249,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
        tracep->fullQData(oldp+251,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
        tracep->fullQData(oldp+253,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
        tracep->fullQData(oldp+255,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
        tracep->fullQData(oldp+257,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
        tracep->fullQData(oldp+259,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
        tracep->fullQData(oldp+261,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
        tracep->fullQData(oldp+263,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
        tracep->fullQData(oldp+265,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
        tracep->fullQData(oldp+267,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
        tracep->fullQData(oldp+269,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
        tracep->fullQData(oldp+271,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
        tracep->fullQData(oldp+273,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
        tracep->fullQData(oldp+275,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
        tracep->fullQData(oldp+277,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+279,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+281,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+283,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+287,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+291,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+293,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+295,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+297,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+299,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+301,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+303,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+305,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+307,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+309,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+311,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+313,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+315,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+317,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+321,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+327,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+331,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+333,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+335,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+337,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+339,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+341,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                          >> 5U) & 
                                         (~ (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                             >> 7U))))));
        tracep->fullBit(oldp+342,((0U != (0x3fU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                                   >> 8U)))));
        tracep->fullQData(oldp+343,((QData)((IData)(
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                                      << 0x12U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                                        >> 0xeU))))),64);
        tracep->fullIData(oldp+345,(((vlSelf->SimTop__DOT__core__DOT__dataW[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+346,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                          >> 6U) & 
                                         (~ (vlSelf->SimTop__DOT__dreq[3U] 
                                             >> 0xaU))))));
        tracep->fullCData(oldp+347,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataW[2U])),8);
        tracep->fullQData(oldp+348,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+350,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+352,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+354,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+356,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+358,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+360,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+362,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+370,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+372,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+374,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+378,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+380,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+382,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+384,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+386,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+388,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+390,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+398,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+400,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+402,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+404,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+406,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+408,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullQData(oldp+412,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+414,(vlSelf->SimTop__DOT__ram__DOT__iidx),64);
        tracep->fullQData(oldp+416,(((0x80000000ULL 
                                      < (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__dreq[4U])) 
                                          << 0x35U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__dreq[3U])) 
                                             << 0x15U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__dreq[2U])) 
                                               >> 0xbU))))
                                      ? (((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__dreq[4U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__dreq[3U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[2U])) 
                                                 >> 0xbU))) 
                                          - 0x80000000ULL) 
                                         >> 3U) : 0ULL)),64);
        tracep->fullBit(oldp+418,(vlSelf->clock));
        tracep->fullBit(oldp+419,(vlSelf->reset));
        tracep->fullQData(oldp+420,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+422,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+424,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+426,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+427,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+428,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+429,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+430,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+431,(vlSelf->io_uart_in_ch),8);
        tracep->fullBit(oldp+432,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                          >> 8U) | (IData)(vlSelf->reset)))));
        tracep->fullBit(oldp+433,((1U & ((vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                          >> 2U) | (IData)(vlSelf->reset)))));
        tracep->fullIData(oldp+434,(1U),32);
        tracep->fullCData(oldp+435,(0U),8);
        tracep->fullBit(oldp+436,(0U));
        tracep->fullCData(oldp+437,(0U),3);
        tracep->fullQData(oldp+438,(0ULL),64);
        tracep->fullCData(oldp+440,(3U),2);
    }
}
