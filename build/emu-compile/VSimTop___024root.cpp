// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__3\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, 0U, 0U, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[2U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[4U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[6U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[8U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU]))));
    if (VL_UNLIKELY((vlSelf->SimTop__DOT__ireq[2U] 
                     & (0x10000000ULL <= vlSelf->SimTop__DOT__ram__DOT__iidx)))) {
        VL_WRITEF("Memory address %x out of range!\n",
                  64,(((QData)((IData)(vlSelf->SimTop__DOT__ireq[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->SimTop__DOT__ireq[0U]))));
        VL_FINISH_MT("src/test/vsrc/common/ram.sv", 49, "");
    }
    if (((vlSelf->SimTop__DOT__dreq[4U] >> 0xbU) & 
         (0U != (0xffU & vlSelf->SimTop__DOT__dreq[2U])))) {
        if (VL_UNLIKELY((0x10000000ULL <= ((0x80000000ULL 
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
                                               >> 3U)
                                            : 0ULL)))) {
            VL_WRITEF("Memory address %x out of range!\n",
                      64,(((QData)((IData)(vlSelf->SimTop__DOT__dreq[4U])) 
                           << 0x35U) | (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[2U])) 
                                           >> 0xbU))));
            VL_FINISH_MT("src/test/vsrc/common/ram.sv", 54, "");
        }
        VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
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
                                                                          : 0ULL), 
                                                                        (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[0U]))), vlSelf->SimTop__DOT__ram__DOT__wmask, 1U);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, 
                                                                              (1U 
                                                                               & (~ (IData)(vlSelf->reset))), vlSelf->SimTop__DOT__core__DOT__pc, 0U, 0U, 0U, 0U, 
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                                                                >> 2U)), 
                                                                              (0x1fU 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataD[2U] 
                                                                                >> 0xeU)), vlSelf->SimTop__DOT__core__DOT__result);
    }
    if (vlSelf->reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[__Vilp] 
                = vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs_nxt[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[0U] = 0U;
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__regs[1U] = 0U;
    }
    vlSelf->SimTop__DOT__core__DOT__pc = ((IData)(vlSelf->reset)
                                           ? 0x80000000ULL
                                           : vlSelf->SimTop__DOT__core__DOT__pcnext);
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
            VL_STOP_MT("/mnt/d/WorkSpace/Vscode_WorkSpace/SystemVerilog/Arch-2022Spring-FDU/build/../vsrc/pipeline/decode/decoder.sv", 23, "");
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
            VL_STOP_MT("/mnt/d/WorkSpace/Vscode_WorkSpace/SystemVerilog/Arch-2022Spring-FDU/build/../vsrc/pipeline/decode/extend.sv", 23, "");
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

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
}
#endif  // VL_DEBUG
