// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+1,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__ireq[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+3,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                  >> 0x21U)))));
            tracep->chgBit(oldp+4,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                  >> 0x20U)))));
            tracep->chgIData(oldp+5,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+6,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                          >> 0xbU))));
            tracep->chgQData(oldp+7,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__dreq[4U])) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[3U])) 
                                        << 0x15U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[2U])) 
                                        >> 0xbU)))),64);
            tracep->chgCData(oldp+9,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                            >> 8U))),3);
            tracep->chgCData(oldp+10,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+11,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+13,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+14,((1U & vlSelf->SimTop__DOT__dresp[2U])));
            tracep->chgQData(oldp+15,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dresp[0U])))),64);
            tracep->chgQData(oldp+17,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+19,(((0x100U & vlSelf->SimTop__DOT__core__DOT__dataE[0U])
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                                 >> 9U)))
                                        : (4ULL + vlSelf->SimTop__DOT__core__DOT__pc))),64);
            tracep->chgCData(oldp+21,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+22,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+23,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+25,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+27,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgIData(oldp+29,(vlSelf->SimTop__DOT__core__DOT__dataF_out[2U]),32);
            tracep->chgQData(oldp+30,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataF_out[0U])))),64);
            tracep->chgIData(oldp+32,(vlSelf->SimTop__DOT__core__DOT__dataD[0xbU]),32);
            tracep->chgCData(oldp+33,((vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] 
                                       >> 0x1bU)),5);
            tracep->chgCData(oldp+34,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] 
                                                >> 0x16U))),5);
            tracep->chgQData(oldp+35,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+37,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+39,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+41,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+43,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+45,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                >> 0x10U))),6);
            tracep->chgBit(oldp+46,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 0xfU))));
            tracep->chgCData(oldp+47,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                >> 0xaU))),5);
            tracep->chgBit(oldp+48,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 9U))));
            tracep->chgBit(oldp+49,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+50,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+52,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+53,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),5);
            tracep->chgIData(oldp+54,(vlSelf->SimTop__DOT__core__DOT__dataD_out[0xbU]),32);
            tracep->chgCData(oldp+55,((vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU] 
                                       >> 0x1bU)),5);
            tracep->chgCData(oldp+56,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU] 
                                                >> 0x16U))),5);
            tracep->chgQData(oldp+57,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+59,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+61,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+63,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[3U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+65,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[1U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+67,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                                >> 0x10U))),6);
            tracep->chgBit(oldp+68,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 0xfU))));
            tracep->chgCData(oldp+69,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                                >> 0xaU))),5);
            tracep->chgBit(oldp+70,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 9U))));
            tracep->chgBit(oldp+71,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+72,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+73,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+74,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+75,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])),5);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+78,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+80,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                           >> 9U)))),64);
            tracep->chgBit(oldp+82,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+83,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+84,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+85,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+86,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),5);
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[6U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[5U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[3U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[1U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])) 
                                           >> 9U)))),64);
            tracep->chgBit(oldp+93,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+94,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+97,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])),5);
            tracep->chgBit(oldp+98,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                           >> 5U))));
            tracep->chgCData(oldp+99,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U])),5);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataM[0U])))),64);
            tracep->chgBit(oldp+102,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_out[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+103,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])),5);
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataM_out[0U])))),64);
            tracep->chgBit(oldp+106,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_execute[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+107,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_execute[2U])),5);
            tracep->chgQData(oldp+108,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__forward_execute[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__forward_execute[0U])))),64);
            tracep->chgBit(oldp+110,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_memory[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+111,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_memory[2U])),5);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__forward_memory[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__forward_memory[0U])))),64);
            tracep->chgBit(oldp+114,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_writeback[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+115,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_writeback[2U])),5);
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__forward_writeback[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__forward_writeback[0U])))),64);
            tracep->chgBit(oldp+118,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 4U))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+120,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 2U))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 1U))));
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__hazardOut[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+124,((1U & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])));
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__hazardOut[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__hazardOut[0U])))),64);
            tracep->chgQData(oldp+127,((4ULL + vlSelf->SimTop__DOT__core__DOT__pc)),64);
            tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
            tracep->chgCData(oldp+131,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0x10U))),6);
            tracep->chgBit(oldp+132,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xfU))));
            tracep->chgCData(oldp+133,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0xaU))),5);
            tracep->chgBit(oldp+134,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 9U))));
            tracep->chgBit(oldp+135,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 8U))));
            tracep->chgBit(oldp+136,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 7U))));
            tracep->chgBit(oldp+137,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 6U))));
            tracep->chgBit(oldp+138,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 5U))));
            tracep->chgCData(oldp+139,((0x1fU & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)),5);
            tracep->chgQData(oldp+140,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
            tracep->chgQData(oldp+142,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
            tracep->chgCData(oldp+144,((0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF_out[2U])),7);
            tracep->chgCData(oldp+145,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+146,((vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U)),7);
            tracep->chgQData(oldp+147,(((1U & ((vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+149,(((1U & ((vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+151,(((2U & vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])
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
            tracep->chgQData(oldp+153,(((1U & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])
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
            tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
            tracep->chgQData(oldp+157,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+163,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+165,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+169,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+171,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+173,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+175,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+177,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+181,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+183,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+185,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+187,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+189,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+191,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+193,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+199,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+201,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+203,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+205,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+207,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+209,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+211,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+213,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+215,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+217,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+219,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+221,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+223,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+225,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+227,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+229,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+231,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+233,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+235,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+241,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+243,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+245,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+247,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+249,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+251,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+253,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+255,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+257,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+259,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+261,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+263,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+265,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+267,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+271,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+273,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+275,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+279,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+281,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+283,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+287,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+289,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                             >> 5U) 
                                            & (~ (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+290,((1U & (~ (vlSelf->SimTop__DOT__dreq[3U] 
                                               >> 0xaU)))));
            tracep->chgCData(oldp+291,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])),8);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+296,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+298,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+302,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+306,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+320,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+332,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+334,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+336,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+340,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+346,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+350,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+352,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+354,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgQData(oldp+356,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+358,(vlSelf->SimTop__DOT__ram__DOT__iidx),64);
            tracep->chgQData(oldp+360,(((0x80000000ULL 
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
        }
        tracep->chgBit(oldp+362,(vlSelf->clock));
        tracep->chgBit(oldp+363,(vlSelf->reset));
        tracep->chgQData(oldp+364,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+366,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+368,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+370,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+371,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+372,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+373,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+374,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+375,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+376,((1U & (~ (IData)(vlSelf->reset)))));
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
