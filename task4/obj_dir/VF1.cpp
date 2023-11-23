// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VF1.h"
#include "VF1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VF1::VF1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VF1__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_fsm{vlSymsp->TOP.rst_fsm}
    , rst_lfsr{vlSymsp->TOP.rst_lfsr}
    , rst_tick{vlSymsp->TOP.rst_tick}
    , rst_delay{vlSymsp->TOP.rst_delay}
    , en_lfsr{vlSymsp->TOP.en_lfsr}
    , trigger{vlSymsp->TOP.trigger}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VF1::VF1(const char* _vcname__)
    : VF1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VF1::~VF1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VF1___024root___eval_initial(VF1___024root* vlSelf);
void VF1___024root___eval_settle(VF1___024root* vlSelf);
void VF1___024root___eval(VF1___024root* vlSelf);
#ifdef VL_DEBUG
void VF1___024root___eval_debug_assertions(VF1___024root* vlSelf);
#endif  // VL_DEBUG
void VF1___024root___final(VF1___024root* vlSelf);

static void _eval_initial_loop(VF1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VF1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VF1___024root___eval_settle(&(vlSymsp->TOP));
        VF1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VF1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VF1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VF1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VF1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VF1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VF1::final() {
    VF1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VF1::hierName() const { return vlSymsp->name(); }
const char* VF1::modelName() const { return "VF1"; }
unsigned VF1::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VF1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VF1___024root__trace_init_top(VF1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VF1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1___024root*>(voidSelf);
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VF1___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VF1___024root__trace_register(VF1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VF1::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VF1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
