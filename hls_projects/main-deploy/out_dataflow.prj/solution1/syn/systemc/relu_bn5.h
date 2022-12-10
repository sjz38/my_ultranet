// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_bn5_HH_
#define _relu_bn5_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "test_mac_muladd_1rWc.h"
#include "relu_bn5_a_batchnrUc.h"
#include "relu_bn5_b_batchnrVc.h"

namespace ap_rtl {

struct relu_bn5 : public sc_module {
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
    sc_in< sc_lv<16> > conv5_pipe_9_V_V_dout;
    sc_in< sc_logic > conv5_pipe_9_V_V_empty_n;
    sc_out< sc_logic > conv5_pipe_9_V_V_read;
    sc_out< sc_lv<5> > relu5_pipe_10_V_V_din;
    sc_in< sc_logic > relu5_pipe_10_V_V_full_n;
    sc_out< sc_logic > relu5_pipe_10_V_V_write;


    // Module declarations
    relu_bn5(sc_module_name name);
    SC_HAS_PROCESS(relu_bn5);

    ~relu_bn5();

    sc_trace_file* mVcdFile;

    relu_bn5_a_batchnrUc* a_batchnorm5_V_U;
    relu_bn5_b_batchnrVc* b_batchnorm5_V_U;
    test_mac_muladd_1rWc<1,1,16,10,21,26>* test_mac_muladd_1rWc_U839;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<6> > a_batchnorm5_V_address0;
    sc_signal< sc_logic > a_batchnorm5_V_ce0;
    sc_signal< sc_lv<10> > a_batchnorm5_V_q0;
    sc_signal< sc_lv<6> > b_batchnorm5_V_address0;
    sc_signal< sc_logic > b_batchnorm5_V_ce0;
    sc_signal< sc_lv<21> > b_batchnorm5_V_q0;
    sc_signal< sc_logic > conv5_pipe_9_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln651_reg_339;
    sc_signal< sc_logic > relu5_pipe_10_V_V_blk_n;
    sc_signal< sc_lv<14> > indvar_flatten11_reg_153;
    sc_signal< sc_lv<12> > indvar_flatten_reg_164;
    sc_signal< sc_lv<7> > args24_0_0_reg_175;
    sc_signal< sc_lv<1> > icmp_ln651_fu_186_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<14> > add_ln651_fu_192_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<7> > add_ln653_fu_242_p2;
    sc_signal< sc_lv<12> > select_ln652_fu_254_p3;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<64> > zext_ln658_fu_236_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<1> > icmp_ln652_fu_198_p2;
    sc_signal< sc_lv<1> > icmp_ln653_fu_210_p2;
    sc_signal< sc_lv<1> > xor_ln652_fu_204_p2;
    sc_signal< sc_lv<1> > and_ln652_fu_216_p2;
    sc_signal< sc_lv<1> > or_ln653_fu_222_p2;
    sc_signal< sc_lv<7> > select_ln653_fu_228_p3;
    sc_signal< sc_lv<12> > add_ln652_fu_248_p2;
    sc_signal< sc_lv<26> > grp_fu_328_p3;
    sc_signal< sc_lv<16> > trunc_ln_fu_274_p4;
    sc_signal< sc_lv<1> > tmp_7_fu_283_p3;
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
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<14> ap_const_lv14_3200;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<12> ap_const_lv12_500;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<12> ap_const_lv12_1;
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
    void thread_a_batchnorm5_V_address0();
    void thread_a_batchnorm5_V_ce0();
    void thread_add_ln651_fu_192_p2();
    void thread_add_ln652_fu_248_p2();
    void thread_add_ln653_fu_242_p2();
    void thread_and_ln652_fu_216_p2();
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
    void thread_b_batchnorm5_V_address0();
    void thread_b_batchnorm5_V_ce0();
    void thread_conv5_pipe_9_V_V_blk_n();
    void thread_conv5_pipe_9_V_V_read();
    void thread_grp_fu_328_p1();
    void thread_grp_fu_328_p10();
    void thread_icmp_ln1495_fu_290_p2();
    void thread_icmp_ln651_fu_186_p2();
    void thread_icmp_ln652_fu_198_p2();
    void thread_icmp_ln653_fu_210_p2();
    void thread_internal_ap_ready();
    void thread_or_ln1495_fu_313_p2();
    void thread_or_ln653_fu_222_p2();
    void thread_real_start();
    void thread_relu5_pipe_10_V_V_blk_n();
    void thread_relu5_pipe_10_V_V_din();
    void thread_relu5_pipe_10_V_V_write();
    void thread_select_ln1495_fu_305_p3();
    void thread_select_ln652_fu_254_p3();
    void thread_select_ln653_fu_228_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_7_fu_283_p3();
    void thread_tmp_s_fu_296_p4();
    void thread_trunc_ln_fu_274_p4();
    void thread_xor_ln652_fu_204_p2();
    void thread_zext_ln658_fu_236_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
