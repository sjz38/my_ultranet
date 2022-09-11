#include "test.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void test::thread_weight_conv8_9_0_2_V_address0() {
    weight_conv8_9_0_2_V_address0 = grp_convolution_fu_8680_weight_conv_9_0_2_V_address0.read();
}

void test::thread_weight_conv8_9_0_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_0_2_V_ce0 = grp_convolution_fu_8680_weight_conv_9_0_2_V_ce0.read();
    } else {
        weight_conv8_9_0_2_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_weight_conv8_9_1_0_V_address0() {
    weight_conv8_9_1_0_V_address0 = grp_convolution_fu_8680_weight_conv_9_1_0_V_address0.read();
}

void test::thread_weight_conv8_9_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_1_0_V_ce0 = grp_convolution_fu_8680_weight_conv_9_1_0_V_ce0.read();
    } else {
        weight_conv8_9_1_0_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_weight_conv8_9_1_1_V_address0() {
    weight_conv8_9_1_1_V_address0 = grp_convolution_fu_8680_weight_conv_9_1_1_V_address0.read();
}

void test::thread_weight_conv8_9_1_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_1_1_V_ce0 = grp_convolution_fu_8680_weight_conv_9_1_1_V_ce0.read();
    } else {
        weight_conv8_9_1_1_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_weight_conv8_9_1_2_V_address0() {
    weight_conv8_9_1_2_V_address0 = grp_convolution_fu_8680_weight_conv_9_1_2_V_address0.read();
}

void test::thread_weight_conv8_9_1_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_1_2_V_ce0 = grp_convolution_fu_8680_weight_conv_9_1_2_V_ce0.read();
    } else {
        weight_conv8_9_1_2_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_weight_conv8_9_2_0_V_address0() {
    weight_conv8_9_2_0_V_address0 = grp_convolution_fu_8680_weight_conv_9_2_0_V_address0.read();
}

void test::thread_weight_conv8_9_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_2_0_V_ce0 = grp_convolution_fu_8680_weight_conv_9_2_0_V_ce0.read();
    } else {
        weight_conv8_9_2_0_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_weight_conv8_9_2_1_V_address0() {
    weight_conv8_9_2_1_V_address0 = grp_convolution_fu_8680_weight_conv_9_2_1_V_address0.read();
}

void test::thread_weight_conv8_9_2_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_2_1_V_ce0 = grp_convolution_fu_8680_weight_conv_9_2_1_V_ce0.read();
    } else {
        weight_conv8_9_2_1_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_weight_conv8_9_2_2_V_address0() {
    weight_conv8_9_2_2_V_address0 = grp_convolution_fu_8680_weight_conv_9_2_2_V_address0.read();
}

void test::thread_weight_conv8_9_2_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        weight_conv8_9_2_2_V_ce0 = grp_convolution_fu_8680_weight_conv_9_2_2_V_ce0.read();
    } else {
        weight_conv8_9_2_2_V_ce0 = ap_const_logic_0;
    }
}

