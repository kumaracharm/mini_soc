// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmini_soc_tb.h for the primary calling header

#ifndef VERILATED_VMINI_SOC_TB___024UNIT_H_
#define VERILATED_VMINI_SOC_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmini_soc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmini_soc_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vmini_soc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmini_soc_tb___024unit(Vmini_soc_tb__Syms* symsp, const char* v__name);
    ~Vmini_soc_tb___024unit();
    VL_UNCOPYABLE(Vmini_soc_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
