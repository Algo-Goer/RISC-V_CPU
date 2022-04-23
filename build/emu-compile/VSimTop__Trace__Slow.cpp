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
        tracep->declBit(c+564,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+566,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+568,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+570,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+572,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+573,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+574,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+575,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+576,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+577,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+564,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+566,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+568,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+570,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+572,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+573,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+574,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+575,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+576,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+577,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
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
        tracep->declBit(c+564,"SimTop top clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"SimTop top reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
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
        tracep->declBit(c+582,"SimTop top ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+15,"SimTop top ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+17,"SimTop top iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"SimTop top iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+19,"SimTop top iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+20,"SimTop top dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+21,"SimTop top dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+23,"SimTop top dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+24,"SimTop top dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+25,"SimTop top dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+27,"SimTop top dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
        tracep->declQuad(c+57,"SimTop top dcresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"SimTop top core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+582,"SimTop top core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+15,"SimTop top core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+17,"SimTop top core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop top core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+19,"SimTop top core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+20,"SimTop top core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+21,"SimTop top core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+23,"SimTop top core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+24,"SimTop top core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+25,"SimTop top core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+27,"SimTop top core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"SimTop top core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+29,"SimTop top core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+59,"SimTop top core pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+61,"SimTop top core pcnext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+19,"SimTop top core instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+63,"SimTop top core clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+64,"SimTop top core ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+65,"SimTop top core ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+66,"SimTop top core rd1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop top core rd2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+70,"SimTop top core memread_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+72,"SimTop top core fetch_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+73,"SimTop top core memory_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+74,"SimTop top core jump_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+75,"SimTop top core strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+19,"SimTop top core dataF\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+15,"SimTop top core dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+76,"SimTop top core dataF_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop top core dataF_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+79,"SimTop top core dataD\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+81,"SimTop top core dataD\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+82,"SimTop top core dataD\206 ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+83,"SimTop top core dataD\206 ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+84,"SimTop top core dataD\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop top core dataD\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop top core dataD\206 imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop top core dataD\206 pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop top core dataD\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"UNKNOWN", "ADDI", "ORI", "ANDI", "XORI", 
                                                "LUI", 
                                                "AUIPC", 
                                                "SLTI", 
                                                "SLTIU", 
                                                "SLLI", 
                                                "SRLI", 
                                                "SRAI", 
                                                "ADDIW", 
                                                "SLLIW", 
                                                "SRLIW", 
                                                "SRAIW", 
                                                "ADD", 
                                                "SUB", 
                                                "OR", 
                                                "AND", 
                                                "XOR", 
                                                "SLL", 
                                                "SLT", 
                                                "SLTU", 
                                                "SRL", 
                                                "SRA", 
                                                "ADDW", 
                                                "SUBW", 
                                                "SLLW", 
                                                "SRLW", 
                                                "SRAW", 
                                                "LD", 
                                                "LB", 
                                                "LH", 
                                                "LW", 
                                                "LBU", 
                                                "LHU", 
                                                "LWU", 
                                                "SD", 
                                                "SB", 
                                                "SH", 
                                                "SW", 
                                                "JAL", 
                                                "JALR", 
                                                "BEQ", 
                                                "BNE", 
                                                "BLT", 
                                                "BGE", 
                                                "BLTU", 
                                                "BGEU"};
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
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011", 
                                                "10100", 
                                                "10101", 
                                                "10110", 
                                                "10111", 
                                                "11000", 
                                                "11001", 
                                                "11010", 
                                                "11011", 
                                                "11100", 
                                                "11101", 
                                                "11110", 
                                                "11111", 
                                                "100000", 
                                                "100001", 
                                                "100010", 
                                                "100011", 
                                                "100100", 
                                                "100101", 
                                                "100110", 
                                                "100111", 
                                                "101000", 
                                                "101001", 
                                                "101010", 
                                                "101011", 
                                                "101100", 
                                                "101101", 
                                                "101110", 
                                                "101111", 
                                                "110000", 
                                                "110001"};
            tracep->declDTypeEnum(4, "pipes::decode_op_t", 50, 6, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+94,"SimTop top core dataD\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+95,"SimTop top core dataD\206 ctl\206 word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+96,"SimTop top core dataD\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+97,"SimTop top core dataD\206 ctl\206 btype",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_ADD", "ALU_SUB", "ALU_OR", "ALU_AND", 
                                                "ALU_XOR", 
                                                "ALU_EQUAL", 
                                                "ALU_NOT_EQUAL", 
                                                "ALU_LESS", 
                                                "ALU_GREATER", 
                                                "ALU_LESS_U", 
                                                "ALU_GREATER_U", 
                                                "ALU_SHIFTL", 
                                                "ALU_SHIFTR", 
                                                "ALU_SHIFTRS"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101"};
            tracep->declDTypeEnum(5, "pipes::alufunc_t", 14, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+98,"SimTop top core dataD\206 ctl\206 func",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+99,"SimTop top core dataD\206 ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+100,"SimTop top core dataD\206 ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+101,"SimTop top core dataD\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+102,"SimTop top core dataD\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+103,"SimTop top core dataD\206 ctl\206 msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+104,"SimTop top core dataD\206 ctl\206 mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+105,"SimTop top core dataD\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+106,"SimTop top core dataD\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+107,"SimTop top core dataD_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+109,"SimTop top core dataD_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+110,"SimTop top core dataD_out\206 ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+111,"SimTop top core dataD_out\206 ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop top core dataD_out\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop top core dataD_out\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+116,"SimTop top core dataD_out\206 imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+118,"SimTop top core dataD_out\206 pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+120,"SimTop top core dataD_out\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+122,"SimTop top core dataD_out\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+123,"SimTop top core dataD_out\206 ctl\206 word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+124,"SimTop top core dataD_out\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+125,"SimTop top core dataD_out\206 ctl\206 btype",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+126,"SimTop top core dataD_out\206 ctl\206 func",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+127,"SimTop top core dataD_out\206 ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+128,"SimTop top core dataD_out\206 ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+129,"SimTop top core dataD_out\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+130,"SimTop top core dataD_out\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+131,"SimTop top core dataD_out\206 ctl\206 msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+132,"SimTop top core dataD_out\206 ctl\206 mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"SimTop top core dataD_out\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+134,"SimTop top core dataD_out\206 ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+135,"SimTop top core dataE\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+137,"SimTop top core dataE\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+138,"SimTop top core dataE\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop top core dataE\206 j_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop top core dataE\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop top core dataE\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+145,"SimTop top core dataE\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+63,"SimTop top core dataE\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+146,"SimTop top core dataE\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+147,"SimTop top core dataE\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+148,"SimTop top core dataE\206 ctl\206 msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+149,"SimTop top core dataE\206 ctl\206 mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+150,"SimTop top core dataE\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+151,"SimTop top core dataE_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop top core dataE_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+154,"SimTop top core dataE_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+155,"SimTop top core dataE_out\206 j_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+157,"SimTop top core dataE_out\206 memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+159,"SimTop top core dataE_out\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+161,"SimTop top core dataE_out\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+162,"SimTop top core dataE_out\206 ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+163,"SimTop top core dataE_out\206 ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+164,"SimTop top core dataE_out\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+165,"SimTop top core dataE_out\206 ctl\206 msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+166,"SimTop top core dataE_out\206 ctl\206 mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+167,"SimTop top core dataE_out\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+168,"SimTop top core dataM\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+170,"SimTop top core dataM\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+171,"SimTop top core dataM\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+172,"SimTop top core dataM\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+173,"SimTop top core dataM\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+174,"SimTop top core dataM\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+175,"SimTop top core dataM\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+177,"SimTop top core dataM\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+178,"SimTop top core dataM\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+180,"SimTop top core dataM_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+182,"SimTop top core dataM_out\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+183,"SimTop top core dataM_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+184,"SimTop top core dataM_out\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+185,"SimTop top core dataM_out\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+186,"SimTop top core dataM_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+187,"SimTop top core dataM_out\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+189,"SimTop top core dataM_out\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+190,"SimTop top core dataM_out\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+192,"SimTop top core dataW\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+194,"SimTop top core dataW\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+195,"SimTop top core dataW\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+196,"SimTop top core dataW\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+197,"SimTop top core dataW\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+198,"SimTop top core dataW\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+200,"SimTop top core dataW\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+201,"SimTop top core dataW\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+202,"SimTop top core dataW\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+204,"SimTop top core dataW_out\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+206,"SimTop top core dataW_out\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+207,"SimTop top core dataW_out\206 instruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+208,"SimTop top core dataW_out\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+209,"SimTop top core dataW_out\206 skip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+210,"SimTop top core dataW_out\206 address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+212,"SimTop top core dataW_out\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+213,"SimTop top core dataW_out\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+214,"SimTop top core dataW_out\206 regdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+216,"SimTop top core forward_execute\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+217,"SimTop top core forward_execute\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+218,"SimTop top core forward_execute\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+220,"SimTop top core forward_memory\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+221,"SimTop top core forward_memory\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+222,"SimTop top core forward_memory\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+224,"SimTop top core forward_writeback\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+225,"SimTop top core forward_writeback\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+226,"SimTop top core forward_writeback\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+228,"SimTop top core hazardOut\206 stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+229,"SimTop top core hazardOut\206 clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+230,"SimTop top core hazardOut\206 srca_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+231,"SimTop top core hazardOut\206 srca_forward",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop top core hazardOut\206 srcb_mux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+234,"SimTop top core hazardOut\206 srcb_forward",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+63,"SimTop top core pcselect jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+236,"SimTop top core pcselect pcplus4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+139,"SimTop top core pcselect j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+61,"SimTop top core pcselect pcselected",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+19,"SimTop top core fetch instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+59,"SimTop top core fetch pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+19,"SimTop top core fetch dataF\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+15,"SimTop top core fetch dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core fetch_decode clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+578,"SimTop top core fetch_decode reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"SimTop top core fetch_decode stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+19,"SimTop top core fetch_decode dataF\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+15,"SimTop top core fetch_decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+76,"SimTop top core fetch_decode dataF_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop top core fetch_decode dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+76,"SimTop top core decode dataF\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+77,"SimTop top core decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+66,"SimTop top core decode rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop top core decode rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+64,"SimTop top core decode ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+65,"SimTop top core decode ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+79,"SimTop top core decode dataD\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+81,"SimTop top core decode dataD\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+82,"SimTop top core decode dataD\206 ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+83,"SimTop top core decode dataD\206 ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+84,"SimTop top core decode dataD\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop top core decode dataD\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop top core decode dataD\206 imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop top core decode dataD\206 pcdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop top core decode dataD\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+94,"SimTop top core decode dataD\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+95,"SimTop top core decode dataD\206 ctl\206 word",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+96,"SimTop top core decode dataD\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"SimTop top core decode dataD\206 ctl\206 btype",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+98,"SimTop top core decode dataD\206 ctl\206 func",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+99,"SimTop top core decode dataD\206 ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"SimTop top core decode dataD\206 ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"SimTop top core decode dataD\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+102,"SimTop top core decode dataD\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+103,"SimTop top core decode dataD\206 ctl\206 msize",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+104,"SimTop top core decode dataD\206 ctl\206 mem_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+105,"SimTop top core decode dataD\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"SimTop top core decode dataD\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+239,"SimTop top core decode imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+241,"SimTop top core decode ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+242,"SimTop top core decode ctl\206 word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+243,"SimTop top core decode ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+244,"SimTop top core decode ctl\206 btype",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+245,"SimTop top core decode ctl\206 func",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+246,"SimTop top core decode ctl\206 srca_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+247,"SimTop top core decode ctl\206 srcb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+248,"SimTop top core decode ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+249,"SimTop top core decode ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+250,"SimTop top core decode ctl\206 msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+251,"SimTop top core decode ctl\206 mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+252,"SimTop top core decode ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+253,"SimTop top core decode ctl\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+254,"SimTop top core decode srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+256,"SimTop top core decode srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+76,"SimTop top core decode decoder instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+241,"SimTop top core decode decoder ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+242,"SimTop top core decode decoder ctl\206 word",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+243,"SimTop top core decode decoder ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+244,"SimTop top core decode decoder ctl\206 btype",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+245,"SimTop top core decode decoder ctl\206 func",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+246,"SimTop top core decode decoder ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+247,"SimTop top core decode decoder ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+248,"SimTop top core decode decoder ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+249,"SimTop top core decode decoder ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+250,"SimTop top core decode decoder ctl\206 msize",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+251,"SimTop top core decode decoder ctl\206 mem_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+252,"SimTop top core decode decoder ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+253,"SimTop top core decode decoder ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+258,"SimTop top core decode decoder f7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+259,"SimTop top core decode decoder f3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+260,"SimTop top core decode decoder func7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+261,"SimTop top core decode decoder func6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+76,"SimTop top core decode extend instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+241,"SimTop top core decode extend op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+239,"SimTop top core decode extend sextimm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+239,"SimTop top core decode extend imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+77,"SimTop top core decode dataconfirm pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+241,"SimTop top core decode dataconfirm op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+66,"SimTop top core decode dataconfirm rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+68,"SimTop top core decode dataconfirm rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+239,"SimTop top core decode dataconfirm imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop top core decode dataconfirm srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+256,"SimTop top core decode dataconfirm srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop top core decode dataconfirm data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+256,"SimTop top core decode dataconfirm data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core decode_execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+579,"SimTop top core decode_execute reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+262,"SimTop top core decode_execute stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+79,"SimTop top core decode_execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+81,"SimTop top core decode_execute dataD\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+82,"SimTop top core decode_execute dataD\206 ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+83,"SimTop top core decode_execute dataD\206 ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+84,"SimTop top core decode_execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+86,"SimTop top core decode_execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+88,"SimTop top core decode_execute dataD\206 imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop top core decode_execute dataD\206 pcdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop top core decode_execute dataD\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+94,"SimTop top core decode_execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+95,"SimTop top core decode_execute dataD\206 ctl\206 word",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+96,"SimTop top core decode_execute dataD\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+97,"SimTop top core decode_execute dataD\206 ctl\206 btype",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+98,"SimTop top core decode_execute dataD\206 ctl\206 func",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+99,"SimTop top core decode_execute dataD\206 ctl\206 srca_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"SimTop top core decode_execute dataD\206 ctl\206 srcb_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"SimTop top core decode_execute dataD\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+102,"SimTop top core decode_execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+103,"SimTop top core decode_execute dataD\206 ctl\206 msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+104,"SimTop top core decode_execute dataD\206 ctl\206 mem_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+105,"SimTop top core decode_execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"SimTop top core decode_execute dataD\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+107,"SimTop top core decode_execute dataD_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+109,"SimTop top core decode_execute dataD_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+110,"SimTop top core decode_execute dataD_out\206 ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+111,"SimTop top core decode_execute dataD_out\206 ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop top core decode_execute dataD_out\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop top core decode_execute dataD_out\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+116,"SimTop top core decode_execute dataD_out\206 imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+118,"SimTop top core decode_execute dataD_out\206 pcdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+120,"SimTop top core decode_execute dataD_out\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+122,"SimTop top core decode_execute dataD_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+123,"SimTop top core decode_execute dataD_out\206 ctl\206 word",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+124,"SimTop top core decode_execute dataD_out\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+125,"SimTop top core decode_execute dataD_out\206 ctl\206 btype",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+126,"SimTop top core decode_execute dataD_out\206 ctl\206 func",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+127,"SimTop top core decode_execute dataD_out\206 ctl\206 srca_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+128,"SimTop top core decode_execute dataD_out\206 ctl\206 srcb_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+129,"SimTop top core decode_execute dataD_out\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+130,"SimTop top core decode_execute dataD_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+131,"SimTop top core decode_execute dataD_out\206 ctl\206 msize",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+132,"SimTop top core decode_execute dataD_out\206 ctl\206 mem_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"SimTop top core decode_execute dataD_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+134,"SimTop top core decode_execute dataD_out\206 ctl\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+107,"SimTop top core execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+109,"SimTop top core execute dataD\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+110,"SimTop top core execute dataD\206 ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+111,"SimTop top core execute dataD\206 ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop top core execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop top core execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+116,"SimTop top core execute dataD\206 imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+118,"SimTop top core execute dataD\206 pcdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+120,"SimTop top core execute dataD\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+122,"SimTop top core execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+123,"SimTop top core execute dataD\206 ctl\206 word",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+124,"SimTop top core execute dataD\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+125,"SimTop top core execute dataD\206 ctl\206 btype",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+126,"SimTop top core execute dataD\206 ctl\206 func",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+127,"SimTop top core execute dataD\206 ctl\206 srca_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+128,"SimTop top core execute dataD\206 ctl\206 srcb_r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+129,"SimTop top core execute dataD\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+130,"SimTop top core execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+131,"SimTop top core execute dataD\206 ctl\206 msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+132,"SimTop top core execute dataD\206 ctl\206 mem_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"SimTop top core execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+134,"SimTop top core execute dataD\206 ctl\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+230,"SimTop top core execute rs1_mux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+231,"SimTop top core execute rs1_forward",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop top core execute rs2_mux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+234,"SimTop top core execute rs2_forward",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+135,"SimTop top core execute dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+137,"SimTop top core execute dataE\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+138,"SimTop top core execute dataE\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop top core execute dataE\206 j_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop top core execute dataE\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop top core execute dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+145,"SimTop top core execute dataE\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+63,"SimTop top core execute dataE\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop top core execute dataE\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+147,"SimTop top core execute dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+148,"SimTop top core execute dataE\206 ctl\206 msize",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+149,"SimTop top core execute dataE\206 ctl\206 mem_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+150,"SimTop top core execute dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+263,"SimTop top core execute srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+265,"SimTop top core execute srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+267,"SimTop top core execute pcdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+269,"SimTop top core execute memdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+271,"SimTop top core execute result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+263,"SimTop top core execute alu a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+265,"SimTop top core execute alu b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+126,"SimTop top core execute alu alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+123,"SimTop top core execute alu word",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+271,"SimTop top core execute alu c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+273,"SimTop top core execute alu srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+275,"SimTop top core execute alu srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+277,"SimTop top core execute alu result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core execute_memory clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+580,"SimTop top core execute_memory reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"SimTop top core execute_memory stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+135,"SimTop top core execute_memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+137,"SimTop top core execute_memory dataE\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+138,"SimTop top core execute_memory dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop top core execute_memory dataE\206 j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop top core execute_memory dataE\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop top core execute_memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+145,"SimTop top core execute_memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+63,"SimTop top core execute_memory dataE\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+146,"SimTop top core execute_memory dataE\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+147,"SimTop top core execute_memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+148,"SimTop top core execute_memory dataE\206 ctl\206 msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+149,"SimTop top core execute_memory dataE\206 ctl\206 mem_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+150,"SimTop top core execute_memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+151,"SimTop top core execute_memory dataE_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop top core execute_memory dataE_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+154,"SimTop top core execute_memory dataE_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+155,"SimTop top core execute_memory dataE_out\206 j_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+157,"SimTop top core execute_memory dataE_out\206 memdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+159,"SimTop top core execute_memory dataE_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+161,"SimTop top core execute_memory dataE_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+162,"SimTop top core execute_memory dataE_out\206 ctl\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop top core execute_memory dataE_out\206 ctl\206 memread",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+164,"SimTop top core execute_memory dataE_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+165,"SimTop top core execute_memory dataE_out\206 ctl\206 msize",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+166,"SimTop top core execute_memory dataE_out\206 ctl\206 mem_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+167,"SimTop top core execute_memory dataE_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+151,"SimTop top core memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+153,"SimTop top core memory dataE\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+154,"SimTop top core memory dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+155,"SimTop top core memory dataE\206 j_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+157,"SimTop top core memory dataE\206 memdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+159,"SimTop top core memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+161,"SimTop top core memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+162,"SimTop top core memory dataE\206 ctl\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop top core memory dataE\206 ctl\206 memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+164,"SimTop top core memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+165,"SimTop top core memory dataE\206 ctl\206 msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+166,"SimTop top core memory dataE\206 ctl\206 mem_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+167,"SimTop top core memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+70,"SimTop top core memory memread_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+168,"SimTop top core memory dataM\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+170,"SimTop top core memory dataM\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+171,"SimTop top core memory dataM\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+172,"SimTop top core memory dataM\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+173,"SimTop top core memory dataM\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+174,"SimTop top core memory dataM\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+175,"SimTop top core memory dataM\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+177,"SimTop top core memory dataM\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+178,"SimTop top core memory dataM\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+161,"SimTop top core memory ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+162,"SimTop top core memory ctl\206 jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+163,"SimTop top core memory ctl\206 memread",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+164,"SimTop top core memory ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+165,"SimTop top core memory ctl\206 msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+166,"SimTop top core memory ctl\206 mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+167,"SimTop top core memory ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+564,"SimTop top core memory_writeback clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+581,"SimTop top core memory_writeback reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+168,"SimTop top core memory_writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+170,"SimTop top core memory_writeback dataM\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+171,"SimTop top core memory_writeback dataM\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+172,"SimTop top core memory_writeback dataM\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+173,"SimTop top core memory_writeback dataM\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+174,"SimTop top core memory_writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+175,"SimTop top core memory_writeback dataM\206 regdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+177,"SimTop top core memory_writeback dataM\206 skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+178,"SimTop top core memory_writeback dataM\206 address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+180,"SimTop top core memory_writeback dataM_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+182,"SimTop top core memory_writeback dataM_out\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+183,"SimTop top core memory_writeback dataM_out\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+184,"SimTop top core memory_writeback dataM_out\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+185,"SimTop top core memory_writeback dataM_out\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+186,"SimTop top core memory_writeback dataM_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+187,"SimTop top core memory_writeback dataM_out\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+189,"SimTop top core memory_writeback dataM_out\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+190,"SimTop top core memory_writeback dataM_out\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+180,"SimTop top core writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+182,"SimTop top core writeback dataM\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+183,"SimTop top core writeback dataM\206 instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+184,"SimTop top core writeback dataM\206 jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+185,"SimTop top core writeback dataM\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+186,"SimTop top core writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+187,"SimTop top core writeback dataM\206 regdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+189,"SimTop top core writeback dataM\206 skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+190,"SimTop top core writeback dataM\206 address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+192,"SimTop top core writeback dataW\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+194,"SimTop top core writeback dataW\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+195,"SimTop top core writeback dataW\206 instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+196,"SimTop top core writeback dataW\206 jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+197,"SimTop top core writeback dataW\206 skip",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+198,"SimTop top core writeback dataW\206 address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+200,"SimTop top core writeback dataW\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop top core writeback dataW\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+202,"SimTop top core writeback dataW\206 regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"SimTop top core regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+64,"SimTop top core regfile ra1(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+65,"SimTop top core regfile ra2(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+279,"SimTop top core regfile rd1(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+281,"SimTop top core regfile rd2(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+201,"SimTop top core regfile wa(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+200,"SimTop top core regfile wvalid(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+202,"SimTop top core regfile wd(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+283,"SimTop top core regfile regs(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+285,"SimTop top core regfile regs(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+287,"SimTop top core regfile regs(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+289,"SimTop top core regfile regs(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+291,"SimTop top core regfile regs(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+293,"SimTop top core regfile regs(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+295,"SimTop top core regfile regs(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+297,"SimTop top core regfile regs(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+299,"SimTop top core regfile regs(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+301,"SimTop top core regfile regs(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop top core regfile regs(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+305,"SimTop top core regfile regs(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+307,"SimTop top core regfile regs(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+309,"SimTop top core regfile regs(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop top core regfile regs(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+313,"SimTop top core regfile regs(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+315,"SimTop top core regfile regs(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+317,"SimTop top core regfile regs(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+319,"SimTop top core regfile regs(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+321,"SimTop top core regfile regs(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+323,"SimTop top core regfile regs(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+325,"SimTop top core regfile regs(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+327,"SimTop top core regfile regs(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+329,"SimTop top core regfile regs(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+331,"SimTop top core regfile regs(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+333,"SimTop top core regfile regs(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop top core regfile regs(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+337,"SimTop top core regfile regs(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+339,"SimTop top core regfile regs(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+341,"SimTop top core regfile regs(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop top core regfile regs(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+345,"SimTop top core regfile regs(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+347,"SimTop top core regfile regs_nxt(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+349,"SimTop top core regfile regs_nxt(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+351,"SimTop top core regfile regs_nxt(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+353,"SimTop top core regfile regs_nxt(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+355,"SimTop top core regfile regs_nxt(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+357,"SimTop top core regfile regs_nxt(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+359,"SimTop top core regfile regs_nxt(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+361,"SimTop top core regfile regs_nxt(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+363,"SimTop top core regfile regs_nxt(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop top core regfile regs_nxt(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop top core regfile regs_nxt(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+369,"SimTop top core regfile regs_nxt(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop top core regfile regs_nxt(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+373,"SimTop top core regfile regs_nxt(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+375,"SimTop top core regfile regs_nxt(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+377,"SimTop top core regfile regs_nxt(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+379,"SimTop top core regfile regs_nxt(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+381,"SimTop top core regfile regs_nxt(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+383,"SimTop top core regfile regs_nxt(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+385,"SimTop top core regfile regs_nxt(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+387,"SimTop top core regfile regs_nxt(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+389,"SimTop top core regfile regs_nxt(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+391,"SimTop top core regfile regs_nxt(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+393,"SimTop top core regfile regs_nxt(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+395,"SimTop top core regfile regs_nxt(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+397,"SimTop top core regfile regs_nxt(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+399,"SimTop top core regfile regs_nxt(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+401,"SimTop top core regfile regs_nxt(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+403,"SimTop top core regfile regs_nxt(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+405,"SimTop top core regfile regs_nxt(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+407,"SimTop top core regfile regs_nxt(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+409,"SimTop top core regfile regs_nxt(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[1] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[2] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[3] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[4] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[5] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[6] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[7] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[8] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[9] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[10] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[11] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[12] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[13] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[14] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[15] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[16] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[17] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[18] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[19] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[20] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[21] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[22] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[23] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[24] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[25] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[26] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[27] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[28] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[29] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[30] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+583,"SimTop top core regfile genblk2[31] unnamedblk1 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+564,"SimTop top core forward1 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+411,"SimTop top core forward1 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+412,"SimTop top core forward1 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+138,"SimTop top core forward1 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+143,"SimTop top core forward1 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+216,"SimTop top core forward1 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+217,"SimTop top core forward1 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+218,"SimTop top core forward1 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core forward2 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+413,"SimTop top core forward2 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+173,"SimTop top core forward2 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+174,"SimTop top core forward2 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+175,"SimTop top core forward2 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+220,"SimTop top core forward2 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+221,"SimTop top core forward2 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+222,"SimTop top core forward2 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core forward3 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+414,"SimTop top core forward3 stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+200,"SimTop top core forward3 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop top core forward3 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+202,"SimTop top core forward3 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+224,"SimTop top core forward3 dataForward\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+225,"SimTop top core forward3 dataForward\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+226,"SimTop top core forward3 dataForward\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+173,"SimTop top core hazard regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop top core hazard memread",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"SimTop top core hazard rs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+111,"SimTop top core hazard rt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+174,"SimTop top core hazard dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+216,"SimTop top core hazard forward_execute\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+217,"SimTop top core hazard forward_execute\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+218,"SimTop top core hazard forward_execute\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+220,"SimTop top core hazard forward_memory\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+221,"SimTop top core hazard forward_memory\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+222,"SimTop top core hazard forward_memory\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+224,"SimTop top core hazard forward_writeback\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+225,"SimTop top core hazard forward_writeback\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+226,"SimTop top core hazard forward_writeback\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+228,"SimTop top core hazard hazardOut\206 stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+229,"SimTop top core hazard hazardOut\206 clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+230,"SimTop top core hazard hazardOut\206 srca_mux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+231,"SimTop top core hazard hazardOut\206 srca_forward",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop top core hazard hazardOut\206 srcb_mux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+234,"SimTop top core hazard hazardOut\206 srcb_forward",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+63,"SimTop top core controller jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"SimTop top core controller clear",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+70,"SimTop top core readdata rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+415,"SimTop top core readdata addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+165,"SimTop top core readdata msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+166,"SimTop top core readdata mem_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+416,"SimTop top core readdata sign_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+415,"SimTop top core writedata addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+165,"SimTop top core writedata msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+417,"SimTop top core writedata wd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+75,"SimTop top core writedata strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+564,"SimTop top core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+584,"SimTop top core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+584,"SimTop top core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+419,"SimTop top core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+192,"SimTop top core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+195,"SimTop top core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+420,"SimTop top core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+585,"SimTop top core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+585,"SimTop top core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+200,"SimTop top core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+421,"SimTop top core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+202,"SimTop top core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+584,"SimTop top core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+422,"SimTop top core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+424,"SimTop top core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+426,"SimTop top core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+428,"SimTop top core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+430,"SimTop top core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+432,"SimTop top core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+434,"SimTop top core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+436,"SimTop top core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop top core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+440,"SimTop top core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+442,"SimTop top core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+444,"SimTop top core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+446,"SimTop top core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+448,"SimTop top core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+450,"SimTop top core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+452,"SimTop top core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+454,"SimTop top core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+456,"SimTop top core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+458,"SimTop top core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+460,"SimTop top core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+462,"SimTop top core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+464,"SimTop top core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+466,"SimTop top core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+468,"SimTop top core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+470,"SimTop top core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+472,"SimTop top core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+474,"SimTop top core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+476,"SimTop top core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+478,"SimTop top core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+480,"SimTop top core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+482,"SimTop top core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+484,"SimTop top core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+584,"SimTop top core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+585,"SimTop top core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+586,"SimTop top core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+587,"SimTop top core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+584,"SimTop top core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+589,"SimTop top core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+564,"SimTop top core DifftestArchFpRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+584,"SimTop top core DifftestArchFpRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop top core DifftestArchFpRegState fpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+582,"SimTop top icvt ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+15,"SimTop top icvt ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+17,"SimTop top icvt iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop top icvt iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+19,"SimTop top icvt iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
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
        tracep->declBit(c+486,"SimTop top icvt dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+487,"SimTop top icvt dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+488,"SimTop top icvt dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+582,"SimTop top icvt inst dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+15,"SimTop top icvt inst dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+590,"SimTop top icvt inst dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+591,"SimTop top icvt inst dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+592,"SimTop top icvt inst dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+486,"SimTop top icvt inst dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+487,"SimTop top icvt inst dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+488,"SimTop top icvt inst dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
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
        tracep->declBit(c+490,"SimTop top icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+20,"SimTop top dcvt dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+21,"SimTop top dcvt dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+23,"SimTop top dcvt dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+24,"SimTop top dcvt dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+25,"SimTop top dcvt dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+27,"SimTop top dcvt dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
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
        tracep->declQuad(c+57,"SimTop top dcvt dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+491,"SimTop top dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+564,"SimTop top mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"SimTop top mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+492,"SimTop top mux ireqs(0)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+493,"SimTop top mux ireqs(0)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+494,"SimTop top mux ireqs(0)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+495,"SimTop top mux ireqs(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+497,"SimTop top mux ireqs(0)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+498,"SimTop top mux ireqs(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+500,"SimTop top mux ireqs(0)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+501,"SimTop top mux ireqs(0)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+502,"SimTop top mux ireqs(1)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+503,"SimTop top mux ireqs(1)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+504,"SimTop top mux ireqs(1)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+505,"SimTop top mux ireqs(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+507,"SimTop top mux ireqs(1)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+508,"SimTop top mux ireqs(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+510,"SimTop top mux ireqs(1)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+511,"SimTop top mux ireqs(1)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop top mux iresps(0)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop top mux iresps(0)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop top mux iresps(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
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
        tracep->declBit(c+512,"SimTop top mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+513,"SimTop top mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+514,"SimTop top mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+515,"SimTop top mux saved_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+516,"SimTop top mux saved_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+517,"SimTop top mux saved_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+518,"SimTop top mux saved_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+520,"SimTop top mux saved_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+521,"SimTop top mux saved_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+523,"SimTop top mux saved_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+524,"SimTop top mux saved_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+525,"SimTop top mux selected_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+526,"SimTop top mux selected_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+527,"SimTop top mux selected_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+528,"SimTop top mux selected_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+530,"SimTop top mux selected_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+531,"SimTop top mux selected_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+533,"SimTop top mux selected_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+534,"SimTop top mux selected_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+535,"SimTop top mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+536,"SimTop top mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+564,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
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
        tracep->declBit(c+537,"SimTop ram saved_oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+538,"SimTop ram saved_oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+539,"SimTop ram saved_oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+540,"SimTop ram saved_oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+542,"SimTop ram saved_oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+543,"SimTop ram saved_oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+545,"SimTop ram saved_oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+546,"SimTop ram saved_oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(6, "RAMHelper2.__typeimpenum22", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+547,"SimTop ram state",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+548,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+549,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+550,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+552,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+554,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+556,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+558,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+560,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+562,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
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
        tracep->fullQData(oldp+15,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
        tracep->fullBit(oldp+17,((1U & (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+18,((1U & (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+19,((IData)(vlSelf->SimTop__DOT__top__DOT__iresp)),32);
        tracep->fullBit(oldp+20,((1U & (vlSelf->SimTop__DOT__top__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+21,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+23,((7U & (vlSelf->SimTop__DOT__top__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+24,((0xffU & vlSelf->SimTop__DOT__top__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+25,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+27,((1U & (vlSelf->SimTop__DOT__top__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+28,((1U & vlSelf->SimTop__DOT__top__DOT__dresp[2U])));
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__dresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__dresp[0U])))),64);
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
        tracep->fullQData(oldp+57,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullQData(oldp+59,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
        tracep->fullQData(oldp+61,(((0x80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                              >> 0xeU)))
                                     : (4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc))),64);
        tracep->fullBit(oldp+63,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                        >> 7U))));
        tracep->fullCData(oldp+64,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+65,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+66,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+68,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullQData(oldp+70,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd),64);
        tracep->fullBit(oldp+72,((1U & (~ (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                                   >> 0x20U))))));
        tracep->fullBit(oldp+73,(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay));
        tracep->fullBit(oldp+74,(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay));
        tracep->fullCData(oldp+75,(vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe),8);
        tracep->fullIData(oldp+76,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]),32);
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))),64);
        tracep->fullQData(oldp+79,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xeU])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU])) 
                                                     >> 6U)))),64);
        tracep->fullIData(oldp+81,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU] 
                                     << 0x1aU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
                                                  >> 6U))),32);
        tracep->fullCData(oldp+82,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
                                             >> 1U))),5);
        tracep->fullCData(oldp+83,((0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
                                              << 4U) 
                                             | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
                                                >> 0x1cU)))),5);
        tracep->fullQData(oldp+84,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                                     >> 0x1cU)))),64);
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                                     >> 0x1cU)))),64);
        tracep->fullQData(oldp+88,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                                     >> 0x1cU)))),64);
        tracep->fullQData(oldp+90,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                                     >> 0x1cU)))),64);
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])) 
                                                     >> 0x1cU)))),64);
        tracep->fullCData(oldp+94,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                             >> 0x16U))),6);
        tracep->fullBit(oldp+95,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+96,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+97,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 0x13U))));
        tracep->fullCData(oldp+98,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                             >> 0xeU))),5);
        tracep->fullBit(oldp+99,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                        >> 0xdU))));
        tracep->fullBit(oldp+100,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+101,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+102,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+103,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 7U))),3);
        tracep->fullBit(oldp+104,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+105,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+106,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])),5);
        tracep->fullQData(oldp+107,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])) 
                                                      >> 6U)))),64);
        tracep->fullIData(oldp+109,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                                      << 0x1aU) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                   >> 6U))),32);
        tracep->fullCData(oldp+110,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                              >> 1U))),5);
        tracep->fullCData(oldp+111,((0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                               << 4U) 
                                              | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                 >> 0x1cU)))),5);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+114,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+116,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+118,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullCData(oldp+122,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                              >> 0x16U))),6);
        tracep->fullBit(oldp+123,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+124,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+125,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+126,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                              >> 0xeU))),5);
        tracep->fullBit(oldp+127,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+128,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+129,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+130,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+131,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                           >> 7U))),3);
        tracep->fullBit(oldp+132,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+133,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+134,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])),5);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U])) 
                                                      >> 0x13U)))),64);
        tracep->fullIData(oldp+137,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U] 
                                      << 0xdU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                                  >> 0x13U))),32);
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                              >> 0xeU))),5);
        tracep->fullQData(oldp+139,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                                      >> 0xeU)))),64);
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                                      >> 0xeU)))),64);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+145,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                              >> 8U))),6);
        tracep->fullBit(oldp+146,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+147,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+148,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+149,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+150,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])));
        tracep->fullQData(oldp+151,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                      >> 0x13U)))),64);
        tracep->fullIData(oldp+153,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                      << 0xdU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                  >> 0x13U))),32);
        tracep->fullCData(oldp+154,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                              >> 0xeU))),5);
        tracep->fullQData(oldp+155,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[5U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                                      >> 0xeU)))),64);
        tracep->fullQData(oldp+157,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                      >> 0xeU)))),64);
        tracep->fullQData(oldp+159,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+161,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                              >> 8U))),6);
        tracep->fullBit(oldp+162,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 7U))));
        tracep->fullBit(oldp+163,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 6U))));
        tracep->fullBit(oldp+164,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+165,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+166,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+167,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])));
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+170,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+171,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+172,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+173,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+174,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+177,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])));
        tracep->fullQData(oldp+178,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U])))),64);
        tracep->fullQData(oldp+180,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+182,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+183,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+184,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+185,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+186,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+187,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+189,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])));
        tracep->fullQData(oldp+190,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U])))),64);
        tracep->fullQData(oldp+192,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+194,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+195,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+196,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+197,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                         >> 6U))));
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+200,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+201,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),5);
        tracep->fullQData(oldp+202,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U])))),64);
        tracep->fullQData(oldp+204,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[7U])) 
                                      << 0x32U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[6U])) 
                                                    << 0x12U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U])) 
                                                      >> 0xeU)))),64);
        tracep->fullCData(oldp+206,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                              >> 8U))),6);
        tracep->fullIData(oldp+207,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                      << 0x18U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                                   >> 8U))),32);
        tracep->fullBit(oldp+208,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+209,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                         >> 6U))));
        tracep->fullQData(oldp+210,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[3U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+212,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+213,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])),5);
        tracep->fullQData(oldp+214,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[0U])))),64);
        tracep->fullBit(oldp+216,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+217,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U])),5);
        tracep->fullQData(oldp+218,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U])))),64);
        tracep->fullBit(oldp+220,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+221,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U])),5);
        tracep->fullQData(oldp+222,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U])))),64);
        tracep->fullBit(oldp+224,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+225,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U])),5);
        tracep->fullQData(oldp+226,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U])))),64);
        tracep->fullBit(oldp+228,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                         >> 3U))));
        tracep->fullBit(oldp+229,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                         >> 2U))));
        tracep->fullBit(oldp+230,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                         >> 1U))));
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+233,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])));
        tracep->fullQData(oldp+234,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))),64);
        tracep->fullQData(oldp+236,((4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc)),64);
        tracep->fullBit(oldp+238,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                          >> 3U) | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)))));
        tracep->fullQData(oldp+239,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
        tracep->fullCData(oldp+241,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0x16U))),6);
        tracep->fullBit(oldp+242,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x15U))));
        tracep->fullBit(oldp+243,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x14U))));
        tracep->fullBit(oldp+244,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x13U))));
        tracep->fullCData(oldp+245,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0xeU))),5);
        tracep->fullBit(oldp+246,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0xdU))));
        tracep->fullBit(oldp+247,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0xcU))));
        tracep->fullBit(oldp+248,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0xbU))));
        tracep->fullBit(oldp+249,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0xaU))));
        tracep->fullCData(oldp+250,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                           >> 7U))),3);
        tracep->fullBit(oldp+251,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 6U))));
        tracep->fullBit(oldp+252,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 5U))));
        tracep->fullCData(oldp+253,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)),5);
        tracep->fullQData(oldp+254,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
        tracep->fullQData(oldp+256,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
        tracep->fullCData(oldp+258,((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])),7);
        tracep->fullCData(oldp+259,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+260,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+261,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                     >> 0x1aU)),6);
        tracep->fullBit(oldp+262,((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                           >> 3U) | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)) 
                                         | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)))));
        tracep->fullQData(oldp+263,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                             >> 0xdU) 
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
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                               >> 0x1cU))))),64);
        tracep->fullQData(oldp+265,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                             >> 0xcU) 
                                            & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                      ? ((((0x15U == 
                                            (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                >> 0x16U))) 
                                           | (0x18U 
                                              == (0x3fU 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                     >> 0x16U)))) 
                                          | (0x19U 
                                             == (0x3fU 
                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                    >> 0x16U))))
                                          ? (QData)((IData)(
                                                            (0x3fU 
                                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                          : ((((0x1cU 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                    >> 0x16U))) 
                                               | (0x1dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                      >> 0x16U)))) 
                                              | (0x1eU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                     >> 0x16U))))
                                              ? (QData)((IData)(
                                                                (0x1fU 
                                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                               >> 0x1cU))))),64);
        tracep->fullQData(oldp+267,(((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
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
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                               >> 0x1cU))))),64);
        tracep->fullQData(oldp+269,(((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                                      ? (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                               >> 0x1cU))))),64);
        tracep->fullQData(oldp+271,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
        tracep->fullQData(oldp+273,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca),64);
        tracep->fullQData(oldp+275,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb),64);
        tracep->fullQData(oldp+277,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__result),64);
        tracep->fullQData(oldp+279,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+281,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullQData(oldp+283,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
        tracep->fullQData(oldp+287,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
        tracep->fullQData(oldp+291,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
        tracep->fullQData(oldp+293,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
        tracep->fullQData(oldp+295,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
        tracep->fullQData(oldp+297,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
        tracep->fullQData(oldp+299,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
        tracep->fullQData(oldp+301,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
        tracep->fullQData(oldp+303,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
        tracep->fullQData(oldp+305,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
        tracep->fullQData(oldp+307,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
        tracep->fullQData(oldp+309,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
        tracep->fullQData(oldp+311,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
        tracep->fullQData(oldp+313,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
        tracep->fullQData(oldp+315,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
        tracep->fullQData(oldp+317,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
        tracep->fullQData(oldp+321,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
        tracep->fullQData(oldp+327,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
        tracep->fullQData(oldp+331,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
        tracep->fullQData(oldp+333,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
        tracep->fullQData(oldp+335,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
        tracep->fullQData(oldp+337,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
        tracep->fullQData(oldp+339,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
        tracep->fullQData(oldp+341,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
        tracep->fullQData(oldp+343,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
        tracep->fullQData(oldp+345,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
        tracep->fullQData(oldp+347,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+349,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+351,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+353,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+355,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+357,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+359,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+361,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+363,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+365,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+367,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+369,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+371,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+373,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+375,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+377,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+379,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+381,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+385,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+387,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+389,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+391,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+393,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+395,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+397,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+399,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+401,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+403,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+405,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+407,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+409,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+411,((1U & ((((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 3U) 
                                           | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)) 
                                          | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)) 
                                         | (0U == (0x3fU 
                                                   & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                                      >> 8U)))))));
        tracep->fullBit(oldp+412,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                               >> 6U))))));
        tracep->fullBit(oldp+413,(((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay) 
                                   | (0U == (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+414,((0U == (0x3fU & (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                   >> 8U)))));
        tracep->fullCData(oldp+415,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+416,(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit));
        tracep->fullQData(oldp+417,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd),64);
        tracep->fullBit(oldp+419,((0U != (0x3fU & (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                   >> 8U)))));
        tracep->fullBit(oldp+420,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                          >> 6U) & 
                                         (~ (vlSelf->SimTop__DOT__top__DOT__dreq[3U] 
                                             >> 0xaU))))));
        tracep->fullCData(oldp+421,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),8);
        tracep->fullQData(oldp+422,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
        tracep->fullQData(oldp+424,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
        tracep->fullQData(oldp+426,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
        tracep->fullQData(oldp+428,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
        tracep->fullQData(oldp+430,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
        tracep->fullQData(oldp+432,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
        tracep->fullQData(oldp+434,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
        tracep->fullQData(oldp+436,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
        tracep->fullQData(oldp+438,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
        tracep->fullQData(oldp+440,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
        tracep->fullQData(oldp+442,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
        tracep->fullQData(oldp+444,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
        tracep->fullQData(oldp+446,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
        tracep->fullQData(oldp+448,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+450,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+452,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+454,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
        tracep->fullQData(oldp+456,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
        tracep->fullQData(oldp+458,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
        tracep->fullQData(oldp+460,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
        tracep->fullQData(oldp+462,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
        tracep->fullQData(oldp+464,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+466,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+468,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+470,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
        tracep->fullQData(oldp+472,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
        tracep->fullQData(oldp+474,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
        tracep->fullQData(oldp+476,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
        tracep->fullQData(oldp+478,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
        tracep->fullQData(oldp+480,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+482,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+484,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+486,((1U & (vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+487,((1U & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+488,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+490,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                          >> 3U) & 
                                         (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                          >> 2U)))));
        tracep->fullBit(oldp+491,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                          >> 1U) & 
                                         vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U]))));
        tracep->fullBit(oldp+492,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+493,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+494,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+495,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+497,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+498,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+500,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+501,((3U & vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+502,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+503,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+504,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+505,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+507,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+508,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+510,((0xffU & ((vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+511,((3U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+512,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+513,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+514,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+515,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+516,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+517,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+518,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+520,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+521,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+523,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+524,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+525,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+526,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+527,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+528,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+530,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+531,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+533,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+534,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+535,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+536,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+537,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+538,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+539,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+540,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+542,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+543,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+545,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+546,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+547,(vlSelf->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+548,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+549,(vlSelf->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+550,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+552,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+554,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+556,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+558,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+560,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+562,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullBit(oldp+564,(vlSelf->clock));
        tracep->fullBit(oldp+565,(vlSelf->reset));
        tracep->fullQData(oldp+566,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+568,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+570,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+572,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+573,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+574,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+575,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+576,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+577,(vlSelf->io_uart_in_ch),8);
        tracep->fullBit(oldp+578,((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                           >> 7U) | (IData)(vlSelf->reset)) 
                                         | (~ (IData)(
                                                      (vlSelf->SimTop__DOT__top__DOT__iresp 
                                                       >> 0x20U)))))));
        tracep->fullBit(oldp+579,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                          >> 7U) | (IData)(vlSelf->reset)))));
        tracep->fullBit(oldp+580,((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                           >> 2U) | (IData)(vlSelf->reset)) 
                                         | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)))));
        tracep->fullBit(oldp+581,(((IData)(vlSelf->reset) 
                                   | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay))));
        tracep->fullBit(oldp+582,(1U));
        tracep->fullIData(oldp+583,(1U),32);
        tracep->fullCData(oldp+584,(0U),8);
        tracep->fullBit(oldp+585,(0U));
        tracep->fullCData(oldp+586,(0U),3);
        tracep->fullQData(oldp+587,(0ULL),64);
        tracep->fullCData(oldp+589,(3U),2);
        tracep->fullCData(oldp+590,(2U),3);
        tracep->fullCData(oldp+591,(0U),8);
        tracep->fullQData(oldp+592,(0ULL),64);
    }
}