void test::thread_xor_ln373_fu_18564_p2() {
    xor_ln373_fu_18564_p2 = (icmp_ln368_fu_18542_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln385_fu_18887_p2() {
    xor_ln385_fu_18887_p2 = (icmp_ln382_fu_18865_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln402_fu_19129_p2() {
    xor_ln402_fu_19129_p2 = (icmp_ln393_fu_19061_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln416_fu_19532_p2() {
    xor_ln416_fu_19532_p2 = (icmp_ln413_fu_19506_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln479_fu_20116_p2() {
    xor_ln479_fu_20116_p2 = (icmp_ln474_fu_20064_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln491_fu_20453_p2() {
    xor_ln491_fu_20453_p2 = (icmp_ln488_fu_20431_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln508_fu_20695_p2() {
    xor_ln508_fu_20695_p2 = (icmp_ln499_fu_20627_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln522_fu_21162_p2() {
    xor_ln522_fu_21162_p2 = (icmp_ln519_fu_21122_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln585_fu_21700_p2() {
    xor_ln585_fu_21700_p2 = (icmp_ln580_fu_21648_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln597_fu_22109_p2() {
    xor_ln597_fu_22109_p2 = (icmp_ln594_fu_22069_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln660_fu_22647_p2() {
    xor_ln660_fu_22647_p2 = (icmp_ln655_fu_22595_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln672_fu_23056_p2() {
    xor_ln672_fu_23056_p2 = (icmp_ln669_fu_23016_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln735_fu_23594_p2() {
    xor_ln735_fu_23594_p2 = (icmp_ln730_fu_23542_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln747_fu_24003_p2() {
    xor_ln747_fu_24003_p2 = (icmp_ln744_fu_23963_p2.read() ^ ap_const_lv1_1);
}

void test::thread_xor_ln810_fu_24541_p2() {
    xor_ln810_fu_24541_p2 = (icmp_ln804_fu_24489_p2.read() ^ ap_const_lv1_1);
}

void test::thread_zext_ln1192_1_fu_20354_p1() {
    zext_ln1192_1_fu_20354_p1 = esl_zext<31,30>(mul_ln703_1_reg_25595.read());
}

void test::thread_zext_ln1192_2_fu_21938_p1() {
    zext_ln1192_2_fu_21938_p1 = esl_zext<31,30>(mul_ln703_2_reg_26046.read());
}

void test::thread_zext_ln1192_3_fu_22885_p1() {
    zext_ln1192_3_fu_22885_p1 = esl_zext<31,30>(mul_ln703_3_reg_26290.read());
}

void test::thread_zext_ln1192_4_fu_23832_p1() {
    zext_ln1192_4_fu_23832_p1 = esl_zext<31,30>(mul_ln703_4_reg_26534.read());
}

void test::thread_zext_ln1192_5_fu_24772_p1() {
    zext_ln1192_5_fu_24772_p1 = esl_zext<31,26>(b_batchnorm8_V_q0.read());
}

void test::thread_zext_ln1192_fu_18788_p1() {
    zext_ln1192_fu_18788_p1 = esl_zext<31,30>(mul_ln703_reg_25143.read());
}

void test::thread_zext_ln1265_10_fu_21885_p1() {
    zext_ln1265_10_fu_21885_p1 = esl_zext<15,5>(select_ln585_3_reg_25983.read());
}

void test::thread_zext_ln1265_11_fu_22625_p1() {
    zext_ln1265_11_fu_22625_p1 = esl_zext<64,14>(tmp_109_fu_22617_p3.read());
}

void test::thread_zext_ln1265_12_fu_22637_p1() {
    zext_ln1265_12_fu_22637_p1 = esl_zext<64,12>(tmp_110_fu_22629_p3.read());
}

void test::thread_zext_ln1265_13_fu_22832_p1() {
    zext_ln1265_13_fu_22832_p1 = esl_zext<15,5>(select_ln660_3_reg_26227.read());
}

void test::thread_zext_ln1265_14_fu_23572_p1() {
    zext_ln1265_14_fu_23572_p1 = esl_zext<64,14>(tmp_128_fu_23564_p3.read());
}

void test::thread_zext_ln1265_15_fu_23584_p1() {
    zext_ln1265_15_fu_23584_p1 = esl_zext<64,12>(tmp_129_fu_23576_p3.read());
}

void test::thread_zext_ln1265_16_fu_23779_p1() {
    zext_ln1265_16_fu_23779_p1 = esl_zext<15,5>(select_ln735_3_reg_26471.read());
}

void test::thread_zext_ln1265_17_fu_24519_p1() {
    zext_ln1265_17_fu_24519_p1 = esl_zext<15,14>(tmp_149_fu_24511_p3.read());
}

void test::thread_zext_ln1265_18_fu_24531_p1() {
    zext_ln1265_18_fu_24531_p1 = esl_zext<15,12>(tmp_150_fu_24523_p3.read());
}

void test::thread_zext_ln1265_19_fu_24697_p1() {
    zext_ln1265_19_fu_24697_p1 = esl_zext<64,23>(tmp_153_fu_24688_p4.read());
}

void test::thread_zext_ln1265_1_fu_18648_p1() {
    zext_ln1265_1_fu_18648_p1 = esl_zext<64,12>(tmp_3_fu_18641_p3.read());
}

void test::thread_zext_ln1265_20_fu_24710_p1() {
    zext_ln1265_20_fu_24710_p1 = esl_zext<64,21>(tmp_154_fu_24701_p4.read());
}

void test::thread_zext_ln1265_2_fu_18750_p1() {
    zext_ln1265_2_fu_18750_p1 = esl_zext<19,7>(select_ln373_3_reg_25091.read());
}

void test::thread_zext_ln1265_3_fu_18753_p1() {
    zext_ln1265_3_fu_18753_p1 = esl_zext<23,7>(select_ln373_3_reg_25091.read());
}

void test::thread_zext_ln1265_4_fu_18768_p1() {
    zext_ln1265_4_fu_18768_p1 = esl_zext<64,23>(add_ln1265_3_reg_25113.read());
}

void test::thread_zext_ln1265_5_fu_20094_p1() {
    zext_ln1265_5_fu_20094_p1 = esl_zext<64,14>(tmp_47_fu_20086_p3.read());
}

void test::thread_zext_ln1265_6_fu_20106_p1() {
    zext_ln1265_6_fu_20106_p1 = esl_zext<64,12>(tmp_48_fu_20098_p3.read());
}

void test::thread_zext_ln1265_7_fu_20301_p1() {
    zext_ln1265_7_fu_20301_p1 = esl_zext<17,6>(select_ln479_3_reg_25532.read());
}

void test::thread_zext_ln1265_8_fu_21678_p1() {
    zext_ln1265_8_fu_21678_p1 = esl_zext<64,14>(tmp_90_fu_21670_p3.read());
}

void test::thread_zext_ln1265_9_fu_21690_p1() {
    zext_ln1265_9_fu_21690_p1 = esl_zext<64,12>(tmp_91_fu_21682_p3.read());
}

void test::thread_zext_ln1265_fu_18637_p1() {
    zext_ln1265_fu_18637_p1 = esl_zext<64,14>(tmp_2_fu_18630_p3.read());
}

void test::thread_zext_ln203_1_fu_24639_p1() {
    zext_ln203_1_fu_24639_p1 = esl_zext<11,8>(tmp_148_fu_24632_p3.read());
}

void test::thread_zext_ln203_2_fu_24674_p1() {
    zext_ln203_2_fu_24674_p1 = esl_zext<15,13>(tmp_151_fu_24666_p3.read());
}

void test::thread_zext_ln203_3_fu_24720_p1() {
    zext_ln203_3_fu_24720_p1 = esl_zext<15,5>(select_ln810_2_reg_26715.read());
}

void test::thread_zext_ln203_4_fu_24798_p1() {
    zext_ln203_4_fu_24798_p1 = esl_zext<64,15>(add_ln203_3_reg_26749_pp16_iter6_reg.read());
}

void test::thread_zext_ln203_fu_24628_p1() {
    zext_ln203_fu_24628_p1 = esl_zext<11,10>(tmp_147_fu_24621_p3.read());
}

void test::thread_zext_ln251_1_fu_20923_p1() {
    zext_ln251_1_fu_20923_p1 = esl_zext<64,6>(select_ln251_3_fu_20917_p3.read());
}

void test::thread_zext_ln251_fu_19357_p1() {
    zext_ln251_fu_19357_p1 = esl_zext<64,7>(select_ln251_fu_19351_p3.read());
}

void test::thread_zext_ln356_10_fu_19471_p1() {
    zext_ln356_10_fu_19471_p1 = esl_zext<17,6>(select_ln393_reg_25247_pp4_iter1_reg.read());
}

void test::thread_zext_ln356_11_fu_19480_p1() {
    zext_ln356_11_fu_19480_p1 = esl_zext<64,17>(add_ln356_11_reg_25361.read());
}

void test::thread_zext_ln356_12_fu_19988_p1() {
    zext_ln356_12_fu_19988_p1 = esl_zext<15,7>(select_ln416_1_reg_25388_pp5_iter23_reg.read());
}

void test::thread_zext_ln356_13_fu_20036_p1() {
    zext_ln356_13_fu_20036_p1 = esl_zext<23,15>(add_ln356_12_reg_25505.read());
}

void test::thread_zext_ln356_14_fu_20039_p1() {
    zext_ln356_14_fu_20039_p1 = esl_zext<23,6>(select_ln413_reg_25420_pp5_iter24_reg.read());
}

void test::thread_zext_ln356_15_fu_20213_p1() {
    zext_ln356_15_fu_20213_p1 = esl_zext<64,11>(tmp_51_fu_20206_p3.read());
}

void test::thread_zext_ln356_16_fu_20224_p1() {
    zext_ln356_16_fu_20224_p1 = esl_zext<64,9>(tmp_52_fu_20217_p3.read());
}

void test::thread_zext_ln356_17_fu_20379_p1() {
    zext_ln356_17_fu_20379_p1 = esl_zext<64,17>(add_ln356_17_reg_25575_pp6_iter6_reg.read());
}

void test::thread_zext_ln356_18_fu_20526_p1() {
    zext_ln356_18_fu_20526_p1 = esl_zext<12,11>(tmp_66_fu_20519_p3.read());
}

void test::thread_zext_ln356_19_fu_20537_p1() {
    zext_ln356_19_fu_20537_p1 = esl_zext<12,9>(tmp_67_fu_20530_p3.read());
}

void test::thread_zext_ln356_1_fu_18813_p1() {
    zext_ln356_1_fu_18813_p1 = esl_zext<64,19>(add_ln356_3_reg_25118_pp2_iter7_reg.read());
}

void test::thread_zext_ln356_20_fu_20572_p1() {
    zext_ln356_20_fu_20572_p1 = esl_zext<17,15>(tmp_69_fu_20564_p3.read());
}

void test::thread_zext_ln356_21_fu_20582_p1() {
    zext_ln356_21_fu_20582_p1 = esl_zext<17,6>(select_ln491_2_reg_25627.read());
}

void test::thread_zext_ln356_22_fu_20591_p1() {
    zext_ln356_22_fu_20591_p1 = esl_zext<64,17>(add_ln356_21_reg_25648.read());
}

void test::thread_zext_ln356_23_fu_20968_p1() {
    zext_ln356_23_fu_20968_p1 = esl_zext<11,10>(tmp_74_fu_20961_p3.read());
}

void test::thread_zext_ln356_24_fu_20979_p1() {
    zext_ln356_24_fu_20979_p1 = esl_zext<11,8>(tmp_75_fu_20972_p3.read());
}

void test::thread_zext_ln356_25_fu_21014_p1() {
    zext_ln356_25_fu_21014_p1 = esl_zext<15,13>(tmp_76_fu_21006_p3.read());
}

void test::thread_zext_ln356_26_fu_21037_p1() {
    zext_ln356_26_fu_21037_p1 = esl_zext<15,5>(select_ln499_reg_25699_pp8_iter1_reg.read());
}

void test::thread_zext_ln356_27_fu_21046_p1() {
    zext_ln356_27_fu_21046_p1 = esl_zext<64,15>(add_ln356_25_reg_25813.read());
}

void test::thread_zext_ln356_28_fu_21572_p1() {
    zext_ln356_28_fu_21572_p1 = esl_zext<15,7>(select_ln522_1_reg_25842_pp9_iter21_reg.read());
}

void test::thread_zext_ln356_29_fu_21620_p1() {
    zext_ln356_29_fu_21620_p1 = esl_zext<23,15>(add_ln356_26_reg_25956.read());
}

void test::thread_zext_ln356_2_fu_18960_p1() {
    zext_ln356_2_fu_18960_p1 = esl_zext<13,12>(tmp_12_fu_18953_p3.read());
}

void test::thread_zext_ln356_30_fu_21623_p1() {
    zext_ln356_30_fu_21623_p1 = esl_zext<23,5>(select_ln519_reg_25866_pp9_iter22_reg.read());
}

void test::thread_zext_ln356_31_fu_21797_p1() {
    zext_ln356_31_fu_21797_p1 = esl_zext<64,10>(tmp_92_fu_21790_p3.read());
}

void test::thread_zext_ln356_32_fu_21808_p1() {
    zext_ln356_32_fu_21808_p1 = esl_zext<64,8>(tmp_93_fu_21801_p3.read());
}

void test::thread_zext_ln356_33_fu_21963_p1() {
    zext_ln356_33_fu_21963_p1 = esl_zext<64,15>(add_ln356_31_reg_26026_pp10_iter6_reg.read());
}

void test::thread_zext_ln356_34_fu_22519_p1() {
    zext_ln356_34_fu_22519_p1 = esl_zext<15,7>(select_ln597_1_reg_26086_pp11_iter21_reg.read());
}

void test::thread_zext_ln356_35_fu_22567_p1() {
    zext_ln356_35_fu_22567_p1 = esl_zext<23,15>(add_ln356_32_reg_26200.read());
}

void test::thread_zext_ln356_36_fu_22570_p1() {
    zext_ln356_36_fu_22570_p1 = esl_zext<23,5>(select_ln594_reg_26110_pp11_iter22_reg.read());
}

void test::thread_zext_ln356_37_fu_22744_p1() {
    zext_ln356_37_fu_22744_p1 = esl_zext<64,10>(tmp_111_fu_22737_p3.read());
}

void test::thread_zext_ln356_38_fu_22755_p1() {
    zext_ln356_38_fu_22755_p1 = esl_zext<64,8>(tmp_112_fu_22748_p3.read());
}

void test::thread_zext_ln356_39_fu_22910_p1() {
    zext_ln356_39_fu_22910_p1 = esl_zext<64,15>(add_ln356_37_reg_26270_pp12_iter6_reg.read());
}

void test::thread_zext_ln356_3_fu_18971_p1() {
    zext_ln356_3_fu_18971_p1 = esl_zext<13,10>(tmp_13_fu_18964_p3.read());
}

void test::thread_zext_ln356_40_fu_23466_p1() {
    zext_ln356_40_fu_23466_p1 = esl_zext<15,7>(select_ln672_1_reg_26330_pp13_iter21_reg.read());
}

void test::thread_zext_ln356_41_fu_23514_p1() {
    zext_ln356_41_fu_23514_p1 = esl_zext<23,15>(add_ln356_38_reg_26444.read());
}

void test::thread_zext_ln356_42_fu_23517_p1() {
    zext_ln356_42_fu_23517_p1 = esl_zext<23,5>(select_ln669_reg_26354_pp13_iter22_reg.read());
}

void test::thread_zext_ln356_43_fu_23691_p1() {
    zext_ln356_43_fu_23691_p1 = esl_zext<64,10>(tmp_130_fu_23684_p3.read());
}

void test::thread_zext_ln356_44_fu_23702_p1() {
    zext_ln356_44_fu_23702_p1 = esl_zext<64,8>(tmp_131_fu_23695_p3.read());
}

void test::thread_zext_ln356_45_fu_23857_p1() {
    zext_ln356_45_fu_23857_p1 = esl_zext<64,15>(add_ln356_43_reg_26514_pp14_iter6_reg.read());
}

void test::thread_zext_ln356_46_fu_24413_p1() {
    zext_ln356_46_fu_24413_p1 = esl_zext<15,7>(select_ln747_1_reg_26574_pp15_iter21_reg.read());
}

void test::thread_zext_ln356_47_fu_24461_p1() {
    zext_ln356_47_fu_24461_p1 = esl_zext<23,15>(add_ln356_44_reg_26688.read());
}

void test::thread_zext_ln356_48_fu_24464_p1() {
    zext_ln356_48_fu_24464_p1 = esl_zext<23,5>(select_ln744_reg_26598_pp15_iter22_reg.read());
}

void test::thread_zext_ln356_4_fu_19006_p1() {
    zext_ln356_4_fu_19006_p1 = esl_zext<19,17>(tmp_14_fu_18998_p3.read());
}

void test::thread_zext_ln356_5_fu_19016_p1() {
    zext_ln356_5_fu_19016_p1 = esl_zext<19,7>(select_ln385_2_reg_25175.read());
}

void test::thread_zext_ln356_6_fu_19025_p1() {
    zext_ln356_6_fu_19025_p1 = esl_zext<64,19>(add_ln356_7_reg_25196.read());
}

void test::thread_zext_ln356_7_fu_19402_p1() {
    zext_ln356_7_fu_19402_p1 = esl_zext<12,11>(tmp_19_fu_19395_p3.read());
}

void test::thread_zext_ln356_8_fu_19413_p1() {
    zext_ln356_8_fu_19413_p1 = esl_zext<12,9>(tmp_20_fu_19406_p3.read());
}

void test::thread_zext_ln356_9_fu_19448_p1() {
    zext_ln356_9_fu_19448_p1 = esl_zext<17,15>(tmp_21_fu_19440_p3.read());
}

void test::thread_zext_ln356_fu_18665_p1() {
    zext_ln356_fu_18665_p1 = esl_zext<64,10>(tmp_6_fu_18658_p3.read());
}

void test::thread_zext_ln373_1_fu_18784_p1() {
    zext_ln373_1_fu_18784_p1 = esl_zext<31,26>(b_batchnorm3_V_q0.read());
}

void test::thread_zext_ln373_2_fu_18675_p1() {
    zext_ln373_2_fu_18675_p1 = esl_zext<64,6>(select_ln373_4_reg_25097.read());
}

void test::thread_zext_ln373_fu_18772_p1() {
    zext_ln373_fu_18772_p1 = esl_zext<64,7>(select_ln373_2_reg_25082_pp2_iter4_reg.read());
}

void test::thread_zext_ln385_fu_18981_p1() {
    zext_ln385_fu_18981_p1 = esl_zext<13,6>(select_ln385_3_reg_25180.read());
}

void test::thread_zext_ln393_1_fu_19183_p1() {
    zext_ln393_1_fu_19183_p1 = esl_zext<13,6>(select_ln393_2_fu_19175_p3.read());
}

void test::thread_zext_ln393_2_fu_19207_p1() {
    zext_ln393_2_fu_19207_p1 = esl_zext<13,6>(select_ln393_3_fu_19199_p3.read());
}

void test::thread_zext_ln393_fu_19423_p1() {
    zext_ln393_fu_19423_p1 = esl_zext<12,5>(select_ln393_1_reg_25320.read());
}

void test::thread_zext_ln402_10_fu_19283_p1() {
    zext_ln402_10_fu_19283_p1 = esl_zext<19,7>(or_ln402_fu_19277_p2.read());
}

void test::thread_zext_ln402_11_fu_19293_p1() {
    zext_ln402_11_fu_19293_p1 = esl_zext<64,19>(add_ln402_7_fu_19287_p2.read());
}

void test::thread_zext_ln402_1_fu_19103_p1() {
    zext_ln402_1_fu_19103_p1 = esl_zext<13,10>(tmp_18_fu_19095_p3.read());
}

void test::thread_zext_ln402_2_fu_19326_p1() {
    zext_ln402_2_fu_19326_p1 = esl_zext<64,7>(shl_ln402_1_reg_25276.read());
}

void test::thread_zext_ln402_3_fu_19336_p1() {
    zext_ln402_3_fu_19336_p1 = esl_zext<64,7>(or_ln402_reg_25287.read());
}

void test::thread_zext_ln402_4_fu_19230_p1() {
    zext_ln402_4_fu_19230_p1 = esl_zext<64,19>(tmp_23_fu_19223_p3.read());
}

void test::thread_zext_ln402_5_fu_19241_p1() {
    zext_ln402_5_fu_19241_p1 = esl_zext<64,17>(tmp_24_fu_19234_p3.read());
}

void test::thread_zext_ln402_6_fu_19305_p1() {
    zext_ln402_6_fu_19305_p1 = esl_zext<64,19>(tmp_25_fu_19298_p3.read());
}

void test::thread_zext_ln402_7_fu_19316_p1() {
    zext_ln402_7_fu_19316_p1 = esl_zext<64,17>(tmp_27_fu_19309_p3.read());
}

void test::thread_zext_ln402_8_fu_19262_p1() {
    zext_ln402_8_fu_19262_p1 = esl_zext<19,7>(shl_ln402_1_fu_19255_p3.read());
}

void test::thread_zext_ln402_9_fu_19272_p1() {
    zext_ln402_9_fu_19272_p1 = esl_zext<64,19>(add_ln402_5_fu_19266_p2.read());
}

void test::thread_zext_ln402_fu_19091_p1() {
    zext_ln402_fu_19091_p1 = esl_zext<13,12>(tmp_17_fu_19083_p3.read());
}

void test::thread_zext_ln413_1_fu_19991_p1() {
    zext_ln413_1_fu_19991_p1 = esl_zext<15,5>(select_ln413_1_reg_25430_pp5_iter23_reg.read());
}

void test::thread_zext_ln413_2_fu_19688_p1() {
    zext_ln413_2_fu_19688_p1 = esl_zext<12,10>(select_ln413_2_fu_19681_p3.read());
}

void test::thread_zext_ln413_fu_19729_p1() {
    zext_ln413_fu_19729_p1 = esl_zext<18,16>(select_ln413_4_fu_19722_p3.read());
}

void test::thread_zext_ln414_fu_19733_p1() {
    zext_ln414_fu_19733_p1 = esl_zext<7,6>(select_ln413_reg_25420.read());
}

void test::thread_zext_ln416_10_fu_20031_p1() {
    zext_ln416_10_fu_20031_p1 = esl_zext<64,17>(add_ln416_10_fu_20025_p2.read());
}

void test::thread_zext_ln416_1_fu_19626_p1() {
    zext_ln416_1_fu_19626_p1 = esl_zext<16,8>(shl_ln416_1_fu_19618_p3.read());
}

void test::thread_zext_ln416_2_fu_19520_p1() {
    zext_ln416_2_fu_19520_p1 = esl_zext<16,7>(add_ln412_fu_19500_p2.read());
}

void test::thread_zext_ln416_3_fu_19699_p1() {
    zext_ln416_3_fu_19699_p1 = esl_zext<16,8>(shl_ln416_1_mid1_fu_19692_p3.read());
}

void test::thread_zext_ln416_4_fu_19782_p1() {
    zext_ln416_4_fu_19782_p1 = esl_zext<18,6>(select_ln416_5_fu_19774_p3.read());
}

void test::thread_zext_ln416_5_fu_19994_p1() {
    zext_ln416_5_fu_19994_p1 = esl_zext<17,6>(select_ln416_5_reg_25450_pp5_iter23_reg.read());
}

void test::thread_zext_ln416_6_fu_19961_p1() {
    zext_ln416_6_fu_19961_p1 = esl_zext<11,10>(tmp_39_fu_19954_p3.read());
}

void test::thread_zext_ln416_7_fu_19972_p1() {
    zext_ln416_7_fu_19972_p1 = esl_zext<11,8>(tmp_40_fu_19965_p3.read());
}

void test::thread_zext_ln416_8_fu_20004_p1() {
    zext_ln416_8_fu_20004_p1 = esl_zext<17,16>(tmp_43_fu_19997_p3.read());
}

void test::thread_zext_ln416_9_fu_20015_p1() {
    zext_ln416_9_fu_20015_p1 = esl_zext<17,14>(tmp_44_fu_20008_p3.read());
}

void test::thread_zext_ln416_fu_19484_p1() {
    zext_ln416_fu_19484_p1 = esl_zext<16,7>(ap_phi_mux_not_zero6_0_0_phi_fu_7969_p4.read());
}

void test::thread_zext_ln479_1_fu_20350_p1() {
    zext_ln479_1_fu_20350_p1 = esl_zext<31,26>(b_batchnorm4_V_q0.read());
}

void test::thread_zext_ln479_2_fu_20234_p1() {
    zext_ln479_2_fu_20234_p1 = esl_zext<64,5>(select_ln479_4_reg_25538.read());
}

void test::thread_zext_ln479_fu_20338_p1() {
    zext_ln479_fu_20338_p1 = esl_zext<64,7>(select_ln479_2_reg_25524_pp6_iter3_reg.read());
}

void test::thread_zext_ln491_fu_20547_p1() {
    zext_ln491_fu_20547_p1 = esl_zext<12,5>(select_ln491_3_reg_25632.read());
}

void test::thread_zext_ln499_1_fu_20749_p1() {
    zext_ln499_1_fu_20749_p1 = esl_zext<12,5>(select_ln499_2_fu_20741_p3.read());
}

void test::thread_zext_ln499_2_fu_20773_p1() {
    zext_ln499_2_fu_20773_p1 = esl_zext<12,5>(select_ln499_3_fu_20765_p3.read());
}

void test::thread_zext_ln499_fu_20989_p1() {
    zext_ln499_fu_20989_p1 = esl_zext<11,4>(select_ln499_1_reg_25772.read());
}

void test::thread_zext_ln508_10_fu_20849_p1() {
    zext_ln508_10_fu_20849_p1 = esl_zext<17,6>(or_ln508_fu_20843_p2.read());
}

void test::thread_zext_ln508_11_fu_20859_p1() {
    zext_ln508_11_fu_20859_p1 = esl_zext<64,17>(add_ln508_7_fu_20853_p2.read());
}

void test::thread_zext_ln508_1_fu_20669_p1() {
    zext_ln508_1_fu_20669_p1 = esl_zext<12,9>(tmp_73_fu_20661_p3.read());
}

void test::thread_zext_ln508_2_fu_20892_p1() {
    zext_ln508_2_fu_20892_p1 = esl_zext<64,6>(shl_ln508_1_reg_25728.read());
}

void test::thread_zext_ln508_3_fu_20902_p1() {
    zext_ln508_3_fu_20902_p1 = esl_zext<64,6>(or_ln508_reg_25739.read());
}

void test::thread_zext_ln508_4_fu_20796_p1() {
    zext_ln508_4_fu_20796_p1 = esl_zext<64,17>(tmp_77_fu_20789_p3.read());
}

void test::thread_zext_ln508_5_fu_20807_p1() {
    zext_ln508_5_fu_20807_p1 = esl_zext<64,15>(tmp_78_fu_20800_p3.read());
}

void test::thread_zext_ln508_6_fu_20871_p1() {
    zext_ln508_6_fu_20871_p1 = esl_zext<64,17>(tmp_79_fu_20864_p3.read());
}

void test::thread_zext_ln508_7_fu_20882_p1() {
    zext_ln508_7_fu_20882_p1 = esl_zext<64,15>(tmp_80_fu_20875_p3.read());
}

void test::thread_zext_ln508_8_fu_20828_p1() {
    zext_ln508_8_fu_20828_p1 = esl_zext<17,6>(shl_ln508_1_fu_20821_p3.read());
}

void test::thread_zext_ln508_9_fu_20838_p1() {
    zext_ln508_9_fu_20838_p1 = esl_zext<64,17>(add_ln508_5_fu_20832_p2.read());
}

void test::thread_zext_ln508_fu_20657_p1() {
    zext_ln508_fu_20657_p1 = esl_zext<12,11>(tmp_72_fu_20649_p3.read());
}

void test::thread_zext_ln519_1_fu_21575_p1() {
    zext_ln519_1_fu_21575_p1 = esl_zext<15,4>(select_ln519_1_reg_25876_pp9_iter21_reg.read());
}

void test::thread_zext_ln519_2_fu_21296_p1() {
    zext_ln519_2_fu_21296_p1 = esl_zext<10,8>(select_ln519_2_fu_21289_p3.read());
}

void test::thread_zext_ln519_fu_21313_p1() {
    zext_ln519_fu_21313_p1 = esl_zext<16,14>(select_ln519_4_reg_25882.read());
}

void test::thread_zext_ln520_fu_21316_p1() {
    zext_ln520_fu_21316_p1 = esl_zext<6,5>(select_ln519_reg_25866.read());
}

void test::thread_zext_ln522_10_fu_21615_p1() {
    zext_ln522_10_fu_21615_p1 = esl_zext<64,15>(add_ln522_10_fu_21609_p2.read());
}

void test::thread_zext_ln522_1_fu_21088_p1() {
    zext_ln522_1_fu_21088_p1 = esl_zext<14,6>(shl_ln522_1_fu_21080_p3.read());
}

void test::thread_zext_ln522_2_fu_21136_p1() {
    zext_ln522_2_fu_21136_p1 = esl_zext<14,7>(add_ln518_fu_21116_p2.read());
}

void test::thread_zext_ln522_3_fu_21224_p1() {
    zext_ln522_3_fu_21224_p1 = esl_zext<14,6>(shl_ln522_1_mid1_fu_21216_p3.read());
}

void test::thread_zext_ln522_4_fu_21365_p1() {
    zext_ln522_4_fu_21365_p1 = esl_zext<16,5>(select_ln522_5_fu_21357_p3.read());
}

void test::thread_zext_ln522_5_fu_21578_p1() {
    zext_ln522_5_fu_21578_p1 = esl_zext<15,5>(select_ln522_5_reg_25901_pp9_iter21_reg.read());
}

void test::thread_zext_ln522_6_fu_21545_p1() {
    zext_ln522_6_fu_21545_p1 = esl_zext<10,9>(tmp_86_fu_21538_p3.read());
}

void test::thread_zext_ln522_7_fu_21556_p1() {
    zext_ln522_7_fu_21556_p1 = esl_zext<10,7>(tmp_87_fu_21549_p3.read());
}

void test::thread_zext_ln522_8_fu_21588_p1() {
    zext_ln522_8_fu_21588_p1 = esl_zext<15,14>(tmp_88_fu_21581_p3.read());
}

void test::thread_zext_ln522_9_fu_21599_p1() {
    zext_ln522_9_fu_21599_p1 = esl_zext<15,12>(tmp_89_fu_21592_p3.read());
}

void test::thread_zext_ln522_fu_21050_p1() {
    zext_ln522_fu_21050_p1 = esl_zext<14,7>(ap_phi_mux_not_zero8_0_0_phi_fu_8203_p4.read());
}

void test::thread_zext_ln585_1_fu_21934_p1() {
    zext_ln585_1_fu_21934_p1 = esl_zext<31,26>(b_batchnorm5_V_q0.read());
}

void test::thread_zext_ln585_2_fu_21818_p1() {
    zext_ln585_2_fu_21818_p1 = esl_zext<64,4>(select_ln585_4_reg_25989.read());
}

void test::thread_zext_ln585_fu_21922_p1() {
    zext_ln585_fu_21922_p1 = esl_zext<64,7>(select_ln585_2_reg_25975_pp10_iter3_reg.read());
}

void test::thread_zext_ln594_1_fu_22522_p1() {
    zext_ln594_1_fu_22522_p1 = esl_zext<15,4>(select_ln594_1_reg_26120_pp11_iter21_reg.read());
}

void test::thread_zext_ln594_2_fu_22243_p1() {
    zext_ln594_2_fu_22243_p1 = esl_zext<10,8>(select_ln594_2_fu_22236_p3.read());
}

void test::thread_zext_ln594_fu_22260_p1() {
    zext_ln594_fu_22260_p1 = esl_zext<16,14>(select_ln594_4_reg_26126.read());
}

void test::thread_zext_ln595_fu_22263_p1() {
    zext_ln595_fu_22263_p1 = esl_zext<6,5>(select_ln594_reg_26110.read());
}

void test::thread_zext_ln597_10_fu_22562_p1() {
    zext_ln597_10_fu_22562_p1 = esl_zext<64,15>(add_ln597_10_fu_22556_p2.read());
}

void test::thread_zext_ln597_1_fu_22035_p1() {
    zext_ln597_1_fu_22035_p1 = esl_zext<14,6>(shl_ln597_1_fu_22027_p3.read());
}

void test::thread_zext_ln597_2_fu_22083_p1() {
    zext_ln597_2_fu_22083_p1 = esl_zext<14,7>(add_ln593_fu_22063_p2.read());
}

void test::thread_zext_ln597_3_fu_22171_p1() {
    zext_ln597_3_fu_22171_p1 = esl_zext<14,6>(shl_ln597_1_mid1_fu_22163_p3.read());
}

void test::thread_zext_ln597_4_fu_22312_p1() {
    zext_ln597_4_fu_22312_p1 = esl_zext<16,5>(select_ln597_5_fu_22304_p3.read());
}

void test::thread_zext_ln597_5_fu_22525_p1() {
    zext_ln597_5_fu_22525_p1 = esl_zext<15,5>(select_ln597_5_reg_26145_pp11_iter21_reg.read());
}

void test::thread_zext_ln597_6_fu_22492_p1() {
    zext_ln597_6_fu_22492_p1 = esl_zext<10,9>(tmp_105_fu_22485_p3.read());
}

void test::thread_zext_ln597_7_fu_22503_p1() {
    zext_ln597_7_fu_22503_p1 = esl_zext<10,7>(tmp_106_fu_22496_p3.read());
}

void test::thread_zext_ln597_8_fu_22535_p1() {
    zext_ln597_8_fu_22535_p1 = esl_zext<15,14>(tmp_107_fu_22528_p3.read());
}

void test::thread_zext_ln597_9_fu_22546_p1() {
    zext_ln597_9_fu_22546_p1 = esl_zext<15,12>(tmp_108_fu_22539_p3.read());
}

void test::thread_zext_ln597_fu_21997_p1() {
    zext_ln597_fu_21997_p1 = esl_zext<14,7>(ap_phi_mux_not_zero9_0_0_phi_fu_8326_p4.read());
}

void test::thread_zext_ln660_1_fu_22881_p1() {
    zext_ln660_1_fu_22881_p1 = esl_zext<31,26>(b_batchnorm6_V_q0.read());
}

void test::thread_zext_ln660_2_fu_22765_p1() {
    zext_ln660_2_fu_22765_p1 = esl_zext<64,4>(select_ln660_4_reg_26233.read());
}

void test::thread_zext_ln660_fu_22869_p1() {
    zext_ln660_fu_22869_p1 = esl_zext<64,7>(select_ln660_2_reg_26219_pp12_iter3_reg.read());
}

void test::thread_zext_ln669_1_fu_23469_p1() {
    zext_ln669_1_fu_23469_p1 = esl_zext<15,4>(select_ln669_1_reg_26364_pp13_iter21_reg.read());
}

void test::thread_zext_ln669_2_fu_23190_p1() {
    zext_ln669_2_fu_23190_p1 = esl_zext<10,8>(select_ln669_2_fu_23183_p3.read());
}

void test::thread_zext_ln669_fu_23207_p1() {
    zext_ln669_fu_23207_p1 = esl_zext<16,14>(select_ln669_4_reg_26370.read());
}

void test::thread_zext_ln670_fu_23210_p1() {
    zext_ln670_fu_23210_p1 = esl_zext<6,5>(select_ln669_reg_26354.read());
}

void test::thread_zext_ln672_10_fu_23509_p1() {
    zext_ln672_10_fu_23509_p1 = esl_zext<64,15>(add_ln672_10_fu_23503_p2.read());
}

void test::thread_zext_ln672_1_fu_22982_p1() {
    zext_ln672_1_fu_22982_p1 = esl_zext<14,6>(shl_ln672_1_fu_22974_p3.read());
}

void test::thread_zext_ln672_2_fu_23030_p1() {
    zext_ln672_2_fu_23030_p1 = esl_zext<14,7>(add_ln668_fu_23010_p2.read());
}

void test::thread_zext_ln672_3_fu_23118_p1() {
    zext_ln672_3_fu_23118_p1 = esl_zext<14,6>(shl_ln672_1_mid1_fu_23110_p3.read());
}

void test::thread_zext_ln672_4_fu_23259_p1() {
    zext_ln672_4_fu_23259_p1 = esl_zext<16,5>(select_ln672_5_fu_23251_p3.read());
}

void test::thread_zext_ln672_5_fu_23472_p1() {
    zext_ln672_5_fu_23472_p1 = esl_zext<15,5>(select_ln672_5_reg_26389_pp13_iter21_reg.read());
}

void test::thread_zext_ln672_6_fu_23439_p1() {
    zext_ln672_6_fu_23439_p1 = esl_zext<10,9>(tmp_124_fu_23432_p3.read());
}

void test::thread_zext_ln672_7_fu_23450_p1() {
    zext_ln672_7_fu_23450_p1 = esl_zext<10,7>(tmp_125_fu_23443_p3.read());
}

void test::thread_zext_ln672_8_fu_23482_p1() {
    zext_ln672_8_fu_23482_p1 = esl_zext<15,14>(tmp_126_fu_23475_p3.read());
}

void test::thread_zext_ln672_9_fu_23493_p1() {
    zext_ln672_9_fu_23493_p1 = esl_zext<15,12>(tmp_127_fu_23486_p3.read());
}

void test::thread_zext_ln672_fu_22944_p1() {
    zext_ln672_fu_22944_p1 = esl_zext<14,7>(ap_phi_mux_not_zero10_0_0_phi_fu_8449_p4.read());
}

void test::thread_zext_ln703_fu_24769_p1() {
    zext_ln703_fu_24769_p1 = esl_zext<31,30>(mul_ln703_5_reg_26769.read());
}

void test::thread_zext_ln728_fu_24839_p1() {
    zext_ln728_fu_24839_p1 = esl_zext<16,8>(shl_ln7_fu_24831_p3.read());
}

void test::thread_zext_ln735_1_fu_23828_p1() {
    zext_ln735_1_fu_23828_p1 = esl_zext<31,26>(b_batchnorm7_V_q0.read());
}

void test::thread_zext_ln735_2_fu_23712_p1() {
    zext_ln735_2_fu_23712_p1 = esl_zext<64,4>(select_ln735_4_reg_26477.read());
}

void test::thread_zext_ln735_fu_23816_p1() {
    zext_ln735_fu_23816_p1 = esl_zext<64,7>(select_ln735_2_reg_26463_pp14_iter3_reg.read());
}

void test::thread_zext_ln744_1_fu_24416_p1() {
    zext_ln744_1_fu_24416_p1 = esl_zext<15,4>(select_ln744_1_reg_26608_pp15_iter21_reg.read());
}

void test::thread_zext_ln744_2_fu_24137_p1() {
    zext_ln744_2_fu_24137_p1 = esl_zext<10,8>(select_ln744_2_fu_24130_p3.read());
}

void test::thread_zext_ln744_fu_24154_p1() {
    zext_ln744_fu_24154_p1 = esl_zext<16,14>(select_ln744_4_reg_26614.read());
}

void test::thread_zext_ln745_fu_24157_p1() {
    zext_ln745_fu_24157_p1 = esl_zext<6,5>(select_ln744_reg_26598.read());
}

void test::thread_zext_ln747_10_fu_24456_p1() {
    zext_ln747_10_fu_24456_p1 = esl_zext<64,15>(add_ln747_10_fu_24450_p2.read());
}

void test::thread_zext_ln747_1_fu_23929_p1() {
    zext_ln747_1_fu_23929_p1 = esl_zext<14,6>(shl_ln747_1_fu_23921_p3.read());
}

void test::thread_zext_ln747_2_fu_23977_p1() {
    zext_ln747_2_fu_23977_p1 = esl_zext<14,7>(add_ln743_fu_23957_p2.read());
}

void test::thread_zext_ln747_3_fu_24065_p1() {
    zext_ln747_3_fu_24065_p1 = esl_zext<14,6>(shl_ln747_1_mid1_fu_24057_p3.read());
}

void test::thread_zext_ln747_4_fu_24206_p1() {
    zext_ln747_4_fu_24206_p1 = esl_zext<16,5>(select_ln747_5_fu_24198_p3.read());
}

void test::thread_zext_ln747_5_fu_24419_p1() {
    zext_ln747_5_fu_24419_p1 = esl_zext<15,5>(select_ln747_5_reg_26633_pp15_iter21_reg.read());
}

void test::thread_zext_ln747_6_fu_24386_p1() {
    zext_ln747_6_fu_24386_p1 = esl_zext<10,9>(tmp_143_fu_24379_p3.read());
}

void test::thread_zext_ln747_7_fu_24397_p1() {
    zext_ln747_7_fu_24397_p1 = esl_zext<10,7>(tmp_144_fu_24390_p3.read());
}

void test::thread_zext_ln747_8_fu_24429_p1() {
    zext_ln747_8_fu_24429_p1 = esl_zext<15,14>(tmp_145_fu_24422_p3.read());
}

void test::thread_zext_ln747_9_fu_24440_p1() {
    zext_ln747_9_fu_24440_p1 = esl_zext<15,12>(tmp_146_fu_24433_p3.read());
}

void test::thread_zext_ln747_fu_23891_p1() {
    zext_ln747_fu_23891_p1 = esl_zext<14,7>(ap_phi_mux_not_zero11_0_0_phi_fu_8572_p4.read());
}

void test::thread_zext_ln810_1_fu_24649_p1() {
    zext_ln810_1_fu_24649_p1 = esl_zext<11,4>(select_ln810_3_reg_26721.read());
}

void test::thread_zext_ln810_fu_24757_p1() {
    zext_ln810_fu_24757_p1 = esl_zext<64,7>(select_ln810_1_reg_26707_pp16_iter3_reg.read());
}

}

