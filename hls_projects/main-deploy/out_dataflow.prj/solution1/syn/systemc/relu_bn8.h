// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_bn8_HH_
#define _relu_bn8_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "test_mac_muladd_1Cee.h"
#include "relu_bn8_a_batchnCce.h"
#include "relu_bn8_b_batchnCde.h"

namespace ap_rtl {

struct relu_bn8 : public sc_module {
    // Port declarations 58
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > conv8_pipe_15_V_V_dout;
    sc_in< sc_logic > conv8_pipe_15_V_V_empty_n;
    sc_out< sc_logic > conv8_pipe_15_V_V_read;
    sc_out< sc_logic > m_axi_result_AWVALID;
    sc_in< sc_logic > m_axi_result_AWREADY;
    sc_out< sc_lv<32> > m_axi_result_AWADDR;
    sc_out< sc_lv<1> > m_axi_result_AWID;
    sc_out< sc_lv<32> > m_axi_result_AWLEN;
    sc_out< sc_lv<3> > m_axi_result_AWSIZE;
    sc_out< sc_lv<2> > m_axi_result_AWBURST;
    sc_out< sc_lv<2> > m_axi_result_AWLOCK;
    sc_out< sc_lv<4> > m_axi_result_AWCACHE;
    sc_out< sc_lv<3> > m_axi_result_AWPROT;
    sc_out< sc_lv<4> > m_axi_result_AWQOS;
    sc_out< sc_lv<4> > m_axi_result_AWREGION;
    sc_out< sc_lv<1> > m_axi_result_AWUSER;
    sc_out< sc_logic > m_axi_result_WVALID;
    sc_in< sc_logic > m_axi_result_WREADY;
    sc_out< sc_lv<32> > m_axi_result_WDATA;
    sc_out< sc_lv<4> > m_axi_result_WSTRB;
    sc_out< sc_logic > m_axi_result_WLAST;
    sc_out< sc_lv<1> > m_axi_result_WID;
    sc_out< sc_lv<1> > m_axi_result_WUSER;
    sc_out< sc_logic > m_axi_result_ARVALID;
    sc_in< sc_logic > m_axi_result_ARREADY;
    sc_out< sc_lv<32> > m_axi_result_ARADDR;
    sc_out< sc_lv<1> > m_axi_result_ARID;
    sc_out< sc_lv<32> > m_axi_result_ARLEN;
    sc_out< sc_lv<3> > m_axi_result_ARSIZE;
    sc_out< sc_lv<2> > m_axi_result_ARBURST;
    sc_out< sc_lv<2> > m_axi_result_ARLOCK;
    sc_out< sc_lv<4> > m_axi_result_ARCACHE;
    sc_out< sc_lv<3> > m_axi_result_ARPROT;
    sc_out< sc_lv<4> > m_axi_result_ARQOS;
    sc_out< sc_lv<4> > m_axi_result_ARREGION;
    sc_out< sc_lv<1> > m_axi_result_ARUSER;
    sc_in< sc_logic > m_axi_result_RVALID;
    sc_out< sc_logic > m_axi_result_RREADY;
    sc_in< sc_lv<32> > m_axi_result_RDATA;
    sc_in< sc_logic > m_axi_result_RLAST;
    sc_in< sc_lv<1> > m_axi_result_RID;
    sc_in< sc_lv<1> > m_axi_result_RUSER;
    sc_in< sc_lv<2> > m_axi_result_RRESP;
    sc_in< sc_logic > m_axi_result_BVALID;
    sc_out< sc_logic > m_axi_result_BREADY;
    sc_in< sc_lv<2> > m_axi_result_BRESP;
    sc_in< sc_lv<1> > m_axi_result_BID;
    sc_in< sc_lv<1> > m_axi_result_BUSER;
    sc_in< sc_lv<32> > result_offset_dout;
    sc_in< sc_logic > result_offset_empty_n;
    sc_out< sc_logic > result_offset_read;


    // Module declarations
    relu_bn8(sc_module_name name);
    SC_HAS_PROCESS(relu_bn8);

    ~relu_bn8();

