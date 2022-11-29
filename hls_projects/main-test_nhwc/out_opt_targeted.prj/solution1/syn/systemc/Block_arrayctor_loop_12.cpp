#include "Block_arrayctor_loop.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Block_arrayctor_loop::thread_weight_conv4_2_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_33_V_address0 = weight_conv4_2_33_2_reg_96710.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_33_V_address0 = weight_conv4_2_33_s_reg_96700.read();
        } else {
            weight_conv4_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_33_V_address1() {
    weight_conv4_2_33_V_address1 = weight_conv4_2_33_1_reg_96705.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_34_V_address0 = weight_conv4_2_34_2_reg_96725.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_34_V_address0 = weight_conv4_2_34_s_reg_96715.read();
        } else {
            weight_conv4_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_34_V_address1() {
    weight_conv4_2_34_V_address1 = weight_conv4_2_34_1_reg_96720.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_35_V_address0 = weight_conv4_2_35_2_reg_96740.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_35_V_address0 = weight_conv4_2_35_s_reg_96730.read();
        } else {
            weight_conv4_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_35_V_address1() {
    weight_conv4_2_35_V_address1 = weight_conv4_2_35_1_reg_96735.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_36_V_address0 = weight_conv4_2_36_2_reg_96755.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_36_V_address0 = weight_conv4_2_36_s_reg_96745.read();
        } else {
            weight_conv4_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_36_V_address1() {
    weight_conv4_2_36_V_address1 = weight_conv4_2_36_1_reg_96750.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_37_V_address0 = weight_conv4_2_37_2_reg_96770.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_37_V_address0 = weight_conv4_2_37_s_reg_96760.read();
        } else {
            weight_conv4_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_37_V_address1() {
    weight_conv4_2_37_V_address1 = weight_conv4_2_37_1_reg_96765.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_38_V_address0 = weight_conv4_2_38_2_reg_96785.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_38_V_address0 = weight_conv4_2_38_s_reg_96775.read();
        } else {
            weight_conv4_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_38_V_address1() {
    weight_conv4_2_38_V_address1 = weight_conv4_2_38_1_reg_96780.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_39_V_address0 = weight_conv4_2_39_2_reg_96800.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_39_V_address0 = weight_conv4_2_39_s_reg_96790.read();
        } else {
            weight_conv4_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_39_V_address1() {
    weight_conv4_2_39_V_address1 = weight_conv4_2_39_1_reg_96795.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_3_V_address0 = weight_conv4_2_3_V_3_reg_96260.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_3_V_address0 = weight_conv4_2_3_V_1_reg_96250.read();
        } else {
            weight_conv4_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_3_V_address1() {
    weight_conv4_2_3_V_address1 = weight_conv4_2_3_V_2_reg_96255.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_40_V_address0 = weight_conv4_2_40_2_reg_96815.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_40_V_address0 = weight_conv4_2_40_s_reg_96805.read();
        } else {
            weight_conv4_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_40_V_address1() {
    weight_conv4_2_40_V_address1 = weight_conv4_2_40_1_reg_96810.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_41_V_address0 = weight_conv4_2_41_2_reg_96830.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_41_V_address0 = weight_conv4_2_41_s_reg_96820.read();
        } else {
            weight_conv4_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_41_V_address1() {
    weight_conv4_2_41_V_address1 = weight_conv4_2_41_1_reg_96825.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_42_V_address0 = weight_conv4_2_42_2_reg_96845.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_42_V_address0 = weight_conv4_2_42_s_reg_96835.read();
        } else {
            weight_conv4_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_42_V_address1() {
    weight_conv4_2_42_V_address1 = weight_conv4_2_42_1_reg_96840.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_43_V_address0 = weight_conv4_2_43_2_reg_96860.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_43_V_address0 = weight_conv4_2_43_s_reg_96850.read();
        } else {
            weight_conv4_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_43_V_address1() {
    weight_conv4_2_43_V_address1 = weight_conv4_2_43_1_reg_96855.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_44_V_address0 = weight_conv4_2_44_2_reg_96875.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_44_V_address0 = weight_conv4_2_44_s_reg_96865.read();
        } else {
            weight_conv4_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_44_V_address1() {
    weight_conv4_2_44_V_address1 = weight_conv4_2_44_1_reg_96870.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_45_V_address0 = weight_conv4_2_45_2_reg_96890.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_45_V_address0 = weight_conv4_2_45_s_reg_96880.read();
        } else {
            weight_conv4_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_45_V_address1() {
    weight_conv4_2_45_V_address1 = weight_conv4_2_45_1_reg_96885.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_46_V_address0 = weight_conv4_2_46_2_reg_96905.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_46_V_address0 = weight_conv4_2_46_s_reg_96895.read();
        } else {
            weight_conv4_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_46_V_address1() {
    weight_conv4_2_46_V_address1 = weight_conv4_2_46_1_reg_96900.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_47_V_address0 = weight_conv4_2_47_2_reg_96920.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_47_V_address0 = weight_conv4_2_47_s_reg_96910.read();
        } else {
            weight_conv4_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_47_V_address1() {
    weight_conv4_2_47_V_address1 = weight_conv4_2_47_1_reg_96915.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_48_V_address0 = weight_conv4_2_48_2_reg_96935.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_48_V_address0 = weight_conv4_2_48_s_reg_96925.read();
        } else {
            weight_conv4_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_48_V_address1() {
    weight_conv4_2_48_V_address1 = weight_conv4_2_48_1_reg_96930.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_49_V_address0 = weight_conv4_2_49_2_reg_96950.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_49_V_address0 = weight_conv4_2_49_s_reg_96940.read();
        } else {
            weight_conv4_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_49_V_address1() {
    weight_conv4_2_49_V_address1 = weight_conv4_2_49_1_reg_96945.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_4_V_address0 = weight_conv4_2_4_V_3_reg_96275.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_4_V_address0 = weight_conv4_2_4_V_1_reg_96265.read();
        } else {
            weight_conv4_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_4_V_address1() {
    weight_conv4_2_4_V_address1 = weight_conv4_2_4_V_2_reg_96270.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_50_V_address0 = weight_conv4_2_50_2_reg_96965.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_50_V_address0 = weight_conv4_2_50_s_reg_96955.read();
        } else {
            weight_conv4_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_50_V_address1() {
    weight_conv4_2_50_V_address1 = weight_conv4_2_50_1_reg_96960.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_51_V_address0 = weight_conv4_2_51_2_reg_96980.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_51_V_address0 = weight_conv4_2_51_s_reg_96970.read();
        } else {
            weight_conv4_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_51_V_address1() {
    weight_conv4_2_51_V_address1 = weight_conv4_2_51_1_reg_96975.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_52_V_address0 = weight_conv4_2_52_2_reg_96995.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_52_V_address0 = weight_conv4_2_52_s_reg_96985.read();
        } else {
            weight_conv4_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_52_V_address1() {
    weight_conv4_2_52_V_address1 = weight_conv4_2_52_1_reg_96990.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_53_V_address0 = weight_conv4_2_53_2_reg_97010.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_53_V_address0 = weight_conv4_2_53_s_reg_97000.read();
        } else {
            weight_conv4_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_53_V_address1() {
    weight_conv4_2_53_V_address1 = weight_conv4_2_53_1_reg_97005.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_54_V_address0 = weight_conv4_2_54_2_reg_97025.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_54_V_address0 = weight_conv4_2_54_s_reg_97015.read();
        } else {
            weight_conv4_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_54_V_address1() {
    weight_conv4_2_54_V_address1 = weight_conv4_2_54_1_reg_97020.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_55_V_address0 = weight_conv4_2_55_2_reg_97040.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_55_V_address0 = weight_conv4_2_55_s_reg_97030.read();
        } else {
            weight_conv4_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_55_V_address1() {
    weight_conv4_2_55_V_address1 = weight_conv4_2_55_1_reg_97035.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_56_V_address0 = weight_conv4_2_56_2_reg_97055.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_56_V_address0 = weight_conv4_2_56_s_reg_97045.read();
        } else {
            weight_conv4_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_56_V_address1() {
    weight_conv4_2_56_V_address1 = weight_conv4_2_56_1_reg_97050.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_57_V_address0 = weight_conv4_2_57_2_reg_97070.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_57_V_address0 = weight_conv4_2_57_s_reg_97060.read();
        } else {
            weight_conv4_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_57_V_address1() {
    weight_conv4_2_57_V_address1 = weight_conv4_2_57_1_reg_97065.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_58_V_address0 = weight_conv4_2_58_2_reg_97085.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_58_V_address0 = weight_conv4_2_58_s_reg_97075.read();
        } else {
            weight_conv4_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_58_V_address1() {
    weight_conv4_2_58_V_address1 = weight_conv4_2_58_1_reg_97080.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_59_V_address0 = weight_conv4_2_59_2_reg_97100.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_59_V_address0 = weight_conv4_2_59_s_reg_97090.read();
        } else {
            weight_conv4_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_59_V_address1() {
    weight_conv4_2_59_V_address1 = weight_conv4_2_59_1_reg_97095.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_5_V_address0 = weight_conv4_2_5_V_3_reg_96290.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_5_V_address0 = weight_conv4_2_5_V_1_reg_96280.read();
        } else {
            weight_conv4_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_5_V_address1() {
    weight_conv4_2_5_V_address1 = weight_conv4_2_5_V_2_reg_96285.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_60_V_address0 = weight_conv4_2_60_2_reg_97115.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_60_V_address0 = weight_conv4_2_60_s_reg_97105.read();
        } else {
            weight_conv4_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_60_V_address1() {
    weight_conv4_2_60_V_address1 = weight_conv4_2_60_1_reg_97110.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_61_V_address0 = weight_conv4_2_61_2_reg_97130.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_61_V_address0 = weight_conv4_2_61_s_reg_97120.read();
        } else {
            weight_conv4_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_61_V_address1() {
    weight_conv4_2_61_V_address1 = weight_conv4_2_61_1_reg_97125.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_62_V_address0 = weight_conv4_2_62_2_reg_97145.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_62_V_address0 = weight_conv4_2_62_s_reg_97135.read();
        } else {
            weight_conv4_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_62_V_address1() {
    weight_conv4_2_62_V_address1 = weight_conv4_2_62_1_reg_97140.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_63_V_address0 = weight_conv4_2_63_2_reg_97160.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_63_V_address0 = weight_conv4_2_63_s_reg_97150.read();
        } else {
            weight_conv4_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_63_V_address1() {
    weight_conv4_2_63_V_address1 = weight_conv4_2_63_1_reg_97155.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_6_V_address0 = weight_conv4_2_6_V_3_reg_96305.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_6_V_address0 = weight_conv4_2_6_V_1_reg_96295.read();
        } else {
            weight_conv4_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_6_V_address1() {
    weight_conv4_2_6_V_address1 = weight_conv4_2_6_V_2_reg_96300.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_7_V_address0 = weight_conv4_2_7_V_3_reg_96320.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_7_V_address0 = weight_conv4_2_7_V_1_reg_96310.read();
        } else {
            weight_conv4_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_7_V_address1() {
    weight_conv4_2_7_V_address1 = weight_conv4_2_7_V_2_reg_96315.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_8_V_address0 = weight_conv4_2_8_V_3_reg_96335.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_8_V_address0 = weight_conv4_2_8_V_1_reg_96325.read();
        } else {
            weight_conv4_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_8_V_address1() {
    weight_conv4_2_8_V_address1 = weight_conv4_2_8_V_2_reg_96330.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_9_V_address0 = weight_conv4_2_9_V_3_reg_96350.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_9_V_address0 = weight_conv4_2_9_V_1_reg_96340.read();
        } else {
            weight_conv4_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_9_V_address1() {
    weight_conv4_2_9_V_address1 = weight_conv4_2_9_V_2_reg_96345.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_0_V_address0 = weight_conv5_0_0_V_3_reg_100267.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_0_V_address0 = weight_conv5_0_0_V_1_reg_100257.read();
        } else {
            weight_conv5_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_0_V_address1() {
    weight_conv5_0_0_V_address1 = weight_conv5_0_0_V_2_reg_100262.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_10_V_address0 = weight_conv5_0_10_2_reg_100417.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_10_V_address0 = weight_conv5_0_10_s_reg_100407.read();
        } else {
            weight_conv5_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_10_V_address1() {
    weight_conv5_0_10_V_address1 = weight_conv5_0_10_1_reg_100412.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_11_V_address0 = weight_conv5_0_11_2_reg_100432.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_11_V_address0 = weight_conv5_0_11_s_reg_100422.read();
        } else {
            weight_conv5_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_11_V_address1() {
    weight_conv5_0_11_V_address1 = weight_conv5_0_11_1_reg_100427.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_12_V_address0 = weight_conv5_0_12_2_reg_100447.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_12_V_address0 = weight_conv5_0_12_s_reg_100437.read();
        } else {
            weight_conv5_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_12_V_address1() {
    weight_conv5_0_12_V_address1 = weight_conv5_0_12_1_reg_100442.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_13_V_address0 = weight_conv5_0_13_2_reg_100462.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_13_V_address0 = weight_conv5_0_13_s_reg_100452.read();
        } else {
            weight_conv5_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_13_V_address1() {
    weight_conv5_0_13_V_address1 = weight_conv5_0_13_1_reg_100457.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_14_V_address0 = weight_conv5_0_14_2_reg_100477.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_14_V_address0 = weight_conv5_0_14_s_reg_100467.read();
        } else {
            weight_conv5_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_14_V_address1() {
    weight_conv5_0_14_V_address1 = weight_conv5_0_14_1_reg_100472.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_15_V_address0 = weight_conv5_0_15_2_reg_100492.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_15_V_address0 = weight_conv5_0_15_s_reg_100482.read();
        } else {
            weight_conv5_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_15_V_address1() {
    weight_conv5_0_15_V_address1 = weight_conv5_0_15_1_reg_100487.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_16_V_address0 = weight_conv5_0_16_2_reg_100507.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_16_V_address0 = weight_conv5_0_16_s_reg_100497.read();
        } else {
            weight_conv5_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_16_V_address1() {
    weight_conv5_0_16_V_address1 = weight_conv5_0_16_1_reg_100502.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_17_V_address0 = weight_conv5_0_17_2_reg_100522.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_17_V_address0 = weight_conv5_0_17_s_reg_100512.read();
        } else {
            weight_conv5_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_17_V_address1() {
    weight_conv5_0_17_V_address1 = weight_conv5_0_17_1_reg_100517.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_18_V_address0 = weight_conv5_0_18_2_reg_100537.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_18_V_address0 = weight_conv5_0_18_s_reg_100527.read();
        } else {
            weight_conv5_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_18_V_address1() {
    weight_conv5_0_18_V_address1 = weight_conv5_0_18_1_reg_100532.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_19_V_address0 = weight_conv5_0_19_2_reg_100552.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_19_V_address0 = weight_conv5_0_19_s_reg_100542.read();
        } else {
            weight_conv5_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_19_V_address1() {
    weight_conv5_0_19_V_address1 = weight_conv5_0_19_1_reg_100547.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_1_V_address0 = weight_conv5_0_1_V_3_reg_100282.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_1_V_address0 = weight_conv5_0_1_V_1_reg_100272.read();
        } else {
            weight_conv5_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_1_V_address1() {
    weight_conv5_0_1_V_address1 = weight_conv5_0_1_V_2_reg_100277.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_20_V_address0 = weight_conv5_0_20_2_reg_100567.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_20_V_address0 = weight_conv5_0_20_s_reg_100557.read();
        } else {
            weight_conv5_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_20_V_address1() {
    weight_conv5_0_20_V_address1 = weight_conv5_0_20_1_reg_100562.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_21_V_address0 = weight_conv5_0_21_2_reg_100582.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_21_V_address0 = weight_conv5_0_21_s_reg_100572.read();
        } else {
            weight_conv5_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_21_V_address1() {
    weight_conv5_0_21_V_address1 = weight_conv5_0_21_1_reg_100577.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_22_V_address0 = weight_conv5_0_22_2_reg_100597.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_22_V_address0 = weight_conv5_0_22_s_reg_100587.read();
        } else {
            weight_conv5_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_22_V_address1() {
    weight_conv5_0_22_V_address1 = weight_conv5_0_22_1_reg_100592.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_23_V_address0 = weight_conv5_0_23_2_reg_100612.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_23_V_address0 = weight_conv5_0_23_s_reg_100602.read();
        } else {
            weight_conv5_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_23_V_address1() {
    weight_conv5_0_23_V_address1 = weight_conv5_0_23_1_reg_100607.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_24_V_address0 = weight_conv5_0_24_2_reg_100627.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_24_V_address0 = weight_conv5_0_24_s_reg_100617.read();
        } else {
            weight_conv5_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_24_V_address1() {
    weight_conv5_0_24_V_address1 = weight_conv5_0_24_1_reg_100622.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_25_V_address0 = weight_conv5_0_25_2_reg_100642.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_25_V_address0 = weight_conv5_0_25_s_reg_100632.read();
        } else {
            weight_conv5_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_25_V_address1() {
    weight_conv5_0_25_V_address1 = weight_conv5_0_25_1_reg_100637.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_26_V_address0 = weight_conv5_0_26_2_reg_100657.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_26_V_address0 = weight_conv5_0_26_s_reg_100647.read();
        } else {
            weight_conv5_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_26_V_address1() {
    weight_conv5_0_26_V_address1 = weight_conv5_0_26_1_reg_100652.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_27_V_address0 = weight_conv5_0_27_2_reg_100672.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_27_V_address0 = weight_conv5_0_27_s_reg_100662.read();
        } else {
            weight_conv5_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_27_V_address1() {
    weight_conv5_0_27_V_address1 = weight_conv5_0_27_1_reg_100667.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_28_V_address0 = weight_conv5_0_28_2_reg_100687.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_28_V_address0 = weight_conv5_0_28_s_reg_100677.read();
        } else {
            weight_conv5_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_28_V_address1() {
    weight_conv5_0_28_V_address1 = weight_conv5_0_28_1_reg_100682.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_29_V_address0 = weight_conv5_0_29_2_reg_100702.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_29_V_address0 = weight_conv5_0_29_s_reg_100692.read();
        } else {
            weight_conv5_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_29_V_address1() {
    weight_conv5_0_29_V_address1 = weight_conv5_0_29_1_reg_100697.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_2_V_address0 = weight_conv5_0_2_V_3_reg_100297.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_2_V_address0 = weight_conv5_0_2_V_1_reg_100287.read();
        } else {
            weight_conv5_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_2_V_address1() {
    weight_conv5_0_2_V_address1 = weight_conv5_0_2_V_2_reg_100292.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_30_V_address0 = weight_conv5_0_30_2_reg_100717.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_30_V_address0 = weight_conv5_0_30_s_reg_100707.read();
        } else {
            weight_conv5_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_30_V_address1() {
    weight_conv5_0_30_V_address1 = weight_conv5_0_30_1_reg_100712.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_31_V_address0 = weight_conv5_0_31_2_reg_100732.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_31_V_address0 = weight_conv5_0_31_s_reg_100722.read();
        } else {
            weight_conv5_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_31_V_address1() {
    weight_conv5_0_31_V_address1 = weight_conv5_0_31_1_reg_100727.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_32_V_address0 = weight_conv5_0_32_2_reg_100747.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_32_V_address0 = weight_conv5_0_32_s_reg_100737.read();
        } else {
            weight_conv5_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_32_V_address1() {
    weight_conv5_0_32_V_address1 = weight_conv5_0_32_1_reg_100742.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_33_V_address0 = weight_conv5_0_33_2_reg_100762.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_33_V_address0 = weight_conv5_0_33_s_reg_100752.read();
        } else {
            weight_conv5_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_33_V_address1() {
    weight_conv5_0_33_V_address1 = weight_conv5_0_33_1_reg_100757.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_34_V_address0 = weight_conv5_0_34_2_reg_100777.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_34_V_address0 = weight_conv5_0_34_s_reg_100767.read();
        } else {
            weight_conv5_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_34_V_address1() {
    weight_conv5_0_34_V_address1 = weight_conv5_0_34_1_reg_100772.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_35_V_address0 = weight_conv5_0_35_2_reg_100792.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_35_V_address0 = weight_conv5_0_35_s_reg_100782.read();
        } else {
            weight_conv5_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_35_V_address1() {
    weight_conv5_0_35_V_address1 = weight_conv5_0_35_1_reg_100787.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_36_V_address0 = weight_conv5_0_36_2_reg_100807.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_36_V_address0 = weight_conv5_0_36_s_reg_100797.read();
        } else {
            weight_conv5_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_36_V_address1() {
    weight_conv5_0_36_V_address1 = weight_conv5_0_36_1_reg_100802.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_37_V_address0 = weight_conv5_0_37_2_reg_100822.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_37_V_address0 = weight_conv5_0_37_s_reg_100812.read();
        } else {
            weight_conv5_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_37_V_address1() {
    weight_conv5_0_37_V_address1 = weight_conv5_0_37_1_reg_100817.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_38_V_address0 = weight_conv5_0_38_2_reg_100837.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_38_V_address0 = weight_conv5_0_38_s_reg_100827.read();
        } else {
            weight_conv5_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_38_V_address1() {
    weight_conv5_0_38_V_address1 = weight_conv5_0_38_1_reg_100832.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_39_V_address0 = weight_conv5_0_39_2_reg_100852.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_39_V_address0 = weight_conv5_0_39_s_reg_100842.read();
        } else {
            weight_conv5_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_39_V_address1() {
    weight_conv5_0_39_V_address1 = weight_conv5_0_39_1_reg_100847.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_3_V_address0 = weight_conv5_0_3_V_3_reg_100312.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_3_V_address0 = weight_conv5_0_3_V_1_reg_100302.read();
        } else {
            weight_conv5_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_3_V_address1() {
    weight_conv5_0_3_V_address1 = weight_conv5_0_3_V_2_reg_100307.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_40_V_address0 = weight_conv5_0_40_2_reg_100867.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_40_V_address0 = weight_conv5_0_40_s_reg_100857.read();
        } else {
            weight_conv5_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_40_V_address1() {
    weight_conv5_0_40_V_address1 = weight_conv5_0_40_1_reg_100862.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_41_V_address0 = weight_conv5_0_41_2_reg_100882.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_41_V_address0 = weight_conv5_0_41_s_reg_100872.read();
        } else {
            weight_conv5_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_41_V_address1() {
    weight_conv5_0_41_V_address1 = weight_conv5_0_41_1_reg_100877.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_42_V_address0 = weight_conv5_0_42_2_reg_100897.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_42_V_address0 = weight_conv5_0_42_s_reg_100887.read();
        } else {
            weight_conv5_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_42_V_address1() {
    weight_conv5_0_42_V_address1 = weight_conv5_0_42_1_reg_100892.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_43_V_address0 = weight_conv5_0_43_2_reg_100912.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_43_V_address0 = weight_conv5_0_43_s_reg_100902.read();
        } else {
            weight_conv5_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_43_V_address1() {
    weight_conv5_0_43_V_address1 = weight_conv5_0_43_1_reg_100907.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_44_V_address0 = weight_conv5_0_44_2_reg_100927.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_44_V_address0 = weight_conv5_0_44_s_reg_100917.read();
        } else {
            weight_conv5_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_44_V_address1() {
    weight_conv5_0_44_V_address1 = weight_conv5_0_44_1_reg_100922.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_45_V_address0 = weight_conv5_0_45_2_reg_100942.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_45_V_address0 = weight_conv5_0_45_s_reg_100932.read();
        } else {
            weight_conv5_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_45_V_address1() {
    weight_conv5_0_45_V_address1 = weight_conv5_0_45_1_reg_100937.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_46_V_address0 = weight_conv5_0_46_2_reg_100957.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_46_V_address0 = weight_conv5_0_46_s_reg_100947.read();
        } else {
            weight_conv5_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_46_V_address1() {
    weight_conv5_0_46_V_address1 = weight_conv5_0_46_1_reg_100952.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_47_V_address0 = weight_conv5_0_47_2_reg_100972.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_47_V_address0 = weight_conv5_0_47_s_reg_100962.read();
        } else {
            weight_conv5_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_47_V_address1() {
    weight_conv5_0_47_V_address1 = weight_conv5_0_47_1_reg_100967.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_48_V_address0 = weight_conv5_0_48_2_reg_100987.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_48_V_address0 = weight_conv5_0_48_s_reg_100977.read();
        } else {
            weight_conv5_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_48_V_address1() {
    weight_conv5_0_48_V_address1 = weight_conv5_0_48_1_reg_100982.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_49_V_address0 = weight_conv5_0_49_2_reg_101002.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_49_V_address0 = weight_conv5_0_49_s_reg_100992.read();
        } else {
            weight_conv5_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_49_V_address1() {
    weight_conv5_0_49_V_address1 = weight_conv5_0_49_1_reg_100997.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_4_V_address0 = weight_conv5_0_4_V_3_reg_100327.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_4_V_address0 = weight_conv5_0_4_V_1_reg_100317.read();
        } else {
            weight_conv5_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_4_V_address1() {
    weight_conv5_0_4_V_address1 = weight_conv5_0_4_V_2_reg_100322.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_50_V_address0 = weight_conv5_0_50_2_reg_101017.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_50_V_address0 = weight_conv5_0_50_s_reg_101007.read();
        } else {
            weight_conv5_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_50_V_address1() {
    weight_conv5_0_50_V_address1 = weight_conv5_0_50_1_reg_101012.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_51_V_address0 = weight_conv5_0_51_2_reg_101032.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_51_V_address0 = weight_conv5_0_51_s_reg_101022.read();
        } else {
            weight_conv5_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_51_V_address1() {
    weight_conv5_0_51_V_address1 = weight_conv5_0_51_1_reg_101027.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_52_V_address0 = weight_conv5_0_52_2_reg_101047.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_52_V_address0 = weight_conv5_0_52_s_reg_101037.read();
        } else {
            weight_conv5_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_52_V_address1() {
    weight_conv5_0_52_V_address1 = weight_conv5_0_52_1_reg_101042.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_53_V_address0 = weight_conv5_0_53_2_reg_101062.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_53_V_address0 = weight_conv5_0_53_s_reg_101052.read();
        } else {
            weight_conv5_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_53_V_address1() {
    weight_conv5_0_53_V_address1 = weight_conv5_0_53_1_reg_101057.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_54_V_address0 = weight_conv5_0_54_2_reg_101077.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_54_V_address0 = weight_conv5_0_54_s_reg_101067.read();
        } else {
            weight_conv5_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_54_V_address1() {
    weight_conv5_0_54_V_address1 = weight_conv5_0_54_1_reg_101072.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_55_V_address0 = weight_conv5_0_55_2_reg_101092.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_55_V_address0 = weight_conv5_0_55_s_reg_101082.read();
        } else {
            weight_conv5_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_55_V_address1() {
    weight_conv5_0_55_V_address1 = weight_conv5_0_55_1_reg_101087.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_56_V_address0 = weight_conv5_0_56_2_reg_101107.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_56_V_address0 = weight_conv5_0_56_s_reg_101097.read();
        } else {
            weight_conv5_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_56_V_address1() {
    weight_conv5_0_56_V_address1 = weight_conv5_0_56_1_reg_101102.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_57_V_address0 = weight_conv5_0_57_2_reg_101122.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_57_V_address0 = weight_conv5_0_57_s_reg_101112.read();
        } else {
            weight_conv5_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_57_V_address1() {
    weight_conv5_0_57_V_address1 = weight_conv5_0_57_1_reg_101117.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_58_V_address0 = weight_conv5_0_58_2_reg_101137.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_58_V_address0 = weight_conv5_0_58_s_reg_101127.read();
        } else {
            weight_conv5_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_58_V_address1() {
    weight_conv5_0_58_V_address1 = weight_conv5_0_58_1_reg_101132.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_59_V_address0 = weight_conv5_0_59_2_reg_101152.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_59_V_address0 = weight_conv5_0_59_s_reg_101142.read();
        } else {
            weight_conv5_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_59_V_address1() {
    weight_conv5_0_59_V_address1 = weight_conv5_0_59_1_reg_101147.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_5_V_address0 = weight_conv5_0_5_V_3_reg_100342.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_5_V_address0 = weight_conv5_0_5_V_1_reg_100332.read();
        } else {
            weight_conv5_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_5_V_address1() {
    weight_conv5_0_5_V_address1 = weight_conv5_0_5_V_2_reg_100337.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_60_V_address0 = weight_conv5_0_60_2_reg_101167.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_60_V_address0 = weight_conv5_0_60_s_reg_101157.read();
        } else {
            weight_conv5_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_60_V_address1() {
    weight_conv5_0_60_V_address1 = weight_conv5_0_60_1_reg_101162.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_61_V_address0 = weight_conv5_0_61_2_reg_101182.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_61_V_address0 = weight_conv5_0_61_s_reg_101172.read();
        } else {
            weight_conv5_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_61_V_address1() {
    weight_conv5_0_61_V_address1 = weight_conv5_0_61_1_reg_101177.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_62_V_address0 = weight_conv5_0_62_2_reg_101197.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_62_V_address0 = weight_conv5_0_62_s_reg_101187.read();
        } else {
            weight_conv5_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_62_V_address1() {
    weight_conv5_0_62_V_address1 = weight_conv5_0_62_1_reg_101192.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_63_V_address0 = weight_conv5_0_63_2_reg_101212.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_63_V_address0 = weight_conv5_0_63_s_reg_101202.read();
        } else {
            weight_conv5_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_63_V_address1() {
    weight_conv5_0_63_V_address1 = weight_conv5_0_63_1_reg_101207.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_6_V_address0 = weight_conv5_0_6_V_3_reg_100357.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_6_V_address0 = weight_conv5_0_6_V_1_reg_100347.read();
        } else {
            weight_conv5_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_6_V_address1() {
    weight_conv5_0_6_V_address1 = weight_conv5_0_6_V_2_reg_100352.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_7_V_address0 = weight_conv5_0_7_V_3_reg_100372.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_7_V_address0 = weight_conv5_0_7_V_1_reg_100362.read();
        } else {
            weight_conv5_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_7_V_address1() {
    weight_conv5_0_7_V_address1 = weight_conv5_0_7_V_2_reg_100367.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_8_V_address0 = weight_conv5_0_8_V_3_reg_100387.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_8_V_address0 = weight_conv5_0_8_V_1_reg_100377.read();
        } else {
            weight_conv5_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_8_V_address1() {
    weight_conv5_0_8_V_address1 = weight_conv5_0_8_V_2_reg_100382.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_0_9_V_address0 = weight_conv5_0_9_V_3_reg_100402.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_0_9_V_address0 = weight_conv5_0_9_V_1_reg_100392.read();
        } else {
            weight_conv5_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_9_V_address1() {
    weight_conv5_0_9_V_address1 = weight_conv5_0_9_V_2_reg_100397.read();
}

void Block_arrayctor_loop::thread_weight_conv5_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_0_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_0_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_0_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_0_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_0_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_0_V_address0 = weight_conv5_1_0_V_2_reg_101222.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_0_V_address0 = weight_conv5_1_0_V_1_reg_101217.read();
        } else {
            weight_conv5_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_0_V_address1() {
    weight_conv5_1_0_V_address1 = weight_conv5_1_0_V_3_reg_101227.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_10_V_address0 = weight_conv5_1_10_1_reg_101372.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_10_V_address0 = weight_conv5_1_10_s_reg_101367.read();
        } else {
            weight_conv5_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_10_V_address1() {
    weight_conv5_1_10_V_address1 = weight_conv5_1_10_2_reg_101377.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_11_V_address0 = weight_conv5_1_11_1_reg_101387.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_11_V_address0 = weight_conv5_1_11_s_reg_101382.read();
        } else {
            weight_conv5_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_11_V_address1() {
    weight_conv5_1_11_V_address1 = weight_conv5_1_11_2_reg_101392.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_12_V_address0 = weight_conv5_1_12_1_reg_101402.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_12_V_address0 = weight_conv5_1_12_s_reg_101397.read();
        } else {
            weight_conv5_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_12_V_address1() {
    weight_conv5_1_12_V_address1 = weight_conv5_1_12_2_reg_101407.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_13_V_address0 = weight_conv5_1_13_1_reg_101417.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_13_V_address0 = weight_conv5_1_13_s_reg_101412.read();
        } else {
            weight_conv5_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_13_V_address1() {
    weight_conv5_1_13_V_address1 = weight_conv5_1_13_2_reg_101422.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_14_V_address0 = weight_conv5_1_14_1_reg_101432.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_14_V_address0 = weight_conv5_1_14_s_reg_101427.read();
        } else {
            weight_conv5_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_14_V_address1() {
    weight_conv5_1_14_V_address1 = weight_conv5_1_14_2_reg_101437.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_15_V_address0 = weight_conv5_1_15_1_reg_101447.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_15_V_address0 = weight_conv5_1_15_s_reg_101442.read();
        } else {
            weight_conv5_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_15_V_address1() {
    weight_conv5_1_15_V_address1 = weight_conv5_1_15_2_reg_101452.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_16_V_address0 = weight_conv5_1_16_1_reg_101462.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_16_V_address0 = weight_conv5_1_16_s_reg_101457.read();
        } else {
            weight_conv5_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_16_V_address1() {
    weight_conv5_1_16_V_address1 = weight_conv5_1_16_2_reg_101467.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_17_V_address0 = weight_conv5_1_17_1_reg_101477.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_17_V_address0 = weight_conv5_1_17_s_reg_101472.read();
        } else {
            weight_conv5_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_17_V_address1() {
    weight_conv5_1_17_V_address1 = weight_conv5_1_17_2_reg_101482.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_18_V_address0 = weight_conv5_1_18_1_reg_101492.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_18_V_address0 = weight_conv5_1_18_s_reg_101487.read();
        } else {
            weight_conv5_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_18_V_address1() {
    weight_conv5_1_18_V_address1 = weight_conv5_1_18_2_reg_101497.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_19_V_address0 = weight_conv5_1_19_1_reg_101507.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_19_V_address0 = weight_conv5_1_19_s_reg_101502.read();
        } else {
            weight_conv5_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_19_V_address1() {
    weight_conv5_1_19_V_address1 = weight_conv5_1_19_2_reg_101512.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_1_V_address0 = weight_conv5_1_1_V_2_reg_101237.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_1_V_address0 = weight_conv5_1_1_V_1_reg_101232.read();
        } else {
            weight_conv5_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_1_V_address1() {
    weight_conv5_1_1_V_address1 = weight_conv5_1_1_V_3_reg_101242.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_20_V_address0 = weight_conv5_1_20_1_reg_101522.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_20_V_address0 = weight_conv5_1_20_s_reg_101517.read();
        } else {
            weight_conv5_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_20_V_address1() {
    weight_conv5_1_20_V_address1 = weight_conv5_1_20_2_reg_101527.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_21_V_address0 = weight_conv5_1_21_1_reg_101537.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_21_V_address0 = weight_conv5_1_21_s_reg_101532.read();
        } else {
            weight_conv5_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_21_V_address1() {
    weight_conv5_1_21_V_address1 = weight_conv5_1_21_2_reg_101542.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_22_V_address0 = weight_conv5_1_22_1_reg_101552.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_22_V_address0 = weight_conv5_1_22_s_reg_101547.read();
        } else {
            weight_conv5_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_22_V_address1() {
    weight_conv5_1_22_V_address1 = weight_conv5_1_22_2_reg_101557.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_23_V_address0 = weight_conv5_1_23_1_reg_101567.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_23_V_address0 = weight_conv5_1_23_s_reg_101562.read();
        } else {
            weight_conv5_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_23_V_address1() {
    weight_conv5_1_23_V_address1 = weight_conv5_1_23_2_reg_101572.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_24_V_address0 = weight_conv5_1_24_1_reg_101582.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_24_V_address0 = weight_conv5_1_24_s_reg_101577.read();
        } else {
            weight_conv5_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_24_V_address1() {
    weight_conv5_1_24_V_address1 = weight_conv5_1_24_2_reg_101587.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_25_V_address0 = weight_conv5_1_25_1_reg_101597.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_25_V_address0 = weight_conv5_1_25_s_reg_101592.read();
        } else {
            weight_conv5_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_25_V_address1() {
    weight_conv5_1_25_V_address1 = weight_conv5_1_25_2_reg_101602.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_26_V_address0 = weight_conv5_1_26_1_reg_101612.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_26_V_address0 = weight_conv5_1_26_s_reg_101607.read();
        } else {
            weight_conv5_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_26_V_address1() {
    weight_conv5_1_26_V_address1 = weight_conv5_1_26_2_reg_101617.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_27_V_address0 = weight_conv5_1_27_1_reg_101627.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_27_V_address0 = weight_conv5_1_27_s_reg_101622.read();
        } else {
            weight_conv5_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_27_V_address1() {
    weight_conv5_1_27_V_address1 = weight_conv5_1_27_2_reg_101632.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_28_V_address0 = weight_conv5_1_28_1_reg_101642.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_28_V_address0 = weight_conv5_1_28_s_reg_101637.read();
        } else {
            weight_conv5_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_28_V_address1() {
    weight_conv5_1_28_V_address1 = weight_conv5_1_28_2_reg_101647.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_29_V_address0 = weight_conv5_1_29_1_reg_101657.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_29_V_address0 = weight_conv5_1_29_s_reg_101652.read();
        } else {
            weight_conv5_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_29_V_address1() {
    weight_conv5_1_29_V_address1 = weight_conv5_1_29_2_reg_101662.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_2_V_address0 = weight_conv5_1_2_V_2_reg_101252.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_2_V_address0 = weight_conv5_1_2_V_1_reg_101247.read();
        } else {
            weight_conv5_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_2_V_address1() {
    weight_conv5_1_2_V_address1 = weight_conv5_1_2_V_3_reg_101257.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_30_V_address0 = weight_conv5_1_30_1_reg_101672.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_30_V_address0 = weight_conv5_1_30_s_reg_101667.read();
        } else {
            weight_conv5_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_30_V_address1() {
    weight_conv5_1_30_V_address1 = weight_conv5_1_30_2_reg_101677.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_31_V_address0 = weight_conv5_1_31_1_reg_101687.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_31_V_address0 = weight_conv5_1_31_s_reg_101682.read();
        } else {
            weight_conv5_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_31_V_address1() {
    weight_conv5_1_31_V_address1 = weight_conv5_1_31_2_reg_101692.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_32_V_address0 = weight_conv5_1_32_1_reg_101702.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_32_V_address0 = weight_conv5_1_32_s_reg_101697.read();
        } else {
            weight_conv5_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_32_V_address1() {
    weight_conv5_1_32_V_address1 = weight_conv5_1_32_2_reg_101707.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_33_V_address0 = weight_conv5_1_33_1_reg_101717.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_33_V_address0 = weight_conv5_1_33_s_reg_101712.read();
        } else {
            weight_conv5_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_33_V_address1() {
    weight_conv5_1_33_V_address1 = weight_conv5_1_33_2_reg_101722.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_34_V_address0 = weight_conv5_1_34_1_reg_101732.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_34_V_address0 = weight_conv5_1_34_s_reg_101727.read();
        } else {
            weight_conv5_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_34_V_address1() {
    weight_conv5_1_34_V_address1 = weight_conv5_1_34_2_reg_101737.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_35_V_address0 = weight_conv5_1_35_1_reg_101747.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_35_V_address0 = weight_conv5_1_35_s_reg_101742.read();
        } else {
            weight_conv5_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_35_V_address1() {
    weight_conv5_1_35_V_address1 = weight_conv5_1_35_2_reg_101752.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_36_V_address0 = weight_conv5_1_36_1_reg_101762.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_36_V_address0 = weight_conv5_1_36_s_reg_101757.read();
        } else {
            weight_conv5_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_36_V_address1() {
    weight_conv5_1_36_V_address1 = weight_conv5_1_36_2_reg_101767.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_37_V_address0 = weight_conv5_1_37_1_reg_101777.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_37_V_address0 = weight_conv5_1_37_s_reg_101772.read();
        } else {
            weight_conv5_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_37_V_address1() {
    weight_conv5_1_37_V_address1 = weight_conv5_1_37_2_reg_101782.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_38_V_address0 = weight_conv5_1_38_1_reg_101792.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_38_V_address0 = weight_conv5_1_38_s_reg_101787.read();
        } else {
            weight_conv5_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_38_V_address1() {
    weight_conv5_1_38_V_address1 = weight_conv5_1_38_2_reg_101797.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_39_V_address0 = weight_conv5_1_39_1_reg_101807.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_39_V_address0 = weight_conv5_1_39_s_reg_101802.read();
        } else {
            weight_conv5_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_39_V_address1() {
    weight_conv5_1_39_V_address1 = weight_conv5_1_39_2_reg_101812.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_3_V_address0 = weight_conv5_1_3_V_2_reg_101267.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_3_V_address0 = weight_conv5_1_3_V_1_reg_101262.read();
        } else {
            weight_conv5_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_3_V_address1() {
    weight_conv5_1_3_V_address1 = weight_conv5_1_3_V_3_reg_101272.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_40_V_address0 = weight_conv5_1_40_1_reg_101822.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_40_V_address0 = weight_conv5_1_40_s_reg_101817.read();
        } else {
            weight_conv5_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_40_V_address1() {
    weight_conv5_1_40_V_address1 = weight_conv5_1_40_2_reg_101827.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_41_V_address0 = weight_conv5_1_41_1_reg_101837.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_41_V_address0 = weight_conv5_1_41_s_reg_101832.read();
        } else {
            weight_conv5_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_41_V_address1() {
    weight_conv5_1_41_V_address1 = weight_conv5_1_41_2_reg_101842.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_42_V_address0 = weight_conv5_1_42_1_reg_101852.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_42_V_address0 = weight_conv5_1_42_s_reg_101847.read();
        } else {
            weight_conv5_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_42_V_address1() {
    weight_conv5_1_42_V_address1 = weight_conv5_1_42_2_reg_101857.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_43_V_address0 = weight_conv5_1_43_1_reg_101867.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_43_V_address0 = weight_conv5_1_43_s_reg_101862.read();
        } else {
            weight_conv5_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_43_V_address1() {
    weight_conv5_1_43_V_address1 = weight_conv5_1_43_2_reg_101872.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_44_V_address0 = weight_conv5_1_44_1_reg_101882.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_44_V_address0 = weight_conv5_1_44_s_reg_101877.read();
        } else {
            weight_conv5_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_44_V_address1() {
    weight_conv5_1_44_V_address1 = weight_conv5_1_44_2_reg_101887.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_45_V_address0 = weight_conv5_1_45_1_reg_101897.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_45_V_address0 = weight_conv5_1_45_s_reg_101892.read();
        } else {
            weight_conv5_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_45_V_address1() {
    weight_conv5_1_45_V_address1 = weight_conv5_1_45_2_reg_101902.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_46_V_address0 = weight_conv5_1_46_1_reg_101912.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_46_V_address0 = weight_conv5_1_46_s_reg_101907.read();
        } else {
            weight_conv5_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_46_V_address1() {
    weight_conv5_1_46_V_address1 = weight_conv5_1_46_2_reg_101917.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_47_V_address0 = weight_conv5_1_47_1_reg_101927.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_47_V_address0 = weight_conv5_1_47_s_reg_101922.read();
        } else {
            weight_conv5_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_47_V_address1() {
    weight_conv5_1_47_V_address1 = weight_conv5_1_47_2_reg_101932.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_48_V_address0 = weight_conv5_1_48_1_reg_101942.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_48_V_address0 = weight_conv5_1_48_s_reg_101937.read();
        } else {
            weight_conv5_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_48_V_address1() {
    weight_conv5_1_48_V_address1 = weight_conv5_1_48_2_reg_101947.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_49_V_address0 = weight_conv5_1_49_1_reg_101957.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_49_V_address0 = weight_conv5_1_49_s_reg_101952.read();
        } else {
            weight_conv5_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_49_V_address1() {
    weight_conv5_1_49_V_address1 = weight_conv5_1_49_2_reg_101962.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_4_V_address0 = weight_conv5_1_4_V_2_reg_101282.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_4_V_address0 = weight_conv5_1_4_V_1_reg_101277.read();
        } else {
            weight_conv5_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_4_V_address1() {
    weight_conv5_1_4_V_address1 = weight_conv5_1_4_V_3_reg_101287.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_50_V_address0 = weight_conv5_1_50_1_reg_101972.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_50_V_address0 = weight_conv5_1_50_s_reg_101967.read();
        } else {
            weight_conv5_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_50_V_address1() {
    weight_conv5_1_50_V_address1 = weight_conv5_1_50_2_reg_101977.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_51_V_address0 = weight_conv5_1_51_1_reg_101987.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_51_V_address0 = weight_conv5_1_51_s_reg_101982.read();
        } else {
            weight_conv5_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_51_V_address1() {
    weight_conv5_1_51_V_address1 = weight_conv5_1_51_2_reg_101992.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_52_V_address0 = weight_conv5_1_52_1_reg_102002.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_52_V_address0 = weight_conv5_1_52_s_reg_101997.read();
        } else {
            weight_conv5_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_52_V_address1() {
    weight_conv5_1_52_V_address1 = weight_conv5_1_52_2_reg_102007.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_53_V_address0 = weight_conv5_1_53_1_reg_102017.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_53_V_address0 = weight_conv5_1_53_s_reg_102012.read();
        } else {
            weight_conv5_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_53_V_address1() {
    weight_conv5_1_53_V_address1 = weight_conv5_1_53_2_reg_102022.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_54_V_address0 = weight_conv5_1_54_1_reg_102032.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_54_V_address0 = weight_conv5_1_54_s_reg_102027.read();
        } else {
            weight_conv5_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_54_V_address1() {
    weight_conv5_1_54_V_address1 = weight_conv5_1_54_2_reg_102037.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_55_V_address0 = weight_conv5_1_55_1_reg_102047.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_55_V_address0 = weight_conv5_1_55_s_reg_102042.read();
        } else {
            weight_conv5_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_55_V_address1() {
    weight_conv5_1_55_V_address1 = weight_conv5_1_55_2_reg_102052.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_56_V_address0 = weight_conv5_1_56_1_reg_102062.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_56_V_address0 = weight_conv5_1_56_s_reg_102057.read();
        } else {
            weight_conv5_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_56_V_address1() {
    weight_conv5_1_56_V_address1 = weight_conv5_1_56_2_reg_102067.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_57_V_address0 = weight_conv5_1_57_1_reg_102077.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_57_V_address0 = weight_conv5_1_57_s_reg_102072.read();
        } else {
            weight_conv5_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_57_V_address1() {
    weight_conv5_1_57_V_address1 = weight_conv5_1_57_2_reg_102082.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_58_V_address0 = weight_conv5_1_58_1_reg_102092.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_58_V_address0 = weight_conv5_1_58_s_reg_102087.read();
        } else {
            weight_conv5_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_58_V_address1() {
    weight_conv5_1_58_V_address1 = weight_conv5_1_58_2_reg_102097.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_59_V_address0 = weight_conv5_1_59_1_reg_102107.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_59_V_address0 = weight_conv5_1_59_s_reg_102102.read();
        } else {
            weight_conv5_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_59_V_address1() {
    weight_conv5_1_59_V_address1 = weight_conv5_1_59_2_reg_102112.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_5_V_address0 = weight_conv5_1_5_V_2_reg_101297.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_5_V_address0 = weight_conv5_1_5_V_1_reg_101292.read();
        } else {
            weight_conv5_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_5_V_address1() {
    weight_conv5_1_5_V_address1 = weight_conv5_1_5_V_3_reg_101302.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_60_V_address0 = weight_conv5_1_60_1_reg_102122.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_60_V_address0 = weight_conv5_1_60_s_reg_102117.read();
        } else {
            weight_conv5_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_60_V_address1() {
    weight_conv5_1_60_V_address1 = weight_conv5_1_60_2_reg_102127.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_61_V_address0 = weight_conv5_1_61_1_reg_102137.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_61_V_address0 = weight_conv5_1_61_s_reg_102132.read();
        } else {
            weight_conv5_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_61_V_address1() {
    weight_conv5_1_61_V_address1 = weight_conv5_1_61_2_reg_102142.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_62_V_address0 = weight_conv5_1_62_1_reg_102152.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_62_V_address0 = weight_conv5_1_62_s_reg_102147.read();
        } else {
            weight_conv5_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_62_V_address1() {
    weight_conv5_1_62_V_address1 = weight_conv5_1_62_2_reg_102157.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_63_V_address0 = weight_conv5_1_63_1_reg_102167.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_63_V_address0 = weight_conv5_1_63_s_reg_102162.read();
        } else {
            weight_conv5_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_63_V_address1() {
    weight_conv5_1_63_V_address1 = weight_conv5_1_63_2_reg_102172.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_6_V_address0 = weight_conv5_1_6_V_2_reg_101312.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_6_V_address0 = weight_conv5_1_6_V_1_reg_101307.read();
        } else {
            weight_conv5_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_6_V_address1() {
    weight_conv5_1_6_V_address1 = weight_conv5_1_6_V_3_reg_101317.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_7_V_address0 = weight_conv5_1_7_V_2_reg_101327.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_7_V_address0 = weight_conv5_1_7_V_1_reg_101322.read();
        } else {
            weight_conv5_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_7_V_address1() {
    weight_conv5_1_7_V_address1 = weight_conv5_1_7_V_3_reg_101332.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_8_V_address0 = weight_conv5_1_8_V_2_reg_101342.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_8_V_address0 = weight_conv5_1_8_V_1_reg_101337.read();
        } else {
            weight_conv5_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_8_V_address1() {
    weight_conv5_1_8_V_address1 = weight_conv5_1_8_V_3_reg_101347.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_1_9_V_address0 = weight_conv5_1_9_V_2_reg_101357.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_1_9_V_address0 = weight_conv5_1_9_V_1_reg_101352.read();
        } else {
            weight_conv5_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_9_V_address1() {
    weight_conv5_1_9_V_address1 = weight_conv5_1_9_V_3_reg_101362.read();
}

void Block_arrayctor_loop::thread_weight_conv5_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_1_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_1_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_1_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_1_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_1_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_0_V_address0 = weight_conv5_2_0_V_3_reg_102187.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_0_V_address0 = weight_conv5_2_0_V_1_reg_102177.read();
        } else {
            weight_conv5_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_0_V_address1() {
    weight_conv5_2_0_V_address1 = weight_conv5_2_0_V_2_reg_102182.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_10_V_address0 = weight_conv5_2_10_2_reg_102337.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_10_V_address0 = weight_conv5_2_10_s_reg_102327.read();
        } else {
            weight_conv5_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_10_V_address1() {
    weight_conv5_2_10_V_address1 = weight_conv5_2_10_1_reg_102332.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_11_V_address0 = weight_conv5_2_11_2_reg_102352.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_11_V_address0 = weight_conv5_2_11_s_reg_102342.read();
        } else {
            weight_conv5_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_11_V_address1() {
    weight_conv5_2_11_V_address1 = weight_conv5_2_11_1_reg_102347.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_12_V_address0 = weight_conv5_2_12_2_reg_102367.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_12_V_address0 = weight_conv5_2_12_s_reg_102357.read();
        } else {
            weight_conv5_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_12_V_address1() {
    weight_conv5_2_12_V_address1 = weight_conv5_2_12_1_reg_102362.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_13_V_address0 = weight_conv5_2_13_2_reg_102382.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_13_V_address0 = weight_conv5_2_13_s_reg_102372.read();
        } else {
            weight_conv5_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_13_V_address1() {
    weight_conv5_2_13_V_address1 = weight_conv5_2_13_1_reg_102377.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_14_V_address0 = weight_conv5_2_14_2_reg_102397.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_14_V_address0 = weight_conv5_2_14_s_reg_102387.read();
        } else {
            weight_conv5_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_14_V_address1() {
    weight_conv5_2_14_V_address1 = weight_conv5_2_14_1_reg_102392.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_15_V_address0 = weight_conv5_2_15_2_reg_102412.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_15_V_address0 = weight_conv5_2_15_s_reg_102402.read();
        } else {
            weight_conv5_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_15_V_address1() {
    weight_conv5_2_15_V_address1 = weight_conv5_2_15_1_reg_102407.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_16_V_address0 = weight_conv5_2_16_2_reg_102427.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_16_V_address0 = weight_conv5_2_16_s_reg_102417.read();
        } else {
            weight_conv5_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_16_V_address1() {
    weight_conv5_2_16_V_address1 = weight_conv5_2_16_1_reg_102422.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_17_V_address0 = weight_conv5_2_17_2_reg_102442.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_17_V_address0 = weight_conv5_2_17_s_reg_102432.read();
        } else {
            weight_conv5_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_17_V_address1() {
    weight_conv5_2_17_V_address1 = weight_conv5_2_17_1_reg_102437.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_18_V_address0 = weight_conv5_2_18_2_reg_102457.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_18_V_address0 = weight_conv5_2_18_s_reg_102447.read();
        } else {
            weight_conv5_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_18_V_address1() {
    weight_conv5_2_18_V_address1 = weight_conv5_2_18_1_reg_102452.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_19_V_address0 = weight_conv5_2_19_2_reg_102472.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_19_V_address0 = weight_conv5_2_19_s_reg_102462.read();
        } else {
            weight_conv5_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_19_V_address1() {
    weight_conv5_2_19_V_address1 = weight_conv5_2_19_1_reg_102467.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_1_V_address0 = weight_conv5_2_1_V_3_reg_102202.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_1_V_address0 = weight_conv5_2_1_V_1_reg_102192.read();
        } else {
            weight_conv5_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_1_V_address1() {
    weight_conv5_2_1_V_address1 = weight_conv5_2_1_V_2_reg_102197.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_20_V_address0 = weight_conv5_2_20_2_reg_102487.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_20_V_address0 = weight_conv5_2_20_s_reg_102477.read();
        } else {
            weight_conv5_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_20_V_address1() {
    weight_conv5_2_20_V_address1 = weight_conv5_2_20_1_reg_102482.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_21_V_address0 = weight_conv5_2_21_2_reg_102502.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_21_V_address0 = weight_conv5_2_21_s_reg_102492.read();
        } else {
            weight_conv5_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_21_V_address1() {
    weight_conv5_2_21_V_address1 = weight_conv5_2_21_1_reg_102497.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_22_V_address0 = weight_conv5_2_22_2_reg_102517.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_22_V_address0 = weight_conv5_2_22_s_reg_102507.read();
        } else {
            weight_conv5_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_22_V_address1() {
    weight_conv5_2_22_V_address1 = weight_conv5_2_22_1_reg_102512.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_23_V_address0 = weight_conv5_2_23_2_reg_102532.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_23_V_address0 = weight_conv5_2_23_s_reg_102522.read();
        } else {
            weight_conv5_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_23_V_address1() {
    weight_conv5_2_23_V_address1 = weight_conv5_2_23_1_reg_102527.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_24_V_address0 = weight_conv5_2_24_2_reg_102547.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_24_V_address0 = weight_conv5_2_24_s_reg_102537.read();
        } else {
            weight_conv5_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_24_V_address1() {
    weight_conv5_2_24_V_address1 = weight_conv5_2_24_1_reg_102542.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_25_V_address0 = weight_conv5_2_25_2_reg_102562.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_25_V_address0 = weight_conv5_2_25_s_reg_102552.read();
        } else {
            weight_conv5_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_25_V_address1() {
    weight_conv5_2_25_V_address1 = weight_conv5_2_25_1_reg_102557.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_26_V_address0 = weight_conv5_2_26_2_reg_102577.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_26_V_address0 = weight_conv5_2_26_s_reg_102567.read();
        } else {
            weight_conv5_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_26_V_address1() {
    weight_conv5_2_26_V_address1 = weight_conv5_2_26_1_reg_102572.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_27_V_address0 = weight_conv5_2_27_2_reg_102592.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_27_V_address0 = weight_conv5_2_27_s_reg_102582.read();
        } else {
            weight_conv5_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_27_V_address1() {
    weight_conv5_2_27_V_address1 = weight_conv5_2_27_1_reg_102587.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_28_V_address0 = weight_conv5_2_28_2_reg_102607.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_28_V_address0 = weight_conv5_2_28_s_reg_102597.read();
        } else {
            weight_conv5_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_28_V_address1() {
    weight_conv5_2_28_V_address1 = weight_conv5_2_28_1_reg_102602.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_29_V_address0 = weight_conv5_2_29_2_reg_102622.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_29_V_address0 = weight_conv5_2_29_s_reg_102612.read();
        } else {
            weight_conv5_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_29_V_address1() {
    weight_conv5_2_29_V_address1 = weight_conv5_2_29_1_reg_102617.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_2_V_address0 = weight_conv5_2_2_V_3_reg_102217.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_2_V_address0 = weight_conv5_2_2_V_1_reg_102207.read();
        } else {
            weight_conv5_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_2_V_address1() {
    weight_conv5_2_2_V_address1 = weight_conv5_2_2_V_2_reg_102212.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_30_V_address0 = weight_conv5_2_30_2_reg_102637.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_30_V_address0 = weight_conv5_2_30_s_reg_102627.read();
        } else {
            weight_conv5_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_30_V_address1() {
    weight_conv5_2_30_V_address1 = weight_conv5_2_30_1_reg_102632.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_31_V_address0 = weight_conv5_2_31_2_reg_102652.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_31_V_address0 = weight_conv5_2_31_s_reg_102642.read();
        } else {
            weight_conv5_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_31_V_address1() {
    weight_conv5_2_31_V_address1 = weight_conv5_2_31_1_reg_102647.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_32_V_address0 = weight_conv5_2_32_2_reg_102667.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_32_V_address0 = weight_conv5_2_32_s_reg_102657.read();
        } else {
            weight_conv5_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_32_V_address1() {
    weight_conv5_2_32_V_address1 = weight_conv5_2_32_1_reg_102662.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_33_V_address0 = weight_conv5_2_33_2_reg_102682.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_33_V_address0 = weight_conv5_2_33_s_reg_102672.read();
        } else {
            weight_conv5_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_33_V_address1() {
    weight_conv5_2_33_V_address1 = weight_conv5_2_33_1_reg_102677.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_34_V_address0 = weight_conv5_2_34_2_reg_102697.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_34_V_address0 = weight_conv5_2_34_s_reg_102687.read();
        } else {
            weight_conv5_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_34_V_address1() {
    weight_conv5_2_34_V_address1 = weight_conv5_2_34_1_reg_102692.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_35_V_address0 = weight_conv5_2_35_2_reg_102712.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_35_V_address0 = weight_conv5_2_35_s_reg_102702.read();
        } else {
            weight_conv5_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_35_V_address1() {
    weight_conv5_2_35_V_address1 = weight_conv5_2_35_1_reg_102707.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_36_V_address0 = weight_conv5_2_36_2_reg_102727.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_36_V_address0 = weight_conv5_2_36_s_reg_102717.read();
        } else {
            weight_conv5_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_36_V_address1() {
    weight_conv5_2_36_V_address1 = weight_conv5_2_36_1_reg_102722.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_37_V_address0 = weight_conv5_2_37_2_reg_102742.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_37_V_address0 = weight_conv5_2_37_s_reg_102732.read();
        } else {
            weight_conv5_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_37_V_address1() {
    weight_conv5_2_37_V_address1 = weight_conv5_2_37_1_reg_102737.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_38_V_address0 = weight_conv5_2_38_2_reg_102757.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_38_V_address0 = weight_conv5_2_38_s_reg_102747.read();
        } else {
            weight_conv5_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_38_V_address1() {
    weight_conv5_2_38_V_address1 = weight_conv5_2_38_1_reg_102752.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_39_V_address0 = weight_conv5_2_39_2_reg_102772.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_39_V_address0 = weight_conv5_2_39_s_reg_102762.read();
        } else {
            weight_conv5_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_39_V_address1() {
    weight_conv5_2_39_V_address1 = weight_conv5_2_39_1_reg_102767.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_3_V_address0 = weight_conv5_2_3_V_3_reg_102232.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_3_V_address0 = weight_conv5_2_3_V_1_reg_102222.read();
        } else {
            weight_conv5_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_3_V_address1() {
    weight_conv5_2_3_V_address1 = weight_conv5_2_3_V_2_reg_102227.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_40_V_address0 = weight_conv5_2_40_2_reg_102787.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_40_V_address0 = weight_conv5_2_40_s_reg_102777.read();
        } else {
            weight_conv5_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_40_V_address1() {
    weight_conv5_2_40_V_address1 = weight_conv5_2_40_1_reg_102782.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_41_V_address0 = weight_conv5_2_41_2_reg_102802.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_41_V_address0 = weight_conv5_2_41_s_reg_102792.read();
        } else {
            weight_conv5_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_41_V_address1() {
    weight_conv5_2_41_V_address1 = weight_conv5_2_41_1_reg_102797.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_42_V_address0 = weight_conv5_2_42_2_reg_102817.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_42_V_address0 = weight_conv5_2_42_s_reg_102807.read();
        } else {
            weight_conv5_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_42_V_address1() {
    weight_conv5_2_42_V_address1 = weight_conv5_2_42_1_reg_102812.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_43_V_address0 = weight_conv5_2_43_2_reg_102832.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_43_V_address0 = weight_conv5_2_43_s_reg_102822.read();
        } else {
            weight_conv5_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_43_V_address1() {
    weight_conv5_2_43_V_address1 = weight_conv5_2_43_1_reg_102827.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_44_V_address0 = weight_conv5_2_44_2_reg_102847.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_44_V_address0 = weight_conv5_2_44_s_reg_102837.read();
        } else {
            weight_conv5_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_44_V_address1() {
    weight_conv5_2_44_V_address1 = weight_conv5_2_44_1_reg_102842.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_45_V_address0 = weight_conv5_2_45_2_reg_102862.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_45_V_address0 = weight_conv5_2_45_s_reg_102852.read();
        } else {
            weight_conv5_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_45_V_address1() {
    weight_conv5_2_45_V_address1 = weight_conv5_2_45_1_reg_102857.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_46_V_address0 = weight_conv5_2_46_2_reg_102877.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_46_V_address0 = weight_conv5_2_46_s_reg_102867.read();
        } else {
            weight_conv5_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_46_V_address1() {
    weight_conv5_2_46_V_address1 = weight_conv5_2_46_1_reg_102872.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_47_V_address0 = weight_conv5_2_47_2_reg_102892.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_47_V_address0 = weight_conv5_2_47_s_reg_102882.read();
        } else {
            weight_conv5_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_47_V_address1() {
    weight_conv5_2_47_V_address1 = weight_conv5_2_47_1_reg_102887.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_48_V_address0 = weight_conv5_2_48_2_reg_102907.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_48_V_address0 = weight_conv5_2_48_s_reg_102897.read();
        } else {
            weight_conv5_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_48_V_address1() {
    weight_conv5_2_48_V_address1 = weight_conv5_2_48_1_reg_102902.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_49_V_address0 = weight_conv5_2_49_2_reg_102922.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_49_V_address0 = weight_conv5_2_49_s_reg_102912.read();
        } else {
            weight_conv5_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_49_V_address1() {
    weight_conv5_2_49_V_address1 = weight_conv5_2_49_1_reg_102917.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_4_V_address0 = weight_conv5_2_4_V_3_reg_102247.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_4_V_address0 = weight_conv5_2_4_V_1_reg_102237.read();
        } else {
            weight_conv5_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_4_V_address1() {
    weight_conv5_2_4_V_address1 = weight_conv5_2_4_V_2_reg_102242.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_50_V_address0 = weight_conv5_2_50_2_reg_102937.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_50_V_address0 = weight_conv5_2_50_s_reg_102927.read();
        } else {
            weight_conv5_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_50_V_address1() {
    weight_conv5_2_50_V_address1 = weight_conv5_2_50_1_reg_102932.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_51_V_address0 = weight_conv5_2_51_2_reg_102952.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_51_V_address0 = weight_conv5_2_51_s_reg_102942.read();
        } else {
            weight_conv5_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_51_V_address1() {
    weight_conv5_2_51_V_address1 = weight_conv5_2_51_1_reg_102947.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_52_V_address0 = weight_conv5_2_52_2_reg_102967.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_52_V_address0 = weight_conv5_2_52_s_reg_102957.read();
        } else {
            weight_conv5_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_52_V_address1() {
    weight_conv5_2_52_V_address1 = weight_conv5_2_52_1_reg_102962.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_53_V_address0 = weight_conv5_2_53_2_reg_102982.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_53_V_address0 = weight_conv5_2_53_s_reg_102972.read();
        } else {
            weight_conv5_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_53_V_address1() {
    weight_conv5_2_53_V_address1 = weight_conv5_2_53_1_reg_102977.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_54_V_address0 = weight_conv5_2_54_2_reg_102997.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_54_V_address0 = weight_conv5_2_54_s_reg_102987.read();
        } else {
            weight_conv5_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_54_V_address1() {
    weight_conv5_2_54_V_address1 = weight_conv5_2_54_1_reg_102992.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_55_V_address0 = weight_conv5_2_55_2_reg_103012.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_55_V_address0 = weight_conv5_2_55_s_reg_103002.read();
        } else {
            weight_conv5_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_55_V_address1() {
    weight_conv5_2_55_V_address1 = weight_conv5_2_55_1_reg_103007.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_56_V_address0 = weight_conv5_2_56_2_reg_103027.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_56_V_address0 = weight_conv5_2_56_s_reg_103017.read();
        } else {
            weight_conv5_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_56_V_address1() {
    weight_conv5_2_56_V_address1 = weight_conv5_2_56_1_reg_103022.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_57_V_address0 = weight_conv5_2_57_2_reg_103042.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_57_V_address0 = weight_conv5_2_57_s_reg_103032.read();
        } else {
            weight_conv5_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_57_V_address1() {
    weight_conv5_2_57_V_address1 = weight_conv5_2_57_1_reg_103037.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_58_V_address0 = weight_conv5_2_58_2_reg_103057.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_58_V_address0 = weight_conv5_2_58_s_reg_103047.read();
        } else {
            weight_conv5_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_58_V_address1() {
    weight_conv5_2_58_V_address1 = weight_conv5_2_58_1_reg_103052.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_59_V_address0 = weight_conv5_2_59_2_reg_103072.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_59_V_address0 = weight_conv5_2_59_s_reg_103062.read();
        } else {
            weight_conv5_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_59_V_address1() {
    weight_conv5_2_59_V_address1 = weight_conv5_2_59_1_reg_103067.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_5_V_address0 = weight_conv5_2_5_V_3_reg_102262.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_5_V_address0 = weight_conv5_2_5_V_1_reg_102252.read();
        } else {
            weight_conv5_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_5_V_address1() {
    weight_conv5_2_5_V_address1 = weight_conv5_2_5_V_2_reg_102257.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_60_V_address0 = weight_conv5_2_60_2_reg_103087.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_60_V_address0 = weight_conv5_2_60_s_reg_103077.read();
        } else {
            weight_conv5_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_60_V_address1() {
    weight_conv5_2_60_V_address1 = weight_conv5_2_60_1_reg_103082.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_61_V_address0 = weight_conv5_2_61_2_reg_103102.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_61_V_address0 = weight_conv5_2_61_s_reg_103092.read();
        } else {
            weight_conv5_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_61_V_address1() {
    weight_conv5_2_61_V_address1 = weight_conv5_2_61_1_reg_103097.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_62_V_address0 = weight_conv5_2_62_2_reg_103117.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_62_V_address0 = weight_conv5_2_62_s_reg_103107.read();
        } else {
            weight_conv5_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_62_V_address1() {
    weight_conv5_2_62_V_address1 = weight_conv5_2_62_1_reg_103112.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_63_V_address0 = weight_conv5_2_63_2_reg_103132.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_63_V_address0 = weight_conv5_2_63_s_reg_103122.read();
        } else {
            weight_conv5_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_63_V_address1() {
    weight_conv5_2_63_V_address1 = weight_conv5_2_63_1_reg_103127.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_6_V_address0 = weight_conv5_2_6_V_3_reg_102277.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_6_V_address0 = weight_conv5_2_6_V_1_reg_102267.read();
        } else {
            weight_conv5_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_6_V_address1() {
    weight_conv5_2_6_V_address1 = weight_conv5_2_6_V_2_reg_102272.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_7_V_address0 = weight_conv5_2_7_V_3_reg_102292.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_7_V_address0 = weight_conv5_2_7_V_1_reg_102282.read();
        } else {
            weight_conv5_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_7_V_address1() {
    weight_conv5_2_7_V_address1 = weight_conv5_2_7_V_2_reg_102287.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_8_V_address0 = weight_conv5_2_8_V_3_reg_102307.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_8_V_address0 = weight_conv5_2_8_V_1_reg_102297.read();
        } else {
            weight_conv5_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_8_V_address1() {
    weight_conv5_2_8_V_address1 = weight_conv5_2_8_V_2_reg_102302.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp18_stage1.read(), ap_const_boolean_0))) {
            weight_conv5_2_9_V_address0 = weight_conv5_2_9_V_3_reg_102322.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
            weight_conv5_2_9_V_address0 = weight_conv5_2_9_V_1_reg_102312.read();
        } else {
            weight_conv5_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv5_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_9_V_address1() {
    weight_conv5_2_9_V_address1 = weight_conv5_2_9_V_2_reg_102317.read();
}

void Block_arrayctor_loop::thread_weight_conv5_2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv5_2_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv5_2_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv5_2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv5_2_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv5_2_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_0_V_address0 = weight_conv6_0_0_V_3_reg_106104.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_0_V_address0 = weight_conv6_0_0_V_1_reg_106094.read();
        } else {
            weight_conv6_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_0_V_address1() {
    weight_conv6_0_0_V_address1 = weight_conv6_0_0_V_2_reg_106099.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_10_V_address0 = weight_conv6_0_10_2_reg_106254.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_10_V_address0 = weight_conv6_0_10_s_reg_106244.read();
        } else {
            weight_conv6_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_10_V_address1() {
    weight_conv6_0_10_V_address1 = weight_conv6_0_10_1_reg_106249.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_11_V_address0 = weight_conv6_0_11_2_reg_106269.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_11_V_address0 = weight_conv6_0_11_s_reg_106259.read();
        } else {
            weight_conv6_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_11_V_address1() {
    weight_conv6_0_11_V_address1 = weight_conv6_0_11_1_reg_106264.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_12_V_address0 = weight_conv6_0_12_2_reg_106284.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_12_V_address0 = weight_conv6_0_12_s_reg_106274.read();
        } else {
            weight_conv6_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_12_V_address1() {
    weight_conv6_0_12_V_address1 = weight_conv6_0_12_1_reg_106279.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_13_V_address0 = weight_conv6_0_13_2_reg_106299.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_13_V_address0 = weight_conv6_0_13_s_reg_106289.read();
        } else {
            weight_conv6_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_13_V_address1() {
    weight_conv6_0_13_V_address1 = weight_conv6_0_13_1_reg_106294.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_14_V_address0 = weight_conv6_0_14_2_reg_106314.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_14_V_address0 = weight_conv6_0_14_s_reg_106304.read();
        } else {
            weight_conv6_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_14_V_address1() {
    weight_conv6_0_14_V_address1 = weight_conv6_0_14_1_reg_106309.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_15_V_address0 = weight_conv6_0_15_2_reg_106329.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_15_V_address0 = weight_conv6_0_15_s_reg_106319.read();
        } else {
            weight_conv6_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_15_V_address1() {
    weight_conv6_0_15_V_address1 = weight_conv6_0_15_1_reg_106324.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_16_V_address0 = weight_conv6_0_16_2_reg_106344.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_16_V_address0 = weight_conv6_0_16_s_reg_106334.read();
        } else {
            weight_conv6_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_16_V_address1() {
    weight_conv6_0_16_V_address1 = weight_conv6_0_16_1_reg_106339.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_17_V_address0 = weight_conv6_0_17_2_reg_106359.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_17_V_address0 = weight_conv6_0_17_s_reg_106349.read();
        } else {
            weight_conv6_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_17_V_address1() {
    weight_conv6_0_17_V_address1 = weight_conv6_0_17_1_reg_106354.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_18_V_address0 = weight_conv6_0_18_2_reg_106374.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_18_V_address0 = weight_conv6_0_18_s_reg_106364.read();
        } else {
            weight_conv6_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_18_V_address1() {
    weight_conv6_0_18_V_address1 = weight_conv6_0_18_1_reg_106369.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_19_V_address0 = weight_conv6_0_19_2_reg_106389.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_19_V_address0 = weight_conv6_0_19_s_reg_106379.read();
        } else {
            weight_conv6_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_19_V_address1() {
    weight_conv6_0_19_V_address1 = weight_conv6_0_19_1_reg_106384.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_1_V_address0 = weight_conv6_0_1_V_3_reg_106119.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_1_V_address0 = weight_conv6_0_1_V_1_reg_106109.read();
        } else {
            weight_conv6_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_1_V_address1() {
    weight_conv6_0_1_V_address1 = weight_conv6_0_1_V_2_reg_106114.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_20_V_address0 = weight_conv6_0_20_2_reg_106404.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_20_V_address0 = weight_conv6_0_20_s_reg_106394.read();
        } else {
            weight_conv6_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_20_V_address1() {
    weight_conv6_0_20_V_address1 = weight_conv6_0_20_1_reg_106399.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_21_V_address0 = weight_conv6_0_21_2_reg_106419.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_21_V_address0 = weight_conv6_0_21_s_reg_106409.read();
        } else {
            weight_conv6_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_21_V_address1() {
    weight_conv6_0_21_V_address1 = weight_conv6_0_21_1_reg_106414.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_22_V_address0 = weight_conv6_0_22_2_reg_106434.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_22_V_address0 = weight_conv6_0_22_s_reg_106424.read();
        } else {
            weight_conv6_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_22_V_address1() {
    weight_conv6_0_22_V_address1 = weight_conv6_0_22_1_reg_106429.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_23_V_address0 = weight_conv6_0_23_2_reg_106449.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_23_V_address0 = weight_conv6_0_23_s_reg_106439.read();
        } else {
            weight_conv6_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_23_V_address1() {
    weight_conv6_0_23_V_address1 = weight_conv6_0_23_1_reg_106444.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_24_V_address0 = weight_conv6_0_24_2_reg_106464.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_24_V_address0 = weight_conv6_0_24_s_reg_106454.read();
        } else {
            weight_conv6_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_24_V_address1() {
    weight_conv6_0_24_V_address1 = weight_conv6_0_24_1_reg_106459.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_25_V_address0 = weight_conv6_0_25_2_reg_106479.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_25_V_address0 = weight_conv6_0_25_s_reg_106469.read();
        } else {
            weight_conv6_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_25_V_address1() {
    weight_conv6_0_25_V_address1 = weight_conv6_0_25_1_reg_106474.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_26_V_address0 = weight_conv6_0_26_2_reg_106494.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_26_V_address0 = weight_conv6_0_26_s_reg_106484.read();
        } else {
            weight_conv6_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_26_V_address1() {
    weight_conv6_0_26_V_address1 = weight_conv6_0_26_1_reg_106489.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_27_V_address0 = weight_conv6_0_27_2_reg_106509.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_27_V_address0 = weight_conv6_0_27_s_reg_106499.read();
        } else {
            weight_conv6_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_27_V_address1() {
    weight_conv6_0_27_V_address1 = weight_conv6_0_27_1_reg_106504.read();
}

}

