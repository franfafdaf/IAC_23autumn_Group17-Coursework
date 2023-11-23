// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF1.h for the primary calling header

#include "verilated.h"

#include "VF1___024root.h"

VL_INLINE_OPT void VF1___024root___sequent__TOP__0(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__F1__DOT__register__DOT__sreg = vlSelf->F1__DOT__register__DOT__sreg;
    if (vlSelf->rst_lfsr) {
        vlSelf->__Vdly__F1__DOT__register__DOT__sreg = 1U;
    } else if (vlSelf->en_lfsr) {
        vlSelf->__Vdly__F1__DOT__register__DOT__sreg 
            = ((0x7eU & ((IData)(vlSelf->F1__DOT__register__DOT__sreg) 
                         << 1U)) | (1U & VL_REDXOR_8(
                                                     (0x44U 
                                                      & (IData)(vlSelf->F1__DOT__register__DOT__sreg)))));
    }
}

VL_INLINE_OPT void VF1___024root___sequent__TOP__2(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___sequent__TOP__2\n"); );
    // Init
    SData/*15:0*/ __Vdly__F1__DOT__clock_tick__DOT__count;
    // Body
    __Vdly__F1__DOT__clock_tick__DOT__count = vlSelf->F1__DOT__clock_tick__DOT__count;
    vlSelf->F1__DOT__reset_delay__DOT__current_state 
        = ((IData)(vlSelf->rst_delay) ? 0U : vlSelf->F1__DOT__reset_delay__DOT__next_state);
    if (vlSelf->rst_tick) {
        vlSelf->F1__DOT__mux1_out = 0U;
        __Vdly__F1__DOT__clock_tick__DOT__count = vlSelf->N;
    } else if (vlSelf->F1__DOT__cmd_seq) {
        if ((0U == (IData)(vlSelf->F1__DOT__clock_tick__DOT__count))) {
            vlSelf->F1__DOT__mux1_out = 1U;
            __Vdly__F1__DOT__clock_tick__DOT__count 
                = vlSelf->N;
        } else {
            __Vdly__F1__DOT__clock_tick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->F1__DOT__clock_tick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->F1__DOT__mux1_out = 0U;
        }
    }
    vlSelf->F1__DOT__reset_delay__DOT__count = (0x7fU 
                                                & ((((IData)(vlSelf->rst_delay) 
                                                     | (8U 
                                                        == vlSelf->F1__DOT__fsm__DOT__current_state)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->F1__DOT__reset_delay__DOT__count)))
                                                    ? 
                                                   ((IData)(vlSelf->F1__DOT__register__DOT__sreg) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->F1__DOT__reset_delay__DOT__count) 
                                                    - (IData)(1U))));
    vlSelf->F1__DOT__clock_tick__DOT__count = __Vdly__F1__DOT__clock_tick__DOT__count;
}

VL_INLINE_OPT void VF1___024root___sequent__TOP__3(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->F1__DOT__register__DOT__sreg = vlSelf->__Vdly__F1__DOT__register__DOT__sreg;
}

