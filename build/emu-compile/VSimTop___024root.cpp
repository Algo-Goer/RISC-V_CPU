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
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
extern const VlWide<8>/*255:0*/ VSimTop__ConstPool__CONST_ee2f1268_0;
extern const VlWide<15>/*479:0*/ VSimTop__ConstPool__CONST_0c7e7fdc_0;
extern const VlWide<10>/*319:0*/ VSimTop__ConstPool__CONST_e80dafd6_0;
void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(IData/*31:0*/ &get_switch__Vfuncrtn);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdly__SimTop__DOT__top__DOT__mux__DOT__busy;
    CData/*1:0*/ __Vdly__SimTop__DOT__ram__DOT__state;
    CData/*7:0*/ __Vdly__SimTop__DOT__ram__DOT__count_down;
    CData/*3:0*/ __Vdly__SimTop__DOT__ram__DOT__size;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<11>/*351:0*/ __Vtemp51;
    VlWide<5>/*159:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<6>/*191:0*/ __Vtemp78;
    VlWide<8>/*255:0*/ __Vtemp80;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__cyc_cnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__ms_cnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__addr;
    VlWide<5>/*150:0*/ __Vdly__SimTop__DOT__ram__DOT__saved_oreq;
    // Body
    if ((0U != (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                         >> 8U)))) {
        if ((0x20U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                = (0x20U | (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U]));
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                = (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U]);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay) 
                  | (0U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
                                     >> 8U))))))) {
        if ((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U] 
                = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U] 
                    << 0x1fU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U] 
                                 >> 1U));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U] 
                = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                    << 0x1fU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U] 
                                 >> 1U));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                = (0x20U | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                     >> 1U)));
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                = (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U]);
        }
    }
    if ((1U & (~ ((((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                     >> 3U) | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)) 
                   | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)) 
                  | (0U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                                     >> 8U))))))) {
        if ((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                   & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                         >> 6U))))) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U] 
                = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                            << 0x32U) | (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U])) 
                                          << 0x12U) 
                                         | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])) 
                                            >> 0xeU))));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U] 
                = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U])) 
                             << 0x32U) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U])) 
                                           << 0x12U) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])) 
                                             >> 0xeU))) 
                           >> 0x20U));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
                = (0x20U | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
                                     >> 0xeU)));
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
                = (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U]);
        }
    }
    if ((1U & (~ ((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                   >> 3U) | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay))))) {
        if ((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                     >> 7U) | (IData)(vlSelf->reset)) 
                   | (~ (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                 >> 0x20U)))))) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U] = 0x80000000U;
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U] = 0U;
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] = 0U;
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U] 
                = (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc);
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U] 
                = (IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__pc 
                           >> 0x20U));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                = (IData)(vlSelf->SimTop__DOT__top__DOT__iresp);
        }
    }
    __Vdly__SimTop__DOT__top__DOT__mux__DOT__busy = vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy;
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U];
    __Vdly__SimTop__DOT__ram__DOT__size = vlSelf->SimTop__DOT__ram__DOT__size;
    __Vdly__SimTop__DOT__ram__DOT__cyc_cnt = vlSelf->SimTop__DOT__ram__DOT__cyc_cnt;
    __Vdly__SimTop__DOT__ram__DOT__ms_cnt = vlSelf->SimTop__DOT__ram__DOT__ms_cnt;
    __Vdly__SimTop__DOT__ram__DOT__count_down = vlSelf->SimTop__DOT__ram__DOT__count_down;
    __Vdly__SimTop__DOT__ram__DOT__state = vlSelf->SimTop__DOT__ram__DOT__state;
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, 0U, 0U, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU]))));
    if ((0U != (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                         >> 8U)))) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, 
                                                                              (0U 
                                                                               != 
                                                                               (0x3fU 
                                                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                                                >> 8U))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U])) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U])) 
                                                                                << 0x12U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U])) 
                                                                                >> 0xeU))), 
                                                                              ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
                                                                                << 0x18U) 
                                                                               | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                                                                >> 8U)), 
                                                                              (1U 
                                                                               & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
                                                                                >> 6U) 
                                                                                & (~ 
                                                                                (vlSelf->SimTop__DOT__top__DOT__dreq[3U] 
                                                                                >> 0xaU)))), 0U, 0U, 
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
                                                                                >> 5U)), 
                                                                              (0x1fU 
                                                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U]), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
    }
    __Vdly__SimTop__DOT__ram__DOT__addr = vlSelf->SimTop__DOT__ram__DOT__addr;
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[0U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[1U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[3U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[3U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[4U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[5U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[6U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[7U] 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U];
    if (vlSelf->reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[__Vilp] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0U] = 0U;
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[1U] = 0U;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[0U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[1U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[2U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[3U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[4U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[5U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[6U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U] 
            = VSimTop__ConstPool__CONST_ee2f1268_0[7U];
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U];
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
    if ((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        if ((0x20U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((0x10U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            } else if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xa800000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x100000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                                   | (((0U != (0x1fU 
                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                  >> 7U))) 
                                       << 5U) | (0x1fU 
                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 7U))));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                        }
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0xac00000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x100000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0U != (0x1fU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 7U))) 
                                   << 5U) | (0x1fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))));
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x80000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x3000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xc400000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x28000U | (0xff83fffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xc000000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x24000U | (0xff83fffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xbc00000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x20000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xb800000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x1c000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xb400000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x18000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xb000000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x14000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        }
    } else if ((0x20U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        if ((0x10U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x200000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                         >> 0xcU))) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                            >> 0xcU))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                             >> 0xcU))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: decoder.sv:298: Assertion failed in %NSimTop.top.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/mnt/d/WorkSpace/Git_Project/RISC-V_CPU/build/../vsrc/pipeline/decode/decoder.sv", 298, "");
                            }
                        }
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0U != (0x1fU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 7U))) 
                                   << 5U) | (0x1fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x3000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                        if ((0U == (7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U))) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x6800000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x6c00000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x4000U | (0xff83fffU 
                                                  & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((1U == (7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                 >> 0xcU)))) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x7000000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x2c000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else if ((5U == (7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x1aU))) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x7400000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x30000U | (0xff83fffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x7800000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x34000U | (0xff83fffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        }
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x1400000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                               | (((0U != (0x1fU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 7U))) 
                                   << 5U) | (0x1fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))));
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                           | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))) 
                               << 5U) | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                  >> 7U))));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x3000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x4c00000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xc000U | (0xff83fffU 
                                                  & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x4800000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x8000U | (0xff83fffU 
                                                  & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x1aU))) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x6000000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x30000U | (0xff83fffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x6400000U | 
                                       (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x34000U | (0xff83fffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x5000000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x10000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x5c00000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x24000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x5800000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x1c000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x5400000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x2c000U | (0xff83fffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    } else if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                       >> 0x19U))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x4000000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x4400000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x4000U | (0xff83fffU 
                                          & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x400U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x2000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x9800000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x180U | (0xffffc7fU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xa400000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x100U | (0xffffc7fU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0xa000000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x80U | (0xffffc7fU 
                                        & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x9c00000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0xffffc7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    }
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        }
    } else if ((0x10U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((1U & (~ VL_ONEHOT0_I((((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                     >> 0xcU))) 
                                                << 2U) 
                                               | (((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                        >> 0xcU))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                         >> 0xcU))))))))) {
                        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                            VL_WRITEF("[%0t] %%Error: decoder.sv:253: Assertion failed in %NSimTop.top.core.decode.decoder: synthesis parallel_case, but multiple matches found\n",
                                      64,VL_TIME_UNITED_Q(1),
                                      -12,vlSymsp->name());
                            VL_STOP_MT("/mnt/d/WorkSpace/Git_Project/RISC-V_CPU/build/../vsrc/pipeline/decode/decoder.sv", 253, "");
                        }
                    }
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x200000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                           | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))) 
                               << 5U) | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                  >> 7U))));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x2000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    if ((0U == (7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                      >> 0xcU)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x3000000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = ((0xfffffdfU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                               | ((0U != (0x1fU & (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                   >> 7U))) 
                                  << 5U));
                    } else if ((1U == (7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0xcU)))) {
                        if ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xfffffdfU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x3400000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x2c000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = ((0xfffffdfU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                                   | ((0U != (0x1fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                 >> 7U))) 
                                      << 5U));
                        }
                    } else if ((5U == (7U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0xcU)))) {
                        if ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xfffffdfU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                        } else if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                           >> 0x1aU))) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x3800000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x30000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = ((0xfffffdfU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                                   | ((0U != (0x1fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                 >> 7U))) 
                                      << 5U));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x3c00000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x34000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = ((0xfffffdfU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                                   | ((0U != (0x1fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                 >> 7U))) 
                                      << 5U));
                        }
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x1800000U | (0x3fffffU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                           | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))) 
                               << 5U) | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                  >> 7U))));
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                       | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 7U))) 
                           << 5U) | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                              >> 7U))));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x2000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xc00000U | (0x3fffffU 
                                                & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xc000U | (0xff83fffU 
                                              & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x800000U | (0x3fffffU 
                                                & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x8000U | (0xff83fffU 
                                              & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                    >> 0x1aU))) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x2800000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x30000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x2c00000U | (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x34000U | (0xff83fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x1000000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x10000U | (0xff83fffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    }
                } else if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x2000000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x24000U | (0xff83fffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    } else {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x1c00000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x1c000U | (0xff83fffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    }
                } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x2400000U | (0x3fffffU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x2c000U | (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x400000U | (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        }
    } else if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
    } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
    } else if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = (0xff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = (0x800U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = ((0xfffffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                   | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 7U))) << 5U) 
                      | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                  >> 7U))));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = (0x2000U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                  >> 0xcU)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x9400000U | (0x3fffffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x140U | (0xffffc3fU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    }
                } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x9000000U | (0x3fffffU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0xc0U | (0xffffc3fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x8c00000U | (0x3fffffU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x40U | (0xffffc3fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                }
            } else if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x7c00000U | (0x3fffffU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x180U | (0xffffc7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x8800000U | (0x3fffffU 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x100U | (0xffffc7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                }
            } else if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x8400000U | (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x80U | (0xffffc7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x8000000U | (0x3fffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0xffffc7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        }
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
    }
    if ((1U & (~ (((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                    >> 3U) | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)) 
                  | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay))))) {
        if ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                    >> 7U) | (IData)(vlSelf->reset)))) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[0U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[1U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[2U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[3U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[4U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[5U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[6U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[7U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[8U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[9U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[0xaU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[0xbU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[0xcU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[0xdU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU] 
                = VSimTop__ConstPool__CONST_0c7e7fdc_0[0xeU];
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xeU];
        }
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay)))) {
        if ((1U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                     >> 2U) | (IData)(vlSelf->reset)) 
                   | (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay)))) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[0U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[1U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[2U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[3U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[4U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[5U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[5U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[6U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[7U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[8U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U] 
                = VSimTop__ConstPool__CONST_e80dafd6_0[9U];
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[5U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U];
            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U] 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U];
        }
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__top__DOT__mux__DOT__busy = 0U;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__index = 0U;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] = 0U;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U] = 0U;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] = 0U;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U] = 0U;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] = 0U;
    } else if (vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy) {
        if ((1U & vlSelf->SimTop__DOT__oresp[2U])) {
            __Vdly__SimTop__DOT__top__DOT__mux__DOT__busy = 0U;
            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] = 0U;
            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U] = 0U;
            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] = 0U;
            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U] = 0U;
            vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] = 0U;
        }
    } else {
        __Vdly__SimTop__DOT__top__DOT__mux__DOT__busy 
            = (1U & (vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
                     >> 0x16U));
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__index 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT__select;
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[0U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[1U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[2U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[3U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req[4U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U];
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__ram__DOT__state = 0U;
        __Vdly__SimTop__DOT__ram__DOT__count_down = 0U;
        __Vdly__SimTop__DOT__ram__DOT__cyc_cnt = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__ms_cnt = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__addr = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__size = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U] = 0U;
    } else {
        if ((0x4e20ULL == vlSelf->SimTop__DOT__ram__DOT__cyc_cnt)) {
            __Vdly__SimTop__DOT__ram__DOT__ms_cnt = 
                (1ULL + vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
            __Vdly__SimTop__DOT__ram__DOT__cyc_cnt = 0ULL;
        } else {
            __Vdly__SimTop__DOT__ram__DOT__cyc_cnt 
                = (1ULL + vlSelf->SimTop__DOT__ram__DOT__cyc_cnt);
        }
        if ((2U & (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
                if (VL_UNLIKELY((((((((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x16U)) 
                                      != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                >> 0x16U))) 
                                     | ((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                               >> 0x15U)) 
                                        != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                  >> 0x15U)))) 
                                    | ((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                              >> 0x12U)) 
                                       != (7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                 >> 0x12U)))) 
                                   | ((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[2U])) 
                                         >> 0x12U))) 
                                      != (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                >> 0x12U))))) 
                                  | ((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U)) 
                                     != (0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                  >> 2U)))) 
                                 | ((3U & vlSelf->SimTop__DOT__oreq[0U]) 
                                    != (3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U]))))) {
                    VL_WRITEF("ERROR: Unexpected CBus request modification.\n\n");
                    VL_FINISH_MT("src/test/vsrc/common/ram.sv", 178, "");
                }
                if ((0x40600004ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    if (VL_UNLIKELY((0x4000U & vlSelf->SimTop__DOT__oreq[2U]))) {
                        VL_FWRITEF(0x80000001U,"%c",
                                   8,(0xffU & (vlSelf->SimTop__DOT__oreq[1U] 
                                               >> 0xaU)));
                        if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
                    }
                } else if ((0x23333000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    if (VL_UNLIKELY(((0x233ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__oreq[1U])) 
                                                       << 0x16U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__oreq[0U])) 
                                                         >> 0xaU)))) 
                                     & (0xffU == (0xffU 
                                                  & (vlSelf->SimTop__DOT__oreq[2U] 
                                                     >> 0xaU)))))) {
                        VL_WRITEF("Pass!\n");
                    }
                } else if ((0x4060000cULL != vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(vlSelf->SimTop__DOT__ram__DOT__idx, 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                                << 0x36U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[1U])) 
                                                                                << 0x16U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[0U])) 
                                                                                >> 0xaU))), vlSelf->SimTop__DOT__ram__DOT__wmask, 1U);
                }
                if ((1U & (~ VL_ONEHOT0_I((((0x23333000ULL 
                                             == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                            << 1U) 
                                           | (0x40600004ULL 
                                              == vlSelf->SimTop__DOT__ram__DOT__addr)))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: ram.sv:185: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("src/test/vsrc/common/ram.sv", 185, "");
                    }
                }
                if ((1U & vlSelf->SimTop__DOT__oresp[2U])) {
                    __Vdly__SimTop__DOT__ram__DOT__state = 0U;
                } else {
                    __Vdly__SimTop__DOT__ram__DOT__count_down 
                        = (0xffU & ((IData)(vlSelf->SimTop__DOT__ram__DOT__count_down) 
                                    - (IData)(1U)));
                    __Vdly__SimTop__DOT__ram__DOT__addr 
                        = (vlSelf->SimTop__DOT__ram__DOT__addr 
                           + (QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__size)));
                }
            } else {
                if (VL_UNLIKELY((((((((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x16U)) 
                                      != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                >> 0x16U))) 
                                     | ((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                               >> 0x15U)) 
                                        != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                  >> 0x15U)))) 
                                    | ((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                              >> 0x12U)) 
                                       != (7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                 >> 0x12U)))) 
                                   | ((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[2U])) 
                                         >> 0x12U))) 
                                      != (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                >> 0x12U))))) 
                                  | ((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U)) 
                                     != (0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                  >> 2U)))) 
                                 | ((3U & vlSelf->SimTop__DOT__oreq[0U]) 
                                    != (3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U]))))) {
                    VL_WRITEF("ERROR: Unexpected CBus request modification.\n\n");
                    VL_FINISH_MT("src/test/vsrc/common/ram.sv", 156, "");
                }
                if (VL_UNLIKELY((0x10000000ULL <= vlSelf->SimTop__DOT__ram__DOT__idx))) {
                    VL_WRITEF("ERROR: Load address %x out of range!\n\n",
                              64,vlSelf->SimTop__DOT__ram__DOT__addr);
                    VL_FINISH_MT("src/test/vsrc/common/ram.sv", 161, "");
                }
                if ((1U & vlSelf->SimTop__DOT__oresp[2U])) {
                    __Vdly__SimTop__DOT__ram__DOT__state = 0U;
                } else {
                    __Vdly__SimTop__DOT__ram__DOT__count_down 
                        = (0xffU & ((IData)(vlSelf->SimTop__DOT__ram__DOT__count_down) 
                                    - (IData)(1U)));
                    __Vdly__SimTop__DOT__ram__DOT__addr 
                        = (((vlSelf->SimTop__DOT__ram__DOT__addr 
                             + (QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__size))) 
                            == vlSelf->SimTop__DOT__ram__DOT__wrap2)
                            ? vlSelf->SimTop__DOT__ram__DOT__wrap1
                            : (vlSelf->SimTop__DOT__ram__DOT__addr 
                               + (QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__size))));
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            if (VL_UNLIKELY((0U != (((((vlSelf->SimTop__DOT__oreq[0U] 
                                        ^ vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U]) 
                                       | (vlSelf->SimTop__DOT__oreq[1U] 
                                          ^ vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                      | (vlSelf->SimTop__DOT__oreq[2U] 
                                         ^ vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                     | (vlSelf->SimTop__DOT__oreq[3U] 
                                        ^ vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                    | (vlSelf->SimTop__DOT__oreq[4U] 
                                       ^ vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U]))))) {
                VL_WRITEF("ERROR: Unexpected CBus request modification.\n\n");
                VL_FINISH_MT("src/test/vsrc/common/ram.sv", 123, "");
            }
            if ((0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))) {
                if ((1U & (~ VL_ONEHOT0_I((((2U == 
                                             (3U & 
                                              vlSelf->SimTop__DOT__oreq[0U])) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               vlSelf->SimTop__DOT__oreq[0U]))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: ram.sv:134: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("src/test/vsrc/common/ram.sv", 134, "");
                    }
                }
                __Vdly__SimTop__DOT__ram__DOT__state 
                    = ((0x200000U & vlSelf->SimTop__DOT__oreq[4U])
                        ? 3U : 2U);
                __Vdly__SimTop__DOT__ram__DOT__addr 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                        << 0x2eU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__oreq[3U])) 
                                      << 0xeU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[2U])) 
                                                  >> 0x12U)));
                __Vdly__SimTop__DOT__ram__DOT__count_down 
                    = (0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                >> 2U));
                __Vdly__SimTop__DOT__ram__DOT__size 
                    = (0xfU & ((IData)(1U) << (7U & 
                                               (vlSelf->SimTop__DOT__oreq[4U] 
                                                >> 0x12U))));
                if ((0U == (3U & vlSelf->SimTop__DOT__oreq[0U]))) {
                    vlSelf->SimTop__DOT__ram__DOT__wrap1 
                        = (((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                            << 0x2eU) | (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__oreq[3U])) 
                                          << 0xeU) 
                                         | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__oreq[2U])) 
                                            >> 0x12U)));
                    vlSelf->SimTop__DOT__ram__DOT__wrap2 
                        = ((((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                             << 0x2eU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[3U])) 
                                           << 0xeU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__oreq[2U])) 
                                             >> 0x12U))) 
                           + (1ULL << (7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x12U))));
                } else if ((2U == (3U & vlSelf->SimTop__DOT__oreq[0U]))) {
                    vlSelf->SimTop__DOT__ram__DOT__wrap1 
                        = ((((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                             << 0x2eU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[3U])) 
                                           << 0xeU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__oreq[2U])) 
                                             >> 0x12U))) 
                           & (~ (((1ULL + (QData)((IData)(
                                                          (0xffU 
                                                           & (vlSelf->SimTop__DOT__oreq[0U] 
                                                              >> 2U))))) 
                                  << (7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))) 
                                 - 1ULL)));
                    vlSelf->SimTop__DOT__ram__DOT__wrap2 
                        = (((((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                              << 0x2eU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[2U])) 
                                              >> 0x12U))) 
                            & (~ (((1ULL + (QData)((IData)(
                                                           (0xffU 
                                                            & (vlSelf->SimTop__DOT__oreq[0U] 
                                                               >> 2U))))) 
                                   << (7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x12U))) 
                                  - 1ULL))) + ((1ULL 
                                                + (QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->SimTop__DOT__oreq[0U] 
                                                                      >> 2U))))) 
                                               << (7U 
                                                   & (vlSelf->SimTop__DOT__oreq[4U] 
                                                      >> 0x12U))));
                } else {
                    vlSelf->SimTop__DOT__ram__DOT__wrap1 = 0ULL;
                    vlSelf->SimTop__DOT__ram__DOT__wrap2 = 0ULL;
                }
            } else {
                __Vdly__SimTop__DOT__ram__DOT__count_down 
                    = (0xffU & ((IData)(vlSelf->SimTop__DOT__ram__DOT__count_down) 
                                - (IData)(1U)));
            }
        } else if ((0x400000U & vlSelf->SimTop__DOT__oreq[4U])) {
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U] 
                = vlSelf->SimTop__DOT__oreq[0U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U] 
                = vlSelf->SimTop__DOT__oreq[1U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U] 
                = vlSelf->SimTop__DOT__oreq[2U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U] 
                = vlSelf->SimTop__DOT__oreq[3U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U] 
                = vlSelf->SimTop__DOT__oreq[4U];
            __Vdly__SimTop__DOT__ram__DOT__count_down 
                = (0xffU & ((IData)(2U) + (IData)(VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I(32)), (IData)(3U)))));
            __Vdly__SimTop__DOT__ram__DOT__state = 1U;
        }
    }
    if ((0x8000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        if ((0x4000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                          >> 0x19U)))) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x18U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                  >> 0x17U)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU)))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                        >> 7U))))))));
                    }
                }
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                = ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                    >> 7U))))))))
                        : ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                            ? ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                                ? (((- (QData)((IData)(
                                                       (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                >> 0x14U))))
                                : (((- (QData)((IData)(
                                                       (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                ((0x100000U 
                                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                     >> 0xbU)) 
                                                                 | ((0xff000U 
                                                                     & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                             >> 0x14U)))))))))
                            : (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                  >> 7U))))))))
                    : ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                            ? (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                  >> 7U))))))
                            : (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                            >> 0x14U)))))
                        : (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                        >> 0x14U))))));
        }
    } else if ((0x4000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        if ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
                if ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
                    if ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                            = (((- (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                            >> 0x14U))));
                    }
                }
            }
        }
    } else if ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                ? (QData)((IData)((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 0x14U))))
                : ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? (QData)((IData)((0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))))
                    : (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x14U))))));
    } else if ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                ? ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x14U))))
                    : (((QData)((IData)((- (IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])))))
                : ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]))))
                    : (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                    >> 0x14U))))));
    } else if ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                  >> 0x14U))));
    } else if ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                  >> 0x14U))));
    }
    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                  >> 3U)))) {
        if (vlSelf->reset) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__pc = 0x80000000ULL;
        } else if ((1U & (((IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                    >> 0x20U)) & (~ (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay))) 
                          & (~ (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay))))) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__pc 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__pcnext;
        }
    }
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy = __Vdly__SimTop__DOT__top__DOT__mux__DOT__busy;
    vlSelf->SimTop__DOT__ram__DOT__cyc_cnt = __Vdly__SimTop__DOT__ram__DOT__cyc_cnt;
    vlSelf->SimTop__DOT__ram__DOT__size = __Vdly__SimTop__DOT__ram__DOT__size;
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U];
    vlSelf->SimTop__DOT__ram__DOT__state = __Vdly__SimTop__DOT__ram__DOT__state;
    vlSelf->SimTop__DOT__ram__DOT__count_down = __Vdly__SimTop__DOT__ram__DOT__count_down;
    vlSelf->SimTop__DOT__ram__DOT__ms_cnt = __Vdly__SimTop__DOT__ram__DOT__ms_cnt;
    vlSelf->SimTop__DOT__ram__DOT__addr = __Vdly__SimTop__DOT__ram__DOT__addr;
    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2 
        = (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                   >> 0xeU))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                       >> 0x13U))])));
    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1 
        = (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                   >> 9U))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                                       >> 0xeU))])));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U] 
        = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U] 
            << 0x1fU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U] 
                         >> 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U] 
        = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
            << 0x1fU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U] 
                         >> 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
        = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U] 
            << 6U) | (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                               >> 1U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[3U] 
        = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[0U] 
            >> 0x1aU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U] 
                         << 6U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[4U] 
        = ((0xffffff80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U]) 
           | ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[1U] 
               >> 0x1aU) | (0x40U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U] 
                                     << 6U))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[5U] 
        = ((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U]) 
           | (0xffffff80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[5U]));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[6U] 
        = ((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U]) 
           | (0xffffff80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[6U]));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[7U] 
        = ((0x7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U]) 
           | (0x3f80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[7U]));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
        = ((0x7ffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U]) 
           | (0xfff80000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                             << 0xdU)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U] 
        = (((0x7e000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                         << 0xdU)) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                      >> 0x13U)) | 
           (0xfff80000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                           << 0xdU)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U] 
        = (((0x7e000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
                         << 0xdU)) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                                      >> 0x13U)) | 
           (0xfff80000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
                           << 0xdU)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U] 
        = ((0x7e000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU] 
                        << 0xdU)) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
                                     >> 0x13U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xffffc0ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0x3f00U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                         >> 0xeU)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xffffff9fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0x60U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                       >> 5U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                    >> 5U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
        = ((0xfff83fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U]) 
           | (0x7c000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                          << 0xeU)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xffffffe1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0x1eU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                       >> 5U)));
    if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
          >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U]) 
                    == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                 >> 1U))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U])))) 
                  << 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U] 
            = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
            = ((0xcU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U]) 
               | (0xfU & (2U | ((IData)(((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1fU))));
    } else if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                 >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U]) 
                           == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                        >> 1U))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U])))) 
                  << 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U] 
            = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
            = ((0xcU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U]) 
               | (0xfU & (2U | ((IData)(((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1fU))));
    } else if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                 >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U]) 
                           == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                        >> 1U))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U])))) 
                  << 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U] 
            = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
            = ((0xcU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U]) 
               | (0xfU & (2U | ((IData)(((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1fU))));
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
            = (0xdU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U]);
    }
    if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
          >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U]) 
                    == (0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                  << 4U) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                            >> 0x1cU)))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U]))) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = (1U | (0xfffffffeU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]));
    } else if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
                 >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U]) 
                           == (0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                         << 4U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                   >> 0x1cU)))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U]))) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = (1U | (0xfffffffeU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]));
    } else if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
                 >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U]) 
                           == (0x1fU & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                         << 4U) | (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                   >> 0x1cU)))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U]))) 
                       >> 0x20U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = (1U | (0xfffffffeU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]));
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U] 
            = (0xfffffffeU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]);
    }
    vlSelf->SimTop__DOT__top__DOT__dreq[4U] = ((0x7ffU 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[4U]) 
                                               | (0x800U 
                                                  & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                      << 5U) 
                                                     | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                        << 6U))));
    __Vtemp39[1U] = (((IData)(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                       >> 6U) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                 >> 5U)))
                                ? (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                    >> 0xeU)))
                                : 0ULL)) >> 0x1dU) 
                     | ((IData)((((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                          >> 6U) | 
                                         (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                          >> 5U))) ? 
                                  (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                    >> 0xeU)))
                                   : 0ULL) >> 0x20U)) 
                        << 3U));
    vlSelf->SimTop__DOT__top__DOT__dreq[2U] = ((0xffU 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[2U]) 
                                               | (((IData)(
                                                           ((1U 
                                                             & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                 >> 6U) 
                                                                | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                   >> 5U)))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                                 << 0x12U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                   >> 0xeU)))
                                                             : 0ULL)) 
                                                   << 0xbU) 
                                                  | (0x700U 
                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                        << 6U))));
    vlSelf->SimTop__DOT__top__DOT__dreq[3U] = ((0xffU 
                                                & ((IData)(
                                                           ((1U 
                                                             & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                 >> 6U) 
                                                                | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                   >> 5U)))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                                 << 0x12U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                   >> 0xeU)))
                                                             : 0ULL)) 
                                                   >> 0x15U)) 
                                               | (__Vtemp39[1U] 
                                                  << 8U));
    vlSelf->SimTop__DOT__top__DOT__dreq[4U] = ((0x800U 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[4U]) 
                                               | (0xfffU 
                                                  & ((__Vtemp39[1U] 
                                                      >> 0x18U) 
                                                     | (0x700U 
                                                        & ((IData)(
                                                                   (((1U 
                                                                      & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                          >> 6U) 
                                                                         | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                            >> 5U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                                          << 0x12U) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                            >> 0xeU)))
                                                                      : 0ULL) 
                                                                    >> 0x20U)) 
                                                           >> 0x15U)))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0U;
    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd = 0ULL;
    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                  >> 4U)))) {
        if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                        << 0x32U) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                      << 0x12U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                   >> 0xeU)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0xffU;
            } else {
                if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                    if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                            = ((0xffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                               | ((QData)((IData)((
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U] 
                                                    << 0x12U) 
                                                   | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                      >> 0xeU)))) 
                                  << 0x20U));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0xf0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                        = ((0xffffffff00000000ULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                           | (IData)((IData)(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U] 
                                               << 0x12U) 
                                              | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                 >> 0xeU)))));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0xfU;
                }
                if ((1U & (~ VL_ONEHOT0_I(((2U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                  >> 0xfU)) 
                                           | (1U & 
                                              (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                  >> 0x10U)))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: writedata.sv:86: Assertion failed in %NSimTop.top.core.writedata: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("/mnt/d/WorkSpace/Git_Project/RISC-V_CPU/build/../vsrc/pipeline/memory/writedata.sv", 86, "");
                    }
                }
            }
        } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                        = ((0xffffffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                           | ((QData)((IData)((0xffffU 
                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                  >> 0xeU)))) 
                              << 0x30U));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0xc0U;
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                        = ((0xffff0000ffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                           | ((QData)((IData)((0xffffU 
                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                  >> 0xeU)))) 
                              << 0x20U));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0x30U;
                }
            } else if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = ((0xffffffff0000ffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                       | ((QData)((IData)((0xffffU 
                                           & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                              >> 0xeU)))) 
                          << 0x10U));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0xcU;
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = ((0xffffffffffff0000ULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                       | (IData)((IData)((0xffffU & 
                                          (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                           >> 0xeU)))));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 3U;
            }
        } else if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                        = ((0xffffffffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                  >> 0xeU)))) 
                              << 0x38U));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0x80U;
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                        = ((0xff00ffffffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                  >> 0xeU)))) 
                              << 0x30U));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0x40U;
                }
            } else if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = ((0xffff00ffffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                            >> 0xeU)))) 
                          << 0x28U));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0x20U;
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = ((0xffffff00ffffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                            >> 0xeU)))) 
                          << 0x20U));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 0x10U;
            }
        } else if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = ((0xffffffff00ffffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                            >> 0xeU)))) 
                          << 0x18U));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 8U;
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                    = ((0xffffffffff00ffffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                            >> 0xeU)))) 
                          << 0x10U));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 4U;
            }
        } else if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                = ((0xffffffffffff00ffULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                   | ((QData)((IData)((0xffU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                                >> 0xeU)))) 
                      << 8U));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 2U;
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                = ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd) 
                   | (IData)((IData)((0xffU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U] 
                                               >> 0xeU)))));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe = 1U;
        }
    }
    if (vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlSelf->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlSelf->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlSelf->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
    if ((0x8000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        if ((0x4000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                          >> 0x19U)))) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x18U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                  >> 0x17U)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                            = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2;
                    }
                }
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                = ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                        : ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                            ? 4ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm))
                    : vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm);
        }
    } else if ((0x4000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
            = ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                ? ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                            ? vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm
                            : (QData)((IData)((0x1fU 
                                               & (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2)))))
                        : (QData)((IData)((0x1fU & (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2)))))
                    : ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                        : (QData)((IData)((0x3fU & (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2))))))
                : ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                        : ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                            ? (QData)((IData)((0x3fU 
                                               & (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2))))
                            : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2))
                    : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2));
    } else if ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm;
    } else if ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
            = ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                ? vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm
                : ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm));
    } else if ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm;
    } else if ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm;
    }
    if ((0x8000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        if ((0x4000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                          >> 0x19U)))) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x18U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                  >> 0x17U)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                            = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
                    }
                }
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                = ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                        : ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                            ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))
                            : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1))
                    : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1);
        }
    } else if ((0x4000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
    } else if ((0x2000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
    } else if ((0x1000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
            = ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                ? ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                    : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))))
                : ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm
                    : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1));
    } else if ((0x800000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
    } else if ((0x400000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[2U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[2U]))) 
                   >> 0x20U));
    if (((1U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[2U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[3U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[4U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[4U]))) 
                   >> 0x20U));
    if (((2U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[4U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[5U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[6U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[6U]))) 
                   >> 0x20U));
    if (((3U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[6U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[7U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[8U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[8U]))) 
                   >> 0x20U));
    if (((4U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[8U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[9U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xaU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xbU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xaU]))) 
                   >> 0x20U));
    if (((5U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xaU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xbU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xcU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xdU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xcU]))) 
                   >> 0x20U));
    if (((6U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xcU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xdU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xeU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0xeU]))) 
                   >> 0x20U));
    if (((7U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xeU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0xfU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x10U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x11U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x10U]))) 
                   >> 0x20U));
    if (((8U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x10U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x11U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x12U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x13U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x12U]))) 
                   >> 0x20U));
    if (((9U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x12U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x13U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x14U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x15U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x14U]))) 
                   >> 0x20U));
    if (((0xaU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x14U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x15U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x16U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x17U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x16U]))) 
                   >> 0x20U));
    if (((0xbU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x16U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x17U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x18U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x18U]))) 
                   >> 0x20U));
    if (((0xcU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x18U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x19U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1aU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1aU]))) 
                   >> 0x20U));
    if (((0xdU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1cU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1cU]))) 
                   >> 0x20U));
    if (((0xeU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1eU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x1eU]))) 
                   >> 0x20U));
    if (((0xfU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x1fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x20U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x21U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x20U]))) 
                   >> 0x20U));
    if (((0x10U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x20U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x21U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x22U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x23U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x22U]))) 
                   >> 0x20U));
    if (((0x11U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x22U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x23U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x24U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x25U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x24U]))) 
                   >> 0x20U));
    if (((0x12U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x24U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x25U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x26U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x27U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x26U]))) 
                   >> 0x20U));
    if (((0x13U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x26U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x27U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x28U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x29U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x28U]))) 
                   >> 0x20U));
    if (((0x14U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x28U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x29U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2aU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2aU]))) 
                   >> 0x20U));
    if (((0x15U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2cU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2cU]))) 
                   >> 0x20U));
    if (((0x16U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2eU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x2eU]))) 
                   >> 0x20U));
    if (((0x17U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x2fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x30U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x31U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x30U]))) 
                   >> 0x20U));
    if (((0x18U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x30U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x31U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x32U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x33U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x32U]))) 
                   >> 0x20U));
    if (((0x19U == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x32U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x33U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x34U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x35U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x34U]))) 
                   >> 0x20U));
    if (((0x1aU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x34U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x35U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x36U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x37U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x36U]))) 
                   >> 0x20U));
    if (((0x1bU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x36U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x37U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x38U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x39U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x38U]))) 
                   >> 0x20U));
    if (((0x1cU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x38U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x39U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3aU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3aU]))) 
                   >> 0x20U));
    if (((0x1dU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3cU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3cU]))) 
                   >> 0x20U));
    if (((0x1eU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3eU]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs[0x3eU]))) 
                   >> 0x20U));
    if (((0x1fU == (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U])) 
         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[2U] 
            >> 5U))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt[0x3fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW[0U]))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__top__DOT__icreq[0U] = 0U;
    vlSelf->SimTop__DOT__top__DOT__icreq[1U] = 0U;
    vlSelf->SimTop__DOT__top__DOT__icreq[2U] = ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc) 
                                                << 0x12U);
    vlSelf->SimTop__DOT__top__DOT__icreq[3U] = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc) 
                                                 >> 0xeU) 
                                                | ((IData)(
                                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__pc 
                                                            >> 0x20U)) 
                                                   << 0x12U));
    vlSelf->SimTop__DOT__top__DOT__icreq[4U] = (0x480000U 
                                                | ((IData)(
                                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__pc 
                                                            >> 0x20U)) 
                                                   >> 0xeU));
    vlSelf->SimTop__DOT__top__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd);
    vlSelf->SimTop__DOT__top__DOT__dreq[1U] = (IData)(
                                                      (vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__writedata__wd 
                                                       >> 0x20U));
    vlSelf->SimTop__DOT__top__DOT__dreq[2U] = ((0xffffff00U 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[2U]) 
                                               | ((0x20U 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                                   ? (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__strobe)
                                                   : 0U));
    vlSelf->SimTop__DOT__oresp[0U] = 0U;
    vlSelf->SimTop__DOT__oresp[1U] = 0U;
    vlSelf->SimTop__DOT__oresp[2U] = 0U;
    if (VL_ONEHOT0_I((((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                       << 1U) | (2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))))) {
        if ((2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
            if ((0x40600008ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = 0U;
                vlSelf->SimTop__DOT__oresp[1U] = 0U;
            } else if ((0x3800bff8ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__ms_cnt 
                                                          >> 0x20U));
            } else if ((0x20003000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__ms_cnt 
                                                          >> 0x20U));
            } else if ((0x23333008ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(vlSelf->__Vfunc_get_switch__6__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->__Vfunc_get_switch__6__Vfuncout)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->__Vfunc_get_switch__6__Vfuncout)) 
                                                          >> 0x20U));
            } else {
                VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, vlSelf->SimTop__DOT__ram__DOT__idx, vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->__Vfunc_ram_read_helper__7__Vfuncout 
                                                          >> 0x20U));
            }
            if ((1U & (~ VL_ONEHOT0_I((((0x23333008ULL 
                                         == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                        << 3U) | ((
                                                   (0x20003000ULL 
                                                    == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                   << 2U) 
                                                  | (((0x3800bff8ULL 
                                                       == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                      << 1U) 
                                                     | (0x40600008ULL 
                                                        == vlSelf->SimTop__DOT__ram__DOT__addr)))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: ram.sv:210: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/test/vsrc/common/ram.sv", 210, "");
                }
            }
        } else if ((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
        } else {
            vlSelf->SimTop__DOT__oresp[0U] = 0U;
            vlSelf->SimTop__DOT__oresp[1U] = 0U;
            vlSelf->SimTop__DOT__oresp[2U] = 0U;
        }
    } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
        VL_WRITEF("[%0t] %%Error: ram.sv:207: Assertion failed in %NSimTop.ram: 'unique if' statement violated\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("src/test/vsrc/common/ram.sv", 207, "");
    }
    __Vtemp51[1U] = (((IData)((((((0x26U == (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                >> 0x16U))) 
                                  | (0x27U == (0x3fU 
                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                  >> 0x16U)))) 
                                 | (0x28U == (0x3fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                 >> 0x16U)))) 
                                | (0x29U == (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                >> 0x16U))))
                                ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                                : 0ULL)) >> 4U) | ((IData)(
                                                           ((((((0x26U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                                     >> 0x16U))) 
                                                                | (0x27U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                                       >> 0x16U)))) 
                                                               | (0x28U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                                      >> 0x16U)))) 
                                                              | (0x29U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                                     >> 0x16U))))
                                                              ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
        = (((IData)((((((0x26U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0x16U))) 
                        | (0x27U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0x16U)))) 
                       | (0x28U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                             >> 0x16U)))) 
                      | (0x29U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                            >> 0x16U))))
                      ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                      : 0ULL)) << 0x1cU) | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U] 
        = __Vtemp51[1U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U] 
        = (((IData)(((((((0x26U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                             >> 0x16U))) 
                         | (0x27U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                               >> 0x16U)))) 
                        | (0x28U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                              >> 0x16U)))) 
                       | (0x29U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                             >> 0x16U))))
                       ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                       : 0ULL) >> 0x20U)) >> 4U) | 
           ((IData)(((0x2bU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x16U)))
                      ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                      : 0ULL)) << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U] 
        = (((IData)(((0x2bU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x16U)))
                      ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                      : 0ULL)) >> 4U) | ((IData)(((
                                                   (0x2bU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                        >> 0x16U)))
                                                    ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                                                    : 0ULL) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U] 
        = (((IData)((((0x2bU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                          >> 0x16U)))
                       ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                       : 0ULL) >> 0x20U)) >> 4U) | 
           ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm) 
            << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm) 
            >> 4U) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                               >> 0x20U)) << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U] 
        = (((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                     >> 0x20U)) >> 4U) | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2) 
                                          << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2) 
            >> 4U) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                               >> 0x20U)) << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U] 
        = (((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                     >> 0x20U)) >> 4U) | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1) 
                                          << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1) 
            >> 4U) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                               >> 0x20U)) << 0x1cU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
        = ((0xf0000000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                           << 8U)) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                                               >> 0x20U)) 
                                      >> 4U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
        = (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
             << 6U) | (0x3eU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                >> 0xeU))) | (1U & 
                                              (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                               >> 0x18U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU] 
        = ((1U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                  >> 0x1aU)) | ((0x3eU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                          >> 0x1aU)) 
                                | ((IData)((((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))) 
                                   << 6U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU] 
        = ((1U & ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))) 
                  >> 0x1aU)) | ((0x3eU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))) 
                                          >> 0x1aU)) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))) 
                                            >> 0x20U)) 
                                   << 6U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xeU] 
        = ((1U & ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))) 
                           >> 0x20U)) >> 0x1aU)) | 
           (0x3eU & ((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))) 
                              >> 0x20U)) >> 0x1aU)));
    __Vtemp58[3U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                          << 0x35U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                             << 0x15U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                               >> 0xbU)))) 
                                >> 0xeU)) | ((0x3fc00U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                                >> 0xbU)))) 
                                                 >> 0xeU)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                                >> 0xbU))) 
                                                         >> 0x20U)) 
                                                << 0x12U)));
    __Vtemp58[4U] = ((0x3ffU & ((IData)(((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                           << 0x35U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                >> 0xbU))) 
                                         >> 0x20U)) 
                                >> 0xeU)) | ((((2U 
                                                & (vlSelf->SimTop__DOT__top__DOT__dreq[4U] 
                                                   >> 0xaU)) 
                                               | (0U 
                                                  != 
                                                  (0xffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__dreq[2U]))) 
                                              << 0x15U) 
                                             | ((0x1c0000U 
                                                 & (vlSelf->SimTop__DOT__top__DOT__dreq[2U] 
                                                    << 0xaU)) 
                                                | (0x3fc00U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                                                    << 0x15U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                                      >> 0xbU))) 
                                                               >> 0x20U)) 
                                                      >> 0xeU)))));
    vlSelf->SimTop__DOT__top__DOT__dcreq[0U] = ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__dreq[0U])))) 
                                                << 0xaU);
    vlSelf->SimTop__DOT__top__DOT__dcreq[1U] = (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->SimTop__DOT__top__DOT__dreq[0U])))) 
                                                 >> 0x16U) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__top__DOT__dreq[0U]))) 
                                                            >> 0x20U)) 
                                                   << 0xaU));
    vlSelf->SimTop__DOT__top__DOT__dcreq[2U] = ((((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__top__DOT__dreq[4U])) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__top__DOT__dreq[3U])) 
                                                               << 0x15U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__dreq[2U])) 
                                                                 >> 0xbU)))) 
                                                  << 0x12U) 
                                                 | (0x3fc00U 
                                                    & (vlSelf->SimTop__DOT__top__DOT__dreq[2U] 
                                                       << 0xaU))) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__dreq[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__top__DOT__dreq[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x16U));
    vlSelf->SimTop__DOT__top__DOT__dcreq[3U] = __Vtemp58[3U];
    vlSelf->SimTop__DOT__top__DOT__dcreq[4U] = __Vtemp58[4U];
    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U] = 0U;
    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U] = 0U;
    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] = 0U;
    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[3U] = 0U;
    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] = 0U;
    if (vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy) {
        if ((0U == vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U] 
                = vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[0U];
            vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U] 
                = vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[1U];
            vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                = ((0xfffffffcU & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U]) 
                   | vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[2U]);
        }
        if ((1U == vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                = ((3U & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U]) 
                   | (vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[0U] 
                      << 2U));
            vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[3U] 
                = ((vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[0U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[1U] 
                                 << 2U));
            vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                = (0xfU & ((vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[1U] 
                            >> 0x1eU) | (vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4[2U] 
                                         << 2U)));
        }
    }
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[0U] 
        = vlSelf->SimTop__DOT__top__DOT__dcreq[0U];
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[1U] 
        = vlSelf->SimTop__DOT__top__DOT__dcreq[1U];
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[2U] 
        = vlSelf->SimTop__DOT__top__DOT__dcreq[2U];
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[3U] 
        = vlSelf->SimTop__DOT__top__DOT__dcreq[3U];
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[4U] 
        = ((vlSelf->SimTop__DOT__top__DOT__icreq[0U] 
            << 0x17U) | vlSelf->SimTop__DOT__top__DOT__dcreq[4U]);
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[5U] 
        = ((vlSelf->SimTop__DOT__top__DOT__icreq[0U] 
            >> 9U) | (vlSelf->SimTop__DOT__top__DOT__icreq[1U] 
                      << 0x17U));
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[6U] 
        = ((vlSelf->SimTop__DOT__top__DOT__icreq[1U] 
            >> 9U) | (vlSelf->SimTop__DOT__top__DOT__icreq[2U] 
                      << 0x17U));
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[7U] 
        = ((vlSelf->SimTop__DOT__top__DOT__icreq[2U] 
            >> 9U) | (vlSelf->SimTop__DOT__top__DOT__icreq[3U] 
                      << 0x17U));
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[8U] 
        = ((vlSelf->SimTop__DOT__top__DOT__icreq[3U] 
            >> 9U) | (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
                      << 0x17U));
    vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[9U] 
        = (vlSelf->SimTop__DOT__top__DOT__icreq[4U] 
           >> 9U);
    vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[3U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])) 
                                               >> 2U))));
    vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U])) 
                     << 0x3eU) | (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[3U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])) 
                                                >> 2U))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U] 
        = (3U & (- (IData)((1U & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                   >> 3U) & (vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[4U] 
                                             >> 2U))))));
    vlSelf->SimTop__DOT__top__DOT__dresp[0U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U]))));
    vlSelf->SimTop__DOT__top__DOT__dresp[1U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U]))) 
                                                        >> 0x20U));
    vlSelf->SimTop__DOT__top__DOT__dresp[2U] = (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U] 
                                                                  >> 1U) 
                                                                 & vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[2U])))));
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__select = 0U;
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((0x12dU >= (0x1ffU & ((IData)(0x96U) 
                                             + ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        ? (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                           (0xfU & (((IData)(0x96U) 
                                     + ((IData)(0x97U) 
                                        * vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x96U) 
                                                    + 
                                                    ((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        : (IData)(vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand3)))) {
                vlSelf->SimTop__DOT__top__DOT__mux__DOT__select 
                    = vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i;
                goto __Vlabel1;
            }
            vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if (vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__oreq[0U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                (0xfU 
                                                 & (((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1[0U]);
        vlSelf->SimTop__DOT__oreq[1U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(1U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1[1U]);
        vlSelf->SimTop__DOT__oreq[2U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1[2U]);
        vlSelf->SimTop__DOT__oreq[3U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(3U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1[3U]);
        vlSelf->SimTop__DOT__oreq[4U] = (0x7fffffU 
                                         & ((0x12dU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))) 
                                                | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x97U) 
                                                         * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__top__DOT__mux__DOT__index))))
                                             : vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1[4U]));
    } else {
        vlSelf->SimTop__DOT__oreq[0U] = 0U;
        vlSelf->SimTop__DOT__oreq[1U] = 0U;
        vlSelf->SimTop__DOT__oreq[2U] = 0U;
        vlSelf->SimTop__DOT__oreq[3U] = 0U;
        vlSelf->SimTop__DOT__oreq[4U] = 0U;
    }
    vlSelf->SimTop__DOT__top__DOT__iresp = (((QData)((IData)(
                                                             (3U 
                                                              & vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[2U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__top__DOT__core__DOT__pc 
                                                                           >> 2U)))
                                                                ? 
                                                               vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[1U]
                                                                : 
                                                               vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp[0U]))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__memory_delay 
        = (1U & ((vlSelf->SimTop__DOT__top__DOT__dreq[4U] 
                  >> 0xbU) & (~ vlSelf->SimTop__DOT__top__DOT__dresp[2U])));
    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT____Vxrand1;
    vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
        = vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT____Vxrand2;
    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                  >> 4U)))) {
        if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__dresp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__dresp[0U])));
            } else {
                if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                    if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                            = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                         >> 1U)) & 
                                     (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                      >> 0x1fU)));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                            = (((QData)((IData)((- (IData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__dresp[1U])));
                    }
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                        = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                     >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                                >> 0x1fU)));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                        = (((QData)((IData)((- (IData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__dresp[0U])));
                }
                if ((1U & (~ VL_ONEHOT0_I(((2U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                  >> 0xfU)) 
                                           | (1U & 
                                              (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                  >> 0x10U)))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: readdata.sv:87: Assertion failed in %NSimTop.top.core.readdata: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("/mnt/d/WorkSpace/Git_Project/RISC-V_CPU/build/../vsrc/pipeline/memory/readdata.sv", 87, "");
                    }
                }
            }
        } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                        = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                     >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                >> 0x1fU)));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                            << 0x10U) | (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                         >> 0x10U))));
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                        = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                     >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                >> 0xfU)));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & vlSelf->SimTop__DOT__top__DOT__dresp[1U]))));
                }
            } else if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                    = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                 >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                            >> 0x1fU)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                        << 0x10U) | (QData)((IData)(
                                                    (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                                     >> 0x10U))));
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                    = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                 >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                            >> 0xfU)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->SimTop__DOT__top__DOT__dresp[0U]))));
            }
        } else if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                        = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                     >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                >> 0x1fU)));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                            << 8U) | (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                      >> 0x18U))));
                } else {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                        = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                     >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                >> 0x17U)));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                         >> 0x10U)))));
                }
            } else if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                    = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                 >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                            >> 0xfU)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                                     >> 8U)))));
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                    = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                 >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[1U] 
                                            >> 7U)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->SimTop__DOT__top__DOT__dresp[1U]))));
            }
        } else if ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                    = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                 >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                            >> 0x1fU)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                                  >> 0x18U))));
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                    = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                 >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                            >> 0x17U)));
                vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                                     >> 0x10U)))));
            }
        } else if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                             >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                        >> 0xfU)));
            vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                                 >> 8U)))));
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit 
                = (1U & ((~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                             >> 1U)) & (vlSelf->SimTop__DOT__top__DOT__dresp[0U] 
                                        >> 7U)));
            vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd 
                = (((- (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__readdata__DOT__sign_bit))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & vlSelf->SimTop__DOT__top__DOT__dresp[0U]))));
        }
    }
    if ((0x12dU >= (0x1ffU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))) {
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                         ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                  (0xfU & (((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                           >> 5U))] >> (0x1fU & ((IData)(0x97U) 
                                                 * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                         ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                  ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                         ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                  ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                         ((IData)(4U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                  ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x97U) 
                                              * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))
                              ? 0U : (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                                      ((IData)(5U) 
                                       + (0xfU & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select))))) 
                            | (vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs[
                               ((IData)(4U) + (0xfU 
                                               & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__top__DOT__mux__DOT__select)))));
    } else {
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[0U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2[0U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[1U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2[1U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[2U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2[2U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[3U] 
            = vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2[3U];
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2[4U]);
    }
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffff0000ULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | (IData)((IData)(
                                                              ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xbU)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xaU)))))))));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffff0000ffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xdU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xcU)))))))) 
                                               << 0x10U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffff0000ffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xfU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xeU)))))))) 
                                               << 0x20U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x11U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x10U)))))))) 
                                               << 0x30U));
    __Vtemp76[2U] = ((3U & ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                      >> 0x13U)))) 
                            >> 0x18U)) | ((0xfcU & 
                                           ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                         << 0xdU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                           >> 0x13U)))) 
                                            >> 0x18U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                             >> 0x13U))) 
                                                      >> 0x20U)) 
                                             << 8U)));
    __Vtemp76[3U] = ((3U & ((IData)(((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                       << 0x2dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                        >> 0x13U))) 
                                     >> 0x20U)) >> 0x18U)) 
                     | (0xfcU & ((IData)(((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                 >> 0x13U))) 
                                          >> 0x20U)) 
                                 >> 0x18U)));
    __Vtemp78[3U] = (((IData)((((QData)((IData)(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                  << 0xdU) 
                                                 | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                    >> 0x13U)))) 
                                << 2U) | (QData)((IData)(
                                                         ((2U 
                                                           & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                              >> 6U)) 
                                                          | (1U 
                                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])))))) 
                      >> 0x1bU) | ((((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                    >> 0x13U)))) 
                                     << 0xdU) | (0x1f80U 
                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                    >> 1U))) 
                                   | ((IData)(((((QData)((IData)(
                                                                 ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                                     >> 0x13U)))) 
                                                 << 2U) 
                                                | (QData)((IData)(
                                                                  ((2U 
                                                                    & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                       >> 6U)) 
                                                                   | (1U 
                                                                      & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U]))))) 
                                               >> 0x20U)) 
                                      << 5U)));
    __Vtemp78[4U] = (((0x1fU & ((IData)((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                          << 0x2dU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                             << 0xdU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                               >> 0x13U)))) 
                                >> 0x13U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                                           << 0xdU) 
                                                                          | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                                             >> 0x13U)))) 
                                                         << 2U) 
                                                        | (QData)((IData)(
                                                                          ((2U 
                                                                            & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                               >> 6U)) 
                                                                           | (1U 
                                                                              & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U]))))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | (__Vtemp76[2U] << 5U));
    __Vtemp80[4U] = (((IData)((((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                 ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                     << 0x32U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                   << 0x12U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                     >> 0xeU)))) 
                               >> 0x20U)) >> 0x1fU) 
                     | (((IData)((((QData)((IData)(
                                                   ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                     << 0xdU) 
                                                    | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                       >> 0x13U)))) 
                                   << 2U) | (QData)((IData)(
                                                            ((2U 
                                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                 >> 6U)) 
                                                             | (1U 
                                                                & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])))))) 
                         << 6U) | (0x3eU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                            >> 0xdU))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                    << 0x32U) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                               >> 0xeU))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                     << 0x32U) | (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                   << 0x12U) | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                >> 0xeU))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U] 
        = (((IData)(((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                      ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd
                      : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                          << 0x32U) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                        >> 0xeU))))) 
            << 1U) | (1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                             >> 6U) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                       >> 5U))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U] 
        = (((IData)(((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                      ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd
                      : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                          << 0x32U) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                        >> 0xeU))))) 
            >> 0x1fU) | ((IData)((((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                    ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__readdata__rd
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                        << 0x32U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                         << 0x12U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                           >> 0xeU)))) 
                                  >> 0x20U)) << 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
        = __Vtemp80[4U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
        = ((1U & ((IData)((((QData)((IData)(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                              << 0xdU) 
                                             | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                >> 0x13U)))) 
                            << 2U) | (QData)((IData)(
                                                     ((2U 
                                                       & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                          >> 6U)) 
                                                      | (1U 
                                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])))))) 
                  >> 0x1aU)) | (__Vtemp78[3U] << 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U] 
        = ((__Vtemp78[3U] >> 0x1fU) | (__Vtemp78[4U] 
                                       << 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U] 
        = ((__Vtemp78[4U] >> 0x1fU) | ((0x3eU & (__Vtemp76[2U] 
                                                 >> 0x1aU)) 
                                       | (__Vtemp76[3U] 
                                          << 6U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
        = ((3U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U]) 
           | (0xcU & ((0x1ffffff8U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                        & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U]) 
                                       >> 3U) & (((
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                       >> 1U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                       >> 1U))) 
                                                  | ((0x1fU 
                                                      & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                          << 4U) 
                                                         | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                            >> 0x1cU))) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                         >> 1U)))) 
                                                 << 3U))) 
                      | (0xffffffcU & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U]) 
                                        >> 4U) & ((
                                                   ((0x1fU 
                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                        >> 1U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                        >> 1U))) 
                                                   | ((0x1fU 
                                                       & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
                                                           << 4U) 
                                                          | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                             >> 0x1cU))) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                          >> 1U)))) 
                                                  << 2U))))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U] 
        = ((0x3fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U]) 
           | ((IData)(((0x2bU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                           >> 0x16U)))
                        ? (0xfffffffffffffffeULL & 
                           (((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
                              ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                  >> 1U)))
                              : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                  << 0x24U) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                  >> 0x1cU)))) 
                            + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                << 0x24U) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                >> 0x1cU)))))
                        : ((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU])) 
                             << 0x3aU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                           << 0x1aU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])) 
                                             >> 6U))) 
                           + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                               << 0x24U) | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                               >> 0x1cU)))))) 
              << 0xeU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U] 
        = (((IData)(((0x2bU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0x16U)))
                      ? (0xfffffffffffffffeULL & ((
                                                   (2U 
                                                    & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                          >> 1U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                          >> 0x1cU)))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                         >> 0x1cU)))))
                      : ((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU])) 
                           << 0x3aU) | (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])) 
                                           >> 6U))) 
                         + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                           >> 0x1cU)))))) 
            >> 0x12U) | ((IData)((((0x2bU == (0x3fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                 >> 0x16U)))
                                    ? (0xfffffffffffffffeULL 
                                       & (((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
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
                                                     >> 0x1cU)))) 
                                          + (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                   >> 0x1cU)))))
                                    : ((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])) 
                                              >> 6U))) 
                                       + (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                >> 0x1cU))))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
        = ((0xffffc000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U]) 
           | ((IData)((((0x2bU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0x16U)))
                         ? (0xfffffffffffffffeULL & 
                            (((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])
                               ? (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                   >> 1U)))
                               : (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                   >> 0x1cU)))) 
                             + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                 >> 0x1cU)))))
                         : ((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xeU])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU])) 
                                              >> 6U))) 
                            + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                << 0x24U) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                >> 0x1cU))))) 
                       >> 0x20U)) >> 0x12U));
    if ((0x200000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb 
            = (QData)((IData)(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                       >> 0xcU) & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                ? ((((0x15U == (0x3fU 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                   >> 0x16U))) 
                                     | (0x18U == (0x3fU 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                     >> 0x16U)))) 
                                    | (0x19U == (0x3fU 
                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                    >> 0x16U))))
                                    ? (QData)((IData)(
                                                      (0x3fU 
                                                       & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                    : ((((0x1cU == 
                                          (0x3fU & 
                                           (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                            >> 0x16U))) 
                                         | (0x1dU == 
                                            (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                >> 0x16U)))) 
                                        | (0x1eU == 
                                           (0x3fU & 
                                            (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
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
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                                    >> 0x1cU))))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
            = ((0xdU == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                  >> 0xeU))) ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (((1U 
                                                                                & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                                                >> 0xdU) 
                                                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                                                                << 0x3fU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                                                << 4U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                                                >> 0x1cU)))) 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((1U 
                                                                    & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                                        >> 0xdU) 
                                                                       & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                                          >> 1U)))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                                                     << 0x3fU) 
                                                                    | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                                        << 0x1fU) 
                                                                       | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                                          >> 1U)))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                                                     << 0x24U) 
                                                                    | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                                        << 4U) 
                                                                       | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                                          >> 0x1cU)))))))
                : (QData)((IData)(((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                           >> 0xdU) 
                                          & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                             >> 1U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                           >> 1U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                   >> 0x1cU)))))));
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb 
            = ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                       >> 0xcU) & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                ? ((((0x15U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 0x16U))) 
                     | (0x18U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                           >> 0x16U)))) 
                    | (0x19U == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                          >> 0x16U))))
                    ? (QData)((IData)((0x3fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                    : ((((0x1cU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                             >> 0x16U))) 
                         | (0x1dU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                               >> 0x16U)))) 
                        | (0x1eU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                              >> 0x16U))))
                        ? (QData)((IData)((0x1fU & 
                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                        : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))))
                : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                    << 0x24U) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                            >> 0x1cU))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
            = ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                       >> 0xdU) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                   >> 1U))) ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                     >> 1U)))
                : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                    << 0x24U) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                            >> 0x1cU))));
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__result 
        = ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
            ? vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca
            : ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                ? ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                    ? ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca
                        : ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                            : VL_SHIFTR_QQQ(64,64,64, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)))
                    : ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                        ? ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? VL_SHIFTL_QQQ(64,64,64, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                            : ((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                                >= vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                                ? 1ULL : 0ULL)) : (
                                                   (0x4000U 
                                                    & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                                                     < vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 
                                                   (VL_GTES_IQQ(1,64,64, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                                                     ? 1ULL
                                                     : 0ULL))))
                : ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                    ? ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                        ? ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? (VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca, vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                                ? 1ULL : 0ULL) : ((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                                                   != vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                                                   ? 1ULL
                                                   : 0ULL))
                        : ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? ((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                                == vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                                ? 1ULL : 0ULL) : (vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                                                  ^ vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)))
                    : ((0x8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                        ? ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? (vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                            : (vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                               | vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb))
                        : ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? (vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                               - vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb)
                            : (vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srca 
                               + vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__srcb))))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
        = ((0x200000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__result 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__result)))
            : vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT__alu__DOT__result);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0x80U & ((0x7ff80U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                    >> 0xdU)) | (0xfff80U 
                                                 & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                     >> 0xcU) 
                                                    & ((1ULL 
                                                        == vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c) 
                                                       << 7U))))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0x3fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c) 
              << 0xeU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c) 
            >> 0x12U) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                  >> 0x20U)) << 0xeU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U] 
        = (((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                     >> 0x20U)) >> 0x12U) | ((IData)(
                                                     ((1U 
                                                       & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                        << 0x24U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                                           << 4U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                                             >> 0x1cU))))) 
                                             << 0xeU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U] 
        = (((IData)(((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                      ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                      : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                          << 0x24U) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                                  >> 0x1cU))))) 
            >> 0x12U) | ((IData)((((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                                   >> 0x1cU)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U] 
        = ((0xffffc000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U]) 
           | ((IData)((((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                         ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                         : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                           >> 0x1cU)))) 
                       >> 0x20U)) >> 0x12U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__jump_delay 
        = (1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
                  >> 7U) & (~ (IData)((vlSelf->SimTop__DOT__top__DOT__iresp 
                                       >> 0x20U)))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__pcnext 
        = ((0x80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])
            ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                << 0x32U) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                              << 0x12U) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                           >> 0xeU)))
            : (4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc));
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
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
