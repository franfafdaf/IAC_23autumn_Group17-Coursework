// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"a0", false,-1, 31,0);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->declBus(c+33,"PC_Plus", false,-1, 31,0);
    tracep->declBus(c+34,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBus(c+36,"Instr", false,-1, 31,0);
    tracep->declBus(c+37,"opcode", false,-1, 6,0);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBit(c+39,"func75", false,-1);
    tracep->declBit(c+61,"Zero", false,-1);
    tracep->declBus(c+40,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+41,"MemWrite", false,-1);
    tracep->declBit(c+42,"ALUSrcA", false,-1);
    tracep->declBit(c+43,"ALUSrcB", false,-1);
    tracep->declBus(c+44,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+45,"RegWrite", false,-1);
    tracep->declBus(c+46,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+47,"LdSrc", false,-1);
    tracep->declBit(c+48,"StSrc", false,-1);
    tracep->declBit(c+49,"JalSrc", false,-1);
    tracep->declBus(c+50,"A", false,-1, 11,0);
    tracep->declBus(c+51,"A1", false,-1, 4,0);
    tracep->declBus(c+52,"A2", false,-1, 4,0);
    tracep->declBus(c+53,"A3", false,-1, 4,0);
    tracep->declBus(c+62,"RD1", false,-1, 31,0);
    tracep->declBus(c+72,"Result", false,-1, 31,0);
    tracep->declBus(c+63,"WriteData", false,-1, 31,0);
    tracep->declBus(c+73,"ReadData", false,-1, 31,0);
    tracep->declBus(c+54,"Imm", false,-1, 24,0);
    tracep->declBus(c+64,"ALUResult", false,-1, 31,0);
    tracep->pushNamePrefix("my_DataMux ");
    tracep->declBus(c+40,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+64,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+73,"RD", false,-1, 31,0);
    tracep->declBus(c+33,"PCPlus", false,-1, 31,0);
    tracep->declBus(c+72,"Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu_top ");
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBus(c+62,"RD1", false,-1, 31,0);
    tracep->declBus(c+63,"RD2", false,-1, 31,0);
    tracep->declBus(c+34,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+46,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+42,"ALUSrcA", false,-1);
    tracep->declBit(c+43,"ALUSrcB", false,-1);
    tracep->declBus(c+64,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+61,"Zero", false,-1);
    tracep->declBus(c+65,"SrcA", false,-1, 31,0);
    tracep->declBus(c+66,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+37,"opcode", false,-1, 6,0);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBit(c+39,"func75", false,-1);
    tracep->declBit(c+61,"Zero", false,-1);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->declBus(c+40,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+41,"MemWrite", false,-1);
    tracep->declBit(c+42,"ALUSrcA", false,-1);
    tracep->declBit(c+43,"ALUSrcB", false,-1);
    tracep->declBus(c+44,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+45,"RegWrite", false,-1);
    tracep->declBus(c+46,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+47,"LdSrc", false,-1);
    tracep->declBit(c+48,"StSrc", false,-1);
    tracep->declBit(c+49,"JalSrc", false,-1);
    tracep->declBus(c+55,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+56,"Branch", false,-1);
    tracep->declBit(c+57,"Jump", false,-1);
    tracep->declBit(c+58,"op5", false,-1);
    tracep->pushNamePrefix("ALU_decode ");
    tracep->declBit(c+58,"op5", false,-1);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBit(c+39,"func75", false,-1);
    tracep->declBus(c+55,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+46,"ALUControl", false,-1, 2,0);
    tracep->declBus(c+59,"decode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCSrc_decode ");
    tracep->declBit(c+61,"Zero", false,-1);
    tracep->declBit(c+56,"Branch", false,-1);
    tracep->declBit(c+57,"Jump", false,-1);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_decode ");
    tracep->declBus(c+37,"opcode", false,-1, 6,0);
    tracep->declBus(c+38,"funct3", false,-1, 2,0);
    tracep->declBit(c+56,"Branch", false,-1);
    tracep->declBit(c+57,"Jump", false,-1);
    tracep->declBus(c+40,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+41,"MemWrite", false,-1);
    tracep->declBit(c+42,"ALUSrcA", false,-1);
    tracep->declBit(c+43,"ALUSrcB", false,-1);
    tracep->declBus(c+44,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+45,"RegWrite", false,-1);
    tracep->declBus(c+55,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+47,"LdSrc", false,-1);
    tracep->declBit(c+48,"StSrc", false,-1);
    tracep->declBit(c+49,"JalSrc", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_data_memory ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+41,"WE", false,-1);
    tracep->declBit(c+48,"StSrc", false,-1);
    tracep->declBit(c+47,"LdSrc", false,-1);
    tracep->declBus(c+64,"A", false,-1, 31,0);
    tracep->declBus(c+63,"WD", false,-1, 31,0);
    tracep->declBus(c+73,"RD", false,-1, 31,0);
    tracep->declBus(c+67,"corrected_WD", false,-1, 31,0);
    tracep->declBus(c+74,"read_data_internal", false,-1, 31,0);
    tracep->pushNamePrefix("my_mem ");
    tracep->declBus(c+78,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+41,"WE", false,-1);
    tracep->declBus(c+64,"A", false,-1, 31,0);
    tracep->declBus(c+67,"WD", false,-1, 31,0);
    tracep->declBus(c+74,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_mem_i ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+48,"StSrc", false,-1);
    tracep->declBus(c+63,"WD_i", false,-1, 31,0);
    tracep->declBus(c+67,"WD_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_mem_o ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+47,"LdSrc", false,-1);
    tracep->declBus(c+74,"RD_i", false,-1, 31,0);
    tracep->declBus(c+73,"RD_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_extend ");
    tracep->declBus(c+44,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+54,"Imm", false,-1, 31,7);
    tracep->declBus(c+34,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_instr_mem ");
    tracep->declBus(c+79,"A_length", false,-1, 31,0);
    tracep->declBus(c+78,"D_length", false,-1, 31,0);
    tracep->declBus(c+50,"A", false,-1, 11,0);
    tracep->declBus(c+36,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc_top ");
    tracep->declBus(c+77,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->declBit(c+49,"JalSrc", false,-1);
    tracep->declBus(c+34,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+62,"RD1", false,-1, 31,0);
    tracep->declBus(c+33,"PC_Plus", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBus(c+75,"PC_Target", false,-1, 31,0);
    tracep->declBus(c+60,"PC_Jump", false,-1, 31,0);
    tracep->declBus(c+76,"PC_Next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_reg_file ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+51,"A1", false,-1, 4,0);
    tracep->declBus(c+52,"A2", false,-1, 4,0);
    tracep->declBus(c+53,"A3", false,-1, 4,0);
    tracep->declBus(c+72,"WD3", false,-1, 31,0);
    tracep->declBit(c+45,"WE3", false,-1);
    tracep->declBus(c+62,"RD1", false,-1, 31,0);
    tracep->declBus(c+63,"RD2", false,-1, 31,0);
    tracep->declBus(c+70,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__my_reg_file__DOT__mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__my_reg_file__DOT__mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__my_reg_file__DOT__mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__my_reg_file__DOT__mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__my_reg_file__DOT__mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__my_reg_file__DOT__mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__my_reg_file__DOT__mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__my_reg_file__DOT__mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__my_reg_file__DOT__mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__my_reg_file__DOT__mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__my_reg_file__DOT__mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__my_reg_file__DOT__mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__my_reg_file__DOT__mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__my_reg_file__DOT__mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__my_reg_file__DOT__mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__my_reg_file__DOT__mem[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__my_reg_file__DOT__mem[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__my_reg_file__DOT__mem[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__my_reg_file__DOT__mem[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__my_reg_file__DOT__mem[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__my_reg_file__DOT__mem[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__my_reg_file__DOT__mem[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__my_reg_file__DOT__mem[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__my_reg_file__DOT__mem[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__my_reg_file__DOT__mem[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__my_reg_file__DOT__mem[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__my_reg_file__DOT__mem[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__my_reg_file__DOT__mem[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__my_reg_file__DOT__mem[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__my_reg_file__DOT__mem[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__my_reg_file__DOT__mem[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__my_reg_file__DOT__mem[31]),32);
    bufp->fullIData(oldp+33,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ImmExt),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+36,((((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                               << 0x18U) | vlSelf->__VdfgTmp_hdd528194__0)),32);
    bufp->fullCData(oldp+37,((0x7fU & (IData)(vlSelf->__VdfgTmp_h95d868b5__0))),7);
    bufp->fullCData(oldp+38,((7U & ((IData)(vlSelf->__VdfgTmp_h23e32fae__0) 
                                    >> 4U))),3);
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                                  >> 6U))));
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__ResultSrc),2);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__MemWrite));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__ALUSrcA));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__ALUSrcB));
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__ImmSrc),3);
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__RegWrite));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__ALUControl),3);
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__LdSrc));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__StSrc));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__JalSrc));
    bufp->fullSData(oldp+50,((0xfffU & vlSelf->top__DOT__PC)),12);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->__VdfgTmp_hdd528194__0 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+52,(((0x10U & ((IData)(vlSelf->__VdfgTmp_h2214dd4b__0) 
                                        << 4U)) | (0xfU 
                                                   & (vlSelf->__VdfgTmp_hdd528194__0 
                                                      >> 0x14U)))),5);
    bufp->fullCData(oldp+53,((0x1fU & ((IData)(vlSelf->__VdfgTmp_hbf3bde7e__0) 
                                       >> 7U))),5);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__Imm),25);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__my_control_unit__DOT__ALUOp),2);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__my_control_unit__DOT__Branch));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__my_control_unit__DOT__Jump));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->__VdfgTmp_h95d868b5__0) 
                                  >> 5U))));
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode),2);
    bufp->fullIData(oldp+60,((vlSelf->top__DOT__ImmExt 
                              + vlSelf->top__DOT__PC)),32);
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__Zero));
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__RD1),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__WriteData),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__my_alu_top__DOT__SrcA),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__my_alu_top__DOT__SrcB),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__my_data_memory__DOT__corrected_WD),32);
    bufp->fullBit(oldp+68,(vlSelf->clk));
    bufp->fullBit(oldp+69,(vlSelf->rst));
    bufp->fullIData(oldp+70,(vlSelf->a0),32);
    bufp->fullBit(oldp+71,(((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                            | ((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                               & (((IData)(vlSelf->top__DOT__Zero) 
                                   & (0U == (0x70U 
                                             & (IData)(vlSelf->__VdfgTmp_h23e32fae__0)))) 
                                  | ((~ (IData)(vlSelf->top__DOT__Zero)) 
                                     & (0x10U == (0x70U 
                                                  & (IData)(vlSelf->__VdfgTmp_h23e32fae__0)))))))));
    bufp->fullIData(oldp+72,(((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                               ? vlSelf->top__DOT__ALUResult
                               : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                   ? ((IData)(vlSelf->top__DOT__LdSrc)
                                       ? (IData)(vlSelf->__VdfgTmp_h88913f45__0)
                                       : ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                           [(0x1ffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->top__DOT__ALUResult))] 
                                           << 0x18U) 
                                          | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                              [(0x1ffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__ALUResult))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__ALUResult))] 
                                                 << 8U) 
                                                | (IData)(vlSelf->__VdfgTmp_h88913f45__0)))))
                                   : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                       ? ((IData)(4U) 
                                          + vlSelf->top__DOT__PC)
                                       : 0U)))),32);
    bufp->fullIData(oldp+73,(((IData)(vlSelf->top__DOT__LdSrc)
                               ? (IData)(vlSelf->__VdfgTmp_h88913f45__0)
                               : ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                   [(0x1ffffU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__ALUResult))] 
                                   << 0x18U) | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUResult))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__ALUResult))] 
                                                    << 8U) 
                                                   | (IData)(vlSelf->__VdfgTmp_h88913f45__0)))))),32);
    bufp->fullIData(oldp+74,(((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                               [(0x1ffffU & ((IData)(3U) 
                                             + vlSelf->top__DOT__ALUResult))] 
                               << 0x18U) | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->top__DOT__ALUResult))] 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->top__DOT__ALUResult))] 
                                                << 8U) 
                                               | (IData)(vlSelf->__VdfgTmp_h88913f45__0))))),32);
    bufp->fullIData(oldp+75,(((IData)(vlSelf->top__DOT__JalSrc)
                               ? (vlSelf->top__DOT__ImmExt 
                                  + vlSelf->top__DOT__PC)
                               : vlSelf->top__DOT__RD1)),32);
    bufp->fullIData(oldp+76,((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                               | ((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                  & (((IData)(vlSelf->top__DOT__Zero) 
                                      & (0U == (0x70U 
                                                & (IData)(vlSelf->__VdfgTmp_h23e32fae__0)))) 
                                     | ((~ (IData)(vlSelf->top__DOT__Zero)) 
                                        & (0x10U == 
                                           (0x70U & (IData)(vlSelf->__VdfgTmp_h23e32fae__0)))))))
                               ? ((IData)(vlSelf->top__DOT__JalSrc)
                                   ? (vlSelf->top__DOT__ImmExt 
                                      + vlSelf->top__DOT__PC)
                                   : vlSelf->top__DOT__RD1)
                               : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+77,(0x20U),32);
    bufp->fullIData(oldp+78,(8U),32);
    bufp->fullIData(oldp+79,(0xcU),32);
}
