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
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                                 >> 0xfU)))
                                        : (4ULL + vlSelf->SimTop__DOT__core__DOT__pc))),64);
            tracep->chgBit(oldp+21,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 8U))));
            tracep->chgCData(oldp+22,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+23,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+24,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+26,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+28,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgIData(oldp+30,(vlSelf->SimTop__DOT__core__DOT__dataF_out[2U]),32);
            tracep->chgQData(oldp+31,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataF_out[0U])))),64);
            tracep->chgIData(oldp+33,(vlSelf->SimTop__DOT__core__DOT__dataD[0xdU]),32);
            tracep->chgQData(oldp+34,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])))),64);
            tracep->chgCData(oldp+36,((vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] 
                                       >> 0x1bU)),5);
            tracep->chgCData(oldp+37,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] 
                                                >> 0x16U))),5);
            tracep->chgQData(oldp+38,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+40,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+42,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+44,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+48,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                >> 0x10U))),6);
            tracep->chgBit(oldp+49,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 0xfU))));
            tracep->chgCData(oldp+50,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                >> 0xaU))),5);
            tracep->chgBit(oldp+51,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 9U))));
            tracep->chgBit(oldp+52,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+53,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+54,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+55,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+56,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),5);
            tracep->chgIData(oldp+57,(vlSelf->SimTop__DOT__core__DOT__dataD_out[0xdU]),32);
            tracep->chgQData(oldp+58,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[0xcU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_out[0xbU])))),64);
            tracep->chgCData(oldp+60,((vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU] 
                                       >> 0x1bU)),5);
            tracep->chgCData(oldp+61,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU] 
                                                >> 0x16U))),5);
            tracep->chgQData(oldp+62,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+64,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+66,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+68,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[3U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+70,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[1U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+72,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                                >> 0x10U))),6);
            tracep->chgBit(oldp+73,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 0xfU))));
            tracep->chgCData(oldp+74,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                                >> 0xaU))),5);
            tracep->chgBit(oldp+75,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 9U))));
            tracep->chgBit(oldp+76,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+77,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+79,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+80,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])),5);
            tracep->chgIData(oldp+81,(((vlSelf->SimTop__DOT__core__DOT__dataE[9U] 
                                        << 0x11U) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataE[8U] 
                                        >> 0xfU))),32);
            tracep->chgQData(oldp+82,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[8U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[7U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                           >> 0xfU)))),64);
            tracep->chgQData(oldp+84,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                           >> 0xfU)))),64);
            tracep->chgQData(oldp+86,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                           >> 0xfU)))),64);
            tracep->chgQData(oldp+88,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                           >> 0xfU)))),64);
            tracep->chgCData(oldp+90,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                >> 9U))),6);
            tracep->chgBit(oldp+91,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+92,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+93,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+94,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),5);
            tracep->chgIData(oldp+95,(((vlSelf->SimTop__DOT__core__DOT__dataE_out[9U] 
                                        << 0x11U) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataE_out[8U] 
                                        >> 0xfU))),32);
            tracep->chgQData(oldp+96,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[8U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[7U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[6U])) 
                                           >> 0xfU)))),64);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[6U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[5U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                           >> 0xfU)))),64);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_out[3U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                              >> 0xfU)))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_out[1U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])) 
                                              >> 0xfU)))),64);
            tracep->chgCData(oldp+104,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                                 >> 9U))),6);
            tracep->chgBit(oldp+105,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+109,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])),5);
            tracep->chgIData(oldp+110,(((vlSelf->SimTop__DOT__core__DOT__dataM[7U] 
                                         << 0x12U) 
                                        | (vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+111,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                                                 >> 8U))),6);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                              >> 8U)))),64);
            tracep->chgBit(oldp+114,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+116,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+117,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+119,((1U & vlSelf->SimTop__DOT__core__DOT__dataM[2U])));
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataM[0U])))),64);
            tracep->chgIData(oldp+122,(((vlSelf->SimTop__DOT__core__DOT__dataM_out[7U] 
                                         << 0x12U) 
                                        | (vlSelf->SimTop__DOT__core__DOT__dataM_out[6U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+123,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataM_out[6U] 
                                                 >> 8U))),6);
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_out[6U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_out[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_out[4U])) 
                                              >> 8U)))),64);
            tracep->chgBit(oldp+126,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_out[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_out[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+128,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_out[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_out[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_out[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+131,((1U & vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])));
            tracep->chgQData(oldp+132,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataM_out[0U])))),64);
            tracep->chgIData(oldp+134,(((vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                         << 0x12U) 
                                        | (vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+135,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                                 >> 8U))),6);
            tracep->chgQData(oldp+136,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                              >> 8U)))),64);
            tracep->chgBit(oldp+138,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                            >> 6U))));
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+142,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+143,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataW[2U])),5);
            tracep->chgQData(oldp+144,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataW[0U])))),64);
            tracep->chgIData(oldp+146,(((vlSelf->SimTop__DOT__core__DOT__dataW_out[7U] 
                                         << 0x12U) 
                                        | (vlSelf->SimTop__DOT__core__DOT__dataW_out[6U] 
                                           >> 0xeU))),32);
            tracep->chgCData(oldp+147,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataW_out[6U] 
                                                 >> 8U))),6);
            tracep->chgQData(oldp+148,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW_out[6U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW_out[5U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW_out[4U])) 
                                              >> 8U)))),64);
            tracep->chgBit(oldp+150,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW_out[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW_out[4U] 
                                            >> 6U))));
            tracep->chgQData(oldp+152,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW_out[4U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW_out[3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW_out[2U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+154,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW_out[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+155,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataW_out[2U])),5);
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataW_out[0U])))),64);
            tracep->chgBit(oldp+158,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_execute[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+159,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_execute[2U])),5);
            tracep->chgQData(oldp+160,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__forward_execute[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__forward_execute[0U])))),64);
            tracep->chgBit(oldp+162,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_memory[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+163,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_memory[2U])),5);
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__forward_memory[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__forward_memory[0U])))),64);
            tracep->chgBit(oldp+166,((1U & (vlSelf->SimTop__DOT__core__DOT__forward_writeback[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+167,((0x1fU & vlSelf->SimTop__DOT__core__DOT__forward_writeback[2U])),5);
            tracep->chgQData(oldp+168,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__forward_writeback[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__forward_writeback[0U])))),64);
            tracep->chgBit(oldp+170,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+171,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 2U))));
            tracep->chgBit(oldp+172,((1U & (vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                            >> 1U))));
            tracep->chgQData(oldp+173,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__hazardOut[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+175,((1U & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])));
            tracep->chgQData(oldp+176,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__hazardOut[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__hazardOut[0U])))),64);
            tracep->chgQData(oldp+178,((4ULL + vlSelf->SimTop__DOT__core__DOT__pc)),64);
            tracep->chgQData(oldp+180,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
            tracep->chgCData(oldp+182,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0x10U))),6);
            tracep->chgBit(oldp+183,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xfU))));
            tracep->chgCData(oldp+184,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0xaU))),5);
            tracep->chgBit(oldp+185,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 9U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 8U))));
            tracep->chgBit(oldp+187,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 7U))));
            tracep->chgBit(oldp+188,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 6U))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                            >> 5U))));
            tracep->chgCData(oldp+190,((0x1fU & vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)),5);
            tracep->chgQData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
            tracep->chgQData(oldp+193,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
            tracep->chgCData(oldp+195,((0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF_out[2U])),7);
            tracep->chgCData(oldp+196,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+197,((vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U)),7);
            tracep->chgQData(oldp+198,(((1U & ((vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+200,(((1U & ((vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+202,(((2U & vlSelf->SimTop__DOT__core__DOT__hazardOut[4U])
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
            tracep->chgQData(oldp+204,(((1U & vlSelf->SimTop__DOT__core__DOT__hazardOut[2U])
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
            tracep->chgQData(oldp+206,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
            tracep->chgQData(oldp+208,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+210,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+214,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+216,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+218,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+220,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+222,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+224,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+226,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+228,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+232,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+234,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+236,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+238,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+240,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+242,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+244,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+246,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+248,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+250,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+252,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+254,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+256,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+258,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+260,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+262,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+264,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+266,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+270,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+272,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+274,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+276,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+278,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+286,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+290,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+296,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+298,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+302,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+306,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+320,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+332,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+334,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+336,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+340,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                             >> 5U) 
                                            & (~ (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+341,((0U != (0x3fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                                >> 8U)))));
            tracep->chgQData(oldp+342,((QData)((IData)(
                                                       ((vlSelf->SimTop__DOT__core__DOT__dataW[7U] 
                                                         << 0x12U) 
                                                        | (vlSelf->SimTop__DOT__core__DOT__dataW[6U] 
                                                           >> 0xeU))))),64);
            tracep->chgIData(oldp+344,(((vlSelf->SimTop__DOT__core__DOT__dataW[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+345,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[4U] 
                                             >> 6U) 
                                            & (~ (vlSelf->SimTop__DOT__dreq[3U] 
                                                  >> 0xaU))))));
            tracep->chgCData(oldp+346,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataW[2U])),8);
            tracep->chgQData(oldp+347,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+349,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+351,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+353,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+355,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+357,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+359,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+361,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+363,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+365,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+367,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+369,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+371,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+373,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+375,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+379,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+381,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+383,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+385,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+389,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+391,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+395,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+397,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+399,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+401,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+403,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+405,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+407,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+409,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgQData(oldp+411,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+413,(vlSelf->SimTop__DOT__ram__DOT__iidx),64);
            tracep->chgQData(oldp+415,(((0x80000000ULL 
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
        tracep->chgBit(oldp+417,(vlSelf->clock));
        tracep->chgBit(oldp+418,(vlSelf->reset));
        tracep->chgQData(oldp+419,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+421,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+423,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+425,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+426,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+427,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+428,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+429,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+430,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+431,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                         >> 8U) | (IData)(vlSelf->reset)))));
        tracep->chgBit(oldp+432,((1U & ((vlSelf->SimTop__DOT__core__DOT__hazardOut[4U] 
                                         >> 2U) | (IData)(vlSelf->reset)))));
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
