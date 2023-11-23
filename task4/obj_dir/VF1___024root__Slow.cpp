// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF1.h for the primary calling header

#include "verilated.h"

#include "VF1__Syms.h"
#include "VF1___024root.h"

void VF1___024root___ctor_var_reset(VF1___024root* vlSelf);

VF1___024root::VF1___024root(VF1__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VF1___024root___ctor_var_reset(this);
}

void VF1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VF1___024root::~VF1___024root() {
}
