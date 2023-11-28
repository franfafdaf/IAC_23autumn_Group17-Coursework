// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v0;
    __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v0;
    __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
    __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
    __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1;
    __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2;
    __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3;
    __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3 = 0;
    // Body
    __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 0U;
    __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v0 = 0U;
    if (vlSelf->top__DOT__MemWrite) {
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 
            = (0xffU & vlSelf->top__DOT__my_data_memory__DOT__corrected_WD);
        __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1 
            = (0xffU & (vlSelf->top__DOT__my_data_memory__DOT__corrected_WD 
                        >> 8U));
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2 
            = (0xffU & (vlSelf->top__DOT__my_data_memory__DOT__corrected_WD 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResult));
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3 
            = (vlSelf->top__DOT__my_data_memory__DOT__corrected_WD 
               >> 0x18U);
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult));
    }
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v0 
            = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                ? vlSelf->top__DOT__ALUResult : ((1U 
                                                  == (IData)(vlSelf->top__DOT__ResultSrc))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__LdSrc)
                                                   ? (IData)(vlSelf->__VdfgTmp_h88913f45__0)
                                                   : 
                                                  ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->top__DOT__ALUResult))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->top__DOT__ALUResult))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                          [
                                                          (0x1ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->top__DOT__ALUResult))] 
                                                          << 8U) 
                                                         | (IData)(vlSelf->__VdfgTmp_h88913f45__0)))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__ResultSrc))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__PC)
                                                   : 0U)));
        __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v0 
            = (0x1fU & ((IData)(vlSelf->__VdfgTmp_hbf3bde7e__0) 
                        >> 7U));
    }
    if (__Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0) {
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1;
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2;
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3;
    }
    if (__Vdlyvset__top__DOT__my_reg_file__DOT__mem__v0) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v0;
    }
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hb7323c1a_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9d9be4f7_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_ha59e98a2_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hfa6dc624_0;
extern const VlUnpacked<SData/*11:0*/, 1024> Vtop__ConstPool__TABLE_he5a506cc_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h16884ec7_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h41568f21_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hbc1fa718_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h07357e9c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9449ed6c_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hc6ea8798_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h490e2dbe_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h7bc57967_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_haaa0e0dc_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h23c00ae3__0;
    __VdfgTmp_h23c00ae3__0 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__my_pc_top__DOT__PC_Next);
    vlSelf->__VdfgTmp_h2214dd4b__0 = vlSelf->top__DOT__my_instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(3U) + vlSelf->top__DOT__PC))];
    __VdfgTmp_h23c00ae3__0 = vlSelf->top__DOT__my_instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(2U) + vlSelf->top__DOT__PC))];
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
    if ((0x10U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ResultSrc = Vtop__ConstPool__TABLE_h16884ec7_0
            [__Vtableidx1];
    }
    if ((0x20U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ImmSrc = Vtop__ConstPool__TABLE_h41568f21_0
            [__Vtableidx1];
    }
    if ((0x40U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__JalSrc = Vtop__ConstPool__TABLE_hbc1fa718_0
            [__Vtableidx1];
    }
    if ((0x80U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ALUSrcA = Vtop__ConstPool__TABLE_h07357e9c_0
            [__Vtableidx1];
    }
    if ((0x100U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__ALUSrcB = Vtop__ConstPool__TABLE_h9449ed6c_0
            [__Vtableidx1];
    }
    if ((0x200U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__my_control_unit__DOT__ALUOp 
            = Vtop__ConstPool__TABLE_hc6ea8798_0[__Vtableidx1];
    }
    if ((0x400U & Vtop__ConstPool__TABLE_he5a506cc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__StSrc = Vtop__ConstPool__TABLE_h490e2dbe_0
            [__Vtableidx1];
    }
    if ((0x800U & Vtop__ConstPool__TABLE_he5a506cc_0
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__WriteData = vlSelf->top__DOT__my_reg_file__DOT__mem
        [((0x10U & ((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                    << 4U)) | (0xfU & (vlSelf->__VdfgTmp_hdd528194__0 
                                       >> 0x14U)))];
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [(0x1fU & (vlSelf->__VdfgTmp_hdd528194__0 >> 0xfU))];
    vlSelf->top__DOT__my_data_memory__DOT__corrected_WD 
        = ((IData)(vlSelf->top__DOT__StSrc) ? (0xffU 
                                               & vlSelf->top__DOT__WriteData)
            : vlSelf->top__DOT__WriteData);
    vlSelf->top__DOT__my_alu_top__DOT__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcB)
                                                ? vlSelf->top__DOT__ImmExt
                                                : vlSelf->top__DOT__WriteData);
    vlSelf->top__DOT__my_alu_top__DOT__SrcA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                                ? vlSelf->top__DOT__PC
                                                : vlSelf->top__DOT__RD1);
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
                                                 ((IData)(vlSelf->top__DOT__JalSrc)
                                                   ? 
                                                  (vlSelf->top__DOT__ImmExt 
                                                   + vlSelf->top__DOT__PC)
                                                   : vlSelf->top__DOT__RD1)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