VL_INLINE_OPT void VF1___024root___sequent__TOP__4(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->F1__DOT__fsm__DOT__current_state = ((IData)(vlSelf->rst_fsm)
                                                 ? 0U
                                                 : vlSelf->F1__DOT__fsm__DOT__next_state);
    if (((((((((0U == vlSelf->F1__DOT__fsm__DOT__current_state) 
               | (1U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
              | (2U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
             | (3U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
            | (4U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
           | (5U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
          | (6U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
         | (7U == vlSelf->F1__DOT__fsm__DOT__current_state))) {
        vlSelf->data_out = ((0U == vlSelf->F1__DOT__fsm__DOT__current_state)
                             ? 0U : ((1U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))));
    } else if ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
    } else if ((9U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
    }
    vlSelf->F1__DOT__reset_delay__DOT__next_state = 
        ((0U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
          ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
              ? 1U : vlSelf->F1__DOT__reset_delay__DOT__current_state)
          : ((1U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
              ? ((0U == (IData)(vlSelf->F1__DOT__reset_delay__DOT__count))
                  ? 2U : vlSelf->F1__DOT__reset_delay__DOT__current_state)
              : ((2U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                  ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                      ? 3U : 0U) : ((3U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                                     ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                         ? vlSelf->F1__DOT__reset_delay__DOT__current_state
                                         : 0U) : 0U))));
    vlSelf->F1__DOT__cmd_seq = ((0U != vlSelf->F1__DOT__fsm__DOT__current_state) 
                                & ((8U != vlSelf->F1__DOT__fsm__DOT__current_state) 
                                   & (9U != vlSelf->F1__DOT__fsm__DOT__current_state)));
    vlSelf->F1__DOT__mux_out = ((IData)(vlSelf->F1__DOT__cmd_seq)
                                 ? (IData)(vlSelf->F1__DOT__mux1_out)
                                 : ((0U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                                    & ((1U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                                       & (2U == vlSelf->F1__DOT__reset_delay__DOT__current_state))));
}

VL_INLINE_OPT void VF1___024root___combo__TOP__0(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->F1__DOT__fsm__DOT__current_state) 
               | (1U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
              | (2U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
             | (3U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
            | (4U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
           | (5U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
          | (6U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
         | (7U == vlSelf->F1__DOT__fsm__DOT__current_state))) {
        vlSelf->F1__DOT__fsm__DOT__next_state = ((0U 
                                                  == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                  ? 
                                                 ((IData)(vlSelf->trigger)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 ((1U 
                                                   == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->F1__DOT__mux_out)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->F1__DOT__mux_out)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((3U 
                                                     == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->F1__DOT__mux_out)
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((4U 
                                                      == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->F1__DOT__mux_out)
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((5U 
                                                       == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                       ? 
                                                      ((IData)(vlSelf->F1__DOT__mux_out)
                                                        ? 6U
                                                        : 5U)
                                                       : 
                                                      ((6U 
                                                        == vlSelf->F1__DOT__fsm__DOT__current_state)
                                                        ? 
                                                       ((IData)(vlSelf->F1__DOT__mux_out)
                                                         ? 7U
                                                         : 6U)
                                                        : 
                                                       ((IData)(vlSelf->F1__DOT__mux_out)
                                                         ? 8U
                                                         : 7U))))))));
    } else if ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
        vlSelf->F1__DOT__fsm__DOT__next_state = 9U;
    } else if ((9U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
        vlSelf->F1__DOT__fsm__DOT__next_state = ((IData)(vlSelf->F1__DOT__mux_out)
                                                  ? 0U
                                                  : 9U);
    }
}

void VF1___024root___eval(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst_lfsr) & (~ (IData)(vlSelf->__Vclklast__TOP__rst_lfsr))))) {
        VF1___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VF1___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst_lfsr) & (~ (IData)(vlSelf->__Vclklast__TOP__rst_lfsr))))) {
        VF1___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst_fsm) & (~ (IData)(vlSelf->__Vclklast__TOP__rst_fsm))))) {
        VF1___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VF1___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_lfsr = vlSelf->rst_lfsr;
    vlSelf->__Vclklast__TOP__rst_fsm = vlSelf->rst_fsm;
}

#ifdef VL_DEBUG
void VF1___024root___eval_debug_assertions(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_tick & 0xfeU))) {
        Verilated::overWidthError("rst_tick");}
    if (VL_UNLIKELY((vlSelf->rst_fsm & 0xfeU))) {
        Verilated::overWidthError("rst_fsm");}
    if (VL_UNLIKELY((vlSelf->rst_delay & 0xfeU))) {
        Verilated::overWidthError("rst_delay");}
    if (VL_UNLIKELY((vlSelf->rst_lfsr & 0xfeU))) {
        Verilated::overWidthError("rst_lfsr");}
    if (VL_UNLIKELY((vlSelf->en_lfsr & 0xfeU))) {
        Verilated::overWidthError("en_lfsr");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
