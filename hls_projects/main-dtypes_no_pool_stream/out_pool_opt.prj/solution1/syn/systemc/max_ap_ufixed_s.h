// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _max_ap_ufixed_s_HH_
#define _max_ap_ufixed_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct max_ap_ufixed_s : public sc_module {
    // Port declarations 4
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<5> > x_V;
    sc_in< sc_lv<5> > y_V;
    sc_out< sc_lv<5> > ap_return;


    // Module declarations
    max_ap_ufixed_s(sc_module_name name);
    SC_HAS_PROCESS(max_ap_ufixed_s);

    ~max_ap_ufixed_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > icmp_ln1494_fu_18_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
    void thread_icmp_ln1494_fu_18_p2();
};

}

using namespace ap_rtl;

#endif
