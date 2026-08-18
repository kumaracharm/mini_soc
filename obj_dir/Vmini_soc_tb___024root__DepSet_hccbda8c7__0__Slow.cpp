// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "verilated.h"

#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024root.h"

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_static__TOP(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_static(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_static\n"); );
    // Body
    Vmini_soc_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_static__TOP(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->mini_soc_tb__DOT__clk = 0U;
    vlSelf->mini_soc_tb__DOT__rst = 1U;
    vlSelf->mini_soc_tb__DOT__alu_sel = 0U;
    vlSelf->mini_soc_tb__DOT__mux_sel = 0U;
}

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_final(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_triggers__stl(Vmini_soc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__stl(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___eval_stl(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_settle(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmini_soc_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmini_soc_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("mini_soc_tb.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmini_soc_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__stl(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___act_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb___024root___eval_stl(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmini_soc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mini_soc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__nba(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mini_soc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmini_soc_tb___024root___ctor_var_reset(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mini_soc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mini_soc_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->mini_soc_tb__DOT__alu_sel = VL_RAND_RESET_I(1);
    vlSelf->mini_soc_tb__DOT__mux_sel = VL_RAND_RESET_I(1);
    vlSelf->mini_soc_tb__DOT__dut__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->mini_soc_tb__DOT__dut__DOT__alu_out = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__mini_soc_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__mini_soc_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
