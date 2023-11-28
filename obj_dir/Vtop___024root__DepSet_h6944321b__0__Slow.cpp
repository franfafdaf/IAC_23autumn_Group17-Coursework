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
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_READMEM_N(true, 8, 4096, 0, std::string{"pdf.hex"}
                 ,  &(vlSelf->top__DOT__my_instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x7369616eU;
    __Vtemp_1[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array)
                 , 0, ~0ULL);
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
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_ha59e98a2_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hfa6dc624_0;
extern const VlUnpacked<SData/*10:0*/, 1024> Vtop__ConstPool__TABLE_hadc6d636_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h16884ec7_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h41568f21_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h07357e9c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9449ed6c_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hc6ea8798_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h490e2dbe_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h7bc57967_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_haaa0e0dc_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h23c00ae3__0;
    __VdfgTmp_h23c00ae3__0 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
    __VdfgTmp_h23c00ae3__0 = vlSelf->top__DOT__my_instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(2U) + vlSelf->top__DOT__PC))];
    vlSelf->__VdfgTmp_h2214dd4b__0 = vlSelf->top__DOT__my_instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(3U) + vlSelf->top__DOT__PC))];
    vlSelf->__VdfgTmp_h23e32fae__0 = vlSelf->top__DOT__my_instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(1U) + vlSelf->top__DOT__PC))];
    vlSelf->__VdfgTmp_h95d868b5__0 = vlSelf->top__DOT__my_instr_mem__DOT__rom_array
        [(0xfffU & vlSelf->top__DOT__PC)];
    vlSelf->top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode 
        = ((2U & ((IData)(vlSelf->__VdfgTmp_h95d868b5__0) 
                  >> 4U)) | (1U & ((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                                   >> 6U)));
    vlSelf->top__DOT__Imm = (((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                              << 0x11U) | (((IData)(__VdfgTmp_h23c00ae3__0) 
                                            << 9U) 
                                           | (((IData)(vlSelf->__VdfgTmp_h23e32fae__0) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__VdfgTmp_h95d868b5__0) 
                                                    >> 7U)))));
    vlSelf->__VdfgTmp_hbf3bde7e__0 = (((IData)(vlSelf->__VdfgTmp_h23e32fae__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_h95d868b5__0));
    __Vtableidx1 = ((0x380U & ((IData)(vlSelf->__VdfgTmp_h23e32fae__0) 
                               << 3U)) | (0x7fU & (IData)(vlSelf->__VdfgTmp_h95d868b5__0)));
    vlSelf->top__DOT__my_control_unit__DOT__Branch 
        = Vtop__ConstPool__TABLE_hb7323c1a_0[__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__Jump = 
        Vtop__ConstPool__TABLE_h9d9be4f7_0[__Vtableidx1];
    vlSelf->top__DOT__MemWrite = Vtop__ConstPool__TABLE_ha59e98a2_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWrite = Vtop__ConstPool__TABLE_hfa6dc624_0
        [__Vtableidx1];
    if ((0x10U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ResultSrc = Vtop__ConstPool__TABLE_h16884ec7_0
            [__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ImmSrc = Vtop__ConstPool__TABLE_h41568f21_0
            [__Vtableidx1];
    }
    if ((0x40U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ALUSrcA = Vtop__ConstPool__TABLE_h07357e9c_0
            [__Vtableidx1];
    }
    if ((0x80U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ALUSrcB = Vtop__ConstPool__TABLE_h9449ed6c_0
            [__Vtableidx1];
    }
    if ((0x100U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__my_control_unit__DOT__ALUOp 
            = Vtop__ConstPool__TABLE_hc6ea8798_0[__Vtableidx1];
    }
    if ((0x200U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__StSrc = Vtop__ConstPool__TABLE_h490e2dbe_0
            [__Vtableidx1];
    }
    if ((0x400U & Vtop__ConstPool__TABLE_hadc6d636_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__LdSrc = Vtop__ConstPool__TABLE_h7bc57967_0
            [__Vtableidx1];
    }
    vlSelf->__VdfgTmp_hdd528194__0 = (((IData)(__VdfgTmp_h23c00ae3__0) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_hbf3bde7e__0));
    __Vtableidx2 = ((0x100U & ((IData)(vlSelf->__VdfgTmp_h95d868b5__0) 
                               << 3U)) | ((((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode))
                                              ? 0U : 
                                             ((2U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode))
                                               ? 0U
                                               : 1U))) 
                                           << 5U) | 
                                          ((0x1cU & 
                                            ((IData)(vlSelf->__VdfgTmp_h23e32fae__0) 
                                             >> 2U)) 
                                           | (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUControl = Vtop__ConstPool__TABLE_haaa0e0dc_0
        [__Vtableidx2];
    vlSelf->top__DOT__ImmExt = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                              ? 0U : 
                                             (0xfffff000U 
                                              & (vlSelf->top__DOT__Imm 
                                                 << 7U))))
                                 : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__Imm 
                                                            >> 0x18U)))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & (vlSelf->top__DOT__Imm 
                                                   << 7U)) 
                                               | ((0x800U 
                                                   & (vlSelf->top__DOT__Imm 
                                                      >> 2U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->top__DOT__Imm 
                                                        >> 0xdU)))))
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__Imm 
                                                            >> 0x18U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__Imm 
                                                   << 0xbU)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__Imm 
                                                      >> 0xdU)) 
                                                  | (0x1eU 
                                                     & vlSelf->top__DOT__Imm)))))
                                     : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__Imm 
                                                            >> 0x18U)))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__Imm 
                                                   >> 0xdU)) 
                                               | (0x1fU 
                                                  & vlSelf->top__DOT__Imm)))
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__Imm 
                                                            >> 0x18U)))) 
                                             << 0xcU) 
                                            | (0xfffU 
                                               & (vlSelf->top__DOT__Imm 
                                                  >> 0xdU))))));
    vlSelf->top__DOT__my_alu_top__DOT__SrcA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                                ? vlSelf->top__DOT__PC
                                                : vlSelf->top__DOT__my_reg_file__DOT__mem
                                               [(0x1fU 
                                                 & (vlSelf->__VdfgTmp_hdd528194__0 
                                                    >> 0xfU))]);
    vlSelf->top__DOT__WriteData = vlSelf->top__DOT__my_reg_file__DOT__mem
        [((0x10U & ((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                    << 4U)) | (0xfU & (vlSelf->__VdfgTmp_hdd528194__0 
                                       >> 0x14U)))];
    vlSelf->top__DOT__my_data_memory__DOT__corrected_WD 
        = ((IData)(vlSelf->top__DOT__StSrc) ? (0xffU 
                                               & vlSelf->top__DOT__WriteData)
            : vlSelf->top__DOT__WriteData);
    vlSelf->top__DOT__my_alu_top__DOT__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcB)
                                                ? vlSelf->top__DOT__ImmExt
                                                : vlSelf->top__DOT__WriteData);
    vlSelf->top__DOT__ALUResult = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       + vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((1U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       - vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((2U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       & vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((3U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       | vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((5U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = ((vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                        < vlSelf->top__DOT__my_alu_top__DOT__SrcB)
                                        ? 1U : 0U);
    }
    if ((6U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__my_alu_top__DOT__SrcB;
    }
    vlSelf->top__DOT__Zero = (0U == vlSelf->top__DOT__ALUResult);
    vlSelf->__VdfgTmp_h88913f45__0 = vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
        [(0x1ffffU & vlSelf->top__DOT__ALUResult)];
    vlSelf->top__DOT__my_pc_top__DOT__PC_Next = (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                                                  | ((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                                     & (((IData)(vlSelf->top__DOT__Zero) 
                                                         & (0U 
                                                            == 
                                                            (0x70U 
                                                             & (IData)(vlSelf->__VdfgTmp_h23e32fae__0)))) 
                                                        | ((~ (IData)(vlSelf->top__DOT__Zero)) 
                                                           & (0x10U 
                                                              == 
                                                              (0x70U 
                                                               & (IData)(vlSelf->__VdfgTmp_h23e32fae__0)))))))
                                                  ? 
                                                 (vlSelf->top__DOT__ImmExt 
                                                  + vlSelf->top__DOT__PC)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC));
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
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
    vlSelf->top__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUControl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__LdSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Imm = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_pc_top__DOT__PC_Next = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__my_instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__my_alu_top__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_alu_top__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__my_control_unit__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_control_unit__DOT__Jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__my_data_memory__DOT__corrected_WD = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgTmp_h2214dd4b__0 = 0;
    vlSelf->__VdfgTmp_h23e32fae__0 = 0;
    vlSelf->__VdfgTmp_h95d868b5__0 = 0;
    vlSelf->__VdfgTmp_hdd528194__0 = 0;
    vlSelf->__VdfgTmp_hbf3bde7e__0 = 0;
    vlSelf->__VdfgTmp_h88913f45__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
