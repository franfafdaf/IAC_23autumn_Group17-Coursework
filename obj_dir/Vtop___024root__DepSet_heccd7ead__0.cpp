// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hff092405_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hacf877fb_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hf6daef67_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h45afa79b_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hbad56271_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h17877086_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h2aa7613e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h2b8877be_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h4191d61c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h20175f08_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h789adb00_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hf246a450_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_hf7f745e5_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    IData/*31:0*/ __Vdly__top__DOT__InstrD;
    IData/*31:0*/ __Vdly__top__DOT__PCD;
    IData/*31:0*/ __Vdly__top__DOT__PC_PlusD;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__data_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__data_array__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__data_array__v4;
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
    } else if (vlSelf->top__DOT__my_hazardunit__DOT__lwStall) {
        __Vdly__top__DOT__PC_PlusD = vlSelf->top__DOT__PC_PlusD;
        __Vdly__top__DOT__PCD = vlSelf->top__DOT__PCD;
        __Vdly__top__DOT__InstrD = vlSelf->top__DOT__InstrD;
    } else {
        __Vdly__top__DOT__PC_PlusD = ((IData)(4U) + vlSelf->top__DOT__PCF);
        __Vdly__top__DOT__PCD = vlSelf->top__DOT__PCF;
        __Vdly__top__DOT__InstrD = ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                     [(0xfffU & vlSelf->top__DOT__PCF)] 
                                     << 0x18U) | ((
                                                   vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->top__DOT__PCF))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                      [
                                                      (0xfffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->top__DOT__PCF))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                     [
                                                     (0xfffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->top__DOT__PCF))])));
    }
    vlSelf->top__DOT__JalSrcE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                 & (IData)(vlSelf->top__DOT__JalSrcD));
    vlSelf->top__DOT__JumpE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                               & (IData)(vlSelf->top__DOT__JumpD));
    vlSelf->top__DOT__BranchE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                 & (IData)(vlSelf->top__DOT__BranchD));
    vlSelf->top__DOT__ALUSrcAE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                  & (IData)(vlSelf->top__DOT__ALUSrcAD));
    vlSelf->top__DOT__ALUSrcBE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                  & (IData)(vlSelf->top__DOT__ALUSrcBD));
    vlSelf->top__DOT__PC_PlusW = vlSelf->top__DOT__PC_PlusM;
    vlSelf->top__DOT__RegWriteW = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__ResultSrcW = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__RdW = vlSelf->top__DOT__RdM;
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
    vlSelf->top__DOT__ALUResultW = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__ReadDataW = ((IData)(vlSelf->top__DOT__LdSrcM)
                                    ? vlSelf->top__DOT__my_data_memory__DOT__data_array
                                   [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]
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
                                           | vlSelf->top__DOT__my_data_memory__DOT__data_array
                                           [(0x1ffffU 
                                             & vlSelf->top__DOT__ALUResultM)]))));
    if (vlSelf->top__DOT__FlushE) {
        vlSelf->top__DOT__funct3E = 0U;
        vlSelf->top__DOT__ALUControlE = 0U;
        vlSelf->top__DOT__PCE = 0U;
    } else {
        vlSelf->top__DOT__funct3E = (7U & (vlSelf->top__DOT__InstrD 
                                           >> 0xcU));
        vlSelf->top__DOT__ALUControlE = vlSelf->top__DOT__ALUControlD;
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
    vlSelf->top__DOT__PC_PlusM = vlSelf->top__DOT__PC_PlusE;
    vlSelf->top__DOT__RegWriteM = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__ResultSrcM = vlSelf->top__DOT__ResultSrcE;
    vlSelf->top__DOT__RdM = vlSelf->top__DOT__RdE;
    if (vlSelf->top__DOT__FlushE) {
        vlSelf->top__DOT__ImmExtE = 0U;
        vlSelf->top__DOT__Rs2E = 0U;
        vlSelf->top__DOT__Rs1E = 0U;
        vlSelf->top__DOT__RD2E = 0U;
        vlSelf->top__DOT__RD1E = 0U;
        vlSelf->top__DOT__PC_PlusE = 0U;
        vlSelf->top__DOT__ResultSrcE = 0U;
        vlSelf->top__DOT__RdE = 0U;
    } else {
        vlSelf->top__DOT__ImmExtE = vlSelf->top__DOT__ImmExtD;
        vlSelf->top__DOT__Rs2E = (0x1fU & (vlSelf->top__DOT__InstrD 
                                           >> 0x14U));
        vlSelf->top__DOT__Rs1E = (0x1fU & (vlSelf->top__DOT__InstrD 
                                           >> 0xfU));
        vlSelf->top__DOT__RD2E = vlSelf->top__DOT__my_reg_file__DOT__register
            [(0x1fU & (vlSelf->top__DOT__InstrD >> 0x14U))];
        vlSelf->top__DOT__RD1E = vlSelf->top__DOT__my_reg_file__DOT__register
            [(0x1fU & (vlSelf->top__DOT__InstrD >> 0xfU))];
        vlSelf->top__DOT__PC_PlusE = vlSelf->top__DOT__PC_PlusD;
        vlSelf->top__DOT__ResultSrcE = vlSelf->top__DOT__ResultSrcD;
        vlSelf->top__DOT__RdE = (0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 7U));
    }
    vlSelf->top__DOT__MemWriteM = vlSelf->top__DOT__MemWriteE;
    vlSelf->top__DOT__StSrcM = vlSelf->top__DOT__StSrcE;
    vlSelf->top__DOT__WriteDataM = vlSelf->top__DOT__SrcB0E;
    vlSelf->top__DOT__LdSrcM = vlSelf->top__DOT__LdSrcE;
    vlSelf->top__DOT__ResultW = ((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                  ? vlSelf->top__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                      ? vlSelf->top__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                          ? vlSelf->top__DOT__PC_PlusW
                                          : 0U)));
    vlSelf->top__DOT__ALUResultM = vlSelf->top__DOT__ALUResult;
    vlSelf->top__DOT__RegWriteE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                   & (IData)(vlSelf->top__DOT__RegWriteD));
    vlSelf->top__DOT__MemWriteE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                   & (IData)(vlSelf->top__DOT__MemWriteD));
    vlSelf->top__DOT__StSrcE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                & (IData)(vlSelf->top__DOT__StSrcD));
    vlSelf->top__DOT__LdSrcE = ((~ (IData)(vlSelf->top__DOT__FlushE)) 
                                & (IData)(vlSelf->top__DOT__LdSrcD));
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
    vlSelf->top__DOT__InstrD = __Vdly__top__DOT__InstrD;
    vlSelf->top__DOT__my_alu__DOT__SrcAE = ((IData)(vlSelf->top__DOT__ALUSrcAE)
                                             ? vlSelf->top__DOT__PCE
                                             : vlSelf->top__DOT__SrcA0E);
    vlSelf->top__DOT__my_alu__DOT__SrcBE = ((IData)(vlSelf->top__DOT__ALUSrcBE)
                                             ? vlSelf->top__DOT__ImmExtE
                                             : vlSelf->top__DOT__SrcB0E);
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__InstrD 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__InstrD));
    vlSelf->top__DOT__BranchD = Vtop__ConstPool__TABLE_hff092405_0
        [__Vtableidx1];
    vlSelf->top__DOT__JumpD = Vtop__ConstPool__TABLE_hacf877fb_0
        [__Vtableidx1];
    vlSelf->top__DOT__ResultSrcD = Vtop__ConstPool__TABLE_hf6daef67_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWriteD = Vtop__ConstPool__TABLE_h45afa79b_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcAD = Vtop__ConstPool__TABLE_hbad56271_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcBD = Vtop__ConstPool__TABLE_h17877086_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrcD = Vtop__ConstPool__TABLE_h2aa7613e_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWriteD = Vtop__ConstPool__TABLE_h2b8877be_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__ALUOpD 
        = Vtop__ConstPool__TABLE_h4191d61c_0[__Vtableidx1];
    vlSelf->top__DOT__LdSrcD = Vtop__ConstPool__TABLE_h20175f08_0
        [__Vtableidx1];
    vlSelf->top__DOT__StSrcD = Vtop__ConstPool__TABLE_h789adb00_0
        [__Vtableidx1];
    vlSelf->top__DOT__JalSrcD = Vtop__ConstPool__TABLE_hf246a450_0
        [__Vtableidx1];
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
    __Vtableidx2 = ((0x80U & (vlSelf->top__DOT__InstrD 
                              << 2U)) | (((0x40U & 
                                           (vlSelf->top__DOT__InstrD 
                                            << 1U)) 
                                          | (0x20U 
                                             & (vlSelf->top__DOT__InstrD 
                                                >> 0x19U))) 
                                         | ((0x1cU 
                                             & (vlSelf->top__DOT__InstrD 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))));
    vlSelf->top__DOT__ALUControlD = Vtop__ConstPool__TABLE_hf7f745e5_0
        [__Vtableidx2];
    vlSelf->top__DOT__PCSrcE = ((IData)(vlSelf->top__DOT__JumpE) 
                                | ((((IData)(vlSelf->top__DOT__BranchE) 
                                     & (IData)(vlSelf->top__DOT__ZeroE)) 
                                    & (0U == (IData)(vlSelf->top__DOT__funct3E))) 
                                   | (((IData)(vlSelf->top__DOT__BranchE) 
                                       & (~ (IData)(vlSelf->top__DOT__ZeroE))) 
                                      & (1U == (IData)(vlSelf->top__DOT__funct3E)))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__PCF = ((IData)(vlSelf->rst) ? 0xbfc00000U
                              : ((IData)(vlSelf->top__DOT__my_hazardunit__DOT__lwStall)
                                  ? vlSelf->top__DOT__PCF
                                  : vlSelf->top__DOT__my_pc__DOT__PCF_Next));
    vlSelf->top__DOT__my_pc__DOT__PCF_Next = ((IData)(vlSelf->top__DOT__PCSrcE)
                                               ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                                   ? 
                                                  (vlSelf->top__DOT__PCE 
                                                   + vlSelf->top__DOT__ImmExtE)
                                                   : vlSelf->top__DOT__RD1E)
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PCF));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_reg_file__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__my_reg_file__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_reg_file__DOT__register__v0;
    // Body
    __Vdlyvset__top__DOT__my_reg_file__DOT__register__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__RegWriteW) & (0U 
                                                 != (IData)(vlSelf->top__DOT__RdW)))) {
        __Vdlyvval__top__DOT__my_reg_file__DOT__register__v0 
            = vlSelf->top__DOT__ResultW;
        __Vdlyvset__top__DOT__my_reg_file__DOT__register__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_reg_file__DOT__register__v0 
            = vlSelf->top__DOT__RdW;
    }
    if (__Vdlyvset__top__DOT__my_reg_file__DOT__register__v0) {
        vlSelf->top__DOT__my_reg_file__DOT__register[__Vdlyvdim0__top__DOT__my_reg_file__DOT__register__v0] 
            = __Vdlyvval__top__DOT__my_reg_file__DOT__register__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__my_reg_file__DOT__register[5U] 
        = vlSelf->trigger;
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__register
        [0xaU];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__my_hazardunit__DOT__lwStall = 
        ((IData)(vlSelf->top__DOT__ResultSrcE) & ((
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->top__DOT__RdE)) 
                                                  | ((0x1fU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->top__DOT__RdE))));
    vlSelf->top__DOT__FlushE = ((IData)(vlSelf->top__DOT__my_hazardunit__DOT__lwStall) 
                                | (IData)(vlSelf->top__DOT__PCSrcE));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
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
