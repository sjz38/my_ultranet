// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _maxpool1_HH_
#define _maxpool1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "maxpool1_pool1_li1iI.h"

namespace ap_rtl {

struct maxpool1 : public sc_module {
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
    sc_in< sc_lv<5> > relu1_pipe_2_V_V_dout;
    sc_in< sc_logic > relu1_pipe_2_V_V_empty_n;
    sc_out< sc_logic > relu1_pipe_2_V_V_read;
    sc_out< sc_lv<5> > pool1_pipe_2_V_V_din;
    sc_in< sc_logic > pool1_pipe_2_V_V_full_n;
    sc_out< sc_logic > pool1_pipe_2_V_V_write;


    // Module declarations
    maxpool1(sc_module_name name);
    SC_HAS_PROCESS(maxpool1);

    ~maxpool1();

    sc_trace_file* mVcdFile;

    maxpool1_pool1_li1iI* pool1_line_buffer_V_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<24> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > relu1_pipe_2_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > icmp_ln202_reg_866;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_pp0_stage6;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_pp0_stage7;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_pp0_stage8;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage9;
    sc_signal< bool > ap_block_pp0_stage9;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage10;
    sc_signal< bool > ap_block_pp0_stage10;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage11;
    sc_signal< bool > ap_block_pp0_stage11;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage12;
    sc_signal< bool > ap_block_pp0_stage12;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage13;
    sc_signal< bool > ap_block_pp0_stage13;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage14;
    sc_signal< bool > ap_block_pp0_stage14;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage15;
    sc_signal< bool > ap_block_pp0_stage15;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > pool1_pipe_2_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > icmp_ln211_reg_912;
    sc_signal< sc_lv<10> > indvar_flatten_reg_362;
    sc_signal< sc_lv<2> > line_row_0_0_reg_373;
    sc_signal< sc_lv<9> > line_col_0_0_reg_384;
    sc_signal< sc_lv<12> > indvar_flatten7_reg_395;
    sc_signal< sc_lv<9> > block_0_0_reg_406;
    sc_signal< sc_lv<5> > c_0_0_reg_417;
    sc_signal< sc_lv<1> > icmp_ln200_fu_434_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > add_ln200_fu_440_p2;
    sc_signal< sc_lv<7> > add_ln200_reg_861;
    sc_signal< sc_lv<1> > icmp_ln202_fu_446_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > add_ln202_1_fu_452_p2;
    sc_signal< sc_lv<10> > add_ln202_1_reg_870;
    sc_signal< sc_lv<9> > select_ln206_fu_470_p3;
    sc_signal< sc_lv<9> > select_ln206_reg_875;
    sc_signal< sc_lv<2> > select_ln206_1_fu_478_p3;
    sc_signal< sc_lv<2> > select_ln206_1_reg_881;
    sc_signal< sc_lv<15> > tmp_13_fu_523_p3;
    sc_signal< sc_lv<15> > tmp_13_reg_888;
    sc_signal< bool > ap_block_state4_pp0_stage1_iter0;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<9> > add_ln203_fu_676_p2;
    sc_signal< sc_lv<9> > add_ln203_reg_907;
    sc_signal< bool > ap_block_state18_pp0_stage15_iter0;
    sc_signal< bool > ap_block_pp0_stage15_11001;
    sc_signal< sc_lv<1> > icmp_ln211_fu_691_p2;
    sc_signal< bool > ap_block_state21_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state25_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<12> > add_ln211_1_fu_697_p2;
    sc_signal< sc_lv<12> > add_ln211_1_reg_916;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<5> > select_ln217_fu_715_p3;
    sc_signal< sc_lv<5> > select_ln217_reg_921;
    sc_signal< sc_lv<9> > select_ln217_1_fu_723_p3;
    sc_signal< sc_lv<9> > select_ln217_1_reg_926;
    sc_signal< sc_lv<14> > add_ln356_23_fu_777_p2;
    sc_signal< sc_lv<14> > add_ln356_23_reg_931;
    sc_signal< sc_lv<14> > add_ln356_24_fu_788_p2;
    sc_signal< sc_lv<14> > add_ln356_24_reg_941;
    sc_signal< sc_lv<14> > add_ln356_25_fu_799_p2;
    sc_signal< sc_lv<14> > add_ln356_25_reg_951;
    sc_signal< sc_lv<14> > add_ln356_26_fu_805_p2;
    sc_signal< sc_lv<14> > add_ln356_26_reg_957;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< bool > ap_block_state22_pp1_stage1_iter0;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<14> > select_ln251_fu_815_p3;
    sc_signal< sc_lv<14> > select_ln251_reg_968;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage2;
    sc_signal< bool > ap_block_state23_pp1_stage2_iter0;
    sc_signal< bool > ap_block_pp1_stage2_11001;
    sc_signal< sc_lv<14> > select_ln251_3_fu_830_p3;
    sc_signal< sc_lv<14> > select_ln251_3_reg_983;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage3;
    sc_signal< bool > ap_block_state24_pp1_stage3_iter0;
    sc_signal< bool > ap_block_pp1_stage3_11001;
    sc_signal< sc_lv<5> > add_ln212_fu_852_p2;
    sc_signal< sc_lv<5> > add_ln212_reg_998;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< bool > ap_block_pp0_stage15_subdone;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state21;
    sc_signal< bool > ap_block_pp1_stage3_subdone;
    sc_signal< sc_lv<14> > pool1_line_buffer_V_address0;
    sc_signal< sc_logic > pool1_line_buffer_V_ce0;
    sc_signal< sc_logic > pool1_line_buffer_V_we0;
    sc_signal< sc_lv<5> > pool1_line_buffer_V_q0;
    sc_signal< sc_lv<14> > pool1_line_buffer_V_address1;
    sc_signal< sc_logic > pool1_line_buffer_V_ce1;
    sc_signal< sc_lv<5> > pool1_line_buffer_V_q1;
    sc_signal< sc_lv<7> > h_0_0_reg_351;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<10> > ap_phi_mux_indvar_flatten_phi_fu_366_p4;
    sc_signal< sc_lv<2> > ap_phi_mux_line_row_0_0_phi_fu_377_p4;
    sc_signal< sc_lv<9> > ap_phi_mux_line_col_0_0_phi_fu_388_p4;
    sc_signal< sc_lv<12> > ap_phi_mux_indvar_flatten7_phi_fu_399_p4;
    sc_signal< sc_lv<9> > ap_phi_mux_block_0_0_phi_fu_410_p4;
    sc_signal< sc_lv<5> > ap_phi_mux_c_0_0_phi_fu_421_p4;
    sc_signal< sc_lv<64> > zext_ln356_64_fu_531_p1;
    sc_signal< sc_lv<64> > zext_ln356_65_fu_541_p1;
    sc_signal< sc_lv<64> > zext_ln356_66_fu_551_p1;
    sc_signal< sc_lv<64> > zext_ln356_67_fu_561_p1;
    sc_signal< sc_lv<64> > zext_ln356_68_fu_571_p1;
    sc_signal< sc_lv<64> > zext_ln356_69_fu_581_p1;
    sc_signal< sc_lv<64> > zext_ln356_70_fu_591_p1;
    sc_signal< sc_lv<64> > zext_ln356_71_fu_601_p1;
    sc_signal< sc_lv<64> > zext_ln356_72_fu_611_p1;
    sc_signal< sc_lv<64> > zext_ln356_73_fu_621_p1;
    sc_signal< sc_lv<64> > zext_ln356_74_fu_631_p1;
    sc_signal< sc_lv<64> > zext_ln356_75_fu_641_p1;
    sc_signal< sc_lv<64> > zext_ln356_76_fu_651_p1;
    sc_signal< sc_lv<64> > zext_ln356_77_fu_661_p1;
    sc_signal< sc_lv<64> > zext_ln356_78_fu_671_p1;
    sc_signal< sc_lv<64> > zext_ln356_79_fu_686_p1;
    sc_signal< sc_lv<64> > zext_ln356_83_fu_783_p1;
    sc_signal< sc_lv<64> > zext_ln356_84_fu_794_p1;
    sc_signal< sc_lv<64> > zext_ln356_85_fu_811_p1;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<64> > zext_ln251_fu_821_p1;
    sc_signal< sc_lv<64> > zext_ln356_86_fu_826_p1;
    sc_signal< bool > ap_block_pp1_stage2;
    sc_signal< sc_lv<64> > zext_ln251_3_fu_836_p1;
    sc_signal< sc_lv<64> > zext_ln251_4_fu_847_p1;
    sc_signal< bool > ap_block_pp1_stage3;
    sc_signal< bool > ap_block_state5_pp0_stage2_iter0;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< bool > ap_block_state6_pp0_stage3_iter0;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< bool > ap_block_state7_pp0_stage4_iter0;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< bool > ap_block_state8_pp0_stage5_iter0;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< bool > ap_block_state9_pp0_stage6_iter0;
    sc_signal< bool > ap_block_pp0_stage6_11001;
    sc_signal< bool > ap_block_state10_pp0_stage7_iter0;
    sc_signal< bool > ap_block_pp0_stage7_11001;
    sc_signal< bool > ap_block_state11_pp0_stage8_iter0;
    sc_signal< bool > ap_block_pp0_stage8_11001;
    sc_signal< bool > ap_block_state12_pp0_stage9_iter0;
    sc_signal< bool > ap_block_pp0_stage9_11001;
    sc_signal< bool > ap_block_state13_pp0_stage10_iter0;
    sc_signal< bool > ap_block_pp0_stage10_11001;
    sc_signal< bool > ap_block_state14_pp0_stage11_iter0;
    sc_signal< bool > ap_block_pp0_stage11_11001;
    sc_signal< bool > ap_block_state15_pp0_stage12_iter0;
    sc_signal< bool > ap_block_pp0_stage12_11001;
    sc_signal< bool > ap_block_state16_pp0_stage13_iter0;
    sc_signal< bool > ap_block_pp0_stage13_11001;
    sc_signal< bool > ap_block_state17_pp0_stage14_iter0;
    sc_signal< bool > ap_block_pp0_stage14_11001;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<1> > icmp_ln203_fu_464_p2;
    sc_signal< sc_lv<2> > add_ln202_fu_458_p2;
    sc_signal< sc_lv<10> > tmp_23_fu_486_p3;
    sc_signal< sc_lv<8> > tmp_24_fu_497_p3;
    sc_signal< sc_lv<11> > zext_ln356_62_fu_504_p1;
    sc_signal< sc_lv<11> > zext_ln356_fu_493_p1;
    sc_signal< sc_lv<11> > add_ln356_fu_508_p2;
    sc_signal< sc_lv<11> > zext_ln356_63_fu_514_p1;
    sc_signal< sc_lv<11> > add_ln356_20_fu_517_p2;
    sc_signal< sc_lv<15> > or_ln356_fu_536_p2;
    sc_signal< sc_lv<15> > or_ln356_31_fu_546_p2;
    sc_signal< sc_lv<15> > or_ln356_32_fu_556_p2;
    sc_signal< sc_lv<15> > or_ln356_33_fu_566_p2;
    sc_signal< sc_lv<15> > or_ln356_34_fu_576_p2;
    sc_signal< sc_lv<15> > or_ln356_35_fu_586_p2;
    sc_signal< sc_lv<15> > or_ln356_36_fu_596_p2;
    sc_signal< sc_lv<15> > or_ln356_37_fu_606_p2;
    sc_signal< sc_lv<15> > or_ln356_38_fu_616_p2;
    sc_signal< sc_lv<15> > or_ln356_39_fu_626_p2;
    sc_signal< sc_lv<15> > or_ln356_40_fu_636_p2;
    sc_signal< sc_lv<15> > or_ln356_41_fu_646_p2;
    sc_signal< sc_lv<15> > or_ln356_42_fu_656_p2;
    sc_signal< sc_lv<15> > or_ln356_43_fu_666_p2;
    sc_signal< sc_lv<15> > or_ln356_44_fu_681_p2;
    sc_signal< sc_lv<1> > icmp_ln212_fu_709_p2;
    sc_signal< sc_lv<9> > add_ln211_fu_703_p2;
    sc_signal< sc_lv<13> > tmp_25_fu_731_p3;
    sc_signal< sc_lv<14> > zext_ln356_80_fu_739_p1;
    sc_signal< sc_lv<9> > or_ln217_fu_749_p2;
    sc_signal< sc_lv<13> > tmp_26_fu_755_p3;
    sc_signal< sc_lv<14> > zext_ln356_81_fu_763_p1;
    sc_signal< sc_lv<14> > zext_ln356_82_fu_773_p1;
    sc_signal< sc_lv<14> > add_ln356_21_fu_743_p2;
    sc_signal< sc_lv<14> > add_ln356_22_fu_767_p2;
    sc_signal< sc_lv<1> > grp_fu_428_p2;
    sc_signal< sc_lv<14> > select_ln251_4_fu_841_p3;
    sc_signal< sc_lv<24> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage8_subdone;
    sc_signal< bool > ap_block_pp0_stage9_subdone;
    sc_signal< bool > ap_block_pp0_stage10_subdone;
    sc_signal< bool > ap_block_pp0_stage11_subdone;
    sc_signal< bool > ap_block_pp0_stage12_subdone;
    sc_signal< bool > ap_block_pp0_stage13_subdone;
    sc_signal< bool > ap_block_pp0_stage14_subdone;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< bool > ap_block_pp1_stage2_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<24> ap_ST_fsm_state1;
    static const sc_lv<24> ap_ST_fsm_state2;
    static const sc_lv<24> ap_ST_fsm_pp0_stage0;
    static const sc_lv<24> ap_ST_fsm_pp0_stage1;
    static const sc_lv<24> ap_ST_fsm_pp0_stage2;
    static const sc_lv<24> ap_ST_fsm_pp0_stage3;
    static const sc_lv<24> ap_ST_fsm_pp0_stage4;
    static const sc_lv<24> ap_ST_fsm_pp0_stage5;
    static const sc_lv<24> ap_ST_fsm_pp0_stage6;
    static const sc_lv<24> ap_ST_fsm_pp0_stage7;
    static const sc_lv<24> ap_ST_fsm_pp0_stage8;
    static const sc_lv<24> ap_ST_fsm_pp0_stage9;
    static const sc_lv<24> ap_ST_fsm_pp0_stage10;
    static const sc_lv<24> ap_ST_fsm_pp0_stage11;
    static const sc_lv<24> ap_ST_fsm_pp0_stage12;
    static const sc_lv<24> ap_ST_fsm_pp0_stage13;
    static const sc_lv<24> ap_ST_fsm_pp0_stage14;
    static const sc_lv<24> ap_ST_fsm_pp0_stage15;
    static const sc_lv<24> ap_ST_fsm_state20;
    static const sc_lv<24> ap_ST_fsm_pp1_stage0;
    static const sc_lv<24> ap_ST_fsm_pp1_stage1;
    static const sc_lv<24> ap_ST_fsm_pp1_stage2;
    static const sc_lv<24> ap_ST_fsm_pp1_stage3;
    static const sc_lv<24> ap_ST_fsm_state26;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<7> ap_const_lv7_50;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<10> ap_const_lv10_280;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<9> ap_const_lv9_140;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<15> ap_const_lv15_2;
    static const sc_lv<15> ap_const_lv15_3;
    static const sc_lv<15> ap_const_lv15_4;
    static const sc_lv<15> ap_const_lv15_5;
    static const sc_lv<15> ap_const_lv15_6;
    static const sc_lv<15> ap_const_lv15_7;
    static const sc_lv<15> ap_const_lv15_8;
    static const sc_lv<15> ap_const_lv15_9;
    static const sc_lv<15> ap_const_lv15_A;
    static const sc_lv<15> ap_const_lv15_B;
    static const sc_lv<15> ap_const_lv15_C;
    static const sc_lv<15> ap_const_lv15_D;
    static const sc_lv<15> ap_const_lv15_E;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<15> ap_const_lv15_F;
    static const sc_lv<12> ap_const_lv12_A00;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<9> ap_const_lv9_2;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<14> ap_const_lv14_1400;
    static const sc_lv<5> ap_const_lv5_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln200_fu_440_p2();
    void thread_add_ln202_1_fu_452_p2();
    void thread_add_ln202_fu_458_p2();
    void thread_add_ln203_fu_676_p2();
    void thread_add_ln211_1_fu_697_p2();
    void thread_add_ln211_fu_703_p2();
    void thread_add_ln212_fu_852_p2();
    void thread_add_ln356_20_fu_517_p2();
    void thread_add_ln356_21_fu_743_p2();
    void thread_add_ln356_22_fu_767_p2();
    void thread_add_ln356_23_fu_777_p2();
    void thread_add_ln356_24_fu_788_p2();
    void thread_add_ln356_25_fu_799_p2();
    void thread_add_ln356_26_fu_805_p2();
    void thread_add_ln356_fu_508_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage10();
    void thread_ap_CS_fsm_pp0_stage11();
    void thread_ap_CS_fsm_pp0_stage12();
    void thread_ap_CS_fsm_pp0_stage13();
    void thread_ap_CS_fsm_pp0_stage14();
    void thread_ap_CS_fsm_pp0_stage15();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_pp0_stage9();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_pp1_stage2();
    void thread_ap_CS_fsm_pp1_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state26();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage10();
    void thread_ap_block_pp0_stage10_11001();
    void thread_ap_block_pp0_stage10_subdone();
    void thread_ap_block_pp0_stage11();
    void thread_ap_block_pp0_stage11_11001();
    void thread_ap_block_pp0_stage11_subdone();
    void thread_ap_block_pp0_stage12();
    void thread_ap_block_pp0_stage12_11001();
    void thread_ap_block_pp0_stage12_subdone();
    void thread_ap_block_pp0_stage13();
    void thread_ap_block_pp0_stage13_11001();
    void thread_ap_block_pp0_stage13_subdone();
    void thread_ap_block_pp0_stage14();
    void thread_ap_block_pp0_stage14_11001();
    void thread_ap_block_pp0_stage14_subdone();
    void thread_ap_block_pp0_stage15();
    void thread_ap_block_pp0_stage15_11001();
    void thread_ap_block_pp0_stage15_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6();
    void thread_ap_block_pp0_stage6_11001();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7();
    void thread_ap_block_pp0_stage7_11001();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_pp0_stage8();
    void thread_ap_block_pp0_stage8_11001();
    void thread_ap_block_pp0_stage8_subdone();
    void thread_ap_block_pp0_stage9();
    void thread_ap_block_pp0_stage9_11001();
    void thread_ap_block_pp0_stage9_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_pp1_stage2();
    void thread_ap_block_pp1_stage2_11001();
    void thread_ap_block_pp1_stage2_subdone();
    void thread_ap_block_pp1_stage3();
    void thread_ap_block_pp1_stage3_11001();
    void thread_ap_block_pp1_stage3_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp0_stage7_iter0();
    void thread_ap_block_state11_pp0_stage8_iter0();
    void thread_ap_block_state12_pp0_stage9_iter0();
    void thread_ap_block_state13_pp0_stage10_iter0();
    void thread_ap_block_state14_pp0_stage11_iter0();
    void thread_ap_block_state15_pp0_stage12_iter0();
    void thread_ap_block_state16_pp0_stage13_iter0();
    void thread_ap_block_state17_pp0_stage14_iter0();
    void thread_ap_block_state18_pp0_stage15_iter0();
    void thread_ap_block_state19_pp0_stage0_iter1();
    void thread_ap_block_state21_pp1_stage0_iter0();
    void thread_ap_block_state22_pp1_stage1_iter0();
    void thread_ap_block_state23_pp1_stage2_iter0();
    void thread_ap_block_state24_pp1_stage3_iter0();
    void thread_ap_block_state25_pp1_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage1_iter0();
    void thread_ap_block_state5_pp0_stage2_iter0();
    void thread_ap_block_state6_pp0_stage3_iter0();
    void thread_ap_block_state7_pp0_stage4_iter0();
    void thread_ap_block_state8_pp0_stage5_iter0();
    void thread_ap_block_state9_pp0_stage6_iter0();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_condition_pp1_exit_iter0_state21();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_block_0_0_phi_fu_410_p4();
    void thread_ap_phi_mux_c_0_0_phi_fu_421_p4();
    void thread_ap_phi_mux_indvar_flatten7_phi_fu_399_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_366_p4();
    void thread_ap_phi_mux_line_col_0_0_phi_fu_388_p4();
    void thread_ap_phi_mux_line_row_0_0_phi_fu_377_p4();
    void thread_ap_ready();
    void thread_grp_fu_428_p2();
    void thread_icmp_ln200_fu_434_p2();
    void thread_icmp_ln202_fu_446_p2();
    void thread_icmp_ln203_fu_464_p2();
    void thread_icmp_ln211_fu_691_p2();
    void thread_icmp_ln212_fu_709_p2();
    void thread_internal_ap_ready();
    void thread_or_ln217_fu_749_p2();
    void thread_or_ln356_31_fu_546_p2();
    void thread_or_ln356_32_fu_556_p2();
    void thread_or_ln356_33_fu_566_p2();
    void thread_or_ln356_34_fu_576_p2();
    void thread_or_ln356_35_fu_586_p2();
    void thread_or_ln356_36_fu_596_p2();
    void thread_or_ln356_37_fu_606_p2();
    void thread_or_ln356_38_fu_616_p2();
    void thread_or_ln356_39_fu_626_p2();
    void thread_or_ln356_40_fu_636_p2();
    void thread_or_ln356_41_fu_646_p2();
    void thread_or_ln356_42_fu_656_p2();
    void thread_or_ln356_43_fu_666_p2();
    void thread_or_ln356_44_fu_681_p2();
    void thread_or_ln356_fu_536_p2();
    void thread_pool1_line_buffer_V_address0();
    void thread_pool1_line_buffer_V_address1();
    void thread_pool1_line_buffer_V_ce0();
    void thread_pool1_line_buffer_V_ce1();
    void thread_pool1_line_buffer_V_we0();
    void thread_pool1_pipe_2_V_V_blk_n();
    void thread_pool1_pipe_2_V_V_din();
    void thread_pool1_pipe_2_V_V_write();
    void thread_real_start();
    void thread_relu1_pipe_2_V_V_blk_n();
    void thread_relu1_pipe_2_V_V_read();
    void thread_select_ln206_1_fu_478_p3();
    void thread_select_ln206_fu_470_p3();
    void thread_select_ln217_1_fu_723_p3();
    void thread_select_ln217_fu_715_p3();
    void thread_select_ln251_3_fu_830_p3();
    void thread_select_ln251_4_fu_841_p3();
    void thread_select_ln251_fu_815_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_13_fu_523_p3();
    void thread_tmp_23_fu_486_p3();
    void thread_tmp_24_fu_497_p3();
    void thread_tmp_25_fu_731_p3();
    void thread_tmp_26_fu_755_p3();
    void thread_zext_ln251_3_fu_836_p1();
    void thread_zext_ln251_4_fu_847_p1();
    void thread_zext_ln251_fu_821_p1();
    void thread_zext_ln356_62_fu_504_p1();
    void thread_zext_ln356_63_fu_514_p1();
    void thread_zext_ln356_64_fu_531_p1();
    void thread_zext_ln356_65_fu_541_p1();
    void thread_zext_ln356_66_fu_551_p1();
    void thread_zext_ln356_67_fu_561_p1();
    void thread_zext_ln356_68_fu_571_p1();
    void thread_zext_ln356_69_fu_581_p1();
    void thread_zext_ln356_70_fu_591_p1();
    void thread_zext_ln356_71_fu_601_p1();
    void thread_zext_ln356_72_fu_611_p1();
    void thread_zext_ln356_73_fu_621_p1();
    void thread_zext_ln356_74_fu_631_p1();
    void thread_zext_ln356_75_fu_641_p1();
    void thread_zext_ln356_76_fu_651_p1();
    void thread_zext_ln356_77_fu_661_p1();
    void thread_zext_ln356_78_fu_671_p1();
    void thread_zext_ln356_79_fu_686_p1();
    void thread_zext_ln356_80_fu_739_p1();
    void thread_zext_ln356_81_fu_763_p1();
    void thread_zext_ln356_82_fu_773_p1();
    void thread_zext_ln356_83_fu_783_p1();
    void thread_zext_ln356_84_fu_794_p1();
    void thread_zext_ln356_85_fu_811_p1();
    void thread_zext_ln356_86_fu_826_p1();
    void thread_zext_ln356_fu_493_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
