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
            tracep->chgQData(oldp+14,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
            tracep->chgBit(oldp+16,((1U & (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+17,((1U & (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+18,((IData)(vlSelf->SimTop__DOT__top__DOT__iresp)),32);
            tracep->chgBit(oldp+19,((1U & (vlSelf->SimTop__DOT__top__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+20,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+22,((7U & (vlSelf->SimTop__DOT__top__DOT__dreq[2U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+23,((0xffU & vlSelf->SimTop__DOT__top__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+24,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+26,((1U & (vlSelf->SimTop__DOT__top__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+27,((1U & vlSelf->SimTop__DOT__top__DOT__dresp[2U])));
            tracep->chgQData(oldp+28,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__dresp[0U])))),64);
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
            tracep->chgQData(oldp+56,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgQData(oldp+58,(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+60,(((0x80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])
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
            tracep->chgBit(oldp+62,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                           >> 7U))));
            tracep->chgCData(oldp+63,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+64,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+69,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd),64);
            tracep->chgBit(oldp+71,((1U & (~ (IData)(
                                                     (vlSelf->SimTop__DOT__top__DOT__iresp 
                                                      >> 0x20U))))));
            tracep->chgBit(oldp+72,(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay));
            tracep->chgBit(oldp+73,(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay));
            tracep->chgCData(oldp+74,(vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe),8);
            tracep->chgIData(oldp+75,(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]),32);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))),64);
            tracep->chgQData(oldp+78,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xeU])) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU])) 
                                           >> 6U)))),64);
            tracep->chgIData(oldp+80,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU] 
                                        << 0x1aU) | 
                                       (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
                                        >> 6U))),32);
            tracep->chgCData(oldp+81,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
                                                >> 1U))),5);
            tracep->chgCData(oldp+82,((0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
                                                 << 4U) 
                                                | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
                                                   >> 0x1cU)))),5);
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                                   >> 0x1cU)))),64);
            tracep->chgQData(oldp+85,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                                   >> 0x1cU)))),64);
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                                   >> 0x1cU)))),64);
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                                   >> 0x1cU)))),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])) 
                                                   >> 0x1cU)))),64);
            tracep->chgCData(oldp+93,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                                >> 0x16U))),6);
            tracep->chgBit(oldp+94,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 0x13U))));
            tracep->chgCData(oldp+97,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                                >> 0xeU))),5);
            tracep->chgBit(oldp+98,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 0xdU))));
            tracep->chgBit(oldp+99,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+100,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+101,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+102,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+103,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+104,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+105,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U])),5);
            tracep->chgQData(oldp+106,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])) 
                                              >> 6U)))),64);
            tracep->chgIData(oldp+108,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                                         << 0x1aU) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                           >> 6U))),32);
            tracep->chgCData(oldp+109,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                 >> 1U))),5);
            tracep->chgCData(oldp+110,((0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                  << 4U) 
                                                 | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                    >> 0x1cU)))),5);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+113,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+115,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+117,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+119,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                              >> 0x1cU)))),64);
            tracep->chgCData(oldp+121,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                 >> 0x16U))),6);
            tracep->chgBit(oldp+122,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+123,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+124,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+125,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                 >> 0xeU))),5);
            tracep->chgBit(oldp+126,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+128,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+129,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+130,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+131,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+132,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+133,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])),5);
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U])) 
                                              >> 0x13U)))),64);
            tracep->chgIData(oldp+136,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U] 
                                         << 0xdU) | 
                                        (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                         >> 0x13U))),32);
            tracep->chgCData(oldp+137,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                                 >> 0xeU))),5);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+144,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                                 >> 8U))),6);
            tracep->chgBit(oldp+145,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+146,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+147,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+148,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+149,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])));
            tracep->chgQData(oldp+150,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                              >> 0x13U)))),64);
            tracep->chgIData(oldp+152,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                         << 0xdU) | 
                                        (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                         >> 0x13U))),32);
            tracep->chgCData(oldp+153,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                 >> 0xeU))),5);
            tracep->chgQData(oldp+154,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[5U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                              >> 0xeU)))),64);
            tracep->chgQData(oldp+158,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+160,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                 >> 8U))),6);
            tracep->chgBit(oldp+161,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+163,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+164,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+165,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+166,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])));
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+169,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+170,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+171,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+172,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+173,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+174,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+176,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U])));
            tracep->chgQData(oldp+177,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U])))),64);
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+181,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+182,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+183,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+185,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+186,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+188,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U])));
            tracep->chgQData(oldp+189,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U])))),64);
            tracep->chgQData(oldp+191,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+193,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+194,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+195,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+196,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                            >> 6U))));
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+199,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+200,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),5);
            tracep->chgQData(oldp+201,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U])))),64);
            tracep->chgQData(oldp+203,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[7U])) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[6U])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U])) 
                                              >> 0xeU)))),64);
            tracep->chgCData(oldp+205,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                                 >> 8U))),6);
            tracep->chgIData(oldp+206,(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
                                         << 0x18U) 
                                        | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+207,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+208,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
                                            >> 6U))));
            tracep->chgQData(oldp+209,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[3U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+211,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+212,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])),5);
            tracep->chgQData(oldp+213,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[0U])))),64);
            tracep->chgBit(oldp+215,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+216,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U])),5);
            tracep->chgQData(oldp+217,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U])))),64);
            tracep->chgBit(oldp+219,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+220,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U])),5);
            tracep->chgQData(oldp+221,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U])))),64);
            tracep->chgBit(oldp+223,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+224,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U])),5);
            tracep->chgQData(oldp+225,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U])))),64);
            tracep->chgBit(oldp+227,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+228,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 2U))));
            tracep->chgBit(oldp+229,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                            >> 1U))));
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+232,((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])));
            tracep->chgQData(oldp+233,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))),64);
            tracep->chgQData(oldp+235,((4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc)),64);
            tracep->chgBit(oldp+237,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                             >> 3U) 
                                            | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)))));
            tracep->chgQData(oldp+238,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
            tracep->chgCData(oldp+240,((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0x16U))),6);
            tracep->chgBit(oldp+241,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0x15U))));
            tracep->chgBit(oldp+242,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0x14U))));
            tracep->chgBit(oldp+243,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0x13U))));
            tracep->chgCData(oldp+244,((0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0xeU))),5);
            tracep->chgBit(oldp+245,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xdU))));
            tracep->chgBit(oldp+246,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xcU))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xbU))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0xaU))));
            tracep->chgCData(oldp+249,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 7U))),3);
            tracep->chgBit(oldp+250,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 6U))));
            tracep->chgBit(oldp+251,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 5U))));
            tracep->chgCData(oldp+252,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)),5);
            tracep->chgQData(oldp+253,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
            tracep->chgQData(oldp+255,(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
            tracep->chgCData(oldp+257,((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])),7);
            tracep->chgCData(oldp+258,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+259,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+260,((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x1aU)),6);
            tracep->chgBit(oldp+261,((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                              >> 3U) 
                                             | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)) 
                                            | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)))));
            tracep->chgQData(oldp+262,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
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
            tracep->chgQData(oldp+264,(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                >> 0xcU) 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                         ? ((((0x15U 
                                               == (0x3fU 
                                                   & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                      >> 0x16U))) 
                                              | (0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                     >> 0x16U)))) 
                                             | (0x19U 
                                                == 
                                                (0x3fU 
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
                                                 : 
                                                (((QData)((IData)(
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
            tracep->chgQData(oldp+266,(((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
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
            tracep->chgQData(oldp+268,(((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
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
            tracep->chgQData(oldp+270,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
            tracep->chgQData(oldp+272,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca),64);
            tracep->chgQData(oldp+274,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb),64);
            tracep->chgQData(oldp+276,(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__result),64);
            tracep->chgQData(oldp+278,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+280,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+286,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+290,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+296,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+298,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+302,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+306,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+308,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+312,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+314,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+316,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+320,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+332,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+334,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+336,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+340,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+346,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+350,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+352,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+354,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+356,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+358,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+360,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+362,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+364,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+366,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+368,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+370,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+372,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+374,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+376,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+378,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+380,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+382,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+384,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+386,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+388,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+390,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+392,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+394,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+396,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+398,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+400,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+402,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+404,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+406,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+408,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+410,((1U & ((((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                               >> 3U) 
                                              | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)) 
                                             | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)) 
                                            | (0U == 
                                               (0x3fU 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                                   >> 8U)))))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                            & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+412,(((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay) 
                                      | (0U == (0x3fU 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+413,((0U == (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                >> 8U)))));
            tracep->chgCData(oldp+414,((7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+415,(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit));
            tracep->chgQData(oldp+416,(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd),64);
            tracep->chgBit(oldp+418,((0U != (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+419,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                             >> 6U) 
                                            & (~ (vlSelf->SimTop__DOT__top__DOT__dreq[3U] 
                                                  >> 0xaU))))));
            tracep->chgCData(oldp+420,((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])),8);
            tracep->chgQData(oldp+421,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+423,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+425,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+427,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+429,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+431,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+433,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+435,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+437,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+439,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+441,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+443,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+445,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+447,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+449,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+451,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+453,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+455,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+457,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+459,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+461,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+463,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+465,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+467,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+469,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+471,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+473,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+475,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+477,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+479,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+481,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+483,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+485,((1U & (vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+486,((1U & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+487,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+489,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+490,((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                             >> 1U) 
                                            & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+492,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+493,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+494,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+496,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+497,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+499,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+500,((3U & vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+501,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+502,((1U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+503,((7U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+504,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+506,((0xffU & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+507,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+509,((0xffU & ((vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+510,((3U & (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+511,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+512,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+513,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+514,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+515,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+516,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+517,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+519,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+520,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+522,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+523,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+524,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+526,((7U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+527,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+529,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+530,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+532,((0xffU & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+533,((3U & vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+534,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+535,(vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+536,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+538,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+539,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+541,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+542,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+544,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+545,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+546,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+547,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+548,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+549,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+551,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+553,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+555,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+557,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+559,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+561,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        }
        tracep->chgBit(oldp+563,(vlSelf->clock));
        tracep->chgBit(oldp+564,(vlSelf->reset));
        tracep->chgQData(oldp+565,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+567,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+569,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+571,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+572,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+573,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+574,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+575,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+576,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+577,((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                          >> 7U) | (IData)(vlSelf->reset)) 
                                        | (~ (IData)(
                                                     (vlSelf->SimTop__DOT__top__DOT__iresp 
                                                      >> 0x20U)))))));
        tracep->chgBit(oldp+578,((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                         >> 7U) | (IData)(vlSelf->reset)))));
        tracep->chgBit(oldp+579,((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                          >> 2U) | (IData)(vlSelf->reset)) 
                                        | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)))));
        tracep->chgBit(oldp+580,(((IData)(vlSelf->reset) 
                                  | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay))));
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
