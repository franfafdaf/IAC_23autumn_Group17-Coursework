// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VF1__SYMS_H_
#define VERILATED_VF1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VF1.h"

// INCLUDE MODULE CLASSES
#include "VF1___024root.h"

// SYMS CLASS (contains all model state)
class VF1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VF1* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VF1___024root                  TOP;

    // CONSTRUCTORS
    VF1__Syms(VerilatedContext* contextp, const char* namep, VF1* modelp);
    ~VF1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
