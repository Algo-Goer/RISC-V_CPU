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
            tracep->chgQData(oldp+19,(((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataD[0U])
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                                 >> 0xeU)))
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
            tracep->chgQData(oldp+32,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                           >> 0xeU)))),64);
            tracep->chgQData(oldp+34,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                           >> 0xeU)))),64);
            tracep->chgQData(oldp+36,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                           >> 0xeU)))),64);
            tracep->chgQData(oldp+38,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                           >> 0xeU)))),64);
            tracep->chgBit(oldp+40,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 0xdU))));
            tracep->chgCData(oldp+41,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                                >> 8U))),5);
            tracep->chgBit(oldp+42,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+43,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+44,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+45,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD[0U])),5);
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[8U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[7U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                           >> 0xeU)))),64);
            tracep->chgQData(oldp+48,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[6U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[5U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                           >> 0xeU)))),64);
            tracep->chgQData(oldp+50,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[4U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[3U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                           >> 0xeU)))),64);
            tracep->chgQData(oldp+52,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_out[2U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_out[1U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])) 
                                           >> 0xeU)))),64);
            tracep->chgBit(oldp+54,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 0xdU))));
            tracep->chgCData(oldp+55,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                                >> 8U))),5);
            tracep->chgBit(oldp+56,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+57,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+58,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_out[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+59,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataD_out[0U])),5);
            tracep->chgQData(oldp+60,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+62,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+64,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                           >> 9U)))),64);
            tracep->chgBit(oldp+66,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+67,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+68,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+69,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+70,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE[0U])),5);
            tracep->chgQData(oldp+71,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[6U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[5U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+73,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[4U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[3U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                           >> 9U)))),64);
            tracep->chgQData(oldp+75,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_out[1U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])) 
                                           >> 9U)))),64);
            tracep->chgBit(oldp+77,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 8U))));
            tracep->chgBit(oldp+78,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 7U))));
            tracep->chgBit(oldp+79,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 6U))));
            tracep->chgBit(oldp+80,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_out[0U] 
                                           >> 5U))));
            tracep->chgCData(oldp+81,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])),5);
            tracep->chgQData(oldp+82,(((0x80U & vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__dresp[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__dresp[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_out[2U])) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_out[1U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE_out[0U])) 
                                                 >> 9U))))),64);
            tracep->chgBit(oldp+84,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_out[2U] 
                                           >> 5U))));
            tracep->chgCData(oldp+85,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])),5);
            tracep->chgQData(oldp+86,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataM_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_out[0U])))),64);
            tracep->chgQData(oldp+88,((4ULL + vlSelf->SimTop__DOT__core__DOT__pc)),64);
            tracep->chgQData(oldp+90,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
            tracep->chgBit(oldp+92,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           >> 0xdU))));
            tracep->chgCData(oldp+93,((0x1fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                >> 8U))),5);
            tracep->chgBit(oldp+94,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           >> 7U))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           >> 6U))));
            tracep->chgBit(oldp+96,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           >> 5U))));
            tracep->chgCData(oldp+97,((0x1fU & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))),5);
            tracep->chgCData(oldp+98,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__op),6);
            tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1),64);
            tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2),64);
            tracep->chgCData(oldp+103,((0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF_out[2U])),7);
            tracep->chgCData(oldp+104,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+105,((vlSelf->SimTop__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U)),7);
            tracep->chgQData(oldp+106,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
            tracep->chgQData(oldp+108,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+110,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+128,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+130,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+132,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+136,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+144,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+146,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+148,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+150,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+152,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+154,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+158,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+160,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+162,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+166,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+168,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+170,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+172,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+174,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+176,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+178,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+180,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+182,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+184,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+186,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+188,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+190,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+192,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+194,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+196,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+198,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+200,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+202,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+204,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+206,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+208,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+210,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+214,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+216,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+218,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+220,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+222,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+224,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+226,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+228,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+232,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+234,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+236,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+238,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+240,((1U & (~ (vlSelf->SimTop__DOT__dreq[3U] 
                                               >> 0xaU)))));
            tracep->chgCData(oldp+241,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataM_out[2U])),8);
            tracep->chgQData(oldp+242,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+244,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+246,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+248,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+250,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+252,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+254,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+256,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+258,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+260,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+262,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+264,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+266,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+270,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+272,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+274,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+276,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+278,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+286,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+290,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+296,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+298,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+300,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+302,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+304,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgQData(oldp+306,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+308,(vlSelf->SimTop__DOT__ram__DOT__iidx),64);
            tracep->chgQData(oldp+310,(((0x80000000ULL 
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
        tracep->chgBit(oldp+312,(vlSelf->clock));
        tracep->chgBit(oldp+313,(vlSelf->reset));
        tracep->chgQData(oldp+314,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+316,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+318,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+320,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+321,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+322,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+323,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+324,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+325,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+326,((1U & (~ (IData)(vlSelf->reset)))));
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
