// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "verilated.h"

#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__0(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       30);
    vlSelf->mini_soc_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       33);
    vlSelf->mini_soc_tb__DOT__alu_sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x7530ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       34);
    vlSelf->mini_soc_tb__DOT__mux_sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       35);
    vlSelf->mini_soc_tb__DOT__alu_sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       36);
    vlSelf->mini_soc_tb__DOT__mux_sel = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       38);
    VL_FINISH_MT("mini_soc_tb.v", 38, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___eval_triggers__act(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->mini_soc_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 
        = vlSelf->mini_soc_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmini_soc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmini_soc_tb___024root___act_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->mini_soc_tb__DOT__alu_sel) {
        if (vlSelf->mini_soc_tb__DOT__alu_sel) {
            vlSelf->mini_soc_tb__DOT__dut__DOT__alu_out 
                = (3U & (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                          >> 2U) - (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count)));
        }
    } else {
        vlSelf->mini_soc_tb__DOT__dut__DOT__alu_out 
            = (3U & (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                      >> 2U) + (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count)));
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("Time=%0t | rst=%b | alu_sel=%b | mux_sel=%b | soc_out=%b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelf->mini_soc_tb__DOT__rst),
                  1,vlSelf->mini_soc_tb__DOT__alu_sel,
                  1,(IData)(vlSelf->mini_soc_tb__DOT__mux_sel),
                  2,(3U & ((IData)(vlSelf->mini_soc_tb__DOT__mux_sel)
                            ? (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__alu_out)
                            : ((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                               >> 2U))));
    }
}
