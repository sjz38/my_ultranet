#include "Block_arrayctor_loop.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Block_arrayctor_loop::thread_weight_conv2_2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0)))) {
        weight_conv2_2_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv2_2_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv2_2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()))) {
        weight_conv2_2_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv2_2_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_0_V_address0 = weight_conv3_0_0_V_3_reg_89763.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_0_V_address0 = weight_conv3_0_0_V_1_reg_89753.read();
        } else {
            weight_conv3_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_0_V_address1() {
    weight_conv3_0_0_V_address1 = weight_conv3_0_0_V_2_reg_89758.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_10_V_address0 = weight_conv3_0_10_2_reg_89913.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_10_V_address0 = weight_conv3_0_10_s_reg_89903.read();
        } else {
            weight_conv3_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_10_V_address1() {
    weight_conv3_0_10_V_address1 = weight_conv3_0_10_1_reg_89908.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_11_V_address0 = weight_conv3_0_11_2_reg_89928.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_11_V_address0 = weight_conv3_0_11_s_reg_89918.read();
        } else {
            weight_conv3_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_11_V_address1() {
    weight_conv3_0_11_V_address1 = weight_conv3_0_11_1_reg_89923.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_12_V_address0 = weight_conv3_0_12_2_reg_89943.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_12_V_address0 = weight_conv3_0_12_s_reg_89933.read();
        } else {
            weight_conv3_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_12_V_address1() {
    weight_conv3_0_12_V_address1 = weight_conv3_0_12_1_reg_89938.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_13_V_address0 = weight_conv3_0_13_2_reg_89958.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_13_V_address0 = weight_conv3_0_13_s_reg_89948.read();
        } else {
            weight_conv3_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_13_V_address1() {
    weight_conv3_0_13_V_address1 = weight_conv3_0_13_1_reg_89953.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_14_V_address0 = weight_conv3_0_14_2_reg_89973.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_14_V_address0 = weight_conv3_0_14_s_reg_89963.read();
        } else {
            weight_conv3_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_14_V_address1() {
    weight_conv3_0_14_V_address1 = weight_conv3_0_14_1_reg_89968.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_15_V_address0 = weight_conv3_0_15_2_reg_89988.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_15_V_address0 = weight_conv3_0_15_s_reg_89978.read();
        } else {
            weight_conv3_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_15_V_address1() {
    weight_conv3_0_15_V_address1 = weight_conv3_0_15_1_reg_89983.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_16_V_address0 = weight_conv3_0_16_2_reg_90003.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_16_V_address0 = weight_conv3_0_16_s_reg_89993.read();
        } else {
            weight_conv3_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_16_V_address1() {
    weight_conv3_0_16_V_address1 = weight_conv3_0_16_1_reg_89998.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_17_V_address0 = weight_conv3_0_17_2_reg_90018.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_17_V_address0 = weight_conv3_0_17_s_reg_90008.read();
        } else {
            weight_conv3_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_17_V_address1() {
    weight_conv3_0_17_V_address1 = weight_conv3_0_17_1_reg_90013.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_18_V_address0 = weight_conv3_0_18_2_reg_90033.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_18_V_address0 = weight_conv3_0_18_s_reg_90023.read();
        } else {
            weight_conv3_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_18_V_address1() {
    weight_conv3_0_18_V_address1 = weight_conv3_0_18_1_reg_90028.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_19_V_address0 = weight_conv3_0_19_2_reg_90048.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_19_V_address0 = weight_conv3_0_19_s_reg_90038.read();
        } else {
            weight_conv3_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_19_V_address1() {
    weight_conv3_0_19_V_address1 = weight_conv3_0_19_1_reg_90043.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_1_V_address0 = weight_conv3_0_1_V_3_reg_89778.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_1_V_address0 = weight_conv3_0_1_V_1_reg_89768.read();
        } else {
            weight_conv3_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_1_V_address1() {
    weight_conv3_0_1_V_address1 = weight_conv3_0_1_V_2_reg_89773.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_20_V_address0 = weight_conv3_0_20_2_reg_90063.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_20_V_address0 = weight_conv3_0_20_s_reg_90053.read();
        } else {
            weight_conv3_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_20_V_address1() {
    weight_conv3_0_20_V_address1 = weight_conv3_0_20_1_reg_90058.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_21_V_address0 = weight_conv3_0_21_2_reg_90078.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_21_V_address0 = weight_conv3_0_21_s_reg_90068.read();
        } else {
            weight_conv3_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_21_V_address1() {
    weight_conv3_0_21_V_address1 = weight_conv3_0_21_1_reg_90073.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_22_V_address0 = weight_conv3_0_22_2_reg_90093.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_22_V_address0 = weight_conv3_0_22_s_reg_90083.read();
        } else {
            weight_conv3_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_22_V_address1() {
    weight_conv3_0_22_V_address1 = weight_conv3_0_22_1_reg_90088.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_23_V_address0 = weight_conv3_0_23_2_reg_90108.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_23_V_address0 = weight_conv3_0_23_s_reg_90098.read();
        } else {
            weight_conv3_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_23_V_address1() {
    weight_conv3_0_23_V_address1 = weight_conv3_0_23_1_reg_90103.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_24_V_address0 = weight_conv3_0_24_2_reg_90123.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_24_V_address0 = weight_conv3_0_24_s_reg_90113.read();
        } else {
            weight_conv3_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_24_V_address1() {
    weight_conv3_0_24_V_address1 = weight_conv3_0_24_1_reg_90118.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_25_V_address0 = weight_conv3_0_25_2_reg_90138.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_25_V_address0 = weight_conv3_0_25_s_reg_90128.read();
        } else {
            weight_conv3_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_25_V_address1() {
    weight_conv3_0_25_V_address1 = weight_conv3_0_25_1_reg_90133.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_26_V_address0 = weight_conv3_0_26_2_reg_90153.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_26_V_address0 = weight_conv3_0_26_s_reg_90143.read();
        } else {
            weight_conv3_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_26_V_address1() {
    weight_conv3_0_26_V_address1 = weight_conv3_0_26_1_reg_90148.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_27_V_address0 = weight_conv3_0_27_2_reg_90168.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_27_V_address0 = weight_conv3_0_27_s_reg_90158.read();
        } else {
            weight_conv3_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_27_V_address1() {
    weight_conv3_0_27_V_address1 = weight_conv3_0_27_1_reg_90163.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_28_V_address0 = weight_conv3_0_28_2_reg_90183.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_28_V_address0 = weight_conv3_0_28_s_reg_90173.read();
        } else {
            weight_conv3_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_28_V_address1() {
    weight_conv3_0_28_V_address1 = weight_conv3_0_28_1_reg_90178.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_29_V_address0 = weight_conv3_0_29_2_reg_90198.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_29_V_address0 = weight_conv3_0_29_s_reg_90188.read();
        } else {
            weight_conv3_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_29_V_address1() {
    weight_conv3_0_29_V_address1 = weight_conv3_0_29_1_reg_90193.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_2_V_address0 = weight_conv3_0_2_V_3_reg_89793.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_2_V_address0 = weight_conv3_0_2_V_1_reg_89783.read();
        } else {
            weight_conv3_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_2_V_address1() {
    weight_conv3_0_2_V_address1 = weight_conv3_0_2_V_2_reg_89788.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_30_V_address0 = weight_conv3_0_30_2_reg_90213.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_30_V_address0 = weight_conv3_0_30_s_reg_90203.read();
        } else {
            weight_conv3_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_30_V_address1() {
    weight_conv3_0_30_V_address1 = weight_conv3_0_30_1_reg_90208.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_31_V_address0 = weight_conv3_0_31_2_reg_90228.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_31_V_address0 = weight_conv3_0_31_s_reg_90218.read();
        } else {
            weight_conv3_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_31_V_address1() {
    weight_conv3_0_31_V_address1 = weight_conv3_0_31_1_reg_90223.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_3_V_address0 = weight_conv3_0_3_V_3_reg_89808.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_3_V_address0 = weight_conv3_0_3_V_1_reg_89798.read();
        } else {
            weight_conv3_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_3_V_address1() {
    weight_conv3_0_3_V_address1 = weight_conv3_0_3_V_2_reg_89803.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_4_V_address0 = weight_conv3_0_4_V_3_reg_89823.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_4_V_address0 = weight_conv3_0_4_V_1_reg_89813.read();
        } else {
            weight_conv3_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_4_V_address1() {
    weight_conv3_0_4_V_address1 = weight_conv3_0_4_V_2_reg_89818.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_5_V_address0 = weight_conv3_0_5_V_3_reg_89838.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_5_V_address0 = weight_conv3_0_5_V_1_reg_89828.read();
        } else {
            weight_conv3_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_5_V_address1() {
    weight_conv3_0_5_V_address1 = weight_conv3_0_5_V_2_reg_89833.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_6_V_address0 = weight_conv3_0_6_V_3_reg_89853.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_6_V_address0 = weight_conv3_0_6_V_1_reg_89843.read();
        } else {
            weight_conv3_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_6_V_address1() {
    weight_conv3_0_6_V_address1 = weight_conv3_0_6_V_2_reg_89848.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_7_V_address0 = weight_conv3_0_7_V_3_reg_89868.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_7_V_address0 = weight_conv3_0_7_V_1_reg_89858.read();
        } else {
            weight_conv3_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_7_V_address1() {
    weight_conv3_0_7_V_address1 = weight_conv3_0_7_V_2_reg_89863.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_8_V_address0 = weight_conv3_0_8_V_3_reg_89883.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_8_V_address0 = weight_conv3_0_8_V_1_reg_89873.read();
        } else {
            weight_conv3_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_8_V_address1() {
    weight_conv3_0_8_V_address1 = weight_conv3_0_8_V_2_reg_89878.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_0_9_V_address0 = weight_conv3_0_9_V_3_reg_89898.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_0_9_V_address0 = weight_conv3_0_9_V_1_reg_89888.read();
        } else {
            weight_conv3_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_9_V_address1() {
    weight_conv3_0_9_V_address1 = weight_conv3_0_9_V_2_reg_89893.read();
}

void Block_arrayctor_loop::thread_weight_conv3_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_0_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_0_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_0_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_0_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_0_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_0_V_address0 = weight_conv3_1_0_V_2_reg_90238.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_0_V_address0 = weight_conv3_1_0_V_1_reg_90233.read();
        } else {
            weight_conv3_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_0_V_address1() {
    weight_conv3_1_0_V_address1 = weight_conv3_1_0_V_3_reg_90243.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_10_V_address0 = weight_conv3_1_10_1_reg_90388.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_10_V_address0 = weight_conv3_1_10_s_reg_90383.read();
        } else {
            weight_conv3_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_10_V_address1() {
    weight_conv3_1_10_V_address1 = weight_conv3_1_10_2_reg_90393.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_11_V_address0 = weight_conv3_1_11_1_reg_90403.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_11_V_address0 = weight_conv3_1_11_s_reg_90398.read();
        } else {
            weight_conv3_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_11_V_address1() {
    weight_conv3_1_11_V_address1 = weight_conv3_1_11_2_reg_90408.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_12_V_address0 = weight_conv3_1_12_1_reg_90418.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_12_V_address0 = weight_conv3_1_12_s_reg_90413.read();
        } else {
            weight_conv3_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_12_V_address1() {
    weight_conv3_1_12_V_address1 = weight_conv3_1_12_2_reg_90423.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_13_V_address0 = weight_conv3_1_13_1_reg_90433.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_13_V_address0 = weight_conv3_1_13_s_reg_90428.read();
        } else {
            weight_conv3_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_13_V_address1() {
    weight_conv3_1_13_V_address1 = weight_conv3_1_13_2_reg_90438.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_14_V_address0 = weight_conv3_1_14_1_reg_90448.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_14_V_address0 = weight_conv3_1_14_s_reg_90443.read();
        } else {
            weight_conv3_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_14_V_address1() {
    weight_conv3_1_14_V_address1 = weight_conv3_1_14_2_reg_90453.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_15_V_address0 = weight_conv3_1_15_1_reg_90463.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_15_V_address0 = weight_conv3_1_15_s_reg_90458.read();
        } else {
            weight_conv3_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_15_V_address1() {
    weight_conv3_1_15_V_address1 = weight_conv3_1_15_2_reg_90468.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_16_V_address0 = weight_conv3_1_16_1_reg_90478.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_16_V_address0 = weight_conv3_1_16_s_reg_90473.read();
        } else {
            weight_conv3_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_16_V_address1() {
    weight_conv3_1_16_V_address1 = weight_conv3_1_16_2_reg_90483.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_17_V_address0 = weight_conv3_1_17_1_reg_90493.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_17_V_address0 = weight_conv3_1_17_s_reg_90488.read();
        } else {
            weight_conv3_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_17_V_address1() {
    weight_conv3_1_17_V_address1 = weight_conv3_1_17_2_reg_90498.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_18_V_address0 = weight_conv3_1_18_1_reg_90508.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_18_V_address0 = weight_conv3_1_18_s_reg_90503.read();
        } else {
            weight_conv3_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_18_V_address1() {
    weight_conv3_1_18_V_address1 = weight_conv3_1_18_2_reg_90513.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_19_V_address0 = weight_conv3_1_19_1_reg_90523.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_19_V_address0 = weight_conv3_1_19_s_reg_90518.read();
        } else {
            weight_conv3_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_19_V_address1() {
    weight_conv3_1_19_V_address1 = weight_conv3_1_19_2_reg_90528.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_1_V_address0 = weight_conv3_1_1_V_2_reg_90253.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_1_V_address0 = weight_conv3_1_1_V_1_reg_90248.read();
        } else {
            weight_conv3_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_1_V_address1() {
    weight_conv3_1_1_V_address1 = weight_conv3_1_1_V_3_reg_90258.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_20_V_address0 = weight_conv3_1_20_1_reg_90538.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_20_V_address0 = weight_conv3_1_20_s_reg_90533.read();
        } else {
            weight_conv3_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_20_V_address1() {
    weight_conv3_1_20_V_address1 = weight_conv3_1_20_2_reg_90543.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_21_V_address0 = weight_conv3_1_21_1_reg_90553.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_21_V_address0 = weight_conv3_1_21_s_reg_90548.read();
        } else {
            weight_conv3_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_21_V_address1() {
    weight_conv3_1_21_V_address1 = weight_conv3_1_21_2_reg_90558.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_22_V_address0 = weight_conv3_1_22_1_reg_90568.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_22_V_address0 = weight_conv3_1_22_s_reg_90563.read();
        } else {
            weight_conv3_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_22_V_address1() {
    weight_conv3_1_22_V_address1 = weight_conv3_1_22_2_reg_90573.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_23_V_address0 = weight_conv3_1_23_1_reg_90583.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_23_V_address0 = weight_conv3_1_23_s_reg_90578.read();
        } else {
            weight_conv3_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_23_V_address1() {
    weight_conv3_1_23_V_address1 = weight_conv3_1_23_2_reg_90588.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_24_V_address0 = weight_conv3_1_24_1_reg_90598.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_24_V_address0 = weight_conv3_1_24_s_reg_90593.read();
        } else {
            weight_conv3_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_24_V_address1() {
    weight_conv3_1_24_V_address1 = weight_conv3_1_24_2_reg_90603.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_25_V_address0 = weight_conv3_1_25_1_reg_90613.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_25_V_address0 = weight_conv3_1_25_s_reg_90608.read();
        } else {
            weight_conv3_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_25_V_address1() {
    weight_conv3_1_25_V_address1 = weight_conv3_1_25_2_reg_90618.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_26_V_address0 = weight_conv3_1_26_1_reg_90628.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_26_V_address0 = weight_conv3_1_26_s_reg_90623.read();
        } else {
            weight_conv3_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_26_V_address1() {
    weight_conv3_1_26_V_address1 = weight_conv3_1_26_2_reg_90633.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_27_V_address0 = weight_conv3_1_27_1_reg_90643.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_27_V_address0 = weight_conv3_1_27_s_reg_90638.read();
        } else {
            weight_conv3_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_27_V_address1() {
    weight_conv3_1_27_V_address1 = weight_conv3_1_27_2_reg_90648.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_28_V_address0 = weight_conv3_1_28_1_reg_90658.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_28_V_address0 = weight_conv3_1_28_s_reg_90653.read();
        } else {
            weight_conv3_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_28_V_address1() {
    weight_conv3_1_28_V_address1 = weight_conv3_1_28_2_reg_90663.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_29_V_address0 = weight_conv3_1_29_1_reg_90673.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_29_V_address0 = weight_conv3_1_29_s_reg_90668.read();
        } else {
            weight_conv3_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_29_V_address1() {
    weight_conv3_1_29_V_address1 = weight_conv3_1_29_2_reg_90678.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_2_V_address0 = weight_conv3_1_2_V_2_reg_90268.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_2_V_address0 = weight_conv3_1_2_V_1_reg_90263.read();
        } else {
            weight_conv3_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_2_V_address1() {
    weight_conv3_1_2_V_address1 = weight_conv3_1_2_V_3_reg_90273.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_30_V_address0 = weight_conv3_1_30_1_reg_90688.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_30_V_address0 = weight_conv3_1_30_s_reg_90683.read();
        } else {
            weight_conv3_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_30_V_address1() {
    weight_conv3_1_30_V_address1 = weight_conv3_1_30_2_reg_90693.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_31_V_address0 = weight_conv3_1_31_1_reg_90703.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_31_V_address0 = weight_conv3_1_31_s_reg_90698.read();
        } else {
            weight_conv3_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_31_V_address1() {
    weight_conv3_1_31_V_address1 = weight_conv3_1_31_2_reg_90708.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_3_V_address0 = weight_conv3_1_3_V_2_reg_90283.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_3_V_address0 = weight_conv3_1_3_V_1_reg_90278.read();
        } else {
            weight_conv3_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_3_V_address1() {
    weight_conv3_1_3_V_address1 = weight_conv3_1_3_V_3_reg_90288.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_4_V_address0 = weight_conv3_1_4_V_2_reg_90298.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_4_V_address0 = weight_conv3_1_4_V_1_reg_90293.read();
        } else {
            weight_conv3_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_4_V_address1() {
    weight_conv3_1_4_V_address1 = weight_conv3_1_4_V_3_reg_90303.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_5_V_address0 = weight_conv3_1_5_V_2_reg_90313.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_5_V_address0 = weight_conv3_1_5_V_1_reg_90308.read();
        } else {
            weight_conv3_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_5_V_address1() {
    weight_conv3_1_5_V_address1 = weight_conv3_1_5_V_3_reg_90318.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_6_V_address0 = weight_conv3_1_6_V_2_reg_90328.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_6_V_address0 = weight_conv3_1_6_V_1_reg_90323.read();
        } else {
            weight_conv3_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_6_V_address1() {
    weight_conv3_1_6_V_address1 = weight_conv3_1_6_V_3_reg_90333.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_7_V_address0 = weight_conv3_1_7_V_2_reg_90343.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_7_V_address0 = weight_conv3_1_7_V_1_reg_90338.read();
        } else {
            weight_conv3_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_7_V_address1() {
    weight_conv3_1_7_V_address1 = weight_conv3_1_7_V_3_reg_90348.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_8_V_address0 = weight_conv3_1_8_V_2_reg_90358.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_8_V_address0 = weight_conv3_1_8_V_1_reg_90353.read();
        } else {
            weight_conv3_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_8_V_address1() {
    weight_conv3_1_8_V_address1 = weight_conv3_1_8_V_3_reg_90363.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_1_9_V_address0 = weight_conv3_1_9_V_2_reg_90373.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_1_9_V_address0 = weight_conv3_1_9_V_1_reg_90368.read();
        } else {
            weight_conv3_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_9_V_address1() {
    weight_conv3_1_9_V_address1 = weight_conv3_1_9_V_3_reg_90378.read();
}

void Block_arrayctor_loop::thread_weight_conv3_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_1_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_1_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_1_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_1_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_1_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_0_V_address0 = weight_conv3_2_0_V_3_reg_90723.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_0_V_address0 = weight_conv3_2_0_V_1_reg_90713.read();
        } else {
            weight_conv3_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_0_V_address1() {
    weight_conv3_2_0_V_address1 = weight_conv3_2_0_V_2_reg_90718.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_10_V_address0 = weight_conv3_2_10_2_reg_90873.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_10_V_address0 = weight_conv3_2_10_s_reg_90863.read();
        } else {
            weight_conv3_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_10_V_address1() {
    weight_conv3_2_10_V_address1 = weight_conv3_2_10_1_reg_90868.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_11_V_address0 = weight_conv3_2_11_2_reg_90888.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_11_V_address0 = weight_conv3_2_11_s_reg_90878.read();
        } else {
            weight_conv3_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_11_V_address1() {
    weight_conv3_2_11_V_address1 = weight_conv3_2_11_1_reg_90883.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_12_V_address0 = weight_conv3_2_12_2_reg_90903.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_12_V_address0 = weight_conv3_2_12_s_reg_90893.read();
        } else {
            weight_conv3_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_12_V_address1() {
    weight_conv3_2_12_V_address1 = weight_conv3_2_12_1_reg_90898.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_13_V_address0 = weight_conv3_2_13_2_reg_90918.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_13_V_address0 = weight_conv3_2_13_s_reg_90908.read();
        } else {
            weight_conv3_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_13_V_address1() {
    weight_conv3_2_13_V_address1 = weight_conv3_2_13_1_reg_90913.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_14_V_address0 = weight_conv3_2_14_2_reg_90933.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_14_V_address0 = weight_conv3_2_14_s_reg_90923.read();
        } else {
            weight_conv3_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_14_V_address1() {
    weight_conv3_2_14_V_address1 = weight_conv3_2_14_1_reg_90928.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_15_V_address0 = weight_conv3_2_15_2_reg_90948.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_15_V_address0 = weight_conv3_2_15_s_reg_90938.read();
        } else {
            weight_conv3_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_15_V_address1() {
    weight_conv3_2_15_V_address1 = weight_conv3_2_15_1_reg_90943.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_16_V_address0 = weight_conv3_2_16_2_reg_90963.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_16_V_address0 = weight_conv3_2_16_s_reg_90953.read();
        } else {
            weight_conv3_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_16_V_address1() {
    weight_conv3_2_16_V_address1 = weight_conv3_2_16_1_reg_90958.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_17_V_address0 = weight_conv3_2_17_2_reg_90978.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_17_V_address0 = weight_conv3_2_17_s_reg_90968.read();
        } else {
            weight_conv3_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_17_V_address1() {
    weight_conv3_2_17_V_address1 = weight_conv3_2_17_1_reg_90973.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_18_V_address0 = weight_conv3_2_18_2_reg_90993.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_18_V_address0 = weight_conv3_2_18_s_reg_90983.read();
        } else {
            weight_conv3_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_18_V_address1() {
    weight_conv3_2_18_V_address1 = weight_conv3_2_18_1_reg_90988.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_19_V_address0 = weight_conv3_2_19_2_reg_91008.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_19_V_address0 = weight_conv3_2_19_s_reg_90998.read();
        } else {
            weight_conv3_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_19_V_address1() {
    weight_conv3_2_19_V_address1 = weight_conv3_2_19_1_reg_91003.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_1_V_address0 = weight_conv3_2_1_V_3_reg_90738.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_1_V_address0 = weight_conv3_2_1_V_1_reg_90728.read();
        } else {
            weight_conv3_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_1_V_address1() {
    weight_conv3_2_1_V_address1 = weight_conv3_2_1_V_2_reg_90733.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_20_V_address0 = weight_conv3_2_20_2_reg_91023.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_20_V_address0 = weight_conv3_2_20_s_reg_91013.read();
        } else {
            weight_conv3_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_20_V_address1() {
    weight_conv3_2_20_V_address1 = weight_conv3_2_20_1_reg_91018.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_21_V_address0 = weight_conv3_2_21_2_reg_91038.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_21_V_address0 = weight_conv3_2_21_s_reg_91028.read();
        } else {
            weight_conv3_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_21_V_address1() {
    weight_conv3_2_21_V_address1 = weight_conv3_2_21_1_reg_91033.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_22_V_address0 = weight_conv3_2_22_2_reg_91053.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_22_V_address0 = weight_conv3_2_22_s_reg_91043.read();
        } else {
            weight_conv3_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_22_V_address1() {
    weight_conv3_2_22_V_address1 = weight_conv3_2_22_1_reg_91048.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_23_V_address0 = weight_conv3_2_23_2_reg_91068.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_23_V_address0 = weight_conv3_2_23_s_reg_91058.read();
        } else {
            weight_conv3_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_23_V_address1() {
    weight_conv3_2_23_V_address1 = weight_conv3_2_23_1_reg_91063.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_24_V_address0 = weight_conv3_2_24_2_reg_91083.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_24_V_address0 = weight_conv3_2_24_s_reg_91073.read();
        } else {
            weight_conv3_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_24_V_address1() {
    weight_conv3_2_24_V_address1 = weight_conv3_2_24_1_reg_91078.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_25_V_address0 = weight_conv3_2_25_2_reg_91098.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_25_V_address0 = weight_conv3_2_25_s_reg_91088.read();
        } else {
            weight_conv3_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_25_V_address1() {
    weight_conv3_2_25_V_address1 = weight_conv3_2_25_1_reg_91093.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_26_V_address0 = weight_conv3_2_26_2_reg_91113.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_26_V_address0 = weight_conv3_2_26_s_reg_91103.read();
        } else {
            weight_conv3_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_26_V_address1() {
    weight_conv3_2_26_V_address1 = weight_conv3_2_26_1_reg_91108.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_27_V_address0 = weight_conv3_2_27_2_reg_91128.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_27_V_address0 = weight_conv3_2_27_s_reg_91118.read();
        } else {
            weight_conv3_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_27_V_address1() {
    weight_conv3_2_27_V_address1 = weight_conv3_2_27_1_reg_91123.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_28_V_address0 = weight_conv3_2_28_2_reg_91143.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_28_V_address0 = weight_conv3_2_28_s_reg_91133.read();
        } else {
            weight_conv3_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_28_V_address1() {
    weight_conv3_2_28_V_address1 = weight_conv3_2_28_1_reg_91138.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_29_V_address0 = weight_conv3_2_29_2_reg_91158.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_29_V_address0 = weight_conv3_2_29_s_reg_91148.read();
        } else {
            weight_conv3_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_29_V_address1() {
    weight_conv3_2_29_V_address1 = weight_conv3_2_29_1_reg_91153.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_2_V_address0 = weight_conv3_2_2_V_3_reg_90753.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_2_V_address0 = weight_conv3_2_2_V_1_reg_90743.read();
        } else {
            weight_conv3_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_2_V_address1() {
    weight_conv3_2_2_V_address1 = weight_conv3_2_2_V_2_reg_90748.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_30_V_address0 = weight_conv3_2_30_2_reg_91173.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_30_V_address0 = weight_conv3_2_30_s_reg_91163.read();
        } else {
            weight_conv3_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_30_V_address1() {
    weight_conv3_2_30_V_address1 = weight_conv3_2_30_1_reg_91168.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_31_V_address0 = weight_conv3_2_31_2_reg_91188.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_31_V_address0 = weight_conv3_2_31_s_reg_91178.read();
        } else {
            weight_conv3_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_31_V_address1() {
    weight_conv3_2_31_V_address1 = weight_conv3_2_31_1_reg_91183.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_3_V_address0 = weight_conv3_2_3_V_3_reg_90768.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_3_V_address0 = weight_conv3_2_3_V_1_reg_90758.read();
        } else {
            weight_conv3_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_3_V_address1() {
    weight_conv3_2_3_V_address1 = weight_conv3_2_3_V_2_reg_90763.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_4_V_address0 = weight_conv3_2_4_V_3_reg_90783.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_4_V_address0 = weight_conv3_2_4_V_1_reg_90773.read();
        } else {
            weight_conv3_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_4_V_address1() {
    weight_conv3_2_4_V_address1 = weight_conv3_2_4_V_2_reg_90778.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_5_V_address0 = weight_conv3_2_5_V_3_reg_90798.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_5_V_address0 = weight_conv3_2_5_V_1_reg_90788.read();
        } else {
            weight_conv3_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_5_V_address1() {
    weight_conv3_2_5_V_address1 = weight_conv3_2_5_V_2_reg_90793.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_6_V_address0 = weight_conv3_2_6_V_3_reg_90813.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_6_V_address0 = weight_conv3_2_6_V_1_reg_90803.read();
        } else {
            weight_conv3_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_6_V_address1() {
    weight_conv3_2_6_V_address1 = weight_conv3_2_6_V_2_reg_90808.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_7_V_address0 = weight_conv3_2_7_V_3_reg_90828.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_7_V_address0 = weight_conv3_2_7_V_1_reg_90818.read();
        } else {
            weight_conv3_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_7_V_address1() {
    weight_conv3_2_7_V_address1 = weight_conv3_2_7_V_2_reg_90823.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_8_V_address0 = weight_conv3_2_8_V_3_reg_90843.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_8_V_address0 = weight_conv3_2_8_V_1_reg_90833.read();
        } else {
            weight_conv3_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_8_V_address1() {
    weight_conv3_2_8_V_address1 = weight_conv3_2_8_V_2_reg_90838.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp10_stage1.read(), ap_const_boolean_0))) {
            weight_conv3_2_9_V_address0 = weight_conv3_2_9_V_3_reg_90858.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
            weight_conv3_2_9_V_address0 = weight_conv3_2_9_V_1_reg_90848.read();
        } else {
            weight_conv3_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv3_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_9_V_address1() {
    weight_conv3_2_9_V_address1 = weight_conv3_2_9_V_2_reg_90853.read();
}

void Block_arrayctor_loop::thread_weight_conv3_2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv3_2_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv3_2_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv3_2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv3_2_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv3_2_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_0_V_address0 = weight_conv4_0_0_V_3_reg_94295.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_0_V_address0 = weight_conv4_0_0_V_1_reg_94285.read();
        } else {
            weight_conv4_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_0_V_address1() {
    weight_conv4_0_0_V_address1 = weight_conv4_0_0_V_2_reg_94290.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_10_V_address0 = weight_conv4_0_10_2_reg_94445.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_10_V_address0 = weight_conv4_0_10_s_reg_94435.read();
        } else {
            weight_conv4_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_10_V_address1() {
    weight_conv4_0_10_V_address1 = weight_conv4_0_10_1_reg_94440.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_11_V_address0 = weight_conv4_0_11_2_reg_94460.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_11_V_address0 = weight_conv4_0_11_s_reg_94450.read();
        } else {
            weight_conv4_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_11_V_address1() {
    weight_conv4_0_11_V_address1 = weight_conv4_0_11_1_reg_94455.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_12_V_address0 = weight_conv4_0_12_2_reg_94475.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_12_V_address0 = weight_conv4_0_12_s_reg_94465.read();
        } else {
            weight_conv4_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_12_V_address1() {
    weight_conv4_0_12_V_address1 = weight_conv4_0_12_1_reg_94470.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_13_V_address0 = weight_conv4_0_13_2_reg_94490.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_13_V_address0 = weight_conv4_0_13_s_reg_94480.read();
        } else {
            weight_conv4_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_13_V_address1() {
    weight_conv4_0_13_V_address1 = weight_conv4_0_13_1_reg_94485.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_14_V_address0 = weight_conv4_0_14_2_reg_94505.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_14_V_address0 = weight_conv4_0_14_s_reg_94495.read();
        } else {
            weight_conv4_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_14_V_address1() {
    weight_conv4_0_14_V_address1 = weight_conv4_0_14_1_reg_94500.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_15_V_address0 = weight_conv4_0_15_2_reg_94520.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_15_V_address0 = weight_conv4_0_15_s_reg_94510.read();
        } else {
            weight_conv4_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_15_V_address1() {
    weight_conv4_0_15_V_address1 = weight_conv4_0_15_1_reg_94515.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_16_V_address0 = weight_conv4_0_16_2_reg_94535.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_16_V_address0 = weight_conv4_0_16_s_reg_94525.read();
        } else {
            weight_conv4_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_16_V_address1() {
    weight_conv4_0_16_V_address1 = weight_conv4_0_16_1_reg_94530.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_17_V_address0 = weight_conv4_0_17_2_reg_94550.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_17_V_address0 = weight_conv4_0_17_s_reg_94540.read();
        } else {
            weight_conv4_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_17_V_address1() {
    weight_conv4_0_17_V_address1 = weight_conv4_0_17_1_reg_94545.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_18_V_address0 = weight_conv4_0_18_2_reg_94565.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_18_V_address0 = weight_conv4_0_18_s_reg_94555.read();
        } else {
            weight_conv4_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_18_V_address1() {
    weight_conv4_0_18_V_address1 = weight_conv4_0_18_1_reg_94560.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_19_V_address0 = weight_conv4_0_19_2_reg_94580.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_19_V_address0 = weight_conv4_0_19_s_reg_94570.read();
        } else {
            weight_conv4_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_19_V_address1() {
    weight_conv4_0_19_V_address1 = weight_conv4_0_19_1_reg_94575.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_1_V_address0 = weight_conv4_0_1_V_3_reg_94310.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_1_V_address0 = weight_conv4_0_1_V_1_reg_94300.read();
        } else {
            weight_conv4_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_1_V_address1() {
    weight_conv4_0_1_V_address1 = weight_conv4_0_1_V_2_reg_94305.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_20_V_address0 = weight_conv4_0_20_2_reg_94595.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_20_V_address0 = weight_conv4_0_20_s_reg_94585.read();
        } else {
            weight_conv4_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_20_V_address1() {
    weight_conv4_0_20_V_address1 = weight_conv4_0_20_1_reg_94590.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_21_V_address0 = weight_conv4_0_21_2_reg_94610.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_21_V_address0 = weight_conv4_0_21_s_reg_94600.read();
        } else {
            weight_conv4_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_21_V_address1() {
    weight_conv4_0_21_V_address1 = weight_conv4_0_21_1_reg_94605.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_22_V_address0 = weight_conv4_0_22_2_reg_94625.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_22_V_address0 = weight_conv4_0_22_s_reg_94615.read();
        } else {
            weight_conv4_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_22_V_address1() {
    weight_conv4_0_22_V_address1 = weight_conv4_0_22_1_reg_94620.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_23_V_address0 = weight_conv4_0_23_2_reg_94640.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_23_V_address0 = weight_conv4_0_23_s_reg_94630.read();
        } else {
            weight_conv4_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_23_V_address1() {
    weight_conv4_0_23_V_address1 = weight_conv4_0_23_1_reg_94635.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_24_V_address0 = weight_conv4_0_24_2_reg_94655.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_24_V_address0 = weight_conv4_0_24_s_reg_94645.read();
        } else {
            weight_conv4_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_24_V_address1() {
    weight_conv4_0_24_V_address1 = weight_conv4_0_24_1_reg_94650.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_25_V_address0 = weight_conv4_0_25_2_reg_94670.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_25_V_address0 = weight_conv4_0_25_s_reg_94660.read();
        } else {
            weight_conv4_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_25_V_address1() {
    weight_conv4_0_25_V_address1 = weight_conv4_0_25_1_reg_94665.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_26_V_address0 = weight_conv4_0_26_2_reg_94685.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_26_V_address0 = weight_conv4_0_26_s_reg_94675.read();
        } else {
            weight_conv4_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_26_V_address1() {
    weight_conv4_0_26_V_address1 = weight_conv4_0_26_1_reg_94680.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_27_V_address0 = weight_conv4_0_27_2_reg_94700.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_27_V_address0 = weight_conv4_0_27_s_reg_94690.read();
        } else {
            weight_conv4_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_27_V_address1() {
    weight_conv4_0_27_V_address1 = weight_conv4_0_27_1_reg_94695.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_28_V_address0 = weight_conv4_0_28_2_reg_94715.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_28_V_address0 = weight_conv4_0_28_s_reg_94705.read();
        } else {
            weight_conv4_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_28_V_address1() {
    weight_conv4_0_28_V_address1 = weight_conv4_0_28_1_reg_94710.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_29_V_address0 = weight_conv4_0_29_2_reg_94730.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_29_V_address0 = weight_conv4_0_29_s_reg_94720.read();
        } else {
            weight_conv4_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_29_V_address1() {
    weight_conv4_0_29_V_address1 = weight_conv4_0_29_1_reg_94725.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_2_V_address0 = weight_conv4_0_2_V_3_reg_94325.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_2_V_address0 = weight_conv4_0_2_V_1_reg_94315.read();
        } else {
            weight_conv4_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_2_V_address1() {
    weight_conv4_0_2_V_address1 = weight_conv4_0_2_V_2_reg_94320.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_30_V_address0 = weight_conv4_0_30_2_reg_94745.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_30_V_address0 = weight_conv4_0_30_s_reg_94735.read();
        } else {
            weight_conv4_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_30_V_address1() {
    weight_conv4_0_30_V_address1 = weight_conv4_0_30_1_reg_94740.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_31_V_address0 = weight_conv4_0_31_2_reg_94760.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_31_V_address0 = weight_conv4_0_31_s_reg_94750.read();
        } else {
            weight_conv4_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_31_V_address1() {
    weight_conv4_0_31_V_address1 = weight_conv4_0_31_1_reg_94755.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_32_V_address0 = weight_conv4_0_32_2_reg_94775.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_32_V_address0 = weight_conv4_0_32_s_reg_94765.read();
        } else {
            weight_conv4_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_32_V_address1() {
    weight_conv4_0_32_V_address1 = weight_conv4_0_32_1_reg_94770.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_33_V_address0 = weight_conv4_0_33_2_reg_94790.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_33_V_address0 = weight_conv4_0_33_s_reg_94780.read();
        } else {
            weight_conv4_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_33_V_address1() {
    weight_conv4_0_33_V_address1 = weight_conv4_0_33_1_reg_94785.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_34_V_address0 = weight_conv4_0_34_2_reg_94805.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_34_V_address0 = weight_conv4_0_34_s_reg_94795.read();
        } else {
            weight_conv4_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_34_V_address1() {
    weight_conv4_0_34_V_address1 = weight_conv4_0_34_1_reg_94800.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_35_V_address0 = weight_conv4_0_35_2_reg_94820.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_35_V_address0 = weight_conv4_0_35_s_reg_94810.read();
        } else {
            weight_conv4_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_35_V_address1() {
    weight_conv4_0_35_V_address1 = weight_conv4_0_35_1_reg_94815.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_36_V_address0 = weight_conv4_0_36_2_reg_94835.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_36_V_address0 = weight_conv4_0_36_s_reg_94825.read();
        } else {
            weight_conv4_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_36_V_address1() {
    weight_conv4_0_36_V_address1 = weight_conv4_0_36_1_reg_94830.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_37_V_address0 = weight_conv4_0_37_2_reg_94850.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_37_V_address0 = weight_conv4_0_37_s_reg_94840.read();
        } else {
            weight_conv4_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_37_V_address1() {
    weight_conv4_0_37_V_address1 = weight_conv4_0_37_1_reg_94845.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_38_V_address0 = weight_conv4_0_38_2_reg_94865.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_38_V_address0 = weight_conv4_0_38_s_reg_94855.read();
        } else {
            weight_conv4_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_38_V_address1() {
    weight_conv4_0_38_V_address1 = weight_conv4_0_38_1_reg_94860.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_39_V_address0 = weight_conv4_0_39_2_reg_94880.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_39_V_address0 = weight_conv4_0_39_s_reg_94870.read();
        } else {
            weight_conv4_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_39_V_address1() {
    weight_conv4_0_39_V_address1 = weight_conv4_0_39_1_reg_94875.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_3_V_address0 = weight_conv4_0_3_V_3_reg_94340.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_3_V_address0 = weight_conv4_0_3_V_1_reg_94330.read();
        } else {
            weight_conv4_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_3_V_address1() {
    weight_conv4_0_3_V_address1 = weight_conv4_0_3_V_2_reg_94335.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_40_V_address0 = weight_conv4_0_40_2_reg_94895.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_40_V_address0 = weight_conv4_0_40_s_reg_94885.read();
        } else {
            weight_conv4_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_40_V_address1() {
    weight_conv4_0_40_V_address1 = weight_conv4_0_40_1_reg_94890.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_41_V_address0 = weight_conv4_0_41_2_reg_94910.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_41_V_address0 = weight_conv4_0_41_s_reg_94900.read();
        } else {
            weight_conv4_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_41_V_address1() {
    weight_conv4_0_41_V_address1 = weight_conv4_0_41_1_reg_94905.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_42_V_address0 = weight_conv4_0_42_2_reg_94925.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_42_V_address0 = weight_conv4_0_42_s_reg_94915.read();
        } else {
            weight_conv4_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_42_V_address1() {
    weight_conv4_0_42_V_address1 = weight_conv4_0_42_1_reg_94920.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_43_V_address0 = weight_conv4_0_43_2_reg_94940.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_43_V_address0 = weight_conv4_0_43_s_reg_94930.read();
        } else {
            weight_conv4_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_43_V_address1() {
    weight_conv4_0_43_V_address1 = weight_conv4_0_43_1_reg_94935.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_44_V_address0 = weight_conv4_0_44_2_reg_94955.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_44_V_address0 = weight_conv4_0_44_s_reg_94945.read();
        } else {
            weight_conv4_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_44_V_address1() {
    weight_conv4_0_44_V_address1 = weight_conv4_0_44_1_reg_94950.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_45_V_address0 = weight_conv4_0_45_2_reg_94970.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_45_V_address0 = weight_conv4_0_45_s_reg_94960.read();
        } else {
            weight_conv4_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_45_V_address1() {
    weight_conv4_0_45_V_address1 = weight_conv4_0_45_1_reg_94965.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_46_V_address0 = weight_conv4_0_46_2_reg_94985.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_46_V_address0 = weight_conv4_0_46_s_reg_94975.read();
        } else {
            weight_conv4_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_46_V_address1() {
    weight_conv4_0_46_V_address1 = weight_conv4_0_46_1_reg_94980.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_47_V_address0 = weight_conv4_0_47_2_reg_95000.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_47_V_address0 = weight_conv4_0_47_s_reg_94990.read();
        } else {
            weight_conv4_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_47_V_address1() {
    weight_conv4_0_47_V_address1 = weight_conv4_0_47_1_reg_94995.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_48_V_address0 = weight_conv4_0_48_2_reg_95015.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_48_V_address0 = weight_conv4_0_48_s_reg_95005.read();
        } else {
            weight_conv4_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_48_V_address1() {
    weight_conv4_0_48_V_address1 = weight_conv4_0_48_1_reg_95010.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_49_V_address0 = weight_conv4_0_49_2_reg_95030.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_49_V_address0 = weight_conv4_0_49_s_reg_95020.read();
        } else {
            weight_conv4_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_49_V_address1() {
    weight_conv4_0_49_V_address1 = weight_conv4_0_49_1_reg_95025.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_4_V_address0 = weight_conv4_0_4_V_3_reg_94355.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_4_V_address0 = weight_conv4_0_4_V_1_reg_94345.read();
        } else {
            weight_conv4_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_4_V_address1() {
    weight_conv4_0_4_V_address1 = weight_conv4_0_4_V_2_reg_94350.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_50_V_address0 = weight_conv4_0_50_2_reg_95045.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_50_V_address0 = weight_conv4_0_50_s_reg_95035.read();
        } else {
            weight_conv4_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_50_V_address1() {
    weight_conv4_0_50_V_address1 = weight_conv4_0_50_1_reg_95040.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_51_V_address0 = weight_conv4_0_51_2_reg_95060.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_51_V_address0 = weight_conv4_0_51_s_reg_95050.read();
        } else {
            weight_conv4_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_51_V_address1() {
    weight_conv4_0_51_V_address1 = weight_conv4_0_51_1_reg_95055.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_52_V_address0 = weight_conv4_0_52_2_reg_95075.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_52_V_address0 = weight_conv4_0_52_s_reg_95065.read();
        } else {
            weight_conv4_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_52_V_address1() {
    weight_conv4_0_52_V_address1 = weight_conv4_0_52_1_reg_95070.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_53_V_address0 = weight_conv4_0_53_2_reg_95090.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_53_V_address0 = weight_conv4_0_53_s_reg_95080.read();
        } else {
            weight_conv4_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_53_V_address1() {
    weight_conv4_0_53_V_address1 = weight_conv4_0_53_1_reg_95085.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_54_V_address0 = weight_conv4_0_54_2_reg_95105.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_54_V_address0 = weight_conv4_0_54_s_reg_95095.read();
        } else {
            weight_conv4_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_54_V_address1() {
    weight_conv4_0_54_V_address1 = weight_conv4_0_54_1_reg_95100.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_55_V_address0 = weight_conv4_0_55_2_reg_95120.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_55_V_address0 = weight_conv4_0_55_s_reg_95110.read();
        } else {
            weight_conv4_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_55_V_address1() {
    weight_conv4_0_55_V_address1 = weight_conv4_0_55_1_reg_95115.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_56_V_address0 = weight_conv4_0_56_2_reg_95135.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_56_V_address0 = weight_conv4_0_56_s_reg_95125.read();
        } else {
            weight_conv4_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_56_V_address1() {
    weight_conv4_0_56_V_address1 = weight_conv4_0_56_1_reg_95130.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_57_V_address0 = weight_conv4_0_57_2_reg_95150.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_57_V_address0 = weight_conv4_0_57_s_reg_95140.read();
        } else {
            weight_conv4_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_57_V_address1() {
    weight_conv4_0_57_V_address1 = weight_conv4_0_57_1_reg_95145.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_58_V_address0 = weight_conv4_0_58_2_reg_95165.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_58_V_address0 = weight_conv4_0_58_s_reg_95155.read();
        } else {
            weight_conv4_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_58_V_address1() {
    weight_conv4_0_58_V_address1 = weight_conv4_0_58_1_reg_95160.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_59_V_address0 = weight_conv4_0_59_2_reg_95180.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_59_V_address0 = weight_conv4_0_59_s_reg_95170.read();
        } else {
            weight_conv4_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_59_V_address1() {
    weight_conv4_0_59_V_address1 = weight_conv4_0_59_1_reg_95175.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_5_V_address0 = weight_conv4_0_5_V_3_reg_94370.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_5_V_address0 = weight_conv4_0_5_V_1_reg_94360.read();
        } else {
            weight_conv4_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_5_V_address1() {
    weight_conv4_0_5_V_address1 = weight_conv4_0_5_V_2_reg_94365.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_60_V_address0 = weight_conv4_0_60_2_reg_95195.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_60_V_address0 = weight_conv4_0_60_s_reg_95185.read();
        } else {
            weight_conv4_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_60_V_address1() {
    weight_conv4_0_60_V_address1 = weight_conv4_0_60_1_reg_95190.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_61_V_address0 = weight_conv4_0_61_2_reg_95210.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_61_V_address0 = weight_conv4_0_61_s_reg_95200.read();
        } else {
            weight_conv4_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_61_V_address1() {
    weight_conv4_0_61_V_address1 = weight_conv4_0_61_1_reg_95205.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_62_V_address0 = weight_conv4_0_62_2_reg_95225.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_62_V_address0 = weight_conv4_0_62_s_reg_95215.read();
        } else {
            weight_conv4_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_62_V_address1() {
    weight_conv4_0_62_V_address1 = weight_conv4_0_62_1_reg_95220.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_63_V_address0 = weight_conv4_0_63_2_reg_95240.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_63_V_address0 = weight_conv4_0_63_s_reg_95230.read();
        } else {
            weight_conv4_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_63_V_address1() {
    weight_conv4_0_63_V_address1 = weight_conv4_0_63_1_reg_95235.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_6_V_address0 = weight_conv4_0_6_V_3_reg_94385.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_6_V_address0 = weight_conv4_0_6_V_1_reg_94375.read();
        } else {
            weight_conv4_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_6_V_address1() {
    weight_conv4_0_6_V_address1 = weight_conv4_0_6_V_2_reg_94380.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_7_V_address0 = weight_conv4_0_7_V_3_reg_94400.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_7_V_address0 = weight_conv4_0_7_V_1_reg_94390.read();
        } else {
            weight_conv4_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_7_V_address1() {
    weight_conv4_0_7_V_address1 = weight_conv4_0_7_V_2_reg_94395.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_8_V_address0 = weight_conv4_0_8_V_3_reg_94415.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_8_V_address0 = weight_conv4_0_8_V_1_reg_94405.read();
        } else {
            weight_conv4_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_8_V_address1() {
    weight_conv4_0_8_V_address1 = weight_conv4_0_8_V_2_reg_94410.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_0_9_V_address0 = weight_conv4_0_9_V_3_reg_94430.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_0_9_V_address0 = weight_conv4_0_9_V_1_reg_94420.read();
        } else {
            weight_conv4_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_9_V_address1() {
    weight_conv4_0_9_V_address1 = weight_conv4_0_9_V_2_reg_94425.read();
}

void Block_arrayctor_loop::thread_weight_conv4_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_0_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_0_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_0_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_0_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_0_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_0_V_address0 = weight_conv4_1_0_V_2_reg_95250.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_0_V_address0 = weight_conv4_1_0_V_1_reg_95245.read();
        } else {
            weight_conv4_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_0_V_address1() {
    weight_conv4_1_0_V_address1 = weight_conv4_1_0_V_3_reg_95255.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_10_V_address0 = weight_conv4_1_10_1_reg_95400.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_10_V_address0 = weight_conv4_1_10_s_reg_95395.read();
        } else {
            weight_conv4_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_10_V_address1() {
    weight_conv4_1_10_V_address1 = weight_conv4_1_10_2_reg_95405.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_11_V_address0 = weight_conv4_1_11_1_reg_95415.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_11_V_address0 = weight_conv4_1_11_s_reg_95410.read();
        } else {
            weight_conv4_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_11_V_address1() {
    weight_conv4_1_11_V_address1 = weight_conv4_1_11_2_reg_95420.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_12_V_address0 = weight_conv4_1_12_1_reg_95430.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_12_V_address0 = weight_conv4_1_12_s_reg_95425.read();
        } else {
            weight_conv4_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_12_V_address1() {
    weight_conv4_1_12_V_address1 = weight_conv4_1_12_2_reg_95435.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_13_V_address0 = weight_conv4_1_13_1_reg_95445.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_13_V_address0 = weight_conv4_1_13_s_reg_95440.read();
        } else {
            weight_conv4_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_13_V_address1() {
    weight_conv4_1_13_V_address1 = weight_conv4_1_13_2_reg_95450.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_14_V_address0 = weight_conv4_1_14_1_reg_95460.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_14_V_address0 = weight_conv4_1_14_s_reg_95455.read();
        } else {
            weight_conv4_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_14_V_address1() {
    weight_conv4_1_14_V_address1 = weight_conv4_1_14_2_reg_95465.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_15_V_address0 = weight_conv4_1_15_1_reg_95475.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_15_V_address0 = weight_conv4_1_15_s_reg_95470.read();
        } else {
            weight_conv4_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_15_V_address1() {
    weight_conv4_1_15_V_address1 = weight_conv4_1_15_2_reg_95480.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_16_V_address0 = weight_conv4_1_16_1_reg_95490.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_16_V_address0 = weight_conv4_1_16_s_reg_95485.read();
        } else {
            weight_conv4_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_16_V_address1() {
    weight_conv4_1_16_V_address1 = weight_conv4_1_16_2_reg_95495.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_17_V_address0 = weight_conv4_1_17_1_reg_95505.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_17_V_address0 = weight_conv4_1_17_s_reg_95500.read();
        } else {
            weight_conv4_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_17_V_address1() {
    weight_conv4_1_17_V_address1 = weight_conv4_1_17_2_reg_95510.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_18_V_address0 = weight_conv4_1_18_1_reg_95520.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_18_V_address0 = weight_conv4_1_18_s_reg_95515.read();
        } else {
            weight_conv4_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_18_V_address1() {
    weight_conv4_1_18_V_address1 = weight_conv4_1_18_2_reg_95525.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_19_V_address0 = weight_conv4_1_19_1_reg_95535.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_19_V_address0 = weight_conv4_1_19_s_reg_95530.read();
        } else {
            weight_conv4_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_19_V_address1() {
    weight_conv4_1_19_V_address1 = weight_conv4_1_19_2_reg_95540.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_1_V_address0 = weight_conv4_1_1_V_2_reg_95265.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_1_V_address0 = weight_conv4_1_1_V_1_reg_95260.read();
        } else {
            weight_conv4_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_1_V_address1() {
    weight_conv4_1_1_V_address1 = weight_conv4_1_1_V_3_reg_95270.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_20_V_address0 = weight_conv4_1_20_1_reg_95550.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_20_V_address0 = weight_conv4_1_20_s_reg_95545.read();
        } else {
            weight_conv4_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_20_V_address1() {
    weight_conv4_1_20_V_address1 = weight_conv4_1_20_2_reg_95555.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_21_V_address0 = weight_conv4_1_21_1_reg_95565.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_21_V_address0 = weight_conv4_1_21_s_reg_95560.read();
        } else {
            weight_conv4_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_21_V_address1() {
    weight_conv4_1_21_V_address1 = weight_conv4_1_21_2_reg_95570.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_22_V_address0 = weight_conv4_1_22_1_reg_95580.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_22_V_address0 = weight_conv4_1_22_s_reg_95575.read();
        } else {
            weight_conv4_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_22_V_address1() {
    weight_conv4_1_22_V_address1 = weight_conv4_1_22_2_reg_95585.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_23_V_address0 = weight_conv4_1_23_1_reg_95595.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_23_V_address0 = weight_conv4_1_23_s_reg_95590.read();
        } else {
            weight_conv4_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_23_V_address1() {
    weight_conv4_1_23_V_address1 = weight_conv4_1_23_2_reg_95600.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_24_V_address0 = weight_conv4_1_24_1_reg_95610.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_24_V_address0 = weight_conv4_1_24_s_reg_95605.read();
        } else {
            weight_conv4_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_24_V_address1() {
    weight_conv4_1_24_V_address1 = weight_conv4_1_24_2_reg_95615.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_25_V_address0 = weight_conv4_1_25_1_reg_95625.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_25_V_address0 = weight_conv4_1_25_s_reg_95620.read();
        } else {
            weight_conv4_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_25_V_address1() {
    weight_conv4_1_25_V_address1 = weight_conv4_1_25_2_reg_95630.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_26_V_address0 = weight_conv4_1_26_1_reg_95640.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_26_V_address0 = weight_conv4_1_26_s_reg_95635.read();
        } else {
            weight_conv4_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_26_V_address1() {
    weight_conv4_1_26_V_address1 = weight_conv4_1_26_2_reg_95645.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_27_V_address0 = weight_conv4_1_27_1_reg_95655.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_27_V_address0 = weight_conv4_1_27_s_reg_95650.read();
        } else {
            weight_conv4_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_27_V_address1() {
    weight_conv4_1_27_V_address1 = weight_conv4_1_27_2_reg_95660.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_28_V_address0 = weight_conv4_1_28_1_reg_95670.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_28_V_address0 = weight_conv4_1_28_s_reg_95665.read();
        } else {
            weight_conv4_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_28_V_address1() {
    weight_conv4_1_28_V_address1 = weight_conv4_1_28_2_reg_95675.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_29_V_address0 = weight_conv4_1_29_1_reg_95685.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_29_V_address0 = weight_conv4_1_29_s_reg_95680.read();
        } else {
            weight_conv4_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_29_V_address1() {
    weight_conv4_1_29_V_address1 = weight_conv4_1_29_2_reg_95690.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_2_V_address0 = weight_conv4_1_2_V_2_reg_95280.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_2_V_address0 = weight_conv4_1_2_V_1_reg_95275.read();
        } else {
            weight_conv4_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_2_V_address1() {
    weight_conv4_1_2_V_address1 = weight_conv4_1_2_V_3_reg_95285.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_30_V_address0 = weight_conv4_1_30_1_reg_95700.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_30_V_address0 = weight_conv4_1_30_s_reg_95695.read();
        } else {
            weight_conv4_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_30_V_address1() {
    weight_conv4_1_30_V_address1 = weight_conv4_1_30_2_reg_95705.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_31_V_address0 = weight_conv4_1_31_1_reg_95715.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_31_V_address0 = weight_conv4_1_31_s_reg_95710.read();
        } else {
            weight_conv4_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_31_V_address1() {
    weight_conv4_1_31_V_address1 = weight_conv4_1_31_2_reg_95720.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_32_V_address0 = weight_conv4_1_32_1_reg_95730.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_32_V_address0 = weight_conv4_1_32_s_reg_95725.read();
        } else {
            weight_conv4_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_32_V_address1() {
    weight_conv4_1_32_V_address1 = weight_conv4_1_32_2_reg_95735.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_33_V_address0 = weight_conv4_1_33_1_reg_95745.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_33_V_address0 = weight_conv4_1_33_s_reg_95740.read();
        } else {
            weight_conv4_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_33_V_address1() {
    weight_conv4_1_33_V_address1 = weight_conv4_1_33_2_reg_95750.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_34_V_address0 = weight_conv4_1_34_1_reg_95760.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_34_V_address0 = weight_conv4_1_34_s_reg_95755.read();
        } else {
            weight_conv4_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_34_V_address1() {
    weight_conv4_1_34_V_address1 = weight_conv4_1_34_2_reg_95765.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_35_V_address0 = weight_conv4_1_35_1_reg_95775.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_35_V_address0 = weight_conv4_1_35_s_reg_95770.read();
        } else {
            weight_conv4_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_35_V_address1() {
    weight_conv4_1_35_V_address1 = weight_conv4_1_35_2_reg_95780.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_36_V_address0 = weight_conv4_1_36_1_reg_95790.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_36_V_address0 = weight_conv4_1_36_s_reg_95785.read();
        } else {
            weight_conv4_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_36_V_address1() {
    weight_conv4_1_36_V_address1 = weight_conv4_1_36_2_reg_95795.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_37_V_address0 = weight_conv4_1_37_1_reg_95805.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_37_V_address0 = weight_conv4_1_37_s_reg_95800.read();
        } else {
            weight_conv4_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_37_V_address1() {
    weight_conv4_1_37_V_address1 = weight_conv4_1_37_2_reg_95810.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_38_V_address0 = weight_conv4_1_38_1_reg_95820.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_38_V_address0 = weight_conv4_1_38_s_reg_95815.read();
        } else {
            weight_conv4_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_38_V_address1() {
    weight_conv4_1_38_V_address1 = weight_conv4_1_38_2_reg_95825.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_39_V_address0 = weight_conv4_1_39_1_reg_95835.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_39_V_address0 = weight_conv4_1_39_s_reg_95830.read();
        } else {
            weight_conv4_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_39_V_address1() {
    weight_conv4_1_39_V_address1 = weight_conv4_1_39_2_reg_95840.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_3_V_address0 = weight_conv4_1_3_V_2_reg_95295.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_3_V_address0 = weight_conv4_1_3_V_1_reg_95290.read();
        } else {
            weight_conv4_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_3_V_address1() {
    weight_conv4_1_3_V_address1 = weight_conv4_1_3_V_3_reg_95300.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_40_V_address0 = weight_conv4_1_40_1_reg_95850.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_40_V_address0 = weight_conv4_1_40_s_reg_95845.read();
        } else {
            weight_conv4_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_40_V_address1() {
    weight_conv4_1_40_V_address1 = weight_conv4_1_40_2_reg_95855.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_41_V_address0 = weight_conv4_1_41_1_reg_95865.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_41_V_address0 = weight_conv4_1_41_s_reg_95860.read();
        } else {
            weight_conv4_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_41_V_address1() {
    weight_conv4_1_41_V_address1 = weight_conv4_1_41_2_reg_95870.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_42_V_address0 = weight_conv4_1_42_1_reg_95880.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_42_V_address0 = weight_conv4_1_42_s_reg_95875.read();
        } else {
            weight_conv4_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_42_V_address1() {
    weight_conv4_1_42_V_address1 = weight_conv4_1_42_2_reg_95885.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_43_V_address0 = weight_conv4_1_43_1_reg_95895.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_43_V_address0 = weight_conv4_1_43_s_reg_95890.read();
        } else {
            weight_conv4_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_43_V_address1() {
    weight_conv4_1_43_V_address1 = weight_conv4_1_43_2_reg_95900.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_44_V_address0 = weight_conv4_1_44_1_reg_95910.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_44_V_address0 = weight_conv4_1_44_s_reg_95905.read();
        } else {
            weight_conv4_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_44_V_address1() {
    weight_conv4_1_44_V_address1 = weight_conv4_1_44_2_reg_95915.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_45_V_address0 = weight_conv4_1_45_1_reg_95925.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_45_V_address0 = weight_conv4_1_45_s_reg_95920.read();
        } else {
            weight_conv4_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_45_V_address1() {
    weight_conv4_1_45_V_address1 = weight_conv4_1_45_2_reg_95930.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_46_V_address0 = weight_conv4_1_46_1_reg_95940.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_46_V_address0 = weight_conv4_1_46_s_reg_95935.read();
        } else {
            weight_conv4_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_46_V_address1() {
    weight_conv4_1_46_V_address1 = weight_conv4_1_46_2_reg_95945.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_47_V_address0 = weight_conv4_1_47_1_reg_95955.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_47_V_address0 = weight_conv4_1_47_s_reg_95950.read();
        } else {
            weight_conv4_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_47_V_address1() {
    weight_conv4_1_47_V_address1 = weight_conv4_1_47_2_reg_95960.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_48_V_address0 = weight_conv4_1_48_1_reg_95970.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_48_V_address0 = weight_conv4_1_48_s_reg_95965.read();
        } else {
            weight_conv4_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_48_V_address1() {
    weight_conv4_1_48_V_address1 = weight_conv4_1_48_2_reg_95975.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_49_V_address0 = weight_conv4_1_49_1_reg_95985.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_49_V_address0 = weight_conv4_1_49_s_reg_95980.read();
        } else {
            weight_conv4_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_49_V_address1() {
    weight_conv4_1_49_V_address1 = weight_conv4_1_49_2_reg_95990.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_4_V_address0 = weight_conv4_1_4_V_2_reg_95310.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_4_V_address0 = weight_conv4_1_4_V_1_reg_95305.read();
        } else {
            weight_conv4_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_4_V_address1() {
    weight_conv4_1_4_V_address1 = weight_conv4_1_4_V_3_reg_95315.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_50_V_address0 = weight_conv4_1_50_1_reg_96000.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_50_V_address0 = weight_conv4_1_50_s_reg_95995.read();
        } else {
            weight_conv4_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_50_V_address1() {
    weight_conv4_1_50_V_address1 = weight_conv4_1_50_2_reg_96005.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_51_V_address0 = weight_conv4_1_51_1_reg_96015.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_51_V_address0 = weight_conv4_1_51_s_reg_96010.read();
        } else {
            weight_conv4_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_51_V_address1() {
    weight_conv4_1_51_V_address1 = weight_conv4_1_51_2_reg_96020.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_52_V_address0 = weight_conv4_1_52_1_reg_96030.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_52_V_address0 = weight_conv4_1_52_s_reg_96025.read();
        } else {
            weight_conv4_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_52_V_address1() {
    weight_conv4_1_52_V_address1 = weight_conv4_1_52_2_reg_96035.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_53_V_address0 = weight_conv4_1_53_1_reg_96045.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_53_V_address0 = weight_conv4_1_53_s_reg_96040.read();
        } else {
            weight_conv4_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_53_V_address1() {
    weight_conv4_1_53_V_address1 = weight_conv4_1_53_2_reg_96050.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_54_V_address0 = weight_conv4_1_54_1_reg_96060.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_54_V_address0 = weight_conv4_1_54_s_reg_96055.read();
        } else {
            weight_conv4_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_54_V_address1() {
    weight_conv4_1_54_V_address1 = weight_conv4_1_54_2_reg_96065.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_55_V_address0 = weight_conv4_1_55_1_reg_96075.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_55_V_address0 = weight_conv4_1_55_s_reg_96070.read();
        } else {
            weight_conv4_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_55_V_address1() {
    weight_conv4_1_55_V_address1 = weight_conv4_1_55_2_reg_96080.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_56_V_address0 = weight_conv4_1_56_1_reg_96090.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_56_V_address0 = weight_conv4_1_56_s_reg_96085.read();
        } else {
            weight_conv4_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_56_V_address1() {
    weight_conv4_1_56_V_address1 = weight_conv4_1_56_2_reg_96095.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_57_V_address0 = weight_conv4_1_57_1_reg_96105.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_57_V_address0 = weight_conv4_1_57_s_reg_96100.read();
        } else {
            weight_conv4_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_57_V_address1() {
    weight_conv4_1_57_V_address1 = weight_conv4_1_57_2_reg_96110.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_58_V_address0 = weight_conv4_1_58_1_reg_96120.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_58_V_address0 = weight_conv4_1_58_s_reg_96115.read();
        } else {
            weight_conv4_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_58_V_address1() {
    weight_conv4_1_58_V_address1 = weight_conv4_1_58_2_reg_96125.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_59_V_address0 = weight_conv4_1_59_1_reg_96135.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_59_V_address0 = weight_conv4_1_59_s_reg_96130.read();
        } else {
            weight_conv4_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_59_V_address1() {
    weight_conv4_1_59_V_address1 = weight_conv4_1_59_2_reg_96140.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_5_V_address0 = weight_conv4_1_5_V_2_reg_95325.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_5_V_address0 = weight_conv4_1_5_V_1_reg_95320.read();
        } else {
            weight_conv4_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_5_V_address1() {
    weight_conv4_1_5_V_address1 = weight_conv4_1_5_V_3_reg_95330.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_60_V_address0 = weight_conv4_1_60_1_reg_96150.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_60_V_address0 = weight_conv4_1_60_s_reg_96145.read();
        } else {
            weight_conv4_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_60_V_address1() {
    weight_conv4_1_60_V_address1 = weight_conv4_1_60_2_reg_96155.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_61_V_address0 = weight_conv4_1_61_1_reg_96165.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_61_V_address0 = weight_conv4_1_61_s_reg_96160.read();
        } else {
            weight_conv4_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_61_V_address1() {
    weight_conv4_1_61_V_address1 = weight_conv4_1_61_2_reg_96170.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_62_V_address0 = weight_conv4_1_62_1_reg_96180.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_62_V_address0 = weight_conv4_1_62_s_reg_96175.read();
        } else {
            weight_conv4_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_62_V_address1() {
    weight_conv4_1_62_V_address1 = weight_conv4_1_62_2_reg_96185.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_63_V_address0 = weight_conv4_1_63_1_reg_96195.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_63_V_address0 = weight_conv4_1_63_s_reg_96190.read();
        } else {
            weight_conv4_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_63_V_address1() {
    weight_conv4_1_63_V_address1 = weight_conv4_1_63_2_reg_96200.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_6_V_address0 = weight_conv4_1_6_V_2_reg_95340.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_6_V_address0 = weight_conv4_1_6_V_1_reg_95335.read();
        } else {
            weight_conv4_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_6_V_address1() {
    weight_conv4_1_6_V_address1 = weight_conv4_1_6_V_3_reg_95345.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_7_V_address0 = weight_conv4_1_7_V_2_reg_95355.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_7_V_address0 = weight_conv4_1_7_V_1_reg_95350.read();
        } else {
            weight_conv4_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_7_V_address1() {
    weight_conv4_1_7_V_address1 = weight_conv4_1_7_V_3_reg_95360.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_8_V_address0 = weight_conv4_1_8_V_2_reg_95370.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_8_V_address0 = weight_conv4_1_8_V_1_reg_95365.read();
        } else {
            weight_conv4_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_8_V_address1() {
    weight_conv4_1_8_V_address1 = weight_conv4_1_8_V_3_reg_95375.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_1_9_V_address0 = weight_conv4_1_9_V_2_reg_95385.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_1_9_V_address0 = weight_conv4_1_9_V_1_reg_95380.read();
        } else {
            weight_conv4_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_9_V_address1() {
    weight_conv4_1_9_V_address1 = weight_conv4_1_9_V_3_reg_95390.read();
}

void Block_arrayctor_loop::thread_weight_conv4_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_1_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_1_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_1_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_1_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_1_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_0_V_address0 = weight_conv4_2_0_V_3_reg_96215.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_0_V_address0 = weight_conv4_2_0_V_1_reg_96205.read();
        } else {
            weight_conv4_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_0_V_address1() {
    weight_conv4_2_0_V_address1 = weight_conv4_2_0_V_2_reg_96210.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_10_V_address0 = weight_conv4_2_10_2_reg_96365.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_10_V_address0 = weight_conv4_2_10_s_reg_96355.read();
        } else {
            weight_conv4_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_10_V_address1() {
    weight_conv4_2_10_V_address1 = weight_conv4_2_10_1_reg_96360.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_11_V_address0 = weight_conv4_2_11_2_reg_96380.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_11_V_address0 = weight_conv4_2_11_s_reg_96370.read();
        } else {
            weight_conv4_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_11_V_address1() {
    weight_conv4_2_11_V_address1 = weight_conv4_2_11_1_reg_96375.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_12_V_address0 = weight_conv4_2_12_2_reg_96395.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_12_V_address0 = weight_conv4_2_12_s_reg_96385.read();
        } else {
            weight_conv4_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_12_V_address1() {
    weight_conv4_2_12_V_address1 = weight_conv4_2_12_1_reg_96390.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_13_V_address0 = weight_conv4_2_13_2_reg_96410.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_13_V_address0 = weight_conv4_2_13_s_reg_96400.read();
        } else {
            weight_conv4_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_13_V_address1() {
    weight_conv4_2_13_V_address1 = weight_conv4_2_13_1_reg_96405.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_14_V_address0 = weight_conv4_2_14_2_reg_96425.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_14_V_address0 = weight_conv4_2_14_s_reg_96415.read();
        } else {
            weight_conv4_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_14_V_address1() {
    weight_conv4_2_14_V_address1 = weight_conv4_2_14_1_reg_96420.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_15_V_address0 = weight_conv4_2_15_2_reg_96440.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_15_V_address0 = weight_conv4_2_15_s_reg_96430.read();
        } else {
            weight_conv4_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_15_V_address1() {
    weight_conv4_2_15_V_address1 = weight_conv4_2_15_1_reg_96435.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_16_V_address0 = weight_conv4_2_16_2_reg_96455.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_16_V_address0 = weight_conv4_2_16_s_reg_96445.read();
        } else {
            weight_conv4_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_16_V_address1() {
    weight_conv4_2_16_V_address1 = weight_conv4_2_16_1_reg_96450.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_17_V_address0 = weight_conv4_2_17_2_reg_96470.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_17_V_address0 = weight_conv4_2_17_s_reg_96460.read();
        } else {
            weight_conv4_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_17_V_address1() {
    weight_conv4_2_17_V_address1 = weight_conv4_2_17_1_reg_96465.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_18_V_address0 = weight_conv4_2_18_2_reg_96485.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_18_V_address0 = weight_conv4_2_18_s_reg_96475.read();
        } else {
            weight_conv4_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_18_V_address1() {
    weight_conv4_2_18_V_address1 = weight_conv4_2_18_1_reg_96480.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_19_V_address0 = weight_conv4_2_19_2_reg_96500.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_19_V_address0 = weight_conv4_2_19_s_reg_96490.read();
        } else {
            weight_conv4_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_19_V_address1() {
    weight_conv4_2_19_V_address1 = weight_conv4_2_19_1_reg_96495.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_1_V_address0 = weight_conv4_2_1_V_3_reg_96230.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_1_V_address0 = weight_conv4_2_1_V_1_reg_96220.read();
        } else {
            weight_conv4_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_1_V_address1() {
    weight_conv4_2_1_V_address1 = weight_conv4_2_1_V_2_reg_96225.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_20_V_address0 = weight_conv4_2_20_2_reg_96515.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_20_V_address0 = weight_conv4_2_20_s_reg_96505.read();
        } else {
            weight_conv4_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_20_V_address1() {
    weight_conv4_2_20_V_address1 = weight_conv4_2_20_1_reg_96510.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_21_V_address0 = weight_conv4_2_21_2_reg_96530.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_21_V_address0 = weight_conv4_2_21_s_reg_96520.read();
        } else {
            weight_conv4_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_21_V_address1() {
    weight_conv4_2_21_V_address1 = weight_conv4_2_21_1_reg_96525.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_22_V_address0 = weight_conv4_2_22_2_reg_96545.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_22_V_address0 = weight_conv4_2_22_s_reg_96535.read();
        } else {
            weight_conv4_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_22_V_address1() {
    weight_conv4_2_22_V_address1 = weight_conv4_2_22_1_reg_96540.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_23_V_address0 = weight_conv4_2_23_2_reg_96560.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_23_V_address0 = weight_conv4_2_23_s_reg_96550.read();
        } else {
            weight_conv4_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_23_V_address1() {
    weight_conv4_2_23_V_address1 = weight_conv4_2_23_1_reg_96555.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_24_V_address0 = weight_conv4_2_24_2_reg_96575.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_24_V_address0 = weight_conv4_2_24_s_reg_96565.read();
        } else {
            weight_conv4_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_24_V_address1() {
    weight_conv4_2_24_V_address1 = weight_conv4_2_24_1_reg_96570.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_25_V_address0 = weight_conv4_2_25_2_reg_96590.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_25_V_address0 = weight_conv4_2_25_s_reg_96580.read();
        } else {
            weight_conv4_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_25_V_address1() {
    weight_conv4_2_25_V_address1 = weight_conv4_2_25_1_reg_96585.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_26_V_address0 = weight_conv4_2_26_2_reg_96605.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_26_V_address0 = weight_conv4_2_26_s_reg_96595.read();
        } else {
            weight_conv4_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_26_V_address1() {
    weight_conv4_2_26_V_address1 = weight_conv4_2_26_1_reg_96600.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_27_V_address0 = weight_conv4_2_27_2_reg_96620.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_27_V_address0 = weight_conv4_2_27_s_reg_96610.read();
        } else {
            weight_conv4_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_27_V_address1() {
    weight_conv4_2_27_V_address1 = weight_conv4_2_27_1_reg_96615.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_28_V_address0 = weight_conv4_2_28_2_reg_96635.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_28_V_address0 = weight_conv4_2_28_s_reg_96625.read();
        } else {
            weight_conv4_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_28_V_address1() {
    weight_conv4_2_28_V_address1 = weight_conv4_2_28_1_reg_96630.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_29_V_address0 = weight_conv4_2_29_2_reg_96650.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_29_V_address0 = weight_conv4_2_29_s_reg_96640.read();
        } else {
            weight_conv4_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_29_V_address1() {
    weight_conv4_2_29_V_address1 = weight_conv4_2_29_1_reg_96645.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_2_V_address0 = weight_conv4_2_2_V_3_reg_96245.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_2_V_address0 = weight_conv4_2_2_V_1_reg_96235.read();
        } else {
            weight_conv4_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_2_V_address1() {
    weight_conv4_2_2_V_address1 = weight_conv4_2_2_V_2_reg_96240.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_30_V_address0 = weight_conv4_2_30_2_reg_96665.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_30_V_address0 = weight_conv4_2_30_s_reg_96655.read();
        } else {
            weight_conv4_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_30_V_address1() {
    weight_conv4_2_30_V_address1 = weight_conv4_2_30_1_reg_96660.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_31_V_address0 = weight_conv4_2_31_2_reg_96680.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_31_V_address0 = weight_conv4_2_31_s_reg_96670.read();
        } else {
            weight_conv4_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_31_V_address1() {
    weight_conv4_2_31_V_address1 = weight_conv4_2_31_1_reg_96675.read();
}

void Block_arrayctor_loop::thread_weight_conv4_2_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv4_2_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv4_2_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv4_2_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv4_2_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp14_stage1.read(), ap_const_boolean_0))) {
            weight_conv4_2_32_V_address0 = weight_conv4_2_32_2_reg_96695.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
            weight_conv4_2_32_V_address0 = weight_conv4_2_32_s_reg_96685.read();
        } else {
            weight_conv4_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv4_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv4_2_32_V_address1() {
    weight_conv4_2_32_V_address1 = weight_conv4_2_32_1_reg_96690.read();
}

}

