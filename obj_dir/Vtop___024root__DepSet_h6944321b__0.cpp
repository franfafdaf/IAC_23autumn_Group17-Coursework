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
    // Body
    vlSelf->__Vdly__top__DOT__PCF = vlSelf->top__DOT__PCF;
    vlSelf->__Vdly__top__DOT__PCF = ((IData)(vlSelf->rst)
                                      ? 0U : ((IData)(vlSelf->top__DOT__StallD)
                                               ? vlSelf->top__DOT__PCF
                                               : vlSelf->top__DOT__my_pc__DOT__PCF_Next));
}

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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__top__DOT__PCD;
    __Vdly__top__DOT__PCD = 0;
    IData/*31:0*/ __Vdly__top__DOT__InstrD;
    __Vdly__top__DOT__InstrD = 0;
    IData/*31:0*/ __Vdly__top__DOT__PC_PlusD;
    __Vdly__top__DOT__PC_PlusD = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v0;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v0;
    __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v0;
    __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v1;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v1 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v1;
    __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v2;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v2 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v2;
    __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v2 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v3;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v3 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v3;
    __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v3 = 0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v4;
    __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v4 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v4;
    __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v4;
    __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v4 = 0;
    // Body
    __Vdly__top__DOT__PC_PlusD = vlSelf->top__DOT__PC_PlusD;
    __Vdly__top__DOT__PCD = vlSelf->top__DOT__PCD;
    __Vdly__top__DOT__InstrD = vlSelf->top__DOT__InstrD;
    __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v0 = 0U;
    __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v4 = 0U;
    if (vlSelf->top__DOT__PCSrcE) {
        __Vdly__top__DOT__PC_PlusD = 0U;
        __Vdly__top__DOT__PCD = 0U;
        __Vdly__top__DOT__InstrD = 0U;
    } else if (vlSelf->top__DOT__StallD) {
        __Vdly__top__DOT__PC_PlusD = vlSelf->top__DOT__PC_PlusD;
        __Vdly__top__DOT__PCD = vlSelf->top__DOT__PCD;
        __Vdly__top__DOT__InstrD = vlSelf->top__DOT__InstrD;
    } else {
        __Vdly__top__DOT__PC_PlusD = ((IData)(4U) + vlSelf->top__DOT__PCF);
        __Vdly__top__DOT__PCD = vlSelf->top__DOT__PCF;
        __Vdly__top__DOT__InstrD = ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                     [(0xfffU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__PCF))] 
                                     << 0x18U) | ((
                                                   vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->top__DOT__PCF))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                      [
                                                      (0xfffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->top__DOT__PCF))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                     [
                                                     (0xfffU 
                                                      & vlSelf->top__DOT__PCF)])));
    }
    if (((IData)(vlSelf->top__DOT__MemWriteM) & (~ (IData)(vlSelf->top__DOT__StSrcM)))) {
        __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v0 
            = (0xffU & vlSelf->top__DOT__WriteDataM);
        __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v0 
            = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
        __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v1 
            = (0xffU & (vlSelf->top__DOT__WriteDataM 
                        >> 8U));
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
        __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v2 
            = (0xffU & (vlSelf->top__DOT__WriteDataM 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResultM));
        __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v3 
            = (vlSelf->top__DOT__WriteDataM >> 0x18U);
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResultM));
    } else if (((IData)(vlSelf->top__DOT__MemWriteM) 
                & (IData)(vlSelf->top__DOT__StSrcM))) {
        __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v4 
            = (0xffU & vlSelf->top__DOT__WriteDataM);
        __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v4 = 1U;
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v4 
            = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
    }
    vlSelf->top__DOT__JalSrcE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                 & (IData)(vlSelf->top__DOT__JalSrcD));
    vlSelf->top__DOT__BranchE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                 & (IData)(vlSelf->top__DOT__BranchD));
    vlSelf->top__DOT__JumpE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                               & (IData)(vlSelf->top__DOT__JumpD));
    vlSelf->top__DOT__ALUSrcBE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                  & (IData)(vlSelf->top__DOT__ALUSrcBD));
    vlSelf->top__DOT__ALUSrcAE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                  & (IData)(vlSelf->top__DOT__ALUSrcAD));
    vlSelf->top__DOT__PC_PlusW = vlSelf->top__DOT__PC_PlusM;
    vlSelf->top__DOT__ResultSrcW = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__ALUResultW = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__ReadDataW = ((IData)(vlSelf->top__DOT__LdSrcM)
                                    ? (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)
                                    : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                        [(0x1ffffU 
                                          & ((IData)(3U) 
                                             + vlSelf->top__DOT__ALUResultM))] 
                                        << 0x18U) | 
                                       ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                         [(0x1ffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->top__DOT__ALUResultM))] 
                                         << 0x10U) 
                                        | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->top__DOT__ALUResultM))] 
                                            << 8U) 
                                           | (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)))));
    vlSelf->top__DOT__RegWriteW = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__RdW = vlSelf->top__DOT__RdM;
    if (vlSelf->top__DOT__FlushE) {
        vlSelf->top__DOT__ImmExtE = 0U;
        vlSelf->top__DOT__PCE = 0U;
    } else {
        vlSelf->top__DOT__ImmExtE = vlSelf->top__DOT__ImmExtD;
        vlSelf->top__DOT__PCE = vlSelf->top__DOT__PCD;
    }
    vlSelf->top__DOT__PCD = __Vdly__top__DOT__PCD;
    if (__Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v0) {
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v0] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v0;
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v1] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v1;
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v2] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v2;
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v3] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v3;
    }
    if (__Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v4) {
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v4] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v4;
    }
    vlSelf->top__DOT__WriteDataM = vlSelf->top__DOT__SrcB0E;
    vlSelf->top__DOT__MemWriteM = vlSelf->top__DOT__MemWriteE;
    vlSelf->top__DOT__StSrcM = vlSelf->top__DOT__StSrcE;
    vlSelf->top__DOT__PC_PlusM = vlSelf->top__DOT__PC_PlusE;
    vlSelf->top__DOT__ResultSrcM = vlSelf->top__DOT__ResultSrcE;
    vlSelf->top__DOT__ResultW = ((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                  ? vlSelf->top__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                      ? vlSelf->top__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                          ? vlSelf->top__DOT__PC_PlusW
                                          : 0U)));
    vlSelf->top__DOT__LdSrcM = vlSelf->top__DOT__LdSrcE;
    vlSelf->top__DOT__ALUResultM = vlSelf->top__DOT__ALUResult;
    vlSelf->top__DOT__RegWriteM = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__RdM = vlSelf->top__DOT__RdE;
    if (vlSelf->top__DOT__FlushE) {
        vlSelf->top__DOT__funct3E = 0U;
        vlSelf->top__DOT__Rs2E = 0U;
        vlSelf->top__DOT__Rs1E = 0U;
        vlSelf->top__DOT__RD2E = 0U;
        vlSelf->top__DOT__ALUControlE = 0U;
        vlSelf->top__DOT__RD1E = 0U;
        vlSelf->top__DOT__PC_PlusE = 0U;
        vlSelf->top__DOT__ResultSrcE = 0U;
        vlSelf->top__DOT__RdE = 0U;
    } else {
        vlSelf->top__DOT__funct3E = (7U & (vlSelf->top__DOT__InstrD 
                                           >> 0xcU));
        vlSelf->top__DOT__Rs2E = (0x1fU & (vlSelf->top__DOT__InstrD 
                                           >> 0x14U));
        vlSelf->top__DOT__Rs1E = (0x1fU & (vlSelf->top__DOT__InstrD 
                                           >> 0xfU));
        vlSelf->top__DOT__RD2E = vlSelf->top__DOT__my_reg_file__DOT__mem
            [(0x1fU & (vlSelf->top__DOT__InstrD >> 0x14U))];
        vlSelf->top__DOT__ALUControlE = ((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                          ? ((1U == 
                                              (7U & 
                                               (vlSelf->top__DOT__InstrD 
                                                >> 0xcU)))
                                              ? 7U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->top__DOT__InstrD 
                                                   >> 0xcU)))
                                               ? 4U
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 0U)))
                                          : ((1U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                              ? 1U : 
                                             ((2U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                      ? 0U
                                                      : 1U)))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__InstrD 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__InstrD 
                                                          >> 0xcU)))
                                                      ? 2U
                                                      : 0U))))
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 6U
                                                    : 0U)
                                                   : 0U))));
        vlSelf->top__DOT__RD1E = vlSelf->top__DOT__my_reg_file__DOT__mem
            [(0x1fU & (vlSelf->top__DOT__InstrD >> 0xfU))];
        vlSelf->top__DOT__PC_PlusE = vlSelf->top__DOT__PC_PlusD;
        vlSelf->top__DOT__ResultSrcE = vlSelf->top__DOT__ResultSrcD;
        vlSelf->top__DOT__RdE = (0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 7U));
    }
    vlSelf->top__DOT__MemWriteE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                   & (IData)(vlSelf->top__DOT__MemWriteD));
    vlSelf->top__DOT__StSrcE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                & (IData)(vlSelf->top__DOT__StSrcD));
    vlSelf->top__DOT__LdSrcE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                & (IData)(vlSelf->top__DOT__LdSrcD));
    vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0 
        = vlSelf->top__DOT__my_data_memory__DOT__data_array
        [(0x1ffffU & vlSelf->top__DOT__ALUResultM)];
    vlSelf->top__DOT__RegWriteE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                   & (IData)(vlSelf->top__DOT__RegWriteD));
    vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE 
        = (((((IData)(vlSelf->top__DOT__Rs1E) == (IData)(vlSelf->top__DOT__RdM)) 
             & (IData)(vlSelf->top__DOT__RegWriteM)) 
            & (0U != (IData)(vlSelf->top__DOT__Rs1E)))
            ? 2U : (((((IData)(vlSelf->top__DOT__Rs1E) 
                       == (IData)(vlSelf->top__DOT__RdW)) 
                      & (IData)(vlSelf->top__DOT__RegWriteW)) 
                     & (0U != (IData)(vlSelf->top__DOT__Rs1E)))
                     ? 1U : 0U));
    vlSelf->top__DOT__SrcA0E = ((0U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE))
                                 ? vlSelf->top__DOT__RD1E
                                 : ((1U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE))
                                     ? vlSelf->top__DOT__ResultW
                                     : ((2U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE))
                                         ? vlSelf->top__DOT__ALUResultM
                                         : 0U)));
    vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE 
        = (((((IData)(vlSelf->top__DOT__Rs2E) == (IData)(vlSelf->top__DOT__RdM)) 
             & (IData)(vlSelf->top__DOT__RegWriteM)) 
            & (0U != (IData)(vlSelf->top__DOT__Rs2E)))
            ? 2U : (((((IData)(vlSelf->top__DOT__Rs2E) 
                       == (IData)(vlSelf->top__DOT__RdW)) 
                      & (IData)(vlSelf->top__DOT__RegWriteW)) 
                     & (0U != (IData)(vlSelf->top__DOT__Rs2E)))
                     ? 1U : 0U));
    vlSelf->top__DOT__SrcB0E = ((0U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE))
                                 ? vlSelf->top__DOT__RD2E
                                 : ((1U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE))
                                     ? vlSelf->top__DOT__ResultW
                                     : ((2U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE))
                                         ? vlSelf->top__DOT__ALUResultM
                                         : 0U)));
    vlSelf->top__DOT__PC_PlusD = __Vdly__top__DOT__PC_PlusD;
    vlSelf->top__DOT__my_alu__DOT__SrcAE = ((IData)(vlSelf->top__DOT__ALUSrcAE)
                                             ? vlSelf->top__DOT__PCE
                                             : vlSelf->top__DOT__SrcA0E);
    vlSelf->top__DOT__my_alu__DOT__SrcBE = ((IData)(vlSelf->top__DOT__ALUSrcBE)
                                             ? vlSelf->top__DOT__ImmExtE
                                             : vlSelf->top__DOT__SrcB0E);
    vlSelf->top__DOT__InstrD = __Vdly__top__DOT__InstrD;
    vlSelf->top__DOT__ALUResult = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       + vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((1U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       - vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((2U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       & vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((3U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       | vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((4U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       >> (0x1fU & vlSelf->top__DOT__my_alu__DOT__SrcBE));
    }
    if ((5U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       ^ vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((6U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__my_alu__DOT__SrcBE;
    }
    if ((7U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       << (0x1fU & vlSelf->top__DOT__my_alu__DOT__SrcBE));
    }
    vlSelf->top__DOT__ZeroE = (0U == vlSelf->top__DOT__ALUResult);
    vlSelf->top__DOT__my_control_unit__DOT__ALUDecode 
        = ((2U & (vlSelf->top__DOT__InstrD >> 4U)) 
           | (1U & (vlSelf->top__DOT__InstrD >> 0x1eU)));
    vlSelf->top__DOT__StallD = ((IData)(vlSelf->top__DOT__ResultSrcE) 
                                & (((IData)(vlSelf->top__DOT__RdE) 
                                    == (0x1fU & (vlSelf->top__DOT__InstrD 
                                                 >> 0xfU))) 
                                   | ((IData)(vlSelf->top__DOT__RdE) 
                                      == (0x1fU & (vlSelf->top__DOT__InstrD 
                                                   >> 0x14U)))));
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
    vlSelf->top__DOT__PCSrcE = ((IData)(vlSelf->top__DOT__JumpE) 
                                | ((IData)(vlSelf->top__DOT__BranchE) 
                                   & (((IData)(vlSelf->top__DOT__ZeroE) 
                                       & (0U == (IData)(vlSelf->top__DOT__funct3E))) 
                                      | ((~ (IData)(vlSelf->top__DOT__ZeroE)) 
                                         & (1U == (IData)(vlSelf->top__DOT__funct3E))))));
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
    vlSelf->top__DOT__FlushE = ((IData)(vlSelf->top__DOT__StallD) 
                                | (IData)(vlSelf->top__DOT__PCSrcE));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1;
    __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1;
    __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1;
    __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1 = 0;
    // Body
    __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1 = 0U;
    if (vlSelf->top__DOT__RegWriteW) {
        __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1 
            = vlSelf->top__DOT__ResultW;
        __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1 
            = vlSelf->top__DOT__RdW;
    }
    vlSelf->top__DOT__my_reg_file__DOT__mem[0U] = 0U;
    if (__Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1;
    }
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__PCF = vlSelf->__Vdly__top__DOT__PCF;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__my_pc__DOT__PCF_Next = ((IData)(vlSelf->top__DOT__PCSrcE)
                                               ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                                   ? 
                                                  (vlSelf->top__DOT__ImmExtE 
                                                   + vlSelf->top__DOT__PCE)
                                                   : vlSelf->top__DOT__RD1E)
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PCF));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
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
    VlTriggerVec<3> __VpreTriggered;
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
