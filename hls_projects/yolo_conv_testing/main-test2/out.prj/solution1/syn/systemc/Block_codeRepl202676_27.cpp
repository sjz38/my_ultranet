#include "Block_codeRepl202676.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Block_codeRepl202676::thread_yolo_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state571.read())) {
        yolo_0_V_we0 = ap_const_logic_1;
    } else {
        yolo_0_V_we0 = ap_const_logic_0;
    }
}

void Block_codeRepl202676::thread_yolointermediate_0_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read())) {
        yolointermediate_0_s_address0 =  (sc_lv<13>) (zext_ln1265_37_fu_159950_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read())) {
        yolointermediate_0_s_address0 = yolointermediate_0_1_reg_258615.read();
    } else {
        yolointermediate_0_s_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void Block_codeRepl202676::thread_yolointermediate_0_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state570.read()))) {
        yolointermediate_0_s_ce0 = ap_const_logic_1;
    } else {
        yolointermediate_0_s_ce0 = ap_const_logic_0;
    }
}

void Block_codeRepl202676::thread_yolointermediate_0_s_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state563.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln913_fu_159582_p2.read()))) {
        yolointermediate_0_s_we0 = ap_const_logic_1;
    } else {
        yolointermediate_0_s_we0 = ap_const_logic_0;
    }
}

