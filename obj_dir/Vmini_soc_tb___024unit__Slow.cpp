// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "verilated.h"

#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024unit.h"

void Vmini_soc_tb___024unit___ctor_var_reset(Vmini_soc_tb___024unit* vlSelf);

Vmini_soc_tb___024unit::Vmini_soc_tb___024unit(Vmini_soc_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmini_soc_tb___024unit___ctor_var_reset(this);
}

void Vmini_soc_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmini_soc_tb___024unit::~Vmini_soc_tb___024unit() {
}
