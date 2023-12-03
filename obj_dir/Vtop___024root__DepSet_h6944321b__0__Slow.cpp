// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6c617465U;
    __Vtemp_1[2U] = 0x616c6375U;
    __Vtemp_1[3U] = 0x63U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 131072, 0, std::string{"sine.mem"}
                 ,  &(vlSelf->top__DOT__my_data_memory__DOT__data_array)
                 , 0x10000U, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hb7323c1a_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9d9be4f7_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h16884ec7_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_ha59e98a2_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h07357e9c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9449ed6c_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h41568f21_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hfa6dc624_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hc6ea8798_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h7bc57967_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_ha01f9546_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h4e7d4611_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
    vlSelf->top__DOT__my_control_unit__DOT__ALUDecode 
        = ((2U & (vlSelf->top__DOT__InstrD >> 4U)) 
           | (1U & (vlSelf->top__DOT__InstrD >> 0x1eU)));
    vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0 
        = vlSelf->top__DOT__my_data_memory__DOT__data_array
        [(0x1ffffU & vlSelf->top__DOT__ALUResultM)];
    vlSelf->top__DOT__my_alu__DOT__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcBE)
                                            ? vlSelf->top__DOT__ImmExtE
                                            : vlSelf->top__DOT__RD2E);
    vlSelf->top__DOT__my_alu__DOT__SrcA = ((IData)(vlSelf->top__DOT__ALUSrcAE)
                                            ? vlSelf->top__DOT__PCE
                                            : vlSelf->top__DOT__RD1E);
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__InstrD 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__InstrD));
    vlSelf->top__DOT__BranchD = Vtop__ConstPool__TABLE_hb7323c1a_0
        [__Vtableidx1];
    vlSelf->top__DOT__JumpD = Vtop__ConstPool__TABLE_h9d9be4f7_0
        [__Vtableidx1];
    vlSelf->top__DOT__ResultSrcD = Vtop__ConstPool__TABLE_h16884ec7_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWriteD = Vtop__ConstPool__TABLE_ha59e98a2_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcAD = Vtop__ConstPool__TABLE_h07357e9c_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcBD = Vtop__ConstPool__TABLE_h9449ed6c_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrcD = Vtop__ConstPool__TABLE_h41568f21_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWriteD = Vtop__ConstPool__TABLE_hfa6dc624_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__ALUOpD 
        = Vtop__ConstPool__TABLE_hc6ea8798_0[__Vtableidx1];
    vlSelf->top__DOT__LdSrcD = Vtop__ConstPool__TABLE_h7bc57967_0
        [__Vtableidx1];
    vlSelf->top__DOT__StSrcD = Vtop__ConstPool__TABLE_ha01f9546_0
        [__Vtableidx1];
    vlSelf->top__DOT__JalSrcD = Vtop__ConstPool__TABLE_h4e7d4611_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUResult = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       + vlSelf->top__DOT__my_alu__DOT__SrcB);
    }
    if ((1U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       - vlSelf->top__DOT__my_alu__DOT__SrcB);
    }
    if ((2U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       & vlSelf->top__DOT__my_alu__DOT__SrcB);
    }
    if ((3U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       | vlSelf->top__DOT__my_alu__DOT__SrcB);
    }
    if ((4U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       >> (0x1fU & vlSelf->top__DOT__my_alu__DOT__SrcB));
    }
    if ((5U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       ^ vlSelf->top__DOT__my_alu__DOT__SrcB);
    }
    if ((6U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__my_alu__DOT__SrcB;
    }
    if ((7U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcA 
                                       << (0x1fU & vlSelf->top__DOT__my_alu__DOT__SrcB));
    }
    vlSelf->top__DOT__ZeroE = (0U == vlSelf->top__DOT__ALUResult);
    vlSelf->top__DOT__ImmExtD = ((4U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                  ? ((2U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                               ? 0U
                                               : (0xfffff000U 
                                                  & vlSelf->top__DOT__InstrD)))
                                  : ((2U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                      ? ((1U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__InstrD) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0x14U)))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__InstrD 
                                                >> 0x14U)))));
    vlSelf->top__DOT__my_pc__DOT__PCF_Next = (((IData)(vlSelf->top__DOT__JumpE) 
                                               | ((IData)(vlSelf->top__DOT__BranchE) 
                                                  & (IData)(vlSelf->top__DOT__ZeroE)))
                                               ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                                   ? 
                                                  (vlSelf->top__DOT__ImmExtE 
                                                   + vlSelf->top__DOT__PCE)
                                                   : vlSelf->top__DOT__RD1E)
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PCF));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExtE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcAD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcBD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcAE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcBE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUControlE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__LdSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JalSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LdSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JalSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LdSrcM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrcM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__my_pc__DOT__PCF_Next = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__my_control_unit__DOT__ALUOpD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__my_control_unit__DOT__ALUDecode = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__my_alu__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_alu__DOT__SrcB = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
