// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hfc97f6f1__0;
    VlWide<3>/*95:0*/ __Vtemp_h27e1a69c__0;
    // Body
    __Vtemp_hfc97f6f1__0[0U] = 0x2e6d656dU;
    __Vtemp_hfc97f6f1__0[1U] = 0x6d656d33U;
    __Vtemp_hfc97f6f1__0[2U] = 0x6e737472U;
    __Vtemp_hfc97f6f1__0[3U] = 0x69U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hfc97f6f1__0)
                 ,  &(vlSelf->top__DOT__my_instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
    __Vtemp_h27e1a69c__0[0U] = 0x2e6d656dU;
    __Vtemp_h27e1a69c__0[1U] = 0x6f697379U;
    __Vtemp_h27e1a69c__0[2U] = 0x6eU;
    VL_READMEM_N(true, 32, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h27e1a69c__0)
                 ,  &(vlSelf->top__DOT__my_data_memory__DOT__data_array)
                 , 0x10000U, ~0ULL);
}

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

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    // Body
    vlSelf->top__DOT__my_reg_file__DOT__mem[0x12U] 
        = vlSelf->trigger;
    vlSelf->top__DOT__Instr = ((vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                [(0xfffU & vlSelf->top__DOT__PC)] 
                                << 0x18U) | ((vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->top__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__PC))])));
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
    vlSelf->top__DOT__WriteData = vlSelf->top__DOT__my_reg_file__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__Instr >> 0x14U))];
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__Instr >> 0xfU))];
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__Instr 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__Instr));
    vlSelf->top__DOT__my_control_unit__DOT__Branch 
        = Vtop__ConstPool__TABLE_hff092405_0[__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__Jump = 
        Vtop__ConstPool__TABLE_hacf877fb_0[__Vtableidx1];
    vlSelf->top__DOT__ResultSrc = Vtop__ConstPool__TABLE_hf6daef67_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWrite = Vtop__ConstPool__TABLE_h45afa79b_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcA = Vtop__ConstPool__TABLE_hbad56271_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcB = Vtop__ConstPool__TABLE_h17877086_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrc = Vtop__ConstPool__TABLE_h2aa7613e_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWrite = Vtop__ConstPool__TABLE_h2b8877be_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__ALUOp = 
        Vtop__ConstPool__TABLE_h4191d61c_0[__Vtableidx1];
    vlSelf->top__DOT__LdSrc = Vtop__ConstPool__TABLE_h20175f08_0
        [__Vtableidx1];
    vlSelf->top__DOT__StSrc = Vtop__ConstPool__TABLE_h789adb00_0
        [__Vtableidx1];
    vlSelf->top__DOT__JalSrc = Vtop__ConstPool__TABLE_hf246a450_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_alu_top__DOT__SrcA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                                ? vlSelf->top__DOT__PC
                                                : vlSelf->top__DOT__RD1);
    __Vtableidx2 = ((0x80U & (vlSelf->top__DOT__Instr 
                              << 2U)) | (((0x40U & 
                                           (vlSelf->top__DOT__Instr 
                                            << 1U)) 
                                          | (0x20U 
                                             & (vlSelf->top__DOT__Instr 
                                                >> 0x19U))) 
                                         | ((0x1cU 
                                             & (vlSelf->top__DOT__Instr 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUControl = Vtop__ConstPool__TABLE_hf7f745e5_0
        [__Vtableidx2];
    vlSelf->top__DOT__ImmExt = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                              ? 0U : 
                                             (0xfffff000U 
                                              & vlSelf->top__DOT__Instr)))
                                 : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->top__DOT__Instr) 
                                               | ((0x800U 
                                                   & (vlSelf->top__DOT__Instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->top__DOT__Instr 
                                                        >> 0x14U)))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__Instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__Instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__Instr 
                                                        >> 7U))))))
                                     : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__Instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__Instr 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__Instr 
                                               >> 0x14U)))));
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
    if ((4U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       >> (0x1fU & vlSelf->top__DOT__my_alu_top__DOT__SrcB));
    }
    if ((5U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       ^ vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((6U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__my_alu_top__DOT__SrcB;
    }
    if ((7U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       << (0x1fU & vlSelf->top__DOT__my_alu_top__DOT__SrcB));
    }
    vlSelf->top__DOT__Zero = (0U == vlSelf->top__DOT__ALUResult);
    vlSelf->top__DOT__my_pc_top__DOT__PC_Next = (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                                                  | ((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                                       & (IData)(vlSelf->top__DOT__Zero)) 
                                                      & (0U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->top__DOT__Instr))) 
                                                     | (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                                         & (~ (IData)(vlSelf->top__DOT__Zero))) 
                                                        & (0x1000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->top__DOT__Instr)))))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__JalSrc)
                                                   ? 
                                                  (vlSelf->top__DOT__PC 
                                                   + vlSelf->top__DOT__ImmExt)
                                                   : vlSelf->top__DOT__RD1)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Instr = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__JalSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_pc_top__DOT__PC_Next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__my_instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__my_alu_top__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_alu_top__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__my_control_unit__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_control_unit__DOT__Jump = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
