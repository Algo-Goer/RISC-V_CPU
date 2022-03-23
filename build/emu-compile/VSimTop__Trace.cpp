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
    VlWide<9>/*287:0*/ __Vtemp19;
    VlWide<9>/*287:0*/ __Vtemp20;
    VlWide<9>/*287:0*/ __Vtemp21;
    VlWide<9>/*287:0*/ __Vtemp22;
    VlWide<9>/*287:0*/ __Vtemp23;
    VlWide<9>/*287:0*/ __Vtemp24;
    VlWide<9>/*287:0*/ __Vtemp25;
    VlWide<9>/*287:0*/ __Vtemp26;
    VlWide<9>/*287:0*/ __Vtemp27;
    VlWide<9>/*287:0*/ __Vtemp28;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                          >> 1U))));
            tracep->chgBit(oldp+1,((1U & vlSelf->SimTop__DOT__dresp[2U])));
            tracep->chgQData(oldp+2,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__dresp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dresp[0U])))),64);
            tracep->chgQData(oldp+4,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+6,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+7,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__ireq[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+9,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                  >> 0x21U)))));
            tracep->chgBit(oldp+10,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+11,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgQData(oldp+12,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+14,((4ULL + vlSelf->SimTop__DOT__core__DOT__pc)),64);
            tracep->chgCData(oldp+16,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+18,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+20,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                        (((IData)(0x3fU) 
                                                          + 
                                                          (0x7c0U 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                              >> 0xeU))) 
                                                         >> 5U)])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                    (0x3eU 
                                                                     & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                        >> 0x13U))])))),64);
            tracep->chgQData(oldp+22,(vlSelf->SimTop__DOT__core__DOT__result),64);
            tracep->chgIData(oldp+24,(vlSelf->SimTop__DOT__core__DOT__dataF[2U]),32);
            tracep->chgQData(oldp+25,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataF[0U])))),64);
            tracep->chgQData(oldp+27,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                         >> 0x13U)))),64);
            tracep->chgQData(oldp+29,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         >> 0x13U)))),64);
            tracep->chgQData(oldp+31,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                         >> 0x13U)))),64);
            tracep->chgCData(oldp+33,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                                >> 0xeU))),5);
            tracep->chgCData(oldp+34,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                                >> 9U))),5);
            tracep->chgCData(oldp+35,((0x3fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                                >> 3U))),6);
            tracep->chgBit(oldp+36,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))));
            tracep->chgBit(oldp+37,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+38,((1U & vlSelf->SimTop__DOT__core__DOT__dataD[2U])));
            tracep->chgQData(oldp+39,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD[0U])))),64);
            tracep->chgQData(oldp+41,(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm),64);
            tracep->chgCData(oldp+43,((0x1fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                >> 9U))),5);
            tracep->chgCData(oldp+44,((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                >> 3U))),6);
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           >> 2U))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                           >> 1U))));
            tracep->chgBit(oldp+47,((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))));
            tracep->chgCData(oldp+48,((0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF[2U])),7);
            tracep->chgCData(oldp+49,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+50,((vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                       >> 0x19U)),7);
            VL_EXTEND_WI(275,6, __Vtemp19, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgQData(oldp+51,((((QData)((IData)(
                                                        __Vtemp19[8U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         __Vtemp19[7U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         __Vtemp19[6U])) 
                                         >> 0x13U)))),64);
            VL_EXTEND_WI(275,6, __Vtemp20, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgQData(oldp+53,((((QData)((IData)(
                                                        __Vtemp20[6U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         __Vtemp20[5U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         __Vtemp20[4U])) 
                                         >> 0x13U)))),64);
            VL_EXTEND_WI(275,6, __Vtemp21, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgQData(oldp+55,((((QData)((IData)(
                                                        __Vtemp21[4U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         __Vtemp21[3U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         __Vtemp21[2U])) 
                                         >> 0x13U)))),64);
            VL_EXTEND_WI(275,6, __Vtemp22, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgCData(oldp+57,((0x1fU & (__Vtemp22[2U] 
                                                >> 0xeU))),5);
            VL_EXTEND_WI(275,6, __Vtemp23, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgCData(oldp+58,((0x1fU & (__Vtemp23[2U] 
                                                >> 9U))),5);
            VL_EXTEND_WI(275,6, __Vtemp24, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgCData(oldp+59,((0x3fU & (__Vtemp24[2U] 
                                                >> 3U))),6);
            VL_EXTEND_WI(275,6, __Vtemp25, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgBit(oldp+60,((1U & (__Vtemp25[2U] 
                                           >> 2U))));
            VL_EXTEND_WI(275,6, __Vtemp26, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgBit(oldp+61,((1U & (__Vtemp26[2U] 
                                           >> 1U))));
            VL_EXTEND_WI(275,6, __Vtemp27, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgBit(oldp+62,((1U & __Vtemp27[2U])));
            VL_EXTEND_WI(275,6, __Vtemp28, (0x3fU & 
                                            ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                             >> 3U)));
            tracep->chgQData(oldp+63,((((QData)((IData)(
                                                        __Vtemp28[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp28[0U])))),64);
            tracep->chgQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+67,(vlSelf->SimTop__DOT__core__DOT__result),64);
            tracep->chgQData(oldp+69,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U])))),64);
            tracep->chgQData(oldp+71,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U])))),64);
            tracep->chgQData(oldp+73,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U])))),64);
            tracep->chgQData(oldp+75,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U])))),64);
            tracep->chgQData(oldp+77,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U])))),64);
            tracep->chgQData(oldp+79,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU])))),64);
            tracep->chgQData(oldp+81,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU])))),64);
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU])))),64);
            tracep->chgQData(oldp+85,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U])))),64);
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U])))),64);
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U])))),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U])))),64);
            tracep->chgQData(oldp+93,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U])))),64);
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU])))),64);
            tracep->chgQData(oldp+97,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU])))),64);
            tracep->chgQData(oldp+99,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU])))),64);
            tracep->chgQData(oldp+101,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U])))),64);
            tracep->chgQData(oldp+103,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U])))),64);
            tracep->chgQData(oldp+105,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U])))),64);
            tracep->chgQData(oldp+107,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U])))),64);
            tracep->chgQData(oldp+109,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U])))),64);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU])))),64);
            tracep->chgQData(oldp+113,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU])))),64);
            tracep->chgQData(oldp+115,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU])))),64);
            tracep->chgQData(oldp+117,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U])))),64);
            tracep->chgQData(oldp+119,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U])))),64);
            tracep->chgQData(oldp+121,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U])))),64);
            tracep->chgQData(oldp+123,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U])))),64);
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U])))),64);
            tracep->chgQData(oldp+127,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU])))),64);
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU])))),64);
            tracep->chgQData(oldp+131,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU])))),64);
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+135,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+137,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+139,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+141,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+143,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+145,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+147,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+149,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+151,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+153,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+155,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+157,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+159,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+163,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+165,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+169,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+171,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+173,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+175,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+177,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+181,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+183,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+185,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+187,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+189,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+191,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+193,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgCData(oldp+197,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                                 >> 0xeU))),8);
            tracep->chgQData(oldp+198,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U])))),64);
            tracep->chgQData(oldp+200,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U])))),64);
            tracep->chgQData(oldp+202,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U])))),64);
            tracep->chgQData(oldp+204,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U])))),64);
            tracep->chgQData(oldp+206,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U])))),64);
            tracep->chgQData(oldp+208,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU])))),64);
            tracep->chgQData(oldp+210,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU])))),64);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU])))),64);
            tracep->chgQData(oldp+214,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U])))),64);
            tracep->chgQData(oldp+216,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U])))),64);
            tracep->chgQData(oldp+218,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U])))),64);
            tracep->chgQData(oldp+220,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U])))),64);
            tracep->chgQData(oldp+222,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U])))),64);
            tracep->chgQData(oldp+224,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+226,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+228,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U])))),64);
            tracep->chgQData(oldp+232,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U])))),64);
            tracep->chgQData(oldp+234,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U])))),64);
            tracep->chgQData(oldp+236,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U])))),64);
            tracep->chgQData(oldp+238,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U])))),64);
            tracep->chgQData(oldp+240,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+242,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+244,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+246,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U])))),64);
            tracep->chgQData(oldp+248,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U])))),64);
            tracep->chgQData(oldp+250,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U])))),64);
            tracep->chgQData(oldp+252,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U])))),64);
            tracep->chgQData(oldp+254,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U])))),64);
            tracep->chgQData(oldp+256,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+258,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+260,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU])))),64);
            tracep->chgQData(oldp+262,(vlSelf->SimTop__DOT__ram__DOT__iidx),64);
        }
        tracep->chgBit(oldp+264,(vlSelf->clock));
        tracep->chgBit(oldp+265,(vlSelf->reset));
        tracep->chgQData(oldp+266,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+268,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+270,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+272,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+273,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+274,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+275,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+276,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+277,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+278,((1U & (~ (IData)(vlSelf->reset)))));
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
