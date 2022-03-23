// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf);

VSimTop___024root::VSimTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024root___ctor_var_reset(this);
}

void VSimTop___024root::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024root::~VSimTop___024root() {
}

void VSimTop___024root___initial__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_uart_out_valid = 0U;
    vlSelf->io_uart_out_ch = 0U;
    vlSelf->io_uart_in_valid = 0U;
    vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm = 0ULL;
}

void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

void VSimTop___024root___settle__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__2\n"); );
    // Variables
    QData/*63:0*/ __Vfunc_ram_read_helper__7__Vfuncout;
    // Body
    vlSelf->SimTop__DOT__dresp[2U] = (3U | vlSelf->SimTop__DOT__dresp[2U]);
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((0x80000000ULL 
                                                                     < 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[4U])) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[3U])) 
                                                                          << 0x15U) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                            >> 0xbU))))
                                                                     ? 
                                                                    (((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[4U])) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[3U])) 
                                                                           << 0x15U) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                             >> 0xbU))) 
                                                                      - 0x80000000ULL) 
                                                                     >> 3U)
                                                                     : 0ULL), __Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->SimTop__DOT__dresp[0U] = (IData)(__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->SimTop__DOT__dresp[1U] = (IData)((__Vfunc_ram_read_helper__7__Vfuncout 
                                              >> 0x20U));
    vlSelf->SimTop__DOT__iresp = (0x300000000ULL | vlSelf->SimTop__DOT__iresp);
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffff0000ULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | (IData)((IData)(
                                                              ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 1U)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & vlSelf->SimTop__DOT__dreq[2U]))))))));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffff0000ffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 3U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 2U)))))))) 
                                               << 0x10U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffff0000ffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 5U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 4U)))))))) 
                                               << 0x20U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 7U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__dreq[2U] 
                                                                                >> 6U)))))))) 
                                               << 0x30U));
    vlSelf->SimTop__DOT__core__DOT__pcnext = (4ULL 
                                              + vlSelf->SimTop__DOT__core__DOT__pc);
    vlSelf->SimTop__DOT__ireq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__pc);
    vlSelf->SimTop__DOT__ireq[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                                             >> 0x20U));
    vlSelf->SimTop__DOT__ram__DOT__iidx = ((0x80000000ULL 
                                            < (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ireq[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[0U]))))
                                            ? (((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ireq[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__ireq[0U]))) 
                                                - 0x80000000ULL) 
                                               >> 3U)
                                            : 0ULL);
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, vlSelf->SimTop__DOT__ram__DOT__iidx, vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, vlSelf->SimTop__DOT__ram__DOT__iidx, vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->SimTop__DOT__iresp = ((0x300000000ULL & vlSelf->SimTop__DOT__iresp) 
                                  | (IData)((IData)(
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__ireq[0U])
                                                      ? 
                                                     (vlSelf->__Vfunc_ram_read_helper__5__Vfuncout 
                                                      >> 0x20U)
                                                      : 
                                                     (0xffffffffULL 
                                                      & vlSelf->__Vfunc_ram_read_helper__6__Vfuncout)))));
    vlSelf->SimTop__DOT__core__DOT__dataF[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__pc);
    vlSelf->SimTop__DOT__core__DOT__dataF[1U] = (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__pc 
                                                         >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__dataF[2U] = (IData)(vlSelf->SimTop__DOT__iresp);
    if ((1U & (~ VL_ONEHOT0_I((((0x33U == (0x7fU & 
                                           vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                << 1U) | (0x13U == 
                                          (0x7fU & 
                                           vlSelf->SimTop__DOT__core__DOT__dataF[2U]))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: decoder.sv:23: Assertion failed in %NSimTop.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/mnt/d/WorkSpace/Git_Project/RSIC-V_CPU/build/../vsrc/pipeline/decode/decoder.sv", 23, "");
        }
    }
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
        = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                   >> 9U))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                       >> 0xeU))])));
    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0U;
    if ((0x13U == (0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF[2U]))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
            = (4U | (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
        if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U])) {
            if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U])) {
                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                    = ((7U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) 
                       | (((0x1000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U])
                            ? 0xc3U : 0x82U) << 3U));
            } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                 >> 0xcU)))) {
                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                    = (0x820U | (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)));
            }
        } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                             >> 0xdU)))) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                          >> 0xcU)))) {
                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                    = (8U | (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)));
            }
        }
    } else if ((0x33U == (0x7fU & vlSelf->SimTop__DOT__core__DOT__dataF[2U]))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
            = (4U | (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl));
        if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U])) {
            if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U])) {
                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                    = ((7U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) 
                       | (((0x1000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U])
                            ? 0xcaU : 0x89U) << 3U));
            } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                 >> 0xcU)))) {
                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                    = (0x858U | (7U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)));
            }
        } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                             >> 0xdU)))) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                          >> 0xcU)))) {
                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                    = ((7U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)) 
                       | (((0U == (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                   >> 0x19U)) ? 7U : 0x48U) 
                          << 3U));
            }
        }
    } else {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0U;
    }
    vlSelf->SimTop__DOT__core__DOT__result = (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                              + (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__iresp 
                                                                               >> 0x14U)))))));
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = ((0x7ffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                              (((IData)(0x3fU) 
                                                                                + 
                                                                                (0x7c0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0xeU))) 
                                                                               >> 5U)])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                               (0x3eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0x13U))])))) 
                                                    << 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataD[5U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                            (((IData)(0x3fU) 
                                                                              + 
                                                                              (0x7c0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0xeU))) 
                                                                             >> 5U)])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                             (0x3eU 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0x13U))])))) 
                                                  >> 0xdU) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                               (((IData)(0x3fU) 
                                                                                + 
                                                                                (0x7c0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0xeU))) 
                                                                                >> 5U)])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                                (0x3eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0x13U))]))) 
                                                             >> 0x20U)) 
                                                    << 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataD[6U] = (((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                             (((IData)(0x3fU) 
                                                                               + 
                                                                               (0x7c0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0xeU))) 
                                                                              >> 5U)])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[
                                                                              (0x3eU 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                                                >> 0x13U))]))) 
                                                           >> 0x20U)) 
                                                  >> 0xdU) 
                                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1) 
                                                    << 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataD[7U] = (((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1) 
                                                  >> 0xdU) 
                                                 | ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                             >> 0x20U)) 
                                                    << 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataD[8U] = ((IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                          >> 0x20U)) 
                                                 >> 0xdU);
    if ((1U & (~ VL_ONEHOT0_I((((0x10U == (0x3fU & 
                                           ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                            >> 3U))) 
                                << 0xaU) | (((0xeU 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                     >> 3U))) 
                                             << 9U) 
                                            | (((0xdU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                     >> 3U))) 
                                                << 8U) 
                                               | (((6U 
                                                    == 
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                        >> 3U))) 
                                                   << 7U) 
                                                  | (((5U 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                           >> 3U))) 
                                                      << 6U) 
                                                     | (((0xfU 
                                                          == 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                              >> 3U))) 
                                                         << 5U) 
                                                        | (((0xcU 
                                                             == 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                                 >> 3U))) 
                                                            << 4U) 
                                                           | (((4U 
                                                                == 
                                                                (0x3fU 
                                                                 & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                                    >> 3U))) 
                                                               << 3U) 
                                                              | (((3U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                                       >> 3U))) 
                                                                  << 2U) 
                                                                 | (((2U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                                          >> 3U))) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                                           >> 3U))))))))))))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: extend.sv:23: Assertion failed in %NSimTop.core.decode.extend: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/mnt/d/WorkSpace/Git_Project/RSIC-V_CPU/build/../vsrc/pipeline/decode/extend.sv", 23, "");
        }
    }
    vlSelf->SimTop__DOT__core__DOT__dataD[0U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataF[0U]))));
    vlSelf->SimTop__DOT__core__DOT__dataD[1U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataF[0U]))) 
                                                         >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = ((0xfff80000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                                                 | ((0x7c000U 
                                                     & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                        << 7U)) 
                                                    | (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl)));
    if (((((((1U == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                              >> 3U))) | (2U == (0x3fU 
                                                 & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                    >> 3U)))) 
            | (3U == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                               >> 3U)))) | (4U == (0x3fU 
                                                   & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                      >> 3U)))) 
          | (0xcU == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                               >> 3U)))) | (0xfU == 
                                            (0x3fU 
                                             & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                >> 3U))))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                  >> 0x14U))));
    } else if (((5U == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                 >> 3U))) | (6U == 
                                             (0x3fU 
                                              & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                 >> 3U))))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataF[2U]))));
    } else if ((0xdU == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                  >> 3U)))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)(((0xfe0U & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                              >> 7U))))));
    } else if ((0xeU == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                  >> 3U)))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                    >> 0x1fU)))) << 0x15U) 
               | (QData)((IData)(((0x100000U & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->SimTop__DOT__core__DOT__dataF[2U]) 
                                     | ((0x800U & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                            >> 0x14U))))))));
    } else if ((0x10U == (0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                   >> 3U)))) {
        vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((- (QData)((IData)((1U & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                          >> 0xcU))))) 
                << 0xdU) | (QData)((IData)(((0x1000U 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                        >> 7U))))))));
    }
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = ((0x7ffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm) 
                                                    << 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataD[3U] = (((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm) 
                                                  >> 0xdU) 
                                                 | ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                                                             >> 0x20U)) 
                                                    << 0x13U));
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = ((0xfff80000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                                                 | ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                                                             >> 0x20U)) 
                                                    >> 0xdU));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[2U]))) 
                   >> 0x20U));
    if (((1U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[4U]))) 
                   >> 0x20U));
    if (((2U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[6U]))) 
                   >> 0x20U));
    if (((3U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[8U]))) 
                   >> 0x20U));
    if (((4U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xaU]))) 
                   >> 0x20U));
    if (((5U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xcU]))) 
                   >> 0x20U));
    if (((6U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0xeU]))) 
                   >> 0x20U));
    if (((7U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x10U]))) 
                   >> 0x20U));
    if (((8U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x12U]))) 
                   >> 0x20U));
    if (((9U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                          >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                        >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x14U]))) 
                   >> 0x20U));
    if (((0xaU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                          >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x16U]))) 
                   >> 0x20U));
    if (((0xbU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                          >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x18U]))) 
                   >> 0x20U));
    if (((0xcU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                          >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1aU]))) 
                   >> 0x20U));
    if (((0xdU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                          >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1cU]))) 
                   >> 0x20U));
    if (((0xeU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                          >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x1eU]))) 
                   >> 0x20U));
    if (((0xfU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                            >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                          >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x20U]))) 
                   >> 0x20U));
    if (((0x10U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x22U]))) 
                   >> 0x20U));
    if (((0x11U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x24U]))) 
                   >> 0x20U));
    if (((0x12U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x26U]))) 
                   >> 0x20U));
    if (((0x13U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x28U]))) 
                   >> 0x20U));
    if (((0x14U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2aU]))) 
                   >> 0x20U));
    if (((0x15U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2cU]))) 
                   >> 0x20U));
    if (((0x16U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x2eU]))) 
                   >> 0x20U));
    if (((0x17U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x30U]))) 
                   >> 0x20U));
    if (((0x18U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x32U]))) 
                   >> 0x20U));
    if (((0x19U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x34U]))) 
                   >> 0x20U));
    if (((0x1aU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x36U]))) 
                   >> 0x20U));
    if (((0x1bU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x38U]))) 
                   >> 0x20U));
    if (((0x1cU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3aU]))) 
                   >> 0x20U));
    if (((0x1dU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3cU]))) 
                   >> 0x20U));
    if (((0x1eU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0x3eU]))) 
                   >> 0x20U));
    if (((0x1fU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                             >> 0xeU))) & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                           >> 2U))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU] 
            = (IData)(vlSelf->SimTop__DOT__core__DOT__result);
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU] 
            = (IData)((vlSelf->SimTop__DOT__core__DOT__result 
                       >> 0x20U));
    }
}

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT__ireq);
    vlSelf->SimTop__DOT__iresp = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(140, vlSelf->SimTop__DOT__dreq);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__dresp);
    vlSelf->SimTop__DOT__core__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__pcnext = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__result = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(96, vlSelf->SimTop__DOT__core__DOT__dataF);
    VL_RAND_RESET_W(275, vlSelf->SimTop__DOT__core__DOT__dataD);
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = VL_RAND_RESET_I(14);
    vlSelf->SimTop__DOT__core__DOT__decode__DOT__extend__DOT__imm = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs);
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt);
    vlSelf->SimTop__DOT__ram__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__iidx = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ram_read_helper__5__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__6__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