    sc_trace_file* mVcdFile;

    relu_bn8_a_batchnCce* a_batchnorm8_V_U;
    relu_bn8_b_batchnCde* b_batchnorm8_V_U;
    test_mac_muladd_1Cee<1,1,12,16,22,26>* test_mac_muladd_1Cee_U922;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > a_batchnorm8_V_address0;
    sc_signal< sc_logic > a_batchnorm8_V_ce0;
    sc_signal< sc_lv<12> > a_batchnorm8_V_q0;
    sc_signal< sc_lv<6> > b_batchnorm8_V_address0;
    sc_signal< sc_logic > b_batchnorm8_V_ce0;
    sc_signal< sc_lv<22> > b_batchnorm8_V_q0;
    sc_signal< sc_logic > conv8_pipe_15_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878;
    sc_signal< sc_logic > result_blk_n_AW;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter1_reg;
    sc_signal< sc_logic > result_blk_n_W;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter2_reg;
    sc_signal< sc_logic > result_blk_n_B;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter7_reg;
    sc_signal< sc_logic > result_offset_blk_n;
    sc_signal< sc_lv<14> > indvar_flatten13_i_reg_258;
    sc_signal< sc_lv<4> > args07_0_0_i_reg_269;
    sc_signal< sc_lv<12> > indvar_flatten_i_reg_280;
    sc_signal< sc_lv<5> > args17_0_0_i_reg_291;
    sc_signal< sc_lv<7> > args27_0_0_i_reg_302;
    sc_signal< sc_lv<64> > zext_ln894_fu_323_p1;
    sc_signal< sc_lv<64> > zext_ln894_reg_873;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > icmp_ln884_fu_327_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_io;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter8;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter5_reg;
    sc_signal< sc_lv<1> > icmp_ln884_reg_878_pp0_iter6_reg;
    sc_signal< sc_lv<14> > add_ln884_fu_333_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > select_ln894_1_fu_359_p3;
    sc_signal< sc_lv<4> > select_ln894_1_reg_887;
    sc_signal< sc_lv<5> > select_ln894_3_fu_435_p3;
    sc_signal< sc_lv<5> > select_ln894_3_reg_892;
    sc_signal< sc_lv<32> > result_addr_reg_897;
    sc_signal< sc_lv<32> > result_addr_reg_897_pp0_iter1_reg;
    sc_signal< sc_lv<7> > add_ln886_fu_488_p2;
    sc_signal< sc_lv<12> > select_ln885_fu_500_p3;
    sc_signal< sc_lv<5> > select_ln1495_1_fu_565_p3;
    sc_signal< sc_lv<5> > select_ln1495_1_reg_923;
    sc_signal< sc_lv<32> > l_i_fu_591_p3;
    sc_signal< sc_lv<32> > l_i_reg_932;
    sc_signal< sc_lv<8> > trunc_ln943_fu_599_p1;
    sc_signal< sc_lv<8> > trunc_ln943_reg_937;
    sc_signal< sc_lv<32> > select_ln935_fu_854_p3;
    sc_signal< sc_lv<32> > select_ln935_reg_942;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_lv<4> > ap_phi_mux_args07_0_0_i_phi_fu_273_p4;
    sc_signal< sc_lv<5> > ap_phi_mux_args17_0_0_i_phi_fu_295_p4;
    sc_signal< sc_lv<64> > zext_ln892_fu_465_p1;
    sc_signal< sc_lv<64> > add_ln894_3_fu_477_p2;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<30> > result_offset1_i_fu_313_p4;
    sc_signal< sc_lv<1> > icmp_ln885_fu_345_p2;
    sc_signal< sc_lv<4> > add_ln884_1_fu_339_p2;
    sc_signal< sc_lv<8> > tmp_1_i_fu_367_p3;
    sc_signal< sc_lv<6> > tmp_2_i_fu_379_p3;
    sc_signal< sc_lv<9> > zext_ln894_2_fu_387_p1;
    sc_signal< sc_lv<9> > zext_ln894_1_fu_375_p1;
    sc_signal< sc_lv<1> > icmp_ln886_fu_403_p2;
    sc_signal< sc_lv<1> > xor_ln894_fu_397_p2;
    sc_signal< sc_lv<5> > select_ln894_fu_351_p3;
    sc_signal< sc_lv<1> > and_ln894_fu_409_p2;
    sc_signal< sc_lv<1> > or_ln894_fu_421_p2;
    sc_signal< sc_lv<5> > add_ln885_fu_415_p2;
    sc_signal< sc_lv<9> > add_ln894_fu_391_p2;
    sc_signal< sc_lv<9> > zext_ln894_3_fu_443_p1;
    sc_signal< sc_lv<9> > add_ln894_1_fu_447_p2;
    sc_signal< sc_lv<15> > tmp_fu_453_p3;
    sc_signal< sc_lv<7> > select_ln894_2_fu_427_p3;
    sc_signal< sc_lv<64> > zext_ln894_4_fu_461_p1;
    sc_signal< sc_lv<64> > add_ln894_2_fu_471_p2;
    sc_signal< sc_lv<12> > add_ln885_1_fu_494_p2;
    sc_signal< sc_lv<26> > grp_fu_862_p3;
    sc_signal< sc_lv<16> > trunc_ln_i_fu_520_p4;
    sc_signal< sc_lv<1> > tmp_1_fu_529_p3;
    sc_signal< sc_lv<1> > icmp_ln1495_fu_536_p2;
    sc_signal< sc_lv<1> > or_ln1495_fu_559_p2;
    sc_signal< sc_lv<5> > select_ln1495_fu_551_p3;
    sc_signal< sc_lv<5> > tmp_7_i_fu_542_p4;
    sc_signal< sc_lv<5> > p_Result_i_fu_573_p4;
    sc_signal< sc_lv<32> > p_Result_7_i_fu_583_p3;
    sc_signal< sc_lv<32> > sub_ln944_fu_608_p2;
    sc_signal< sc_lv<32> > add_ln944_fu_617_p2;
    sc_signal< sc_lv<31> > tmp_2_fu_623_p4;
    sc_signal< sc_lv<3> > trunc_ln947_fu_639_p1;
    sc_signal< sc_lv<3> > sub_ln947_fu_643_p2;
    sc_signal< sc_lv<5> > zext_ln947_fu_649_p1;
    sc_signal< sc_lv<5> > lshr_ln947_fu_653_p2;
    sc_signal< sc_lv<5> > and_ln947_fu_659_p2;
    sc_signal< sc_lv<1> > icmp_ln947_fu_633_p2;
    sc_signal< sc_lv<1> > icmp_ln947_1_fu_664_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_676_p3;
    sc_signal< sc_lv<5> > trunc_ln944_fu_613_p1;
    sc_signal< sc_lv<5> > add_ln949_fu_690_p2;
    sc_signal< sc_lv<1> > p_Result_3_i_fu_696_p3;
    sc_signal< sc_lv<1> > xor_ln949_fu_684_p2;
    sc_signal< sc_lv<1> > and_ln949_fu_703_p2;
    sc_signal< sc_lv<1> > and_ln947_1_fu_670_p2;
    sc_signal< sc_lv<1> > or_ln949_fu_709_p2;
    sc_signal< sc_lv<32> > zext_ln958_fu_726_p1;
    sc_signal< sc_lv<32> > add_ln958_fu_735_p2;
    sc_signal< sc_lv<32> > lshr_ln958_fu_741_p2;
    sc_signal< sc_lv<32> > sub_ln958_fu_751_p2;
    sc_signal< sc_lv<64> > zext_ln957_fu_723_p1;
    sc_signal< sc_lv<64> > zext_ln958_2_fu_757_p1;
    sc_signal< sc_lv<1> > icmp_ln958_fu_729_p2;
    sc_signal< sc_lv<64> > zext_ln958_1_fu_747_p1;
    sc_signal< sc_lv<64> > shl_ln958_fu_761_p2;
    sc_signal< sc_lv<32> > or_ln_i_fu_715_p3;
    sc_signal< sc_lv<64> > zext_ln961_fu_775_p1;
    sc_signal< sc_lv<64> > select_ln958_fu_767_p3;
    sc_signal< sc_lv<64> > add_ln961_fu_779_p2;
    sc_signal< sc_lv<63> > lshr_ln_i_fu_785_p4;
    sc_signal< sc_lv<1> > tmp_4_fu_799_p3;
    sc_signal< sc_lv<8> > sub_ln964_fu_815_p2;
    sc_signal< sc_lv<8> > select_ln964_fu_807_p3;
    sc_signal< sc_lv<8> > add_ln964_fu_820_p2;
    sc_signal< sc_lv<64> > zext_ln962_fu_795_p1;
    sc_signal< sc_lv<9> > tmp_5_i_fu_826_p3;
    sc_signal< sc_lv<64> > p_Result_9_i_fu_834_p5;
    sc_signal< sc_lv<32> > trunc_ln738_fu_846_p1;
    sc_signal< sc_lv<1> > icmp_ln935_fu_603_p2;
    sc_signal< sc_lv<32> > bitcast_ln739_fu_850_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<14> ap_const_lv14_3200;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<12> ap_const_lv12_500;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<16> ap_const_lv16_100;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<27> ap_const_lv27_7FFFFFF;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_FFFFFFE8;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<5> ap_const_lv5_8;
    static const sc_lv<32> ap_const_lv32_FFFFFFE7;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<8> ap_const_lv8_7E;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_17;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_batchnorm8_V_address0();
    void thread_a_batchnorm8_V_ce0();
    void thread_add_ln884_1_fu_339_p2();
    void thread_add_ln884_fu_333_p2();
    void thread_add_ln885_1_fu_494_p2();
    void thread_add_ln885_fu_415_p2();
    void thread_add_ln886_fu_488_p2();
    void thread_add_ln894_1_fu_447_p2();
    void thread_add_ln894_2_fu_471_p2();
    void thread_add_ln894_3_fu_477_p2();
    void thread_add_ln894_fu_391_p2();
    void thread_add_ln944_fu_617_p2();
    void thread_add_ln949_fu_690_p2();
    void thread_add_ln958_fu_735_p2();
    void thread_add_ln961_fu_779_p2();
    void thread_add_ln964_fu_820_p2();
    void thread_and_ln894_fu_409_p2();
    void thread_and_ln947_1_fu_670_p2();
    void thread_and_ln947_fu_659_p2();
    void thread_and_ln949_fu_703_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage0_iter8();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_io();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_args07_0_0_i_phi_fu_273_p4();
    void thread_ap_phi_mux_args17_0_0_i_phi_fu_295_p4();
    void thread_ap_ready();
    void thread_b_batchnorm8_V_address0();
    void thread_b_batchnorm8_V_ce0();
    void thread_bitcast_ln739_fu_850_p1();
    void thread_conv8_pipe_15_V_V_blk_n();
    void thread_conv8_pipe_15_V_V_read();
    void thread_icmp_ln1495_fu_536_p2();
    void thread_icmp_ln884_fu_327_p2();
    void thread_icmp_ln885_fu_345_p2();
    void thread_icmp_ln886_fu_403_p2();
    void thread_icmp_ln935_fu_603_p2();
    void thread_icmp_ln947_1_fu_664_p2();
    void thread_icmp_ln947_fu_633_p2();
    void thread_icmp_ln958_fu_729_p2();
    void thread_l_i_fu_591_p3();
    void thread_lshr_ln947_fu_653_p2();
    void thread_lshr_ln958_fu_741_p2();
    void thread_lshr_ln_i_fu_785_p4();
    void thread_m_axi_result_ARADDR();
    void thread_m_axi_result_ARBURST();
    void thread_m_axi_result_ARCACHE();
    void thread_m_axi_result_ARID();
    void thread_m_axi_result_ARLEN();
    void thread_m_axi_result_ARLOCK();
    void thread_m_axi_result_ARPROT();
    void thread_m_axi_result_ARQOS();
    void thread_m_axi_result_ARREGION();
    void thread_m_axi_result_ARSIZE();
    void thread_m_axi_result_ARUSER();
    void thread_m_axi_result_ARVALID();
    void thread_m_axi_result_AWADDR();
    void thread_m_axi_result_AWBURST();
    void thread_m_axi_result_AWCACHE();
    void thread_m_axi_result_AWID();
    void thread_m_axi_result_AWLEN();
    void thread_m_axi_result_AWLOCK();
    void thread_m_axi_result_AWPROT();
    void thread_m_axi_result_AWQOS();
    void thread_m_axi_result_AWREGION();
    void thread_m_axi_result_AWSIZE();
    void thread_m_axi_result_AWUSER();
    void thread_m_axi_result_AWVALID();
    void thread_m_axi_result_BREADY();
    void thread_m_axi_result_RREADY();
    void thread_m_axi_result_WDATA();
    void thread_m_axi_result_WID();
    void thread_m_axi_result_WLAST();
    void thread_m_axi_result_WSTRB();
    void thread_m_axi_result_WUSER();
    void thread_m_axi_result_WVALID();
    void thread_or_ln1495_fu_559_p2();
    void thread_or_ln894_fu_421_p2();
    void thread_or_ln949_fu_709_p2();
    void thread_or_ln_i_fu_715_p3();
    void thread_p_Result_3_i_fu_696_p3();
    void thread_p_Result_7_i_fu_583_p3();
    void thread_p_Result_9_i_fu_834_p5();
    void thread_p_Result_i_fu_573_p4();
    void thread_result_blk_n_AW();
    void thread_result_blk_n_B();
    void thread_result_blk_n_W();
    void thread_result_offset1_i_fu_313_p4();
    void thread_result_offset_blk_n();
    void thread_result_offset_read();
    void thread_select_ln1495_1_fu_565_p3();
    void thread_select_ln1495_fu_551_p3();
    void thread_select_ln885_fu_500_p3();
    void thread_select_ln894_1_fu_359_p3();
    void thread_select_ln894_2_fu_427_p3();
    void thread_select_ln894_3_fu_435_p3();
    void thread_select_ln894_fu_351_p3();
    void thread_select_ln935_fu_854_p3();
    void thread_select_ln958_fu_767_p3();
    void thread_select_ln964_fu_807_p3();
    void thread_shl_ln958_fu_761_p2();
    void thread_sub_ln944_fu_608_p2();
    void thread_sub_ln947_fu_643_p2();
    void thread_sub_ln958_fu_751_p2();
    void thread_sub_ln964_fu_815_p2();
    void thread_tmp_1_fu_529_p3();
    void thread_tmp_1_i_fu_367_p3();
    void thread_tmp_2_fu_623_p4();
    void thread_tmp_2_i_fu_379_p3();
    void thread_tmp_3_fu_676_p3();
    void thread_tmp_4_fu_799_p3();
    void thread_tmp_5_i_fu_826_p3();
    void thread_tmp_7_i_fu_542_p4();
    void thread_tmp_fu_453_p3();
    void thread_trunc_ln738_fu_846_p1();
    void thread_trunc_ln943_fu_599_p1();
    void thread_trunc_ln944_fu_613_p1();
    void thread_trunc_ln947_fu_639_p1();
    void thread_trunc_ln_i_fu_520_p4();
    void thread_xor_ln894_fu_397_p2();
    void thread_xor_ln949_fu_684_p2();
    void thread_zext_ln892_fu_465_p1();
    void thread_zext_ln894_1_fu_375_p1();
    void thread_zext_ln894_2_fu_387_p1();
    void thread_zext_ln894_3_fu_443_p1();
    void thread_zext_ln894_4_fu_461_p1();
    void thread_zext_ln894_fu_323_p1();
    void thread_zext_ln947_fu_649_p1();
    void thread_zext_ln957_fu_723_p1();
    void thread_zext_ln958_1_fu_747_p1();
    void thread_zext_ln958_2_fu_757_p1();
    void thread_zext_ln958_fu_726_p1();
    void thread_zext_ln961_fu_775_p1();
    void thread_zext_ln962_fu_795_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif