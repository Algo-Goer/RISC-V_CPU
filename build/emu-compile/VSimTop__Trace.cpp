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
            tracep->chgBit(oldp+0,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+2,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+3,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[2U])) 
                                        >> 0x12U)))),64);
            tracep->chgCData(oldp+5,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                               >> 0xaU))),8);
            tracep->chgQData(oldp+6,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[2U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[1U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[0U])) 
                                        >> 0xaU)))),64);
            tracep->chgCData(oldp+8,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U))),8);
            tracep->chgCData(oldp+9,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+10,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+11,((1U & vlSelf->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+12,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+14,((1U & vlSelf->SimTop__DOT__top__DOT__ireq[2U])));
            tracep->chgQData(oldp+15,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+17,((1U & (vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+18,((1U & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U])));
            tracep->chgIData(oldp+19,(((4U & vlSelf->SimTop__DOT__top__DOT__ireq[0U])
                                        ? vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U]
                                        : vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U])),32);
            tracep->chgBit(oldp+20,((1U & (vlSelf->SimTop__DOT__top__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+21,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+23,((7U & (vlSelf->SimTop__DOT__top__DOT__dreq[2U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+24,((0xffU & vlSelf->SimTop__DOT__top__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+25,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+27,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                            >> 1U) 
                                           & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgQData(oldp+28,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgBit(oldp+30,((1U & (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+31,((1U & (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+32,((7U & (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+33,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+35,((0xffU & (vlSelf->SimTop__DOT__top__DOT__icreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+36,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+38,((0xffU & (vlSelf->SimTop__DOT__top__DOT__icreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+39,((3U & vlSelf->SimTop__DOT__top__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+40,((1U & (vlSelf->SimTop__DOT__top__DOT__dcreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+41,((1U & (vlSelf->SimTop__DOT__top__DOT__dcreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+42,((7U & (vlSelf->SimTop__DOT__top__DOT__dcreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+43,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+45,((0xffU & (vlSelf->SimTop__DOT__top__DOT__dcreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+48,((0xffU & (vlSelf->SimTop__DOT__top__DOT__dcreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+49,((3U & vlSelf->SimTop__DOT__top__DOT__dcreq[0U])),2);
            tracep->chgBit(oldp+50,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+52,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+54,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+55,((1U & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+56,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+58,(((0x100U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])
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
            tracep->chgBit(oldp+60,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                           >> 8U))));
            tracep->chgCData(oldp+61,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+62,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+63,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
            tracep->chgIData(oldp+69,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]),32);
            tracep->chgQData(oldp+70,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))),64);
            tracep->chgQData(oldp+72,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU])))),64);
            tracep->chgIData(oldp+74,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU]),32);
            tracep->chgCData(oldp+75,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
                                       >> 0x1bU)),5);
            tracep->chgCData(oldp+76,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
                                                >> 0x16U))),5);
            tracep->chgQData(oldp+77,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+79,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+81,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+85,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+87,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                                >> 0x10U))),6);
            tracep->chgBit(oldp+88,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 0xfU))));
            tracep->chgCData(oldp+89,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                                >> 0xaU))),5);
            tracep->chgBit(oldp+90,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 9U))));
            tracep->chgBit(oldp+91,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+92,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+93,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+94,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+95,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])),5);
            tracep->chgQData(oldp+96,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])))),64);
            tracep->chgIData(oldp+98,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU]),32);
            tracep->chgCData(oldp+99,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                       >> 0x1bU)),5);
            tracep->chgCData(oldp+100,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                 >> 0x16U))),5);
            tracep->chgQData(oldp+101,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+103,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+105,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+107,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+109,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+111,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                 >> 0x10U))),6);
            tracep->chgBit(oldp+112,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+113,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                 >> 0xaU))),5);
            tracep->chgBit(oldp+114,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+116,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+117,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+118,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+119,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])),5);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgIData(oldp+122,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U] 
                                         << 0x11U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                           >> 0xfU))),32);
            tracep->chgQData(oldp+123,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                              >> 0xfU)))),64);
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                              >> 0xfU)))),64);
            tracep->chgQData(oldp+127,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])) 
                                              >> 0xfU)))),64);
            tracep->chgCData(oldp+129,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                                 >> 9U))),6);
            tracep->chgBit(oldp+130,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+131,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+133,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])),5);
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                              >> 0xfU)))),64);
            tracep->chgIData(oldp+136,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                         << 0x11U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                           >> 0xfU))),32);
            tracep->chgQData(oldp+137,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[5U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                              >> 0xfU)))),64);
            tracep->chgQData(oldp+139,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                              >> 0xfU)))),64);
            tracep->chgQData(oldp+141,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                              >> 0xfU)))),64);
            tracep->chgCData(oldp+143,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                 >> 9U))),6);
            tracep->chgBit(oldp+144,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+145,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+146,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+147,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+148,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])),5);
            tracep->chgQData(oldp+149,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+151,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+152,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+153,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+154,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+155,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+158,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])));
            tracep->chgQData(oldp+159,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U])))),64);
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+163,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+164,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+165,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+166,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+167,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+168,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+170,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])));
            tracep->chgQData(oldp+171,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U])))),64);
            tracep->chgQData(oldp+173,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+175,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+176,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+177,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                            >> 6U))));
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+181,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+182,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),5);
            tracep->chgQData(oldp+183,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U])))),64);
            tracep->chgQData(oldp+185,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+187,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+188,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+189,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                            >> 6U))));
            tracep->chgQData(oldp+191,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+193,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+194,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])),5);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[0U])))),64);
            tracep->chgBit(oldp+197,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+198,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U])),5);
            tracep->chgQData(oldp+199,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U])))),64);
            tracep->chgBit(oldp+201,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+202,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U])),5);
            tracep->chgQData(oldp+203,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U])))),64);
            tracep->chgBit(oldp+205,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+206,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U])),5);
            tracep->chgQData(oldp+207,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U])))),64);
            tracep->chgBit(oldp+209,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+210,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 2U))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 1U))));
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+214,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])));
            tracep->chgQData(oldp+215,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))),64);
            tracep->chgQData(oldp+217,((4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc)),64);
            tracep->chgQData(oldp+219,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
            tracep->chgCData(oldp+221,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0x10U))),6);
            tracep->chgBit(oldp+222,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xfU))));
            tracep->chgCData(oldp+223,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0xaU))),5);
            tracep->chgBit(oldp+224,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 9U))));
            tracep->chgBit(oldp+225,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 8U))));
            tracep->chgBit(oldp+226,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 7U))));
            tracep->chgBit(oldp+227,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 6U))));
            tracep->chgBit(oldp+228,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 5U))));
            tracep->chgCData(oldp+229,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)),5);
            tracep->chgQData(oldp+230,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
            tracep->chgQData(oldp+232,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
            tracep->chgCData(oldp+234,((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])),7);
            tracep->chgCData(oldp+235,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+236,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U)),7);
            tracep->chgQData(oldp+237,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+239,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+241,(((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
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
            tracep->chgQData(oldp+243,(((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
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
            tracep->chgQData(oldp+245,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
            tracep->chgQData(oldp+247,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+249,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+251,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+253,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+255,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+257,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+259,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+261,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+263,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+265,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+267,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+271,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+273,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+275,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+279,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+281,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+283,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+287,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+289,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+291,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+293,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+295,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+297,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+299,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+301,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+303,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+305,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+307,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+309,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+311,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+315,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+317,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+319,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+321,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+325,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+327,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+329,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+331,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+333,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+335,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+337,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+339,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+341,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+343,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+345,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+347,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+349,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+351,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+353,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+355,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+357,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+359,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+361,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+363,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+365,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+367,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+369,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+371,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+373,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+375,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+379,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                             >> 5U) 
                                            & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+380,((0U != (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+381,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                             >> 6U) 
                                            & (~ (vlSelf->SimTop__DOT__top__DOT__dreq[3U] 
                                                  >> 0xaU))))));
            tracep->chgCData(oldp+382,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),8);
            tracep->chgQData(oldp+383,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+385,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+389,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+391,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+395,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+397,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+399,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+401,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+403,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+405,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+407,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+409,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+411,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+413,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+415,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+417,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+419,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+421,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+423,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+425,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+427,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+429,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+431,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+433,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+435,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+437,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+439,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+441,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+443,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+445,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+447,((1U & (vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+448,((1U & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+449,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+451,((1U & vlSelf->SimTop__DOT__top__DOT__ireq[2U])));
            tracep->chgQData(oldp+452,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+454,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+457,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+458,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+460,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+461,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+463,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+464,((3U & vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+465,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+466,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+467,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+468,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+470,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+471,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+473,((0xffU & ((vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+474,((3U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+475,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+476,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+477,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+478,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+479,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+480,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+481,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+483,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+484,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+486,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+487,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+488,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+490,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+491,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+493,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+494,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+496,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+497,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+498,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+499,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+500,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+502,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+503,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+505,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+506,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+508,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+509,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+510,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+511,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+512,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+513,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+515,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+517,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+519,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+521,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+523,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+525,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        }
        tracep->chgBit(oldp+527,(vlSelf->clock));
        tracep->chgBit(oldp+528,(vlSelf->reset));
        tracep->chgQData(oldp+529,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+531,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+533,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+535,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+536,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+537,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+538,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+539,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+540,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+541,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 8U) | (IData)(vlSelf->reset)))));
        tracep->chgBit(oldp+542,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
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
