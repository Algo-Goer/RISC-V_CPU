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
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 = 0ULL;
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 = 0ULL;
    vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand3 
        = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm = 0ULL;
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1);
}

void VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(IData/*31:0*/ &get_switch__Vfuncrtn);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

void VSimTop___024root___settle__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp104;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<6>/*191:0*/ __Vtemp129;
    VlWide<8>/*255:0*/ __Vtemp131;
    // Body
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
                                = (0xe8000U | (0x7fffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
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
                            = (0xf8000U | (0x7fffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
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
                        = (0x100000U | (0xffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x1700U | (0x3f80ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
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
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x50000U | (0xffffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
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
                        = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                           | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 7U))) 
                               << 5U) | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                  >> 7U))));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x300U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xa0000U | (0xffffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0xc00U | (0x3f83ffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x90000U | (0xffffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x800U | (0x3f83ffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        } else if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                             >> 0xcU)))) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xb0000U | (0xffffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x1000U | (0x3f83ffU 
                                              & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                         >> 0xdU)))) {
                        if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                      >> 0xcU)))) {
                            if ((0U == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x19U))) {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x70000U | (0xffffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x3f83ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                            } else {
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x80000U | (0xffffU 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                    = (0x400U | (0x3f83ffU 
                                                 & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            }
                        }
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
                    = (0xd0000U | (0xffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x3f83ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x40U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x200U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
            }
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        }
    } else if ((0x10U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
        if ((8U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        } else if ((4U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
            if ((2U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                if ((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x60000U | (0xffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = (0x3f83ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                        = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
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
                    = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                       | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            >> 7U))) 
                           << 5U) | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                              >> 7U))));
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                    = (0x200U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                if ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                    if ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                        if ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U])) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x30000U | (0xffffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0xc00U | (0x3f83ffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        } else {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x20000U | (0xffffU 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                = (0x800U | (0x3f83ffU 
                                             & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        }
                    } else if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                         >> 0xcU)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x40000U | (0xffffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x1000U | (0x3f83ffU 
                                          & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                    }
                } else if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                     >> 0xdU)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                  >> 0xcU)))) {
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x10000U | (0xffffU 
                                           & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
                        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                            = (0x3f83ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
                    }
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
                = (0xc0000U | (0xffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = (0x3f83ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = (0x80U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = ((0x3fffc0U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl) 
                   | (((0U != (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 7U))) << 5U) 
                      | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                  >> 7U))));
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                = (0x200U | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
        } else {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
        }
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = 0U;
    }
    if (vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
        = ((0x7fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U]) 
           | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
              << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[7U] 
        = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xbU] 
            >> 0x11U) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
                         << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[8U] 
        = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU] 
            >> 0x11U) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
                         << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[9U] 
        = (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU] 
           >> 0x11U);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xffff81ffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0x7e00U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                         >> 7U)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xffffff00U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0xffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U]));
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
    vlSelf->SimTop__DOT__top__DOT__dreq[4U] = ((0x7ffU 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[4U]) 
                                               | (0x800U 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                     << 5U)));
    vlSelf->SimTop__DOT__top__DOT__dreq[2U] = ((0xffffff00U 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[2U]) 
                                               | ((0x40U 
                                                   & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                                   ? 0xffU
                                                   : 0U));
    vlSelf->SimTop__DOT__top__DOT__dreq[2U] = ((0x7ffU 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[2U]) 
                                               | ((IData)(
                                                          ((1U 
                                                            & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                >> 7U) 
                                                               | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                  >> 6U)))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                                << 0x11U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                  >> 0xfU)))
                                                            : 0ULL)) 
                                                  << 0xbU));
    vlSelf->SimTop__DOT__top__DOT__dreq[3U] = (((IData)(
                                                        ((1U 
                                                          & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                              >> 7U) 
                                                             | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                >> 6U)))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                              << 0x11U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                >> 0xfU)))
                                                          : 0ULL)) 
                                                >> 0x15U) 
                                               | ((IData)(
                                                          (((1U 
                                                             & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                 >> 7U) 
                                                                | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                   >> 6U)))
                                                             ? 
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                              << 0x31U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                                 << 0x11U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                   >> 0xfU)))
                                                             : 0ULL) 
                                                           >> 0x20U)) 
                                                  << 0xbU));
    vlSelf->SimTop__DOT__top__DOT__dreq[4U] = ((0x800U 
                                                & vlSelf->SimTop__DOT__top__DOT__dreq[4U]) 
                                               | (0xfffU 
                                                  & ((IData)(
                                                             (((1U 
                                                                & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                    >> 7U) 
                                                                   | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                      >> 6U)))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                                    << 0x11U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                                      >> 0xfU)))
                                                                : 0ULL) 
                                                              >> 0x20U)) 
                                                     >> 0x15U)));
    vlSelf->SimTop__DOT__top__DOT__dreq[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                                           << 0x11U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                             >> 0xfU))));
    vlSelf->SimTop__DOT__top__DOT__dreq[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[4U])) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[3U])) 
                                                            << 0x11U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                              >> 0xfU))) 
                                                       >> 0x20U));
    if ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                >> 5U) & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                             >> 7U))))) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[0U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                        << 0x31U) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                      << 0x11U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                   >> 0xfU))));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[1U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                         << 0x31U) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                       << 0x11U) | 
                                      ((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                       >> 0xfU))) >> 0x20U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
            = (0x20U | (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U]));
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
            = (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U]);
    }
    if ((0x40U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U])) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[0U] 
            = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U] 
                << 0x1fU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[2U] 
                             >> 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[1U] 
            = ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                << 0x1fU) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[3U] 
                             >> 1U));
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
            = (0x20U | (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out[4U] 
                                 >> 1U)));
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U] 
            = (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory[2U]);
    }
    if ((0x20U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U])) {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[0U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[0U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[1U] 
            = vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[1U];
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
            = (0x20U | (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out[2U]));
    } else {
        vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U] 
            = (0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback[2U]);
    }
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
    vlSelf->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlSelf->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlSelf->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
    vlSelf->SimTop__DOT__top__DOT__ireq[0U] = (IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__pc);
    vlSelf->SimTop__DOT__top__DOT__ireq[1U] = (IData)(
                                                      (vlSelf->SimTop__DOT__top__DOT__core__DOT__pc 
                                                       >> 0x20U));
    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                  >> 0x15U)))) {
        if ((0x100000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                          >> 0x13U)))) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                  >> 0x11U)))) {
                        if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                      >> 0x10U)))) {
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
            }
        } else if ((0x80000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                    = ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
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
                        : ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
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
                                                            >> 0x14U))))));
            }
        } else if ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x10U)))) {
                    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]))));
                }
            } else {
                vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                    = ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
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
                                                        >> 0x14U)))));
            }
        } else if ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                = (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))));
        } else if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                = (((- (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                                >> 0x14U))));
        }
    }
    __Vtemp104[3U] = ((0x3ffU & ((IData)((((QData)((IData)(
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
    __Vtemp104[4U] = ((0x3ffU & ((IData)(((((QData)((IData)(
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
    vlSelf->SimTop__DOT__top__DOT__dcreq[3U] = __Vtemp104[3U];
    vlSelf->SimTop__DOT__top__DOT__dcreq[4U] = __Vtemp104[4U];
    if (((vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U] 
          >> 5U) & ((0x1fU & vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute[2U]) 
                    == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                        >> 0x1bU)))) {
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
                           == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                               >> 0x1bU)))) {
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
                           == (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                               >> 0x1bU)))) {
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
                    == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                 >> 0x16U))))) {
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
                           == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                        >> 0x16U))))) {
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
                           == (0x1fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                        >> 0x16U))))) {
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
    vlSelf->SimTop__DOT__top__DOT__icreq[0U] = 0U;
    vlSelf->SimTop__DOT__top__DOT__icreq[1U] = 0U;
    vlSelf->SimTop__DOT__top__DOT__icreq[2U] = ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__ireq[0U])))) 
                                                << 0x12U);
    vlSelf->SimTop__DOT__top__DOT__icreq[3U] = (((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->SimTop__DOT__top__DOT__ireq[0U])))) 
                                                 >> 0xeU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__top__DOT__ireq[0U]))) 
                                                            >> 0x20U)) 
                                                   << 0x12U));
    vlSelf->SimTop__DOT__top__DOT__icreq[4U] = (0x80000U 
                                                | ((0x400000U 
                                                    & (vlSelf->SimTop__DOT__top__DOT__ireq[2U] 
                                                       << 0x16U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__ireq[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__top__DOT__ireq[0U]))) 
                                                               >> 0x20U)) 
                                                      >> 0xeU)));
    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                  >> 0x15U)))) {
        if ((0x100000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                          >> 0x13U)))) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                  >> 0x11U)))) {
                        if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                      >> 0x10U)))) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                                = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2;
                        }
                    }
                }
            }
        } else if ((0x80000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                = ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? 4ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm)
                    : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2);
        } else if ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                = ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2
                        : vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm)
                    : ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm));
        } else if ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm;
        } else if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm;
        }
    }
    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                  >> 0x15U)))) {
        if ((0x100000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                          >> 0x13U)))) {
                if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                  >> 0x11U)))) {
                        if ((1U & (~ (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                      >> 0x10U)))) {
                            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                                = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
                        }
                    }
                }
            }
        } else if ((0x80000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                = ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U])))
                        : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1)
                    : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1);
        } else if ((0x40000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                = ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                    ? ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1
                        : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))))
                    : ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)
                        ? vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm
                        : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1));
        } else if ((0x20000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
        } else if ((0x10000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl)) {
            vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                = vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1;
        }
    }
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
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0U] 
        = (((IData)(((0xdU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                        >> 0x10U)))
                      ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2)) 
            << 0x16U) | vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[1U] 
        = (((IData)(((0xdU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                        >> 0x10U)))
                      ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2)) 
            >> 0xaU) | ((IData)((((0xdU == (0x3fU & 
                                            (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                             >> 0x10U)))
                                   ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2) 
                                 >> 0x20U)) << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[2U] 
        = (((IData)((((0xdU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x10U)))
                       ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2) 
                     >> 0x20U)) >> 0xaU) | ((IData)(
                                                    ((0xfU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                                          >> 0x10U)))
                                                      ? 0ULL
                                                      : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1)) 
                                            << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[3U] 
        = (((IData)(((0xfU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                        >> 0x10U)))
                      ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1)) 
            >> 0xaU) | ((IData)((((0xfU == (0x3fU & 
                                            (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                             >> 0x10U)))
                                   ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1) 
                                 >> 0x20U)) << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[4U] 
        = (((IData)((((0xfU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl 
                                         >> 0x10U)))
                       ? 0ULL : vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1) 
                     >> 0x20U)) >> 0xaU) | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm) 
                                            << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[5U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm) 
            >> 0xaU) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                                 >> 0x20U)) << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[6U] 
        = (((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm 
                     >> 0x20U)) >> 0xaU) | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2) 
                                            << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[7U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2) 
            >> 0xaU) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                                 >> 0x20U)) << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[8U] 
        = (((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 
                     >> 0x20U)) >> 0xaU) | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1) 
                                            << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[9U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1) 
            >> 0xaU) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                                 >> 0x20U)) << 0x16U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xaU] 
        = ((0xf8000000U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                           << 0xcU)) | ((0x7c00000U 
                                         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U] 
                                            << 2U)) 
                                        | ((IData)(
                                                   (vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 
                                                    >> 0x20U)) 
                                           >> 0xaU)));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xbU] 
        = ((0x7ffffffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]) 
           | (0xf8000000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[2U]));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xcU] 
        = ((0x7ffffffU & (IData)((((QData)((IData)(
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))))) 
           | (0xf8000000U & (IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD[0xdU] 
        = ((0x7ffffffU & (IData)(((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))) 
                                  >> 0x20U))) | (0xf8000000U 
                                                 & (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out[0U]))) 
                                                            >> 0x20U))));
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
    __Vtemp127[2U] = ((3U & ((IData)((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                       << 0x31U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                        << 0x11U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                        >> 0xfU)))) 
                             >> 0x18U)) | ((0xfcU & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                          << 0x11U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                            >> 0xfU)))) 
                                             >> 0x18U)) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                            << 0x11U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                              >> 0xfU))) 
                                                       >> 0x20U)) 
                                              << 8U)));
    __Vtemp127[3U] = ((3U & ((IData)(((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                        << 0x31U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                         << 0x11U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                           >> 0xfU))) 
                                      >> 0x20U)) >> 0x18U)) 
                      | (0xfcU & ((IData)(((((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                             << 0x31U) 
                                            | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                << 0x11U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                  >> 0xfU))) 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    __Vtemp129[3U] = (((IData)((((QData)((IData)(((
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                   << 0x11U) 
                                                  | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                     >> 0xfU)))) 
                                 << 2U) | (QData)((IData)(
                                                          ((2U 
                                                            & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                               >> 7U)) 
                                                           | (1U 
                                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                 >> 5U))))))) 
                       >> 0x1bU) | ((((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                     >> 0xfU)))) 
                                      << 0xdU) | (0x1f80U 
                                                  & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                     >> 2U))) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                                    << 0x11U) 
                                                                   | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                                      >> 0xfU)))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                        >> 7U)) 
                                                                    | (1U 
                                                                       & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                          >> 5U)))))) 
                                                >> 0x20U)) 
                                       << 5U)));
    __Vtemp129[4U] = (((0x1fU & ((IData)((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[9U])) 
                                           << 0x31U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[8U])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U])) 
                                                >> 0xfU)))) 
                                 >> 0x13U)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                                            << 0x11U) 
                                                                           | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                                              >> 0xfU)))) 
                                                          << 2U) 
                                                         | (QData)((IData)(
                                                                           ((2U 
                                                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                                >> 7U)) 
                                                                            | (1U 
                                                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                                >> 5U)))))) 
                                                        >> 0x20U)) 
                                               >> 0x1bU)) 
                      | (__Vtemp127[2U] << 5U));
    __Vtemp131[3U] = (((IData)(((0x80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                     >> 0xfU))))) 
                       >> 0x1fU) | ((IData)((((0x80U 
                                               & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                               ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))
                                               : (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                      << 0x11U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                        >> 0xfU)))) 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp131[4U] = (((IData)((((0x80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                                  ? (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))
                                  : (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                      >> 0xfU)))) 
                                >> 0x20U)) >> 0x1fU) 
                      | (((IData)((((QData)((IData)(
                                                    ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                                      << 0x11U) 
                                                     | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                        >> 0xfU)))) 
                                    << 2U) | (QData)((IData)(
                                                             ((2U 
                                                               & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                  >> 7U)) 
                                                              | (1U 
                                                                 & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                                    >> 5U))))))) 
                          << 6U) | (0x3eU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                             << 1U))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[0U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                    << 0x31U) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                  << 0x11U) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                               >> 0xfU))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[1U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                     << 0x31U) | (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                   << 0x11U) | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                                >> 0xfU))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[2U] 
        = (((IData)(((0x80U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])
                      ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps[0U])))
                      : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[2U])) 
                          << 0x31U) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[1U])) 
                                        << 0x11U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U])) 
                                        >> 0xfU))))) 
            << 1U) | (1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                             >> 7U) | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                       >> 6U))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[3U] 
        = __Vtemp131[3U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
        = __Vtemp131[4U];
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[5U] 
        = ((1U & ((IData)((((QData)((IData)(((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[7U] 
                                              << 0x11U) 
                                             | (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[6U] 
                                                >> 0xfU)))) 
                            << 2U) | (QData)((IData)(
                                                     ((2U 
                                                       & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                            >> 5U))))))) 
                  >> 0x1aU)) | (__Vtemp129[3U] << 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[6U] 
        = ((__Vtemp129[3U] >> 0x1fU) | (__Vtemp129[4U] 
                                        << 1U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[7U] 
        = ((__Vtemp129[4U] >> 0x1fU) | ((0x3eU & (__Vtemp127[2U] 
                                                  >> 0x1aU)) 
                                        | (__Vtemp127[3U] 
                                           << 6U)));
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
    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
        = ((3U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U]) 
           | (0xcU & ((0xffffff8U & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                       >> 3U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                 >> 4U)) 
                                     & ((((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                           >> 0x1bU) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                 >> 1U))) 
                                         | ((0x1fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                >> 0x16U)) 
                                            == (0x1fU 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                   >> 1U)))) 
                                        << 3U))) | 
                      (0x7fffffcU & (((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                       >> 4U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out[0U] 
                                                 >> 5U)) 
                                     & ((((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                           >> 0x1bU) 
                                          == (0x1fU 
                                              & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                 >> 1U))) 
                                         | ((0x1fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU] 
                                                >> 0x16U)) 
                                            == (0x1fU 
                                                & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM[4U] 
                                                   >> 1U)))) 
                                        << 2U))))));
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
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U] 
        = ((0x7fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U]) 
           | ((IData)(((0xfU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                          >> 0x10U)))
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
                                  << 0x2aU) | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                << 0xaU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                  >> 0x16U)))) 
                            + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                >> 0x16U)))))
                        : ((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU]))) 
                           + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                               << 0x2aU) | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                               >> 0x16U)))))) 
              << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U] 
        = (((IData)(((0xfU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                        >> 0x10U)))
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
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                          >> 0x16U)))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                                       << 0xaU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                         >> 0x16U)))))
                      : ((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU]))) 
                         + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                             << 0x2aU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                           << 0xaU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                             >> 0x16U)))))) 
            >> 0x11U) | ((IData)((((0xfU == (0x3fU 
                                             & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                >> 0x10U)))
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
                                                << 0x2aU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                     >> 0x16U)))) 
                                          + (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                   >> 0x16U)))))
                                    : ((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU]))) 
                                       + (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                           << 0x2aU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                >> 0x16U))))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U] 
        = ((0xffff8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U]) 
           | ((IData)((((0xfU == (0x3fU & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                           >> 0x10U)))
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
                                   << 0x2aU) | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[3U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                                   >> 0x16U)))) 
                             + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                 << 0x2aU) | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                 >> 0x16U)))))
                         : ((((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xdU])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xcU]))) 
                            + (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[5U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[4U])) 
                                                >> 0x16U))))) 
                       >> 0x20U)) >> 0x11U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
        = ((0x4000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
            ? ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                       >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
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
                    << 0x2aU) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                  << 0xaU) | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                              >> 0x16U))))
            : ((0x2000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                ? ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                           >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
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
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                  >> 0x16U))))
                : ((0x1000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                    ? ((0x800U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                        ? ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                   >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                             >> 1U)))
                            ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                >> 1U)))
                            : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                >> 0x16U))))
                        : ((0x400U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? ((((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                         >> 9U) & (
                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                   >> 1U)))
                                  ? (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                      >> 1U)))
                                  : (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                      >> 0x16U)))) 
                                == ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
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
                                              >> 0x16U)))))
                                ? 1ULL : 0ULL) : ((
                                                   (1U 
                                                    & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                        >> 9U) 
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
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                          >> 0x16U)))) 
                                                  ^ 
                                                  ((1U 
                                                    & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                        >> 8U) 
                                                       & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                                          >> 0x16U)))))))
                    : ((0x800U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                        ? ((0x400U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? (((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                        >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                  >> 1U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                     >> 1U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                     >> 0x16U)))) 
                               & ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                          >> 8U) & 
                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                       << 0x2aU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                        >> 0x16U)))))
                            : (((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                        >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                  >> 1U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                     >> 1U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                     >> 0x16U)))) 
                               | ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                          >> 8U) & 
                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                       << 0x2aU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                        >> 0x16U))))))
                        : ((0x400U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])
                            ? (((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                        >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                  >> 1U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                     >> 1U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                     >> 0x16U)))) 
                               - ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                          >> 8U) & 
                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                       << 0x2aU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                        >> 0x16U)))))
                            : (((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                        >> 9U) & (vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U] 
                                                  >> 1U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])) 
                                                     >> 1U)))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                                     >> 0x16U)))) 
                               + ((1U & ((vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                          >> 8U) & 
                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U]))
                                   ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[8U])) 
                                       << 0x2aU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[7U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[6U])) 
                                        >> 0x16U))))))))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | (0x100U & ((0x1ffff00U & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                       >> 7U)) | ((
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U] 
                                                        >> 0x10U))) 
                                                   & (1ULL 
                                                      == vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c)) 
                                                  << 8U))));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U] 
        = ((0x7fffU & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U]) 
           | ((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c) 
              << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[1U] 
        = (((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c) 
            >> 0x11U) | ((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                  >> 0x20U)) << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[2U] 
        = (((IData)((vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                     >> 0x20U)) >> 0x11U) | ((IData)(
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
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                                           << 0xaU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                                             >> 0x16U))))) 
                                             << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[3U] 
        = (((IData)(((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                      ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                      : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                          << 0x2aU) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                        >> 0x16U))))) 
            >> 0x11U) | ((IData)((((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                         >> 0x16U)))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U] 
        = ((0xffff8000U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U]) 
           | ((IData)((((1U & vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[2U])
                         ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut[0U])))
                         : (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[2U])) 
                             << 0x2aU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[1U])) 
                                           << 0xaU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out[0U])) 
                                             >> 0x16U)))) 
                       >> 0x20U)) >> 0x11U));
    vlSelf->SimTop__DOT__top__DOT__core__DOT__pcnext 
        = ((0x100U & vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[0U])
            ? (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[6U])) 
                << 0x31U) | (((QData)((IData)(vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[5U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE[4U])) 
                                           >> 0xfU)))
            : (4ULL + vlSelf->SimTop__DOT__top__DOT__core__DOT__pc));
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
    VSimTop___024root___settle__TOP__3(vlSelf);
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
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__oreq);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__oresp);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT__top__DOT__ireq);
    VL_RAND_RESET_W(140, vlSelf->SimTop__DOT__top__DOT__dreq);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__icreq);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__dcreq);
    VL_RAND_RESET_W(132, vlSelf->SimTop__DOT__top__DOT____Vcellout__mux__iresps);
    VL_RAND_RESET_W(302, vlSelf->SimTop__DOT__top__DOT____Vcellinp__mux__ireqs);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__pcnext = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(96, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataF_out);
    VL_RAND_RESET_W(448, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD);
    VL_RAND_RESET_W(448, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataD_out);
    VL_RAND_RESET_W(303, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE);
    VL_RAND_RESET_W(303, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataE_out);
    VL_RAND_RESET_W(238, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM);
    VL_RAND_RESET_W(238, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataM_out);
    VL_RAND_RESET_W(238, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW);
    VL_RAND_RESET_W(238, vlSelf->SimTop__DOT__top__DOT__core__DOT__dataW_out);
    VL_RAND_RESET_W(70, vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_execute);
    VL_RAND_RESET_W(70, vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_memory);
    VL_RAND_RESET_W(70, vlSelf->SimTop__DOT__top__DOT__core__DOT__forward_writeback);
    VL_RAND_RESET_W(132, vlSelf->SimTop__DOT__top__DOT__core__DOT__hazardOut);
    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__top__DOT__core__DOT____Vcellout__regfile__rd1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__ctl = VL_RAND_RESET_I(22);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__extend__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__decode__DOT__dataconfirm__DOT__data2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__top__DOT__core__DOT__execute__DOT____Vcellout__alu__c = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs);
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__top__DOT__core__DOT__regfile__DOT__regs_nxt);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__top__DOT__icvt__DOT__dresp);
    vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand2);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vxrand1);
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__index = 0;
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__select = 0;
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__mux__DOT__saved_req);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__top__DOT__mux__DOT__selected_req);
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->SimTop__DOT__top__DOT__mux__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__top__DOT__mux__DOT____Vlvbound4);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__ram__DOT__saved_oreq);
    vlSelf->SimTop__DOT__ram__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__ram__DOT__count_down = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__ram__DOT__size = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__ram__DOT__addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__idx = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__wrap1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__wrap2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__cyc_cnt = 0;
    vlSelf->SimTop__DOT__ram__DOT__ms_cnt = 0;
    vlSelf->SimTop__DOT__ram__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_get_switch__6__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__7__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