void Block_codeRepl202676::thread_zext_ln1265_10_fu_64322_p1() {
    zext_ln1265_10_fu_64322_p1 = esl_zext<64,11>(add_ln1265_18_fu_64316_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_11_fu_65009_p1() {
    zext_ln1265_11_fu_65009_p1 = esl_zext<64,11>(add_ln1265_19_fu_65004_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_12_fu_74006_p1() {
    zext_ln1265_12_fu_74006_p1 = esl_zext<11,7>(select_ln473_1_fu_73998_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_13_fu_74018_p1() {
    zext_ln1265_13_fu_74018_p1 = esl_zext<11,10>(tmp_45_fu_74010_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_14_fu_74028_p1() {
    zext_ln1265_14_fu_74028_p1 = esl_zext<64,11>(add_ln1265_27_fu_74022_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_15_fu_75241_p1() {
    zext_ln1265_15_fu_75241_p1 = esl_zext<64,11>(add_ln1265_28_fu_75236_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_16_fu_91378_p1() {
    zext_ln1265_16_fu_91378_p1 = esl_zext<11,7>(select_ln606_1_fu_91370_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_17_fu_91390_p1() {
    zext_ln1265_17_fu_91390_p1 = esl_zext<11,10>(tmp_57_fu_91382_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_18_fu_91400_p1() {
    zext_ln1265_18_fu_91400_p1 = esl_zext<64,11>(add_ln1265_36_fu_91394_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_19_fu_92563_p1() {
    zext_ln1265_19_fu_92563_p1 = esl_zext<64,11>(add_ln1265_37_fu_92558_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_1_fu_57533_p1() {
    zext_ln1265_1_fu_57533_p1 = esl_zext<9,8>(tmp_5_fu_57525_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_20_fu_108680_p1() {
    zext_ln1265_20_fu_108680_p1 = esl_zext<11,7>(select_ln696_1_fu_108672_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_21_fu_108692_p1() {
    zext_ln1265_21_fu_108692_p1 = esl_zext<11,10>(tmp_65_fu_108684_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_22_fu_108702_p1() {
    zext_ln1265_22_fu_108702_p1 = esl_zext<64,11>(add_ln1265_45_fu_108696_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_23_fu_109890_p1() {
    zext_ln1265_23_fu_109890_p1 = esl_zext<64,11>(add_ln1265_46_fu_109885_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_24_fu_125981_p1() {
    zext_ln1265_24_fu_125981_p1 = esl_zext<11,7>(select_ln786_1_fu_125973_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_25_fu_125993_p1() {
    zext_ln1265_25_fu_125993_p1 = esl_zext<11,10>(tmp_73_fu_125985_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_26_fu_126003_p1() {
    zext_ln1265_26_fu_126003_p1 = esl_zext<64,11>(add_ln1265_54_fu_125997_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_27_fu_127226_p1() {
    zext_ln1265_27_fu_127226_p1 = esl_zext<64,11>(add_ln1265_55_fu_127221_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_28_fu_143284_p1() {
    zext_ln1265_28_fu_143284_p1 = esl_zext<11,7>(select_ln876_1_fu_143276_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_29_fu_143296_p1() {
    zext_ln1265_29_fu_143296_p1 = esl_zext<11,10>(tmp_81_fu_143288_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_2_fu_57543_p1() {
    zext_ln1265_2_fu_57543_p1 = esl_zext<64,9>(add_ln1265_fu_57537_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_30_fu_143306_p1() {
    zext_ln1265_30_fu_143306_p1 = esl_zext<64,11>(add_ln1265_63_fu_143300_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_31_fu_144599_p1() {
    zext_ln1265_31_fu_144599_p1 = esl_zext<64,11>(add_ln1265_64_fu_144594_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_32_fu_159856_p1() {
    zext_ln1265_32_fu_159856_p1 = esl_zext<10,9>(tmp_96_fu_159848_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_33_fu_159868_p1() {
    zext_ln1265_33_fu_159868_p1 = esl_zext<10,7>(tmp_97_fu_159860_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_34_fu_159894_p1() {
    zext_ln1265_34_fu_159894_p1 = esl_zext<10,4>(yy1_0_0_reg_56083.read());
}

void Block_codeRepl202676::thread_zext_ln1265_35_fu_159919_p1() {
    zext_ln1265_35_fu_159919_p1 = esl_zext<14,12>(tmp_146_fu_159911_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_36_fu_159941_p1() {
    zext_ln1265_36_fu_159941_p1 = esl_zext<14,5>(xx1_0_0_reg_56094.read());
}

void Block_codeRepl202676::thread_zext_ln1265_37_fu_159950_p1() {
    zext_ln1265_37_fu_159950_p1 = esl_zext<64,14>(add_ln1265_75_fu_159945_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_38_fu_159602_p1() {
    zext_ln1265_38_fu_159602_p1 = esl_zext<11,10>(tmp_106_fu_159594_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_39_fu_159614_p1() {
    zext_ln1265_39_fu_159614_p1 = esl_zext<11,8>(tmp_109_fu_159606_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_3_fu_57713_p1() {
    zext_ln1265_3_fu_57713_p1 = esl_zext<64,9>(add_ln1265_1_fu_57708_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_40_fu_159645_p1() {
    zext_ln1265_40_fu_159645_p1 = esl_zext<15,13>(tmp_147_fu_159637_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_41_fu_159664_p1() {
    zext_ln1265_41_fu_159664_p1 = esl_zext<64,15>(add_ln1265_79_reg_258628.read());
}

void Block_codeRepl202676::thread_zext_ln1265_4_fu_59114_p1() {
    zext_ln1265_4_fu_59114_p1 = esl_zext<10,6>(select_ln207_1_fu_59106_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_5_fu_59126_p1() {
    zext_ln1265_5_fu_59126_p1 = esl_zext<10,9>(tmp_21_fu_59118_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_6_fu_59136_p1() {
    zext_ln1265_6_fu_59136_p1 = esl_zext<64,10>(add_ln1265_9_fu_59130_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_7_fu_59540_p1() {
    zext_ln1265_7_fu_59540_p1 = esl_zext<64,10>(add_ln1265_10_fu_59535_p2.read());
}

void Block_codeRepl202676::thread_zext_ln1265_8_fu_64300_p1() {
    zext_ln1265_8_fu_64300_p1 = esl_zext<11,7>(select_ln340_1_fu_64292_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_9_fu_64312_p1() {
    zext_ln1265_9_fu_64312_p1 = esl_zext<11,10>(tmp_33_fu_64304_p3.read());
}

void Block_codeRepl202676::thread_zext_ln1265_fu_57521_p1() {
    zext_ln1265_fu_57521_p1 = esl_zext<9,5>(select_ln74_1_fu_57513_p3.read());
}

void Block_codeRepl202676::thread_zext_ln184_fu_59248_p1() {
    zext_ln184_fu_59248_p1 = esl_zext<64,8>(select_ln190_fu_59208_p3.read());
}

void Block_codeRepl202676::thread_zext_ln203_10_fu_159564_p1() {
    zext_ln203_10_fu_159564_p1 = esl_zext<15,5>(xx_0_0_reg_56036.read());
}

void Block_codeRepl202676::thread_zext_ln203_11_fu_159568_p1() {
    zext_ln203_11_fu_159568_p1 = esl_zext<14,5>(xx_0_0_reg_56036.read());
}

void Block_codeRepl202676::thread_zext_ln203_12_fu_159577_p1() {
    zext_ln203_12_fu_159577_p1 = esl_zext<64,14>(add_ln203_7_fu_159572_p2.read());
}

void Block_codeRepl202676::thread_zext_ln203_1_fu_159491_p1() {
    zext_ln203_1_fu_159491_p1 = esl_zext<10,7>(tmp_93_fu_159483_p3.read());
}

void Block_codeRepl202676::thread_zext_ln203_2_fu_159513_p1() {
    zext_ln203_2_fu_159513_p1 = esl_zext<11,4>(yy_0_0_reg_56025.read());
}

void Block_codeRepl202676::thread_zext_ln203_3_fu_159517_p1() {
    zext_ln203_3_fu_159517_p1 = esl_zext<10,4>(yy_0_0_reg_56025.read());
}

void Block_codeRepl202676::thread_zext_ln203_4_fu_159542_p1() {
    zext_ln203_4_fu_159542_p1 = esl_zext<14,12>(tmp_144_fu_159534_p3.read());
}

void Block_codeRepl202676::thread_zext_ln203_5_fu_160074_p1() {
    zext_ln203_5_fu_160074_p1 = esl_zext<10,9>(tmp_99_fu_160067_p3.read());
}

void Block_codeRepl202676::thread_zext_ln203_6_fu_160085_p1() {
    zext_ln203_6_fu_160085_p1 = esl_zext<10,7>(tmp_100_fu_160078_p3.read());
}

void Block_codeRepl202676::thread_zext_ln203_7_fu_160120_p1() {
    zext_ln203_7_fu_160120_p1 = esl_zext<14,12>(tmp_145_fu_160112_p3.read());
}

void Block_codeRepl202676::thread_zext_ln203_8_fu_160130_p1() {
    zext_ln203_8_fu_160130_p1 = esl_zext<14,5>(select_ln940_2_reg_258729.read());
}

void Block_codeRepl202676::thread_zext_ln203_9_fu_160139_p1() {
    zext_ln203_9_fu_160139_p1 = esl_zext<64,14>(add_ln203_6_reg_258750.read());
}

void Block_codeRepl202676::thread_zext_ln203_fu_159479_p1() {
    zext_ln203_fu_159479_p1 = esl_zext<10,9>(tmp_92_fu_159471_p3.read());
}

void Block_codeRepl202676::thread_zext_ln231_fu_63390_p1() {
    zext_ln231_fu_63390_p1 = esl_zext<64,6>(select_ln231_reg_180602.read());
}

void Block_codeRepl202676::thread_zext_ln28_2_fu_57138_p1() {
    zext_ln28_2_fu_57138_p1 = esl_zext<19,18>(select_ln28_5_fu_57131_p3.read());
}

void Block_codeRepl202676::thread_zext_ln29_1_fu_57142_p1() {
    zext_ln29_1_fu_57142_p1 = esl_zext<10,9>(select_ln28_3_reg_176398.read());
}

void Block_codeRepl202676::thread_zext_ln29_2_fu_57109_p1() {
    zext_ln29_2_fu_57109_p1 = esl_zext<18,16>(add_ln32_5_reg_176407.read());
}

void Block_codeRepl202676::thread_zext_ln29_fu_56927_p1() {
    zext_ln29_fu_56927_p1 = esl_zext<18,16>(add_ln32_fu_56921_p2.read());
}

void Block_codeRepl202676::thread_zext_ln317_fu_64450_p1() {
    zext_ln317_fu_64450_p1 = esl_zext<64,7>(select_ln323_fu_64410_p3.read());
}

void Block_codeRepl202676::thread_zext_ln32_1_fu_57047_p1() {
    zext_ln32_1_fu_57047_p1 = esl_zext<16,14>(shl_ln32_1_mid1_fu_57039_p3.read());
}

void Block_codeRepl202676::thread_zext_ln32_2_fu_57191_p1() {
    zext_ln32_2_fu_57191_p1 = esl_zext<19,9>(select_ln32_fu_57183_p3.read());
}

void Block_codeRepl202676::thread_zext_ln32_3_fu_57366_p1() {
    zext_ln32_3_fu_57366_p1 = esl_zext<11,10>(tmp_2_fu_57359_p3.read());
}

void Block_codeRepl202676::thread_zext_ln32_4_fu_57377_p1() {
    zext_ln32_4_fu_57377_p1 = esl_zext<11,8>(tmp_4_fu_57370_p3.read());
}

void Block_codeRepl202676::thread_zext_ln32_5_fu_57407_p1() {
    zext_ln32_5_fu_57407_p1 = esl_zext<19,17>(tmp_91_fu_57400_p3.read());
}

void Block_codeRepl202676::thread_zext_ln32_6_fu_57422_p1() {
    zext_ln32_6_fu_57422_p1 = esl_zext<64,19>(add_ln32_11_fu_57417_p2.read());
}

void Block_codeRepl202676::thread_zext_ln32_fu_56917_p1() {
    zext_ln32_fu_56917_p1 = esl_zext<16,14>(shl_ln32_1_fu_56909_p3.read());
}

void Block_codeRepl202676::thread_zext_ln356_1_fu_159275_p1() {
    zext_ln356_1_fu_159275_p1 = esl_zext<11,8>(tmp_85_fu_159268_p3.read());
}

void Block_codeRepl202676::thread_zext_ln356_2_fu_159310_p1() {
    zext_ln356_2_fu_159310_p1 = esl_zext<15,13>(tmp_142_fu_159302_p3.read());
}

void Block_codeRepl202676::thread_zext_ln356_3_fu_159336_p1() {
    zext_ln356_3_fu_159336_p1 = esl_zext<15,5>(select_ln899_reg_258194.read());
}

void Block_codeRepl202676::thread_zext_ln356_4_fu_159352_p1() {
    zext_ln356_4_fu_159352_p1 = esl_zext<64,15>(add_ln356_3_reg_258240.read());
}

void Block_codeRepl202676::thread_zext_ln356_fu_159264_p1() {
    zext_ln356_fu_159264_p1 = esl_zext<11,10>(tmp_84_fu_159257_p3.read());
}

void Block_codeRepl202676::thread_zext_ln364_fu_72520_p1() {
    zext_ln364_fu_72520_p1 = esl_zext<64,7>(select_ln364_reg_187470.read());
}

void Block_codeRepl202676::thread_zext_ln450_fu_74188_p1() {
    zext_ln450_fu_74188_p1 = esl_zext<64,6>(select_ln456_fu_74148_p3.read());
}

void Block_codeRepl202676::thread_zext_ln497_fu_89892_p1() {
    zext_ln497_fu_89892_p1 = esl_zext<64,7>(select_ln497_reg_201637.read());
}

void Block_codeRepl202676::thread_zext_ln51_fu_57642_p1() {
    zext_ln51_fu_57642_p1 = esl_zext<64,9>(select_ln57_fu_57602_p3.read());
}

void Block_codeRepl202676::thread_zext_ln583_fu_91560_p1() {
    zext_ln583_fu_91560_p1 = esl_zext<64,5>(select_ln589_fu_91520_p3.read());
}

void Block_codeRepl202676::thread_zext_ln630_fu_107255_p1() {
    zext_ln630_fu_107255_p1 = esl_zext<64,7>(select_ln630_reg_215813.read());
}

void Block_codeRepl202676::thread_zext_ln673_fu_108862_p1() {
    zext_ln673_fu_108862_p1 = esl_zext<64,5>(select_ln679_fu_108822_p3.read());
}

void Block_codeRepl202676::thread_zext_ln720_fu_124556_p1() {
    zext_ln720_fu_124556_p1 = esl_zext<64,7>(select_ln720_reg_229938.read());
}

void Block_codeRepl202676::thread_zext_ln763_fu_126163_p1() {
    zext_ln763_fu_126163_p1 = esl_zext<64,5>(select_ln769_fu_126123_p3.read());
}

void Block_codeRepl202676::thread_zext_ln810_fu_141859_p1() {
    zext_ln810_fu_141859_p1 = esl_zext<64,7>(select_ln810_reg_244077.read());
}

void Block_codeRepl202676::thread_zext_ln853_fu_143466_p1() {
    zext_ln853_fu_143466_p1 = esl_zext<64,5>(select_ln859_fu_143426_p3.read());
}

void Block_codeRepl202676::thread_zext_ln898_fu_159185_p1() {
    zext_ln898_fu_159185_p1 = esl_zext<64,7>(select_ln898_1_fu_159177_p3.read());
}

void Block_codeRepl202676::thread_zext_ln899_fu_159285_p1() {
    zext_ln899_fu_159285_p1 = esl_zext<11,4>(select_ln899_1_reg_258199.read());
}

void Block_codeRepl202676::thread_zext_ln916_fu_159403_p1() {
    zext_ln916_fu_159403_p1 = esl_zext<64,6>(ff8_0_0_reg_56014.read());
}

void Block_codeRepl202676::thread_zext_ln930_fu_159843_p1() {
    zext_ln930_fu_159843_p1 = esl_zext<64,6>(ff9_0_0_reg_56071.read());
}

void Block_codeRepl202676::thread_zext_ln940_fu_160095_p1() {
    zext_ln940_fu_160095_p1 = esl_zext<10,4>(select_ln940_3_reg_258734.read());
}

void Block_codeRepl202676::thread_zext_ln98_fu_58492_p1() {
    zext_ln98_fu_58492_p1 = esl_zext<64,5>(select_ln98_reg_177103.read());
}

}

