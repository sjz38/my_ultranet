// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_bn2_HH_
#define _relu_bn2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "test_mac_muladd_1ewR.h"
#include "relu_bn2_a_batchneuR.h"
#include "relu_bn2_b_batchnevR.h"

namespace ap_rtl {

struct relu_bn2 : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<16> > conv2_pipe_3_V_V_dout;
    sc_in< sc_logic > conv2_pipe_3_V_V_empty_n;
    sc_out< sc_logic > conv2_pipe_3_V_V_read;
    sc_out< sc_lv<5> > relu2_pipe_4_V_V_din;
    sc_in< sc_logic > relu2_pipe_4_V_V_full_n;
    sc_out< sc_logic > relu2_pipe_4_V_V_write;


    // Module declarations
    relu_bn2(sc_module_name name);
    SC_HAS_PROCESS(relu_bn2);

    ~relu_bn2();

    sc_trace_file* mVcdFile;

    relu_bn2_a_batchneuR* a_batchnorm2_V_U;
    relu_bn2_b_batchnevR* b_batchnorm2_V_U;
    test_mac_muladd_1ewR<1,1,16,10,20,26>* test_mac_muladd_1ewR_U312;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<5> > a_batchnorm2_V_address0;
    sc_signal< sc_logic > a_batchnorm2_V_ce0;
    sc_signal< sc_lv<10> > a_batchnorm2_V_q0;
    sc_signal< sc_lv<5> > b_batchnorm2_V_address0;
    sc_signal< sc_logic > b_batchnorm2_V_ce0;
    sc_signal< sc_lv<20> > b_batchnorm2_V_q0;
    sc_signal< sc_logic > conv2_pipe_3_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln296_reg_339;
    sc_signal< sc_logic > relu2_pipe_4_V_V_blk_n;
    sc_signal< sc_lv<19> > indvar_flatten11_reg_153;
    sc_signal< sc_lv<14> > indvar_flatten_reg_164;
    sc_signal< sc_lv<6> > args21_0_0_reg_175;
    sc_signal< sc_lv<1> > icmp_ln296_fu_186_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<19> > add_ln296_fu_192_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<6> > add_ln298_fu_242_p2;
    sc_signal< sc_lv<14> > select_ln297_fu_254_p3;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<64> > zext_ln304_fu_236_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<1> > icmp_ln297_fu_198_p2;
    sc_signal< sc_lv<1> > icmp_ln298_fu_210_p2;
    sc_signal< sc_lv<1> > xor_ln297_fu_204_p2;
    sc_signal< sc_lv<1> > and_ln297_fu_216_p2;
    sc_signal< sc_lv<1> > or_ln298_fu_222_p2;
    sc_signal< sc_lv<6> > select_ln298_fu_228_p3;
    sc_signal< sc_lv<14> > add_ln297_fu_248_p2;
    sc_signal< sc_lv<26> > grp_fu_328_p3;
    sc_signal< sc_lv<16> > trunc_ln_fu_274_p4;
    sc_signal< sc_lv<1> > tmp_10_fu_283_p3;
    sc_signal< sc_lv<1> > icmp_ln1495_fu_290_p2;
    sc_signal< sc_lv<1> > or_ln1495_fu_313_p2;
    sc_signal< sc_lv<5> > select_ln1495_fu_305_p3;
    sc_signal< sc_lv<5> > tmp_s_fu_296_p4;
    sc_signal< sc_lv<10> > grp_fu_328_p1;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<26> > grp_fu_328_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state4;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<19> ap_const_lv19_64000;
    static const sc_lv<19> ap_const_lv19_1;
    static const sc_lv<14> ap_const_lv14_1400;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<16> ap_const_lv16_100;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_batchnorm2_V_address0();
    void thread_a_batchnorm2_V_ce0();
    void thread_add_ln296_fu_192_p2();
    void thread_add_ln297_fu_248_p2();
    void thread_add_ln298_fu_242_p2();
    void thread_and_ln297_fu_216_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_b_batchnorm2_V_address0();
    void thread_b_batchnorm2_V_ce0();
    void thread_conv2_pipe_3_V_V_blk_n();
    void thread_conv2_pipe_3_V_V_read();
    void thread_grp_fu_328_p1();
    void thread_grp_fu_328_p10();
    void thread_icmp_ln1495_fu_290_p2();
    void thread_icmp_ln296_fu_186_p2();
    void thread_icmp_ln297_fu_198_p2();
    void thread_icmp_ln298_fu_210_p2();
    void thread_internal_ap_ready();
    void thread_or_ln1495_fu_313_p2();
    void thread_or_ln298_fu_222_p2();
    void thread_real_start();
    void thread_relu2_pipe_4_V_V_blk_n();
    void thread_relu2_pipe_4_V_V_din();
    void thread_relu2_pipe_4_V_V_write();
    void thread_select_ln1495_fu_305_p3();
    void thread_select_ln297_fu_254_p3();
    void thread_select_ln298_fu_228_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_10_fu_283_p3();
    void thread_tmp_s_fu_296_p4();
    void thread_trunc_ln_fu_274_p4();
    void thread_xor_ln297_fu_204_p2();
    void thread_zext_ln304_fu_236_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif