#include "convolution.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolution::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv_line_buffer_0_0_reg_8453 = add_ln39_reg_14071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv_line_buffer_0_0_reg_8453 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(select_ln25_2_reg_11074.read(), ap_const_lv1_1))) {
        conv_line_buffer_1_0_reg_8431 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln37_fu_8919_p2.read()))) {
        conv_line_buffer_1_0_reg_8431 = add_ln36_reg_11143.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        conv_line_buffer_2_0_reg_8442 = add_ln37_reg_14040.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_fu_8888_p2.read()))) {
        conv_line_buffer_2_0_reg_8442 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        conv_pad_2_0_0_reg_8396 = add_ln28_reg_11103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        conv_pad_2_0_0_reg_8396 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ff_0_0_reg_8350 = select_ln52_2_reg_10464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ff_0_0_reg_8350 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        indvar_flatten600_reg_8339 = add_ln24_1_reg_10444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten600_reg_8339 = ap_const_lv19_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        indvar_flatten_reg_8361 = select_ln25_4_fu_10385_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_8361 = ap_const_lv13_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(icmp_ln36_fu_8888_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_fu_8913_p2.read()))) {
        p_0201_5_0_reg_8464 = ap_const_lv16_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln50_fu_9108_p2.read()))) {
        p_0201_5_0_reg_8464 = p_0201_6_0_reg_8489.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_9168_p2.read()))) {
        p_0201_6_0_reg_8489 = p_Val2_58_0_reg_8512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln49_fu_9029_p2.read()))) {
        p_0201_6_0_reg_8489 = p_0201_5_0_reg_8464.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        p_Val2_58_0_reg_8512 = grp_fu_10408_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln50_fu_9108_p2.read()))) {
        p_Val2_58_0_reg_8512 = p_0201_6_0_reg_8489.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        phi_mul8_reg_8419 = add_ln356_102_fu_8882_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        phi_mul8_reg_8419 = ap_const_lv16_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        phi_mul_reg_8407 = add_ln356_101_fu_8876_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        phi_mul_reg_8407 = ap_const_lv14_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(icmp_ln36_fu_8888_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_fu_8913_p2.read()))) {
        ra52_0_0_reg_8478 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln50_fu_9108_p2.read()))) {
        ra52_0_0_reg_8478 = add_ln49_reg_14089.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_9168_p2.read()))) {
        ra53_0_0_reg_8501 = add_ln50_reg_14112.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln49_fu_9029_p2.read()))) {
        ra53_0_0_reg_8501 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ra54_0_0_reg_8524 = add_ln51_reg_14130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln50_fu_9108_p2.read()))) {
        ra54_0_0_reg_8524 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        xx_reuse_0_0_reg_8384 = add_ln26_fu_10374_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        xx_reuse_0_0_reg_8384 = ap_const_lv8_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        yy_reuse_0_0_reg_8373 = select_ln25_1_reg_11064.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        yy_reuse_0_0_reg_8373 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln51_fu_9168_p2.read()))) {
        add_ln1265_4_reg_14140 = add_ln1265_4_fu_9198_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln203_27_reg_11078 = add_ln203_27_fu_8792_p2.read();
        select_ln25_1_reg_11064 = select_ln25_1_fu_8709_p3.read();
        select_ln25_2_reg_11074 = select_ln25_2_fu_8736_p3.read();
        select_ln25_reg_11057 = select_ln25_fu_8697_p3.read();
        zext_ln25_2_reg_11069 = zext_ln25_2_fu_8716_p1.read();
        zext_ln28_1_reg_11090 = zext_ln28_1_fu_8802_p1.read();
        zext_ln28_2_reg_11095 = zext_ln28_2_fu_8806_p1.read();
        zext_ln28_reg_11083 = zext_ln28_fu_8798_p1.read();
        zext_ln52_reg_10477 = zext_ln52_fu_8637_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln24_1_reg_10444 = add_ln24_1_fu_8581_p2.read();
        add_ln56_reg_10431 = add_ln56_fu_8561_p2.read();
        icmp_ln26_reg_10436 = icmp_ln26_fu_8571_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln28_reg_11103 = add_ln28_fu_8816_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln37_fu_8919_p2.read()))) {
        add_ln356_96_reg_14045 = add_ln356_96_fu_8957_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln38_fu_8990_p2.read()))) {
        add_ln356_99_reg_14076 = add_ln356_99_fu_9006_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_fu_8810_p2.read()))) {
        add_ln356_reg_11108 = add_ln356_fu_8822_p2.read();
        conv_line_buffer_0_2_reg_11119 =  (sc_lv<16>) (zext_ln356_102_fu_8854_p1.read());
        conv_line_buffer_0_s_reg_11113 =  (sc_lv<16>) (zext_ln356_100_fu_8838_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        add_ln36_reg_11143 = add_ln36_fu_8894_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        add_ln37_reg_14040 = add_ln37_fu_8925_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        add_ln39_reg_14071 = add_ln39_fu_8996_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        add_ln49_reg_14089 = add_ln49_fu_9035_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        add_ln50_reg_14112 = add_ln50_fu_9114_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        add_ln51_reg_14130 = add_ln51_fu_9174_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv_line_buffer_0_6_reg_14052 =  (sc_lv<16>) (sext_ln356_14_fu_8965_p1.read());
        conv_window_buffer_0_reg_14063 =  (sc_lv<10>) (zext_ln356_105_fu_8985_p1.read());
        sub_ln356_4_reg_14057 = sub_ln356_4_fu_8974_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        conv_window_buffer_0_5_reg_14145 = conv_window_buffer_0_V_q0.read();
        tmp_70_reg_14150 = tmp_70_fu_9203_p578.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln24_fu_8576_p2.read(), ap_const_lv1_0))) {
        icmp_ln25_reg_10449 = icmp_ln25_fu_8593_p2.read();
        icmp_ln35_reg_10472 = icmp_ln35_fu_8624_p2.read();
        select_ln52_2_reg_10464 = select_ln52_2_fu_8606_p3.read();
        select_ln52_reg_10458 = select_ln52_fu_8598_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        mul_ln18_reg_10421 = mul_ln18_fu_8543_p2.read();
        tmp_270_reg_10426 = tmp_270_fu_8549_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln49_fu_9029_p2.read()))) {
        sext_ln1265_reg_14094 = sext_ln1265_fu_9063_p1.read();
        sub_ln1265_reg_14099 = sub_ln1265_fu_9083_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln50_fu_9108_p2.read()))) {
        sub_ln1265_4_reg_14122 = sub_ln1265_4_fu_9162_p2.read();
        sub_ln1265_9_reg_14117 = sub_ln1265_9_fu_9135_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(icmp_ln36_fu_8888_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_fu_8913_p2.read()))) {
        weight_conv_0_0_0_reg_11157 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_0_1_reg_11162 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_0_2_reg_11167 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_1_0_reg_11172 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_1_1_reg_11177 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_1_2_reg_11182 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_2_0_reg_11187 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_2_1_reg_11192 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_0_2_2_reg_11197 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_0_0_reg_11607 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_0_1_reg_11612 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_0_2_reg_11617 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_1_0_reg_11622 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_1_1_reg_11627 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_1_2_reg_11632 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_2_0_reg_11637 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_2_1_reg_11642 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_10_2_2_reg_11647 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_0_0_reg_11652 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_0_1_reg_11657 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_0_2_reg_11662 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_1_0_reg_11667 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_1_1_reg_11672 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_1_2_reg_11677 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_2_0_reg_11682 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_2_1_reg_11687 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_11_2_2_reg_11692 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_0_0_reg_11697 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_0_1_reg_11702 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_0_2_reg_11707 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_1_0_reg_11712 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_1_1_reg_11717 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_1_2_reg_11722 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_2_0_reg_11727 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_2_1_reg_11732 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_12_2_2_reg_11737 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_0_0_reg_11742 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_0_1_reg_11747 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_0_2_reg_11752 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_1_0_reg_11757 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_1_1_reg_11762 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_1_2_reg_11767 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_2_0_reg_11772 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_2_1_reg_11777 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_13_2_2_reg_11782 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_0_0_reg_11787 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_0_1_reg_11792 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_0_2_reg_11797 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_1_0_reg_11802 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_1_1_reg_11807 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_1_2_reg_11812 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_2_0_reg_11817 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_2_1_reg_11822 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_14_2_2_reg_11827 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_0_0_reg_11832 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_0_1_reg_11837 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_0_2_reg_11842 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_1_0_reg_11847 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_1_1_reg_11852 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_1_2_reg_11857 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_2_0_reg_11862 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_2_1_reg_11867 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_15_2_2_reg_11872 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_0_0_reg_11877 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_0_1_reg_11882 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_0_2_reg_11887 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_1_0_reg_11892 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_1_1_reg_11897 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_1_2_reg_11902 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_2_0_reg_11907 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_2_1_reg_11912 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_16_2_2_reg_11917 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_0_0_reg_11922 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_0_1_reg_11927 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_0_2_reg_11932 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_1_0_reg_11937 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_1_1_reg_11942 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_1_2_reg_11947 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_2_0_reg_11952 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_2_1_reg_11957 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_17_2_2_reg_11962 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_0_0_reg_11967 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_0_1_reg_11972 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_0_2_reg_11977 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_1_0_reg_11982 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_1_1_reg_11987 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_1_2_reg_11992 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_2_0_reg_11997 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_2_1_reg_12002 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_18_2_2_reg_12007 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_0_0_reg_12012 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_0_1_reg_12017 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_0_2_reg_12022 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_1_0_reg_12027 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_1_1_reg_12032 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_1_2_reg_12037 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_2_0_reg_12042 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_2_1_reg_12047 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_19_2_2_reg_12052 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_0_0_reg_11202 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_0_1_reg_11207 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_0_2_reg_11212 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_1_0_reg_11217 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_1_1_reg_11222 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_1_2_reg_11227 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_2_0_reg_11232 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_2_1_reg_11237 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_1_2_2_reg_11242 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_0_0_reg_12057 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_0_1_reg_12062 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_0_2_reg_12067 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_1_0_reg_12072 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_1_1_reg_12077 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_1_2_reg_12082 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_2_0_reg_12087 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_2_1_reg_12092 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_20_2_2_reg_12097 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_0_0_reg_12102 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_0_1_reg_12107 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_0_2_reg_12112 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_1_0_reg_12117 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_1_1_reg_12122 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_1_2_reg_12127 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_2_0_reg_12132 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_2_1_reg_12137 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_21_2_2_reg_12142 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_0_0_reg_12147 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_0_1_reg_12152 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_0_2_reg_12157 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_1_0_reg_12162 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_1_1_reg_12167 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_1_2_reg_12172 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_2_0_reg_12177 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_2_1_reg_12182 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_22_2_2_reg_12187 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_0_0_reg_12192 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_0_1_reg_12197 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_0_2_reg_12202 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_1_0_reg_12207 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_1_1_reg_12212 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_1_2_reg_12217 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_2_0_reg_12222 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_2_1_reg_12227 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_23_2_2_reg_12232 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_0_0_reg_12237 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_0_1_reg_12242 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_0_2_reg_12247 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_1_0_reg_12252 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_1_1_reg_12257 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_1_2_reg_12262 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_2_0_reg_12267 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_2_1_reg_12272 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_24_2_2_reg_12277 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_0_0_reg_12282 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_0_1_reg_12287 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_0_2_reg_12292 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_1_0_reg_12297 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_1_1_reg_12302 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_1_2_reg_12307 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_2_0_reg_12312 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_2_1_reg_12317 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_25_2_2_reg_12322 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_0_0_reg_12327 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_0_1_reg_12332 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_0_2_reg_12337 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_1_0_reg_12342 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_1_1_reg_12347 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_1_2_reg_12352 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_2_0_reg_12357 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_2_1_reg_12362 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_26_2_2_reg_12367 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_0_0_reg_12372 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_0_1_reg_12377 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_0_2_reg_12382 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_1_0_reg_12387 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_1_1_reg_12392 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_1_2_reg_12397 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_2_0_reg_12402 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_2_1_reg_12407 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_27_2_2_reg_12412 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_0_0_reg_12417 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_0_1_reg_12422 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_0_2_reg_12427 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_1_0_reg_12432 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_1_1_reg_12437 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_1_2_reg_12442 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_2_0_reg_12447 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_2_1_reg_12452 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_28_2_2_reg_12457 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_0_0_reg_12462 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_0_1_reg_12467 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_0_2_reg_12472 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_1_0_reg_12477 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_1_1_reg_12482 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_1_2_reg_12487 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_2_0_reg_12492 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_2_1_reg_12497 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_29_2_2_reg_12502 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_0_0_reg_11247 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_0_1_reg_11252 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_0_2_reg_11257 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_1_0_reg_11262 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_1_1_reg_11267 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_1_2_reg_11272 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_2_0_reg_11277 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_2_1_reg_11282 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_2_2_2_reg_11287 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_0_0_reg_12507 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_0_1_reg_12512 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_0_2_reg_12517 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_1_0_reg_12522 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_1_1_reg_12527 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_1_2_reg_12532 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_2_0_reg_12537 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_2_1_reg_12542 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_30_2_2_reg_12547 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_0_0_reg_12552 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_0_1_reg_12557 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_0_2_reg_12562 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_1_0_reg_12567 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_1_1_reg_12572 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_1_2_reg_12577 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_2_0_reg_12582 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_2_1_reg_12587 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_31_2_2_reg_12592 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_0_0_reg_12597 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_0_1_reg_12602 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_0_2_reg_12607 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_1_0_reg_12612 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_1_1_reg_12617 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_1_2_reg_12622 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_2_0_reg_12627 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_2_1_reg_12632 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_32_2_2_reg_12637 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_0_0_reg_12642 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_0_1_reg_12647 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_0_2_reg_12652 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_1_0_reg_12657 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_1_1_reg_12662 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_1_2_reg_12667 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_2_0_reg_12672 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_2_1_reg_12677 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_33_2_2_reg_12682 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_0_0_reg_12687 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_0_1_reg_12692 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_0_2_reg_12697 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_1_0_reg_12702 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_1_1_reg_12707 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_1_2_reg_12712 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_2_0_reg_12717 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_2_1_reg_12722 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_34_2_2_reg_12727 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_0_0_reg_12732 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_0_1_reg_12737 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_0_2_reg_12742 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_1_0_reg_12747 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_1_1_reg_12752 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_1_2_reg_12757 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_2_0_reg_12762 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_2_1_reg_12767 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_35_2_2_reg_12772 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_0_0_reg_12777 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_0_1_reg_12782 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_0_2_reg_12787 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_1_0_reg_12792 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_1_1_reg_12797 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_1_2_reg_12802 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_2_0_reg_12807 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_2_1_reg_12812 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_36_2_2_reg_12817 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_0_0_reg_12822 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_0_1_reg_12827 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_0_2_reg_12832 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_1_0_reg_12837 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_1_1_reg_12842 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_1_2_reg_12847 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_2_0_reg_12852 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_2_1_reg_12857 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_37_2_2_reg_12862 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_0_0_reg_12867 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_0_1_reg_12872 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_0_2_reg_12877 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_1_0_reg_12882 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_1_1_reg_12887 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_1_2_reg_12892 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_2_0_reg_12897 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_2_1_reg_12902 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_38_2_2_reg_12907 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_0_0_reg_12912 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_0_1_reg_12917 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_0_2_reg_12922 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_1_0_reg_12927 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_1_1_reg_12932 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_1_2_reg_12937 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_2_0_reg_12942 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_2_1_reg_12947 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_39_2_2_reg_12952 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_0_0_reg_11292 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_0_1_reg_11297 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_0_2_reg_11302 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_1_0_reg_11307 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_1_1_reg_11312 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_1_2_reg_11317 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_2_0_reg_11322 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_2_1_reg_11327 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_3_2_2_reg_11332 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_0_0_reg_12957 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_0_1_reg_12962 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_0_2_reg_12967 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_1_0_reg_12972 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_1_1_reg_12977 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_1_2_reg_12982 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_2_0_reg_12987 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_2_1_reg_12992 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_40_2_2_reg_12997 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_0_0_reg_13002 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_0_1_reg_13007 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_0_2_reg_13012 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_1_0_reg_13017 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_1_1_reg_13022 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_1_2_reg_13027 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_2_0_reg_13032 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_2_1_reg_13037 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_41_2_2_reg_13042 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_0_0_reg_13047 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_0_1_reg_13052 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_0_2_reg_13057 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_1_0_reg_13062 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_1_1_reg_13067 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_1_2_reg_13072 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_2_0_reg_13077 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_2_1_reg_13082 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_42_2_2_reg_13087 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_0_0_reg_13092 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_0_1_reg_13097 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_0_2_reg_13102 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_1_0_reg_13107 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_1_1_reg_13112 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_1_2_reg_13117 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_2_0_reg_13122 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_2_1_reg_13127 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_43_2_2_reg_13132 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_0_0_reg_13137 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_0_1_reg_13142 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_0_2_reg_13147 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_1_0_reg_13152 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_1_1_reg_13157 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_1_2_reg_13162 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_2_0_reg_13167 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_2_1_reg_13172 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_44_2_2_reg_13177 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_0_0_reg_13182 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_0_1_reg_13187 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_0_2_reg_13192 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_1_0_reg_13197 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_1_1_reg_13202 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_1_2_reg_13207 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_2_0_reg_13212 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_2_1_reg_13217 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_45_2_2_reg_13222 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_0_0_reg_13227 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_0_1_reg_13232 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_0_2_reg_13237 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_1_0_reg_13242 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_1_1_reg_13247 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_1_2_reg_13252 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_2_0_reg_13257 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_2_1_reg_13262 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_46_2_2_reg_13267 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_0_0_reg_13272 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_0_1_reg_13277 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_0_2_reg_13282 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_1_0_reg_13287 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_1_1_reg_13292 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_1_2_reg_13297 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_2_0_reg_13302 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_2_1_reg_13307 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_47_2_2_reg_13312 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_0_0_reg_13317 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_0_1_reg_13322 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_0_2_reg_13327 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_1_0_reg_13332 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_1_1_reg_13337 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_1_2_reg_13342 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_2_0_reg_13347 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_2_1_reg_13352 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_48_2_2_reg_13357 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_0_0_reg_13362 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_0_1_reg_13367 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_0_2_reg_13372 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_1_0_reg_13377 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_1_1_reg_13382 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_1_2_reg_13387 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_2_0_reg_13392 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_2_1_reg_13397 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_49_2_2_reg_13402 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_0_0_reg_11337 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_0_1_reg_11342 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_0_2_reg_11347 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_1_0_reg_11352 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_1_1_reg_11357 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_1_2_reg_11362 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_2_0_reg_11367 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_2_1_reg_11372 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_4_2_2_reg_11377 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_0_0_reg_13407 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_0_1_reg_13412 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_0_2_reg_13417 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_1_0_reg_13422 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_1_1_reg_13427 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_1_2_reg_13432 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_2_0_reg_13437 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_2_1_reg_13442 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_50_2_2_reg_13447 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_0_0_reg_13452 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_0_1_reg_13457 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_0_2_reg_13462 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_1_0_reg_13467 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_1_1_reg_13472 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_1_2_reg_13477 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_2_0_reg_13482 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_2_1_reg_13487 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_51_2_2_reg_13492 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_0_0_reg_13497 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_0_1_reg_13502 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_0_2_reg_13507 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_1_0_reg_13512 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_1_1_reg_13517 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_1_2_reg_13522 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_2_0_reg_13527 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_2_1_reg_13532 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_52_2_2_reg_13537 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_0_0_reg_13542 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_0_1_reg_13547 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_0_2_reg_13552 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_1_0_reg_13557 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_1_1_reg_13562 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_1_2_reg_13567 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_2_0_reg_13572 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_2_1_reg_13577 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_53_2_2_reg_13582 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_0_0_reg_13587 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_0_1_reg_13592 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_0_2_reg_13597 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_1_0_reg_13602 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_1_1_reg_13607 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_1_2_reg_13612 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_2_0_reg_13617 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_2_1_reg_13622 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_54_2_2_reg_13627 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_0_0_reg_13632 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_0_1_reg_13637 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_0_2_reg_13642 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_1_0_reg_13647 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_1_1_reg_13652 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_1_2_reg_13657 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_2_0_reg_13662 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_2_1_reg_13667 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_55_2_2_reg_13672 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_0_0_reg_13677 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_0_1_reg_13682 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_0_2_reg_13687 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_1_0_reg_13692 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_1_1_reg_13697 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_1_2_reg_13702 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_2_0_reg_13707 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_2_1_reg_13712 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_56_2_2_reg_13717 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_0_0_reg_13722 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_0_1_reg_13727 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_0_2_reg_13732 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_1_0_reg_13737 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_1_1_reg_13742 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_1_2_reg_13747 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_2_0_reg_13752 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_2_1_reg_13757 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_57_2_2_reg_13762 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_0_0_reg_13767 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_0_1_reg_13772 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_0_2_reg_13777 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_1_0_reg_13782 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_1_1_reg_13787 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_1_2_reg_13792 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_2_0_reg_13797 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_2_1_reg_13802 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_58_2_2_reg_13807 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_0_0_reg_13812 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_0_1_reg_13817 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_0_2_reg_13822 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_1_0_reg_13827 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_1_1_reg_13832 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_1_2_reg_13837 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_2_0_reg_13842 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_2_1_reg_13847 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_59_2_2_reg_13852 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_0_0_reg_11382 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_0_1_reg_11387 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_0_2_reg_11392 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_1_0_reg_11397 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_1_1_reg_11402 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_1_2_reg_11407 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_2_0_reg_11412 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_2_1_reg_11417 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_5_2_2_reg_11422 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_0_0_reg_13857 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_0_1_reg_13862 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_0_2_reg_13867 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_1_0_reg_13872 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_1_1_reg_13877 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_1_2_reg_13882 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_2_0_reg_13887 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_2_1_reg_13892 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_60_2_2_reg_13897 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_0_0_reg_13902 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_0_1_reg_13907 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_0_2_reg_13912 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_1_0_reg_13917 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_1_1_reg_13922 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_1_2_reg_13927 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_2_0_reg_13932 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_2_1_reg_13937 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_61_2_2_reg_13942 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_0_0_reg_13947 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_0_1_reg_13952 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_0_2_reg_13957 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_1_0_reg_13962 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_1_1_reg_13967 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_1_2_reg_13972 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_2_0_reg_13977 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_2_1_reg_13982 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_62_2_2_reg_13987 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_0_0_reg_13992 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_0_1_reg_13997 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_0_2_reg_14002 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_1_0_reg_14007 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_1_1_reg_14012 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_1_2_reg_14017 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_2_0_reg_14022 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_2_1_reg_14027 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_63_2_2_reg_14032 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_0_0_reg_11427 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_0_1_reg_11432 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_0_2_reg_11437 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_1_0_reg_11442 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_1_1_reg_11447 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_1_2_reg_11452 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_2_0_reg_11457 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_2_1_reg_11462 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_6_2_2_reg_11467 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_0_0_reg_11472 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_0_1_reg_11477 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_0_2_reg_11482 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_1_0_reg_11487 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_1_1_reg_11492 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_1_2_reg_11497 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_2_0_reg_11502 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_2_1_reg_11507 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_7_2_2_reg_11512 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_0_0_reg_11517 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_0_1_reg_11522 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_0_2_reg_11527 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_1_0_reg_11532 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_1_1_reg_11537 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_1_2_reg_11542 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_2_0_reg_11547 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_2_1_reg_11552 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_8_2_2_reg_11557 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_0_0_reg_11562 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_0_1_reg_11567 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_0_2_reg_11572 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_1_0_reg_11577 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_1_1_reg_11582 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_1_2_reg_11587 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_2_0_reg_11592 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_2_1_reg_11597 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
        weight_conv_9_2_2_reg_11602 =  (sc_lv<6>) (zext_ln52_reg_10477.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln36_fu_8888_p2.read()))) {
        zext_ln37_reg_11148 = zext_ln37_fu_8900_p1.read();
    }
}

void convolution::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln24_fu_8576_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_fu_8810_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(select_ln25_2_reg_11074.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state19;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(icmp_ln36_fu_8888_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln44_fu_8913_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(icmp_ln36_fu_8888_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(icmp_ln44_fu_8913_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln37_fu_8919_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln38_fu_8990_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln49_fu_9029_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state19;
            }
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln50_fu_9108_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln51_fu_9168_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

