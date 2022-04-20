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
        tracep->declBit(c+528,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+530,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+532,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+534,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+536,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+537,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+538,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+539,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+540,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+541,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+528,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+530,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+532,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+534,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+536,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+537,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+538,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+539,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+540,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+541,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1,"SimTop oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+2,"SimTop oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+3,"SimTop oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MLEN1", "MLEN2", "MLEN4", "MLEN8", 
                                                "MLEN16", 
                                                "MLEN32", 
                                                "MLEN64", 
                                                "MLEN128", 
                                                "MLEN256"};
            const char* __VenumItemValues[]
            = {"0", "1", "11", "111", "1111", "11111", 
                                                "111111", 
                                                "1111111", 
                                                "11111111"};
            tracep->declDTypeEnum(2, "common::mlen_t", 9, 8, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+9,"SimTop oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {
            const char* __VenumItemNames[]
            = {"AXI_BURST_FIXED", "AXI_BURST_INCR", 
                                                "AXI_BURST_WRAP", 
                                                "AXI_BURST_RESERVED"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(3, "common::axi_burst_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop oresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+12,"SimTop oresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+13,"SimTop oresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop top reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"SimTop top oreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop top oreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop top oreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop top oreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop top oreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop top oreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop top oreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop top oreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop top oresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop top oresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop top oresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop top ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+16,"SimTop top ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+18,"SimTop top iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+19,"SimTop top iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+20,"SimTop top iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+21,"SimTop top dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+22,"SimTop top dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+24,"SimTop top dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+25,"SimTop top dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+26,"SimTop top dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+28,"SimTop top dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+28,"SimTop top dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+29,"SimTop top dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop top icreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+32,"SimTop top icreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+33,"SimTop top icreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+34,"SimTop top icreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+36,"SimTop top icreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+37,"SimTop top icreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+39,"SimTop top icreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+40,"SimTop top icreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+41,"SimTop top dcreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+42,"SimTop top dcreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+43,"SimTop top dcreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+44,"SimTop top dcreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+46,"SimTop top dcreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+47,"SimTop top dcreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+49,"SimTop top dcreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+50,"SimTop top dcreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+51,"SimTop top icresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+52,"SimTop top icresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+53,"SimTop top icresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+55,"SimTop top dcresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+56,"SimTop top dcresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+29,"SimTop top dcresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop top core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"SimTop top core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+16,"SimTop top core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+18,"SimTop top core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop top core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+20,"SimTop top core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+21,"SimTop top core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+22,"SimTop top core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+24,"SimTop top core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+25,"SimTop top core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+26,"SimTop top core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+28,"SimTop top core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"SimTop top core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+29,"SimTop top core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+57,"SimTop top core pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+59,"SimTop top core pcnext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+20,"SimTop top core instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+61,"SimTop top core clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+62,"SimTop top core ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+63,"SimTop top core ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+64,"SimTop top core rd1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop top core rd2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+29,"SimTop top core memread_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+20,"SimTop top core dataF\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+68,"SimTop top core dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop top core dataF_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+71,"SimTop top core dataF_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+73,"SimTop top core dataD\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+75,"SimTop top core dataD\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+76,"SimTop top core dataD\206 ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+77,"SimTop top core dataD\206 ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop top core dataD\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+80,"SimTop top core dataD\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+82,"SimTop top core dataD\206 imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+84,"SimTop top core dataD\206 pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop top core dataD\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
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
            tracep->declDTypeEnum(4, "pipes::decode_op_t", 17, 6, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+88,"SimTop top core dataD\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+89,"SimTop top core dataD\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_ADD", "ALU_SUB", "ALU_OR", "ALU_AND", 
                                                "ALU_XOR", 
                                                "ALU_EQUAL"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101"};
            tracep->declDTypeEnum(5, "pipes::alufunc_t", 6, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+90,"SimTop top core dataD\206 ctl\206 func",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+91,"SimTop top core dataD\206 ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+92,"SimTop top core dataD\206 ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+93,"SimTop top core dataD\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+94,"SimTop top core dataD\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+95,"SimTop top core dataD\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+96,"SimTop top core dataD\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+97,"SimTop top core dataD_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+99,"SimTop top core dataD_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+100,"SimTop top core dataD_out\206 ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+101,"SimTop top core dataD_out\206 ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+102,"SimTop top core dataD_out\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+104,"SimTop top core dataD_out\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+106,"SimTop top core dataD_out\206 imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+108,"SimTop top core dataD_out\206 pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+110,"SimTop top core dataD_out\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+112,"SimTop top core dataD_out\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+113,"SimTop top core dataD_out\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+114,"SimTop top core dataD_out\206 ctl\206 func",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+115,"SimTop top core dataD_out\206 ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+116,"SimTop top core dataD_out\206 ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+117,"SimTop top core dataD_out\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+118,"SimTop top core dataD_out\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+119,"SimTop top core dataD_out\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+120,"SimTop top core dataD_out\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+121,"SimTop top core dataE\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+123,"SimTop top core dataE\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+124,"SimTop top core dataE\206 j_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop top core dataE\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+128,"SimTop top core dataE\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+130,"SimTop top core dataE\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+61,"SimTop top core dataE\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+131,"SimTop top core dataE\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+132,"SimTop top core dataE\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"SimTop top core dataE\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+134,"SimTop top core dataE\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+135,"SimTop top core dataE_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+137,"SimTop top core dataE_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+138,"SimTop top core dataE_out\206 j_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+140,"SimTop top core dataE_out\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop top core dataE_out\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+144,"SimTop top core dataE_out\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+145,"SimTop top core dataE_out\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+146,"SimTop top core dataE_out\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+147,"SimTop top core dataE_out\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+148,"SimTop top core dataE_out\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+149,"SimTop top core dataE_out\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+150,"SimTop top core dataM\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+152,"SimTop top core dataM\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+153,"SimTop top core dataM\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+154,"SimTop top core dataM\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+155,"SimTop top core dataM\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+156,"SimTop top core dataM\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+157,"SimTop top core dataM\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+159,"SimTop top core dataM\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+160,"SimTop top core dataM\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop top core dataM_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+164,"SimTop top core dataM_out\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+165,"SimTop top core dataM_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+166,"SimTop top core dataM_out\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+167,"SimTop top core dataM_out\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+168,"SimTop top core dataM_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop top core dataM_out\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop top core dataM_out\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+172,"SimTop top core dataM_out\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+174,"SimTop top core dataW\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+176,"SimTop top core dataW\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+177,"SimTop top core dataW\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+178,"SimTop top core dataW\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+179,"SimTop top core dataW\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+180,"SimTop top core dataW\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+182,"SimTop top core dataW\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+183,"SimTop top core dataW\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+184,"SimTop top core dataW\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+186,"SimTop top core dataW_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+188,"SimTop top core dataW_out\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+189,"SimTop top core dataW_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+190,"SimTop top core dataW_out\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+191,"SimTop top core dataW_out\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+192,"SimTop top core dataW_out\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+194,"SimTop top core dataW_out\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+195,"SimTop top core dataW_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+196,"SimTop top core dataW_out\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+198,"SimTop top core forward_execute\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+199,"SimTop top core forward_execute\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+200,"SimTop top core forward_execute\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+202,"SimTop top core forward_memory\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+203,"SimTop top core forward_memory\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+204,"SimTop top core forward_memory\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+206,"SimTop top core forward_writeback\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+207,"SimTop top core forward_writeback\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop top core forward_writeback\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop top core hazardOut\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+211,"SimTop top core hazardOut\206 clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+212,"SimTop top core hazardOut\206 srca_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+213,"SimTop top core hazardOut\206 srca_forward",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+215,"SimTop top core hazardOut\206 srcb_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+216,"SimTop top core hazardOut\206 srcb_forward",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+61,"SimTop top core pcselect jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+218,"SimTop top core pcselect pcplus4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+124,"SimTop top core pcselect j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+59,"SimTop top core pcselect pcselected",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+20,"SimTop top core fetch instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+57,"SimTop top core fetch pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+20,"SimTop top core fetch dataF\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+68,"SimTop top core fetch dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core fetch_decode clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+542,"SimTop top core fetch_decode reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop top core fetch_decode stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+20,"SimTop top core fetch_decode dataF\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+68,"SimTop top core fetch_decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop top core fetch_decode dataF_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+71,"SimTop top core fetch_decode dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop top core decode dataF\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+71,"SimTop top core decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+64,"SimTop top core decode rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop top core decode rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+62,"SimTop top core decode ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+63,"SimTop top core decode ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+73,"SimTop top core decode dataD\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+75,"SimTop top core decode dataD\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+76,"SimTop top core decode dataD\206 ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+77,"SimTop top core decode dataD\206 ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop top core decode dataD\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+80,"SimTop top core decode dataD\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+82,"SimTop top core decode dataD\206 imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+84,"SimTop top core decode dataD\206 pcdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop top core decode dataD\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+88,"SimTop top core decode dataD\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+89,"SimTop top core decode dataD\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+90,"SimTop top core decode dataD\206 ctl\206 func",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+91,"SimTop top core decode dataD\206 ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop top core decode dataD\206 ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop top core decode dataD\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"SimTop top core decode dataD\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"SimTop top core decode dataD\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+96,"SimTop top core decode dataD\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+220,"SimTop top core decode imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+222,"SimTop top core decode ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+223,"SimTop top core decode ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+224,"SimTop top core decode ctl\206 func",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+225,"SimTop top core decode ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+226,"SimTop top core decode ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+227,"SimTop top core decode ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+228,"SimTop top core decode ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+229,"SimTop top core decode ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+230,"SimTop top core decode ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+231,"SimTop top core decode srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+233,"SimTop top core decode srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+70,"SimTop top core decode decoder instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+222,"SimTop top core decode decoder ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+223,"SimTop top core decode decoder ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+224,"SimTop top core decode decoder ctl\206 func",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+225,"SimTop top core decode decoder ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+226,"SimTop top core decode decoder ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+227,"SimTop top core decode decoder ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+228,"SimTop top core decode decoder ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+229,"SimTop top core decode decoder ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+230,"SimTop top core decode decoder ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+235,"SimTop top core decode decoder f7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+236,"SimTop top core decode decoder f3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+237,"SimTop top core decode decoder func",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+70,"SimTop top core decode extend instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+222,"SimTop top core decode extend op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+220,"SimTop top core decode extend sextimm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+220,"SimTop top core decode extend imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop top core decode dataconfirm pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+222,"SimTop top core decode dataconfirm op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+64,"SimTop top core decode dataconfirm rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop top core decode dataconfirm rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+220,"SimTop top core decode dataconfirm imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+231,"SimTop top core decode dataconfirm srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+233,"SimTop top core decode dataconfirm srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+231,"SimTop top core decode dataconfirm data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+233,"SimTop top core decode dataconfirm data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core decode_execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+542,"SimTop top core decode_execute reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop top core decode_execute stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+73,"SimTop top core decode_execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+75,"SimTop top core decode_execute dataD\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+76,"SimTop top core decode_execute dataD\206 ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+77,"SimTop top core decode_execute dataD\206 ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+78,"SimTop top core decode_execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+80,"SimTop top core decode_execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+82,"SimTop top core decode_execute dataD\206 imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+84,"SimTop top core decode_execute dataD\206 pcdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop top core decode_execute dataD\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+88,"SimTop top core decode_execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+89,"SimTop top core decode_execute dataD\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+90,"SimTop top core decode_execute dataD\206 ctl\206 func",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+91,"SimTop top core decode_execute dataD\206 ctl\206 srca_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop top core decode_execute dataD\206 ctl\206 srcb_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+93,"SimTop top core decode_execute dataD\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+94,"SimTop top core decode_execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"SimTop top core decode_execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+96,"SimTop top core decode_execute dataD\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+97,"SimTop top core decode_execute dataD_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+99,"SimTop top core decode_execute dataD_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+100,"SimTop top core decode_execute dataD_out\206 ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+101,"SimTop top core decode_execute dataD_out\206 ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+102,"SimTop top core decode_execute dataD_out\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+104,"SimTop top core decode_execute dataD_out\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+106,"SimTop top core decode_execute dataD_out\206 imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+108,"SimTop top core decode_execute dataD_out\206 pcdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+110,"SimTop top core decode_execute dataD_out\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+112,"SimTop top core decode_execute dataD_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+113,"SimTop top core decode_execute dataD_out\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+114,"SimTop top core decode_execute dataD_out\206 ctl\206 func",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+115,"SimTop top core decode_execute dataD_out\206 ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+116,"SimTop top core decode_execute dataD_out\206 ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+117,"SimTop top core decode_execute dataD_out\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"SimTop top core decode_execute dataD_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"SimTop top core decode_execute dataD_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+120,"SimTop top core decode_execute dataD_out\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+97,"SimTop top core execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+99,"SimTop top core execute dataD\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+100,"SimTop top core execute dataD\206 ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+101,"SimTop top core execute dataD\206 ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+102,"SimTop top core execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+104,"SimTop top core execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+106,"SimTop top core execute dataD\206 imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+108,"SimTop top core execute dataD\206 pcdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+110,"SimTop top core execute dataD\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+112,"SimTop top core execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+113,"SimTop top core execute dataD\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+114,"SimTop top core execute dataD\206 ctl\206 func",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+115,"SimTop top core execute dataD\206 ctl\206 srca_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+116,"SimTop top core execute dataD\206 ctl\206 srcb_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+117,"SimTop top core execute dataD\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"SimTop top core execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"SimTop top core execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+120,"SimTop top core execute dataD\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+212,"SimTop top core execute rs1_mux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+213,"SimTop top core execute rs1_forward",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+215,"SimTop top core execute rs2_mux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+216,"SimTop top core execute rs2_forward",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop top core execute dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+123,"SimTop top core execute dataE\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+124,"SimTop top core execute dataE\206 j_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop top core execute dataE\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+128,"SimTop top core execute dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+130,"SimTop top core execute dataE\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+61,"SimTop top core execute dataE\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+131,"SimTop top core execute dataE\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+132,"SimTop top core execute dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"SimTop top core execute dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+134,"SimTop top core execute dataE\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+238,"SimTop top core execute srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop top core execute srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop top core execute pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop top core execute memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+246,"SimTop top core execute result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop top core execute alu a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop top core execute alu b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+114,"SimTop top core execute alu alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+246,"SimTop top core execute alu c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core execute_memory clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+543,"SimTop top core execute_memory reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+121,"SimTop top core execute_memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+123,"SimTop top core execute_memory dataE\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+124,"SimTop top core execute_memory dataE\206 j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+126,"SimTop top core execute_memory dataE\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+128,"SimTop top core execute_memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+130,"SimTop top core execute_memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+61,"SimTop top core execute_memory dataE\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+131,"SimTop top core execute_memory dataE\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+132,"SimTop top core execute_memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"SimTop top core execute_memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+134,"SimTop top core execute_memory dataE\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+135,"SimTop top core execute_memory dataE_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+137,"SimTop top core execute_memory dataE_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+138,"SimTop top core execute_memory dataE_out\206 j_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+140,"SimTop top core execute_memory dataE_out\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop top core execute_memory dataE_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+144,"SimTop top core execute_memory dataE_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+145,"SimTop top core execute_memory dataE_out\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop top core execute_memory dataE_out\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+147,"SimTop top core execute_memory dataE_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+148,"SimTop top core execute_memory dataE_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+149,"SimTop top core execute_memory dataE_out\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+135,"SimTop top core memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+137,"SimTop top core memory dataE\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+138,"SimTop top core memory dataE\206 j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+140,"SimTop top core memory dataE\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop top core memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+144,"SimTop top core memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+145,"SimTop top core memory dataE\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop top core memory dataE\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+147,"SimTop top core memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+148,"SimTop top core memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+149,"SimTop top core memory dataE\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+29,"SimTop top core memory memread_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop top core memory dataM\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+152,"SimTop top core memory dataM\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+153,"SimTop top core memory dataM\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+154,"SimTop top core memory dataM\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+155,"SimTop top core memory dataM\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+156,"SimTop top core memory dataM\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+157,"SimTop top core memory dataM\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+159,"SimTop top core memory dataM\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+160,"SimTop top core memory dataM\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+144,"SimTop top core memory ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+145,"SimTop top core memory ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+146,"SimTop top core memory ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+147,"SimTop top core memory ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+148,"SimTop top core memory ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+149,"SimTop top core memory ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+528,"SimTop top core memory_writeback clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop top core memory_writeback reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+150,"SimTop top core memory_writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+152,"SimTop top core memory_writeback dataM\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+153,"SimTop top core memory_writeback dataM\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+154,"SimTop top core memory_writeback dataM\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+155,"SimTop top core memory_writeback dataM\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+156,"SimTop top core memory_writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+157,"SimTop top core memory_writeback dataM\206 regdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+159,"SimTop top core memory_writeback dataM\206 skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+160,"SimTop top core memory_writeback dataM\206 address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop top core memory_writeback dataM_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+164,"SimTop top core memory_writeback dataM_out\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+165,"SimTop top core memory_writeback dataM_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+166,"SimTop top core memory_writeback dataM_out\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+167,"SimTop top core memory_writeback dataM_out\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop top core memory_writeback dataM_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop top core memory_writeback dataM_out\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop top core memory_writeback dataM_out\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+172,"SimTop top core memory_writeback dataM_out\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop top core writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+164,"SimTop top core writeback dataM\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+165,"SimTop top core writeback dataM\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+166,"SimTop top core writeback dataM\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+167,"SimTop top core writeback dataM\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop top core writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop top core writeback dataM\206 regdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+171,"SimTop top core writeback dataM\206 skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+172,"SimTop top core writeback dataM\206 address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+174,"SimTop top core writeback dataW\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+176,"SimTop top core writeback dataW\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+177,"SimTop top core writeback dataW\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+178,"SimTop top core writeback dataW\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+179,"SimTop top core writeback dataW\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+180,"SimTop top core writeback dataW\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+182,"SimTop top core writeback dataW\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+183,"SimTop top core writeback dataW\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+184,"SimTop top core writeback dataW\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop top core regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+62,"SimTop top core regfile ra1(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+63,"SimTop top core regfile ra2(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+248,"SimTop top core regfile rd1(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+250,"SimTop top core regfile rd2(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+183,"SimTop top core regfile wa(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+182,"SimTop top core regfile wvalid(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+184,"SimTop top core regfile wd(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+252,"SimTop top core regfile regs(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop top core regfile regs(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+256,"SimTop top core regfile regs(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+258,"SimTop top core regfile regs(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+260,"SimTop top core regfile regs(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+262,"SimTop top core regfile regs(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+264,"SimTop top core regfile regs(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+266,"SimTop top core regfile regs(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+268,"SimTop top core regfile regs(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+270,"SimTop top core regfile regs(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+272,"SimTop top core regfile regs(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+274,"SimTop top core regfile regs(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+276,"SimTop top core regfile regs(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+278,"SimTop top core regfile regs(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+280,"SimTop top core regfile regs(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+282,"SimTop top core regfile regs(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+284,"SimTop top core regfile regs(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+286,"SimTop top core regfile regs(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop top core regfile regs(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+290,"SimTop top core regfile regs(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+292,"SimTop top core regfile regs(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+294,"SimTop top core regfile regs(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+296,"SimTop top core regfile regs(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+298,"SimTop top core regfile regs(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+300,"SimTop top core regfile regs(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+302,"SimTop top core regfile regs(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+304,"SimTop top core regfile regs(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+306,"SimTop top core regfile regs(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+308,"SimTop top core regfile regs(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+310,"SimTop top core regfile regs(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+312,"SimTop top core regfile regs(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+314,"SimTop top core regfile regs(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop top core regfile regs_nxt(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+318,"SimTop top core regfile regs_nxt(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+320,"SimTop top core regfile regs_nxt(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+322,"SimTop top core regfile regs_nxt(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+324,"SimTop top core regfile regs_nxt(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop top core regfile regs_nxt(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+328,"SimTop top core regfile regs_nxt(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+330,"SimTop top core regfile regs_nxt(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop top core regfile regs_nxt(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+334,"SimTop top core regfile regs_nxt(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+336,"SimTop top core regfile regs_nxt(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+338,"SimTop top core regfile regs_nxt(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+340,"SimTop top core regfile regs_nxt(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+342,"SimTop top core regfile regs_nxt(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+344,"SimTop top core regfile regs_nxt(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+346,"SimTop top core regfile regs_nxt(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+348,"SimTop top core regfile regs_nxt(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+350,"SimTop top core regfile regs_nxt(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+352,"SimTop top core regfile regs_nxt(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+354,"SimTop top core regfile regs_nxt(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+356,"SimTop top core regfile regs_nxt(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+358,"SimTop top core regfile regs_nxt(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+360,"SimTop top core regfile regs_nxt(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+362,"SimTop top core regfile regs_nxt(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+364,"SimTop top core regfile regs_nxt(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+366,"SimTop top core regfile regs_nxt(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+368,"SimTop top core regfile regs_nxt(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+370,"SimTop top core regfile regs_nxt(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+372,"SimTop top core regfile regs_nxt(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+374,"SimTop top core regfile regs_nxt(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop top core regfile regs_nxt(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+378,"SimTop top core regfile regs_nxt(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[1] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[2] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[3] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[4] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[5] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[6] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[7] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[8] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[9] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[10] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[11] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[12] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[13] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[14] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[15] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[16] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[17] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[18] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[19] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[20] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[21] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[22] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[23] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[24] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[25] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[26] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[27] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[28] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[29] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[30] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+544,"SimTop top core regfile genblk2[31] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+380,"SimTop top core forward1 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+149,"SimTop top core forward1 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+142,"SimTop top core forward1 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+198,"SimTop top core forward1 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+199,"SimTop top core forward1 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+200,"SimTop top core forward1 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop top core forward2 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+168,"SimTop top core forward2 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+169,"SimTop top core forward2 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+202,"SimTop top core forward2 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+203,"SimTop top core forward2 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+204,"SimTop top core forward2 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+194,"SimTop top core forward3 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+195,"SimTop top core forward3 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+196,"SimTop top core forward3 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+206,"SimTop top core forward3 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"SimTop top core forward3 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop top core forward3 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+155,"SimTop top core hazard regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop top core hazard memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+100,"SimTop top core hazard rs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+101,"SimTop top core hazard rt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+156,"SimTop top core hazard dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+198,"SimTop top core hazard forward_execute\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+199,"SimTop top core hazard forward_execute\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+200,"SimTop top core hazard forward_execute\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+202,"SimTop top core hazard forward_memory\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+203,"SimTop top core hazard forward_memory\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+204,"SimTop top core hazard forward_memory\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+206,"SimTop top core hazard forward_writeback\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"SimTop top core hazard forward_writeback\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop top core hazard forward_writeback\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop top core hazard hazardOut\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"SimTop top core hazard hazardOut\206 clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+212,"SimTop top core hazard hazardOut\206 srca_mux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+213,"SimTop top core hazard hazardOut\206 srca_forward",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+215,"SimTop top core hazard hazardOut\206 srcb_mux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+216,"SimTop top core hazard hazardOut\206 srcb_forward",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+61,"SimTop top core controller jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"SimTop top core controller clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+528,"SimTop top core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+545,"SimTop top core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+545,"SimTop top core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+381,"SimTop top core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+174,"SimTop top core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+177,"SimTop top core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+382,"SimTop top core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+546,"SimTop top core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+546,"SimTop top core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"SimTop top core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+383,"SimTop top core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+184,"SimTop top core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+545,"SimTop top core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+384,"SimTop top core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+386,"SimTop top core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop top core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop top core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+392,"SimTop top core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+394,"SimTop top core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+396,"SimTop top core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+398,"SimTop top core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+400,"SimTop top core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+402,"SimTop top core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+404,"SimTop top core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+406,"SimTop top core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+408,"SimTop top core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+410,"SimTop top core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+412,"SimTop top core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+414,"SimTop top core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+416,"SimTop top core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+418,"SimTop top core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+420,"SimTop top core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+422,"SimTop top core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+424,"SimTop top core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+426,"SimTop top core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+428,"SimTop top core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+430,"SimTop top core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+432,"SimTop top core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+434,"SimTop top core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+436,"SimTop top core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop top core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+440,"SimTop top core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+442,"SimTop top core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+444,"SimTop top core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+446,"SimTop top core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+545,"SimTop top core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+546,"SimTop top core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+547,"SimTop top core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+548,"SimTop top core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+545,"SimTop top core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+550,"SimTop top core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+528,"SimTop top core DifftestArchFpRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+545,"SimTop top core DifftestArchFpRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+548,"SimTop top core DifftestArchFpRegState fpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop top icvt ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+16,"SimTop top icvt ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+18,"SimTop top icvt iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"SimTop top icvt iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+20,"SimTop top icvt iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+31,"SimTop top icvt icreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop top icvt icreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+33,"SimTop top icvt icreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+34,"SimTop top icvt icreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+36,"SimTop top icvt icreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+37,"SimTop top icvt icreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+39,"SimTop top icvt icreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+40,"SimTop top icvt icreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+51,"SimTop top icvt icresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"SimTop top icvt icresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+53,"SimTop top icvt icresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+448,"SimTop top icvt dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+449,"SimTop top icvt dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+450,"SimTop top icvt dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+452,"SimTop top icvt inst dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+453,"SimTop top icvt inst dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+551,"SimTop top icvt inst dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+552,"SimTop top icvt inst dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+553,"SimTop top icvt inst dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+448,"SimTop top icvt inst dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+449,"SimTop top icvt inst dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+450,"SimTop top icvt inst dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop top icvt inst dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop top icvt inst dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+33,"SimTop top icvt inst dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+34,"SimTop top icvt inst dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+36,"SimTop top icvt inst dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+37,"SimTop top icvt inst dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+39,"SimTop top icvt inst dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+40,"SimTop top icvt inst dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+51,"SimTop top icvt inst dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"SimTop top icvt inst dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+53,"SimTop top icvt inst dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+455,"SimTop top icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+21,"SimTop top dcvt dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+22,"SimTop top dcvt dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+24,"SimTop top dcvt dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+25,"SimTop top dcvt dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+26,"SimTop top dcvt dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+28,"SimTop top dcvt dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"SimTop top dcvt dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+29,"SimTop top dcvt dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+41,"SimTop top dcvt dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+42,"SimTop top dcvt dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+43,"SimTop top dcvt dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+44,"SimTop top dcvt dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+46,"SimTop top dcvt dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+47,"SimTop top dcvt dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+49,"SimTop top dcvt dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+50,"SimTop top dcvt dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop top dcvt dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop top dcvt dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+29,"SimTop top dcvt dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+28,"SimTop top dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+528,"SimTop top mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop top mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+456,"SimTop top mux ireqs(0)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+457,"SimTop top mux ireqs(0)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+458,"SimTop top mux ireqs(0)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+459,"SimTop top mux ireqs(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+461,"SimTop top mux ireqs(0)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+462,"SimTop top mux ireqs(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+464,"SimTop top mux ireqs(0)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+465,"SimTop top mux ireqs(0)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+466,"SimTop top mux ireqs(1)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+467,"SimTop top mux ireqs(1)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+468,"SimTop top mux ireqs(1)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+469,"SimTop top mux ireqs(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+471,"SimTop top mux ireqs(1)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+472,"SimTop top mux ireqs(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+474,"SimTop top mux ireqs(1)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+475,"SimTop top mux ireqs(1)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop top mux iresps(0)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop top mux iresps(0)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+29,"SimTop top mux iresps(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+51,"SimTop top mux iresps(1)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"SimTop top mux iresps(1)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+53,"SimTop top mux iresps(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1,"SimTop top mux oreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop top mux oreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop top mux oreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop top mux oreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop top mux oreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop top mux oreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop top mux oreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop top mux oreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop top mux oresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop top mux oresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop top mux oresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+476,"SimTop top mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+477,"SimTop top mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+478,"SimTop top mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+479,"SimTop top mux saved_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+480,"SimTop top mux saved_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+481,"SimTop top mux saved_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+482,"SimTop top mux saved_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+484,"SimTop top mux saved_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+485,"SimTop top mux saved_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+487,"SimTop top mux saved_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+488,"SimTop top mux saved_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+489,"SimTop top mux selected_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+490,"SimTop top mux selected_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+491,"SimTop top mux selected_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+492,"SimTop top mux selected_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+494,"SimTop top mux selected_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+495,"SimTop top mux selected_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+497,"SimTop top mux selected_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+498,"SimTop top mux selected_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+499,"SimTop top mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+500,"SimTop top mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+528,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+529,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"SimTop ram oreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop ram oreq\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop ram oreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop ram oreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop ram oreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop ram oreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop ram oreq\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop ram oreq\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop ram oresp\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop ram oresp\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop ram oresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+501,"SimTop ram saved_oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+502,"SimTop ram saved_oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+503,"SimTop ram saved_oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+504,"SimTop ram saved_oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+506,"SimTop ram saved_oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+507,"SimTop ram saved_oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+509,"SimTop ram saved_oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+510,"SimTop ram saved_oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(6, "RAMHelper2.__typeimpenum22", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+511,"SimTop ram state",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+512,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+513,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+514,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+516,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+518,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+520,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+522,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+524,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+526,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
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
        tracep->fullBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x15U))));
        tracep->fullCData(oldp+3,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                         >> 0x12U))),3);
        tracep->fullQData(oldp+4,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U)))),64);
        tracep->fullCData(oldp+6,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                            >> 0xaU))),8);
        tracep->fullQData(oldp+7,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[1U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[0U])) 
                                                    >> 0xaU)))),64);
        tracep->fullCData(oldp+9,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                            >> 2U))),8);
        tracep->fullCData(oldp+10,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
        tracep->fullBit(oldp+11,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+12,((1U & vlSelf->SimTop__DOT__oresp[2U])));
        tracep->fullQData(oldp+13,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__oresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__oresp[0U])))),64);
        tracep->fullBit(oldp+15,((1U & vlSelf->SimTop__DOT__top__DOT__ireq[2U])));
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+18,((1U & (vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+19,((1U & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U])));
        tracep->fullIData(oldp+20,(((4U & vlSelf->SimTop__DOT__top__DOT__ireq[0U])
                                     ? vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U]
                                     : vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U])),32);
        tracep->fullBit(oldp+21,((1U & (vlSelf->SimTop__DOT__top__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+22,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+24,((7U & (vlSelf->SimTop__DOT__top__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+25,((0xffU & vlSelf->SimTop__DOT__top__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+26,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+28,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                         >> 1U) & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U]))));
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullBit(oldp+31,((1U & (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+32,((1U & (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+33,((7U & (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+34,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__icreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__icreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__icreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+36,((0xffU & (vlSelf->SimTop__DOT__top__DOT__icreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+37,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__icreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__icreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__icreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+39,((0xffU & (vlSelf->SimTop__DOT__top__DOT__icreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+40,((3U & vlSelf->SimTop__DOT__top__DOT__icreq[0U])),2);
        tracep->fullBit(oldp+41,((1U & (vlSelf->SimTop__DOT__top__DOT__dcreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+42,((1U & (vlSelf->SimTop__DOT__top__DOT__dcreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+43,((7U & (vlSelf->SimTop__DOT__top__DOT__dcreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+44,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dcreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__dcreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__dcreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+46,((0xffU & (vlSelf->SimTop__DOT__top__DOT__dcreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dcreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__dcreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__dcreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+49,((0xffU & (vlSelf->SimTop__DOT__top__DOT__dcreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+50,((3U & vlSelf->SimTop__DOT__top__DOT__dcreq[0U])),2);
        tracep->fullBit(oldp+51,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                        >> 3U))));
        tracep->fullBit(oldp+52,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                        >> 2U))));
        tracep->fullQData(oldp+53,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])) 
                                                     >> 2U)))),64);
        tracep->fullBit(oldp+55,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+56,((1U & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])));
        tracep->fullQData(oldp+57,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
        tracep->fullQData(oldp+59,(((0x100U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                              >> 0xfU)))
                                     : (4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc))),64);
        tracep->fullBit(oldp+61,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                        >> 8U))));
        tracep->fullCData(oldp+62,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+63,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+64,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
        tracep->fullIData(oldp+70,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]),32);
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))),64);
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU])))),64);
        tracep->fullIData(oldp+75,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU]),32);
        tracep->fullCData(oldp+76,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
                                    >> 0x1bU)),5);
        tracep->fullCData(oldp+77,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
                                             >> 0x16U))),5);
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+82,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+84,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])) 
                                                     >> 0x16U)))),64);
        tracep->fullCData(oldp+88,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                             >> 0x10U))),6);
        tracep->fullBit(oldp+89,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 0xfU))));
        tracep->fullCData(oldp+90,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                             >> 0xaU))),5);
        tracep->fullBit(oldp+91,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 9U))));
        tracep->fullBit(oldp+92,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 8U))));
        tracep->fullBit(oldp+93,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 7U))));
        tracep->fullBit(oldp+94,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 6U))));
        tracep->fullBit(oldp+95,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 5U))));
        tracep->fullCData(oldp+96,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])),5);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])))),64);
        tracep->fullIData(oldp+99,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU]),32);
        tracep->fullCData(oldp+100,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                     >> 0x1bU)),5);
        tracep->fullCData(oldp+101,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                              >> 0x16U))),5);
        tracep->fullQData(oldp+102,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+104,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+106,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+108,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+110,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+112,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                              >> 0x10U))),6);
        tracep->fullBit(oldp+113,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0xfU))));
        tracep->fullCData(oldp+114,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+115,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 9U))));
        tracep->fullBit(oldp+116,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 8U))));
        tracep->fullBit(oldp+117,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 7U))));
        tracep->fullBit(oldp+118,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+119,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+120,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])),5);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullIData(oldp+123,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U] 
                                      << 0x11U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                                   >> 0xfU))),32);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                                      >> 0xfU)))),64);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                                      >> 0xfU)))),64);
        tracep->fullQData(oldp+128,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])) 
                                                      >> 0xfU)))),64);
        tracep->fullCData(oldp+130,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                              >> 9U))),6);
        tracep->fullBit(oldp+131,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 7U))));
        tracep->fullBit(oldp+132,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+133,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+134,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])),5);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                      >> 0xfU)))),64);
        tracep->fullIData(oldp+137,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                      << 0x11U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                   >> 0xfU))),32);
        tracep->fullQData(oldp+138,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[5U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                                      >> 0xfU)))),64);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                      >> 0xfU)))),64);
        tracep->fullQData(oldp+142,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                      >> 0xfU)))),64);
        tracep->fullCData(oldp+144,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                              >> 9U))),6);
        tracep->fullBit(oldp+145,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 8U))));
        tracep->fullBit(oldp+146,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 7U))));
        tracep->fullBit(oldp+147,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+148,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+149,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])),5);
        tracep->fullQData(oldp+150,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+152,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+153,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+154,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+155,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+156,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+157,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+159,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])));
        tracep->fullQData(oldp+160,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U])))),64);
        tracep->fullQData(oldp+162,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+164,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+165,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+166,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+167,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+168,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+169,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+171,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])));
        tracep->fullQData(oldp+172,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U])))),64);
        tracep->fullQData(oldp+174,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+176,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+177,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+178,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+179,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                         >> 6U))));
        tracep->fullQData(oldp+180,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+182,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+183,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),5);
        tracep->fullQData(oldp+184,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U])))),64);
        tracep->fullQData(oldp+186,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+188,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+189,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+190,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+191,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                         >> 6U))));
        tracep->fullQData(oldp+192,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+194,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+195,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])),5);
        tracep->fullQData(oldp+196,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[0U])))),64);
        tracep->fullBit(oldp+198,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+199,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U])),5);
        tracep->fullQData(oldp+200,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U])))),64);
        tracep->fullBit(oldp+202,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+203,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U])),5);
        tracep->fullQData(oldp+204,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U])))),64);
        tracep->fullBit(oldp+206,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+207,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U])),5);
        tracep->fullQData(oldp+208,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U])))),64);
        tracep->fullBit(oldp+210,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                         >> 3U))));
        tracep->fullBit(oldp+211,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                         >> 2U))));
        tracep->fullBit(oldp+212,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                         >> 1U))));
        tracep->fullQData(oldp+213,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+215,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])));
        tracep->fullQData(oldp+216,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))),64);
        tracep->fullQData(oldp+218,((4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc)),64);
        tracep->fullQData(oldp+220,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
        tracep->fullCData(oldp+222,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0x10U))),6);
        tracep->fullBit(oldp+223,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0xfU))));
        tracep->fullCData(oldp+224,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+225,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 9U))));
        tracep->fullBit(oldp+226,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 8U))));
        tracep->fullBit(oldp+227,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 7U))));
        tracep->fullBit(oldp+228,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 6U))));
        tracep->fullBit(oldp+229,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 5U))));
        tracep->fullCData(oldp+230,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)),5);
        tracep->fullQData(oldp+231,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
        tracep->fullQData(oldp+233,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
        tracep->fullCData(oldp+235,((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])),7);
        tracep->fullCData(oldp+236,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+237,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                     >> 0x19U)),7);
        tracep->fullQData(oldp+238,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                             >> 9U) 
                                            & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                               >> 1U)))
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                               >> 1U)))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+240,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                             >> 8U) 
                                            & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+242,(((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                             << 0x1fU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                               >> 1U)))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+244,(((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                               >> 0x16U))))),64);
        tracep->fullQData(oldp+246,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
        tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+250,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullQData(oldp+252,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
        tracep->fullQData(oldp+254,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
        tracep->fullQData(oldp+256,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
        tracep->fullQData(oldp+258,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
        tracep->fullQData(oldp+260,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
        tracep->fullQData(oldp+262,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
        tracep->fullQData(oldp+264,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
        tracep->fullQData(oldp+266,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
        tracep->fullQData(oldp+268,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
        tracep->fullQData(oldp+270,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
        tracep->fullQData(oldp+272,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
        tracep->fullQData(oldp+274,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
        tracep->fullQData(oldp+276,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
        tracep->fullQData(oldp+278,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
        tracep->fullQData(oldp+280,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
        tracep->fullQData(oldp+282,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
        tracep->fullQData(oldp+284,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
        tracep->fullQData(oldp+288,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
        tracep->fullQData(oldp+290,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
        tracep->fullQData(oldp+298,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
        tracep->fullQData(oldp+300,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
        tracep->fullQData(oldp+302,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
        tracep->fullQData(oldp+304,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
        tracep->fullQData(oldp+306,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
        tracep->fullQData(oldp+308,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
        tracep->fullQData(oldp+310,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
        tracep->fullQData(oldp+312,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
        tracep->fullQData(oldp+316,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+318,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+320,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+326,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+328,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+332,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+334,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+336,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+338,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+340,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+342,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+344,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+346,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+348,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+350,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+352,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+354,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+356,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+358,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+360,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+362,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+370,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+372,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+374,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+378,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+380,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                          >> 5U) & 
                                         (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                             >> 7U))))));
        tracep->fullBit(oldp+381,((0U != (0x3fU & (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                   >> 8U)))));
        tracep->fullBit(oldp+382,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                          >> 6U) & 
                                         (~ (vlSelf->SimTop__DOT__top__DOT__dreq[3U] 
                                             >> 0xaU))))));
        tracep->fullCData(oldp+383,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),8);
        tracep->fullQData(oldp+384,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+386,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+388,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+390,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+398,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+400,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+402,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+404,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+406,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+408,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+412,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+414,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+416,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+418,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+420,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+422,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+424,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+426,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+428,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+430,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+432,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+434,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+436,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+438,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+440,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+442,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+444,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+446,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+448,((1U & (vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+449,((1U & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+450,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+452,((1U & vlSelf->SimTop__DOT__top__DOT__ireq[2U])));
        tracep->fullQData(oldp+453,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+455,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                          >> 3U) & 
                                         (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                          >> 2U)))));
        tracep->fullBit(oldp+456,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+457,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+458,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+459,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+461,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+462,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+464,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+465,((3U & vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+466,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+467,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+468,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+469,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+471,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+472,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+474,((0xffU & ((vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+475,((3U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+476,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+477,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+478,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+479,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+480,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+481,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+482,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+484,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+485,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+487,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+488,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+489,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+490,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+491,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+492,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+494,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+495,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+497,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+498,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+499,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+500,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+501,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+502,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+503,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+504,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+506,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+507,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+509,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+510,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+511,(vlSelf->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+512,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+513,(vlSelf->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+514,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+516,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+518,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+520,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+522,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+524,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+526,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullBit(oldp+528,(vlSelf->clock));
        tracep->fullBit(oldp+529,(vlSelf->reset));
        tracep->fullQData(oldp+530,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+532,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+534,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+536,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+537,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+538,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+539,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+540,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+541,(vlSelf->io_uart_in_ch),8);
        tracep->fullBit(oldp+542,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                          >> 8U) | (IData)(vlSelf->reset)))));
        tracep->fullBit(oldp+543,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                          >> 2U) | (IData)(vlSelf->reset)))));
        tracep->fullIData(oldp+544,(1U),32);
        tracep->fullCData(oldp+545,(0U),8);
        tracep->fullBit(oldp+546,(0U));
        tracep->fullCData(oldp+547,(0U),3);
        tracep->fullQData(oldp+548,(0ULL),64);
        tracep->fullCData(oldp+550,(3U),2);
        tracep->fullCData(oldp+551,(2U),3);
        tracep->fullCData(oldp+552,(0U),8);
        tracep->fullQData(oldp+553,(0ULL),64);
    }
}
