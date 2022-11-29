#include "Block_arrayctor_loop.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Block_arrayctor_loop::thread_weight_conv7_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_22_V_address0 = weight_conv7_1_22_1_reg_113226.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_22_V_address0 = weight_conv7_1_22_s_reg_113221.read();
        } else {
            weight_conv7_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_22_V_address1() {
    weight_conv7_1_22_V_address1 = weight_conv7_1_22_2_reg_113231.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_23_V_address0 = weight_conv7_1_23_1_reg_113241.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_23_V_address0 = weight_conv7_1_23_s_reg_113236.read();
        } else {
            weight_conv7_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_23_V_address1() {
    weight_conv7_1_23_V_address1 = weight_conv7_1_23_2_reg_113246.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_24_V_address0 = weight_conv7_1_24_1_reg_113256.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_24_V_address0 = weight_conv7_1_24_s_reg_113251.read();
        } else {
            weight_conv7_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_24_V_address1() {
    weight_conv7_1_24_V_address1 = weight_conv7_1_24_2_reg_113261.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_25_V_address0 = weight_conv7_1_25_1_reg_113271.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_25_V_address0 = weight_conv7_1_25_s_reg_113266.read();
        } else {
            weight_conv7_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_25_V_address1() {
    weight_conv7_1_25_V_address1 = weight_conv7_1_25_2_reg_113276.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_26_V_address0 = weight_conv7_1_26_1_reg_113286.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_26_V_address0 = weight_conv7_1_26_s_reg_113281.read();
        } else {
            weight_conv7_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_26_V_address1() {
    weight_conv7_1_26_V_address1 = weight_conv7_1_26_2_reg_113291.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_27_V_address0 = weight_conv7_1_27_1_reg_113301.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_27_V_address0 = weight_conv7_1_27_s_reg_113296.read();
        } else {
            weight_conv7_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_27_V_address1() {
    weight_conv7_1_27_V_address1 = weight_conv7_1_27_2_reg_113306.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_28_V_address0 = weight_conv7_1_28_1_reg_113316.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_28_V_address0 = weight_conv7_1_28_s_reg_113311.read();
        } else {
            weight_conv7_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_28_V_address1() {
    weight_conv7_1_28_V_address1 = weight_conv7_1_28_2_reg_113321.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_29_V_address0 = weight_conv7_1_29_1_reg_113331.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_29_V_address0 = weight_conv7_1_29_s_reg_113326.read();
        } else {
            weight_conv7_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_29_V_address1() {
    weight_conv7_1_29_V_address1 = weight_conv7_1_29_2_reg_113336.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_2_V_address0 = weight_conv7_1_2_V_2_reg_112926.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_2_V_address0 = weight_conv7_1_2_V_1_reg_112921.read();
        } else {
            weight_conv7_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_2_V_address1() {
    weight_conv7_1_2_V_address1 = weight_conv7_1_2_V_3_reg_112931.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_30_V_address0 = weight_conv7_1_30_1_reg_113346.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_30_V_address0 = weight_conv7_1_30_s_reg_113341.read();
        } else {
            weight_conv7_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_30_V_address1() {
    weight_conv7_1_30_V_address1 = weight_conv7_1_30_2_reg_113351.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_31_V_address0 = weight_conv7_1_31_1_reg_113361.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_31_V_address0 = weight_conv7_1_31_s_reg_113356.read();
        } else {
            weight_conv7_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_31_V_address1() {
    weight_conv7_1_31_V_address1 = weight_conv7_1_31_2_reg_113366.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_32_V_address0 = weight_conv7_1_32_1_reg_113376.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_32_V_address0 = weight_conv7_1_32_s_reg_113371.read();
        } else {
            weight_conv7_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_32_V_address1() {
    weight_conv7_1_32_V_address1 = weight_conv7_1_32_2_reg_113381.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_33_V_address0 = weight_conv7_1_33_1_reg_113391.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_33_V_address0 = weight_conv7_1_33_s_reg_113386.read();
        } else {
            weight_conv7_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_33_V_address1() {
    weight_conv7_1_33_V_address1 = weight_conv7_1_33_2_reg_113396.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_34_V_address0 = weight_conv7_1_34_1_reg_113406.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_34_V_address0 = weight_conv7_1_34_s_reg_113401.read();
        } else {
            weight_conv7_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_34_V_address1() {
    weight_conv7_1_34_V_address1 = weight_conv7_1_34_2_reg_113411.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_35_V_address0 = weight_conv7_1_35_1_reg_113421.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_35_V_address0 = weight_conv7_1_35_s_reg_113416.read();
        } else {
            weight_conv7_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_35_V_address1() {
    weight_conv7_1_35_V_address1 = weight_conv7_1_35_2_reg_113426.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_36_V_address0 = weight_conv7_1_36_1_reg_113436.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_36_V_address0 = weight_conv7_1_36_s_reg_113431.read();
        } else {
            weight_conv7_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_36_V_address1() {
    weight_conv7_1_36_V_address1 = weight_conv7_1_36_2_reg_113441.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_37_V_address0 = weight_conv7_1_37_1_reg_113451.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_37_V_address0 = weight_conv7_1_37_s_reg_113446.read();
        } else {
            weight_conv7_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_37_V_address1() {
    weight_conv7_1_37_V_address1 = weight_conv7_1_37_2_reg_113456.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_38_V_address0 = weight_conv7_1_38_1_reg_113466.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_38_V_address0 = weight_conv7_1_38_s_reg_113461.read();
        } else {
            weight_conv7_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_38_V_address1() {
    weight_conv7_1_38_V_address1 = weight_conv7_1_38_2_reg_113471.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_39_V_address0 = weight_conv7_1_39_1_reg_113481.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_39_V_address0 = weight_conv7_1_39_s_reg_113476.read();
        } else {
            weight_conv7_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_39_V_address1() {
    weight_conv7_1_39_V_address1 = weight_conv7_1_39_2_reg_113486.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_3_V_address0 = weight_conv7_1_3_V_2_reg_112941.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_3_V_address0 = weight_conv7_1_3_V_1_reg_112936.read();
        } else {
            weight_conv7_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_3_V_address1() {
    weight_conv7_1_3_V_address1 = weight_conv7_1_3_V_3_reg_112946.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_40_V_address0 = weight_conv7_1_40_1_reg_113496.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_40_V_address0 = weight_conv7_1_40_s_reg_113491.read();
        } else {
            weight_conv7_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_40_V_address1() {
    weight_conv7_1_40_V_address1 = weight_conv7_1_40_2_reg_113501.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_41_V_address0 = weight_conv7_1_41_1_reg_113511.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_41_V_address0 = weight_conv7_1_41_s_reg_113506.read();
        } else {
            weight_conv7_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_41_V_address1() {
    weight_conv7_1_41_V_address1 = weight_conv7_1_41_2_reg_113516.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_42_V_address0 = weight_conv7_1_42_1_reg_113526.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_42_V_address0 = weight_conv7_1_42_s_reg_113521.read();
        } else {
            weight_conv7_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_42_V_address1() {
    weight_conv7_1_42_V_address1 = weight_conv7_1_42_2_reg_113531.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_43_V_address0 = weight_conv7_1_43_1_reg_113541.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_43_V_address0 = weight_conv7_1_43_s_reg_113536.read();
        } else {
            weight_conv7_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_43_V_address1() {
    weight_conv7_1_43_V_address1 = weight_conv7_1_43_2_reg_113546.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_44_V_address0 = weight_conv7_1_44_1_reg_113556.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_44_V_address0 = weight_conv7_1_44_s_reg_113551.read();
        } else {
            weight_conv7_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_44_V_address1() {
    weight_conv7_1_44_V_address1 = weight_conv7_1_44_2_reg_113561.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_45_V_address0 = weight_conv7_1_45_1_reg_113571.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_45_V_address0 = weight_conv7_1_45_s_reg_113566.read();
        } else {
            weight_conv7_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_45_V_address1() {
    weight_conv7_1_45_V_address1 = weight_conv7_1_45_2_reg_113576.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_46_V_address0 = weight_conv7_1_46_1_reg_113586.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_46_V_address0 = weight_conv7_1_46_s_reg_113581.read();
        } else {
            weight_conv7_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_46_V_address1() {
    weight_conv7_1_46_V_address1 = weight_conv7_1_46_2_reg_113591.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_47_V_address0 = weight_conv7_1_47_1_reg_113601.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_47_V_address0 = weight_conv7_1_47_s_reg_113596.read();
        } else {
            weight_conv7_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_47_V_address1() {
    weight_conv7_1_47_V_address1 = weight_conv7_1_47_2_reg_113606.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_48_V_address0 = weight_conv7_1_48_1_reg_113616.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_48_V_address0 = weight_conv7_1_48_s_reg_113611.read();
        } else {
            weight_conv7_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_48_V_address1() {
    weight_conv7_1_48_V_address1 = weight_conv7_1_48_2_reg_113621.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_49_V_address0 = weight_conv7_1_49_1_reg_113631.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_49_V_address0 = weight_conv7_1_49_s_reg_113626.read();
        } else {
            weight_conv7_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_49_V_address1() {
    weight_conv7_1_49_V_address1 = weight_conv7_1_49_2_reg_113636.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_4_V_address0 = weight_conv7_1_4_V_2_reg_112956.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_4_V_address0 = weight_conv7_1_4_V_1_reg_112951.read();
        } else {
            weight_conv7_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_4_V_address1() {
    weight_conv7_1_4_V_address1 = weight_conv7_1_4_V_3_reg_112961.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_50_V_address0 = weight_conv7_1_50_1_reg_113646.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_50_V_address0 = weight_conv7_1_50_s_reg_113641.read();
        } else {
            weight_conv7_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_50_V_address1() {
    weight_conv7_1_50_V_address1 = weight_conv7_1_50_2_reg_113651.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_51_V_address0 = weight_conv7_1_51_1_reg_113661.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_51_V_address0 = weight_conv7_1_51_s_reg_113656.read();
        } else {
            weight_conv7_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_51_V_address1() {
    weight_conv7_1_51_V_address1 = weight_conv7_1_51_2_reg_113666.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_52_V_address0 = weight_conv7_1_52_1_reg_113676.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_52_V_address0 = weight_conv7_1_52_s_reg_113671.read();
        } else {
            weight_conv7_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_52_V_address1() {
    weight_conv7_1_52_V_address1 = weight_conv7_1_52_2_reg_113681.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_53_V_address0 = weight_conv7_1_53_1_reg_113691.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_53_V_address0 = weight_conv7_1_53_s_reg_113686.read();
        } else {
            weight_conv7_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_53_V_address1() {
    weight_conv7_1_53_V_address1 = weight_conv7_1_53_2_reg_113696.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_54_V_address0 = weight_conv7_1_54_1_reg_113706.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_54_V_address0 = weight_conv7_1_54_s_reg_113701.read();
        } else {
            weight_conv7_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_54_V_address1() {
    weight_conv7_1_54_V_address1 = weight_conv7_1_54_2_reg_113711.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_55_V_address0 = weight_conv7_1_55_1_reg_113721.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_55_V_address0 = weight_conv7_1_55_s_reg_113716.read();
        } else {
            weight_conv7_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_55_V_address1() {
    weight_conv7_1_55_V_address1 = weight_conv7_1_55_2_reg_113726.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_56_V_address0 = weight_conv7_1_56_1_reg_113736.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_56_V_address0 = weight_conv7_1_56_s_reg_113731.read();
        } else {
            weight_conv7_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_56_V_address1() {
    weight_conv7_1_56_V_address1 = weight_conv7_1_56_2_reg_113741.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_57_V_address0 = weight_conv7_1_57_1_reg_113751.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_57_V_address0 = weight_conv7_1_57_s_reg_113746.read();
        } else {
            weight_conv7_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_57_V_address1() {
    weight_conv7_1_57_V_address1 = weight_conv7_1_57_2_reg_113756.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_58_V_address0 = weight_conv7_1_58_1_reg_113766.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_58_V_address0 = weight_conv7_1_58_s_reg_113761.read();
        } else {
            weight_conv7_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_58_V_address1() {
    weight_conv7_1_58_V_address1 = weight_conv7_1_58_2_reg_113771.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_59_V_address0 = weight_conv7_1_59_1_reg_113781.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_59_V_address0 = weight_conv7_1_59_s_reg_113776.read();
        } else {
            weight_conv7_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_59_V_address1() {
    weight_conv7_1_59_V_address1 = weight_conv7_1_59_2_reg_113786.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_5_V_address0 = weight_conv7_1_5_V_2_reg_112971.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_5_V_address0 = weight_conv7_1_5_V_1_reg_112966.read();
        } else {
            weight_conv7_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_5_V_address1() {
    weight_conv7_1_5_V_address1 = weight_conv7_1_5_V_3_reg_112976.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_60_V_address0 = weight_conv7_1_60_1_reg_113796.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_60_V_address0 = weight_conv7_1_60_s_reg_113791.read();
        } else {
            weight_conv7_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_60_V_address1() {
    weight_conv7_1_60_V_address1 = weight_conv7_1_60_2_reg_113801.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_61_V_address0 = weight_conv7_1_61_1_reg_113811.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_61_V_address0 = weight_conv7_1_61_s_reg_113806.read();
        } else {
            weight_conv7_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_61_V_address1() {
    weight_conv7_1_61_V_address1 = weight_conv7_1_61_2_reg_113816.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_62_V_address0 = weight_conv7_1_62_1_reg_113826.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_62_V_address0 = weight_conv7_1_62_s_reg_113821.read();
        } else {
            weight_conv7_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_62_V_address1() {
    weight_conv7_1_62_V_address1 = weight_conv7_1_62_2_reg_113831.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_63_V_address0 = weight_conv7_1_63_1_reg_113841.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_63_V_address0 = weight_conv7_1_63_s_reg_113836.read();
        } else {
            weight_conv7_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_63_V_address1() {
    weight_conv7_1_63_V_address1 = weight_conv7_1_63_2_reg_113846.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_6_V_address0 = weight_conv7_1_6_V_2_reg_112986.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_6_V_address0 = weight_conv7_1_6_V_1_reg_112981.read();
        } else {
            weight_conv7_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_6_V_address1() {
    weight_conv7_1_6_V_address1 = weight_conv7_1_6_V_3_reg_112991.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_7_V_address0 = weight_conv7_1_7_V_2_reg_113001.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_7_V_address0 = weight_conv7_1_7_V_1_reg_112996.read();
        } else {
            weight_conv7_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_7_V_address1() {
    weight_conv7_1_7_V_address1 = weight_conv7_1_7_V_3_reg_113006.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_8_V_address0 = weight_conv7_1_8_V_2_reg_113016.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_8_V_address0 = weight_conv7_1_8_V_1_reg_113011.read();
        } else {
            weight_conv7_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_8_V_address1() {
    weight_conv7_1_8_V_address1 = weight_conv7_1_8_V_3_reg_113021.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_9_V_address0 = weight_conv7_1_9_V_2_reg_113031.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_9_V_address0 = weight_conv7_1_9_V_1_reg_113026.read();
        } else {
            weight_conv7_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_9_V_address1() {
    weight_conv7_1_9_V_address1 = weight_conv7_1_9_V_3_reg_113036.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_0_V_address0 = weight_conv7_2_0_V_3_reg_113861.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_0_V_address0 = weight_conv7_2_0_V_1_reg_113851.read();
        } else {
            weight_conv7_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_0_V_address1() {
    weight_conv7_2_0_V_address1 = weight_conv7_2_0_V_2_reg_113856.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_10_V_address0 = weight_conv7_2_10_2_reg_114011.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_10_V_address0 = weight_conv7_2_10_s_reg_114001.read();
        } else {
            weight_conv7_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_10_V_address1() {
    weight_conv7_2_10_V_address1 = weight_conv7_2_10_1_reg_114006.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_11_V_address0 = weight_conv7_2_11_2_reg_114026.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_11_V_address0 = weight_conv7_2_11_s_reg_114016.read();
        } else {
            weight_conv7_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_11_V_address1() {
    weight_conv7_2_11_V_address1 = weight_conv7_2_11_1_reg_114021.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_12_V_address0 = weight_conv7_2_12_2_reg_114041.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_12_V_address0 = weight_conv7_2_12_s_reg_114031.read();
        } else {
            weight_conv7_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_12_V_address1() {
    weight_conv7_2_12_V_address1 = weight_conv7_2_12_1_reg_114036.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_13_V_address0 = weight_conv7_2_13_2_reg_114056.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_13_V_address0 = weight_conv7_2_13_s_reg_114046.read();
        } else {
            weight_conv7_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_13_V_address1() {
    weight_conv7_2_13_V_address1 = weight_conv7_2_13_1_reg_114051.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_14_V_address0 = weight_conv7_2_14_2_reg_114071.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_14_V_address0 = weight_conv7_2_14_s_reg_114061.read();
        } else {
            weight_conv7_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_14_V_address1() {
    weight_conv7_2_14_V_address1 = weight_conv7_2_14_1_reg_114066.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_15_V_address0 = weight_conv7_2_15_2_reg_114086.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_15_V_address0 = weight_conv7_2_15_s_reg_114076.read();
        } else {
            weight_conv7_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_15_V_address1() {
    weight_conv7_2_15_V_address1 = weight_conv7_2_15_1_reg_114081.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_16_V_address0 = weight_conv7_2_16_2_reg_114101.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_16_V_address0 = weight_conv7_2_16_s_reg_114091.read();
        } else {
            weight_conv7_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_16_V_address1() {
    weight_conv7_2_16_V_address1 = weight_conv7_2_16_1_reg_114096.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_17_V_address0 = weight_conv7_2_17_2_reg_114116.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_17_V_address0 = weight_conv7_2_17_s_reg_114106.read();
        } else {
            weight_conv7_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_17_V_address1() {
    weight_conv7_2_17_V_address1 = weight_conv7_2_17_1_reg_114111.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_18_V_address0 = weight_conv7_2_18_2_reg_114131.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_18_V_address0 = weight_conv7_2_18_s_reg_114121.read();
        } else {
            weight_conv7_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_18_V_address1() {
    weight_conv7_2_18_V_address1 = weight_conv7_2_18_1_reg_114126.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_19_V_address0 = weight_conv7_2_19_2_reg_114146.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_19_V_address0 = weight_conv7_2_19_s_reg_114136.read();
        } else {
            weight_conv7_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_19_V_address1() {
    weight_conv7_2_19_V_address1 = weight_conv7_2_19_1_reg_114141.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_1_V_address0 = weight_conv7_2_1_V_3_reg_113876.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_1_V_address0 = weight_conv7_2_1_V_1_reg_113866.read();
        } else {
            weight_conv7_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_1_V_address1() {
    weight_conv7_2_1_V_address1 = weight_conv7_2_1_V_2_reg_113871.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_20_V_address0 = weight_conv7_2_20_2_reg_114161.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_20_V_address0 = weight_conv7_2_20_s_reg_114151.read();
        } else {
            weight_conv7_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_20_V_address1() {
    weight_conv7_2_20_V_address1 = weight_conv7_2_20_1_reg_114156.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_21_V_address0 = weight_conv7_2_21_2_reg_114176.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_21_V_address0 = weight_conv7_2_21_s_reg_114166.read();
        } else {
            weight_conv7_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_21_V_address1() {
    weight_conv7_2_21_V_address1 = weight_conv7_2_21_1_reg_114171.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_22_V_address0 = weight_conv7_2_22_2_reg_114191.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_22_V_address0 = weight_conv7_2_22_s_reg_114181.read();
        } else {
            weight_conv7_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_22_V_address1() {
    weight_conv7_2_22_V_address1 = weight_conv7_2_22_1_reg_114186.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_23_V_address0 = weight_conv7_2_23_2_reg_114206.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_23_V_address0 = weight_conv7_2_23_s_reg_114196.read();
        } else {
            weight_conv7_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_23_V_address1() {
    weight_conv7_2_23_V_address1 = weight_conv7_2_23_1_reg_114201.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_24_V_address0 = weight_conv7_2_24_2_reg_114221.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_24_V_address0 = weight_conv7_2_24_s_reg_114211.read();
        } else {
            weight_conv7_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_24_V_address1() {
    weight_conv7_2_24_V_address1 = weight_conv7_2_24_1_reg_114216.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_25_V_address0 = weight_conv7_2_25_2_reg_114236.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_25_V_address0 = weight_conv7_2_25_s_reg_114226.read();
        } else {
            weight_conv7_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_25_V_address1() {
    weight_conv7_2_25_V_address1 = weight_conv7_2_25_1_reg_114231.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_26_V_address0 = weight_conv7_2_26_2_reg_114251.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_26_V_address0 = weight_conv7_2_26_s_reg_114241.read();
        } else {
            weight_conv7_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_26_V_address1() {
    weight_conv7_2_26_V_address1 = weight_conv7_2_26_1_reg_114246.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_27_V_address0 = weight_conv7_2_27_2_reg_114266.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_27_V_address0 = weight_conv7_2_27_s_reg_114256.read();
        } else {
            weight_conv7_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_27_V_address1() {
    weight_conv7_2_27_V_address1 = weight_conv7_2_27_1_reg_114261.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_28_V_address0 = weight_conv7_2_28_2_reg_114281.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_28_V_address0 = weight_conv7_2_28_s_reg_114271.read();
        } else {
            weight_conv7_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_28_V_address1() {
    weight_conv7_2_28_V_address1 = weight_conv7_2_28_1_reg_114276.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_29_V_address0 = weight_conv7_2_29_2_reg_114296.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_29_V_address0 = weight_conv7_2_29_s_reg_114286.read();
        } else {
            weight_conv7_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_29_V_address1() {
    weight_conv7_2_29_V_address1 = weight_conv7_2_29_1_reg_114291.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_2_V_address0 = weight_conv7_2_2_V_3_reg_113891.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_2_V_address0 = weight_conv7_2_2_V_1_reg_113881.read();
        } else {
            weight_conv7_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_2_V_address1() {
    weight_conv7_2_2_V_address1 = weight_conv7_2_2_V_2_reg_113886.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_30_V_address0 = weight_conv7_2_30_2_reg_114311.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_30_V_address0 = weight_conv7_2_30_s_reg_114301.read();
        } else {
            weight_conv7_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_30_V_address1() {
    weight_conv7_2_30_V_address1 = weight_conv7_2_30_1_reg_114306.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_31_V_address0 = weight_conv7_2_31_2_reg_114326.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_31_V_address0 = weight_conv7_2_31_s_reg_114316.read();
        } else {
            weight_conv7_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_31_V_address1() {
    weight_conv7_2_31_V_address1 = weight_conv7_2_31_1_reg_114321.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_32_V_address0 = weight_conv7_2_32_2_reg_114341.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_32_V_address0 = weight_conv7_2_32_s_reg_114331.read();
        } else {
            weight_conv7_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_32_V_address1() {
    weight_conv7_2_32_V_address1 = weight_conv7_2_32_1_reg_114336.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_33_V_address0 = weight_conv7_2_33_2_reg_114356.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_33_V_address0 = weight_conv7_2_33_s_reg_114346.read();
        } else {
            weight_conv7_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_33_V_address1() {
    weight_conv7_2_33_V_address1 = weight_conv7_2_33_1_reg_114351.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_34_V_address0 = weight_conv7_2_34_2_reg_114371.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_34_V_address0 = weight_conv7_2_34_s_reg_114361.read();
        } else {
            weight_conv7_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_34_V_address1() {
    weight_conv7_2_34_V_address1 = weight_conv7_2_34_1_reg_114366.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_35_V_address0 = weight_conv7_2_35_2_reg_114386.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_35_V_address0 = weight_conv7_2_35_s_reg_114376.read();
        } else {
            weight_conv7_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_35_V_address1() {
    weight_conv7_2_35_V_address1 = weight_conv7_2_35_1_reg_114381.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_36_V_address0 = weight_conv7_2_36_2_reg_114401.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_36_V_address0 = weight_conv7_2_36_s_reg_114391.read();
        } else {
            weight_conv7_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_36_V_address1() {
    weight_conv7_2_36_V_address1 = weight_conv7_2_36_1_reg_114396.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_37_V_address0 = weight_conv7_2_37_2_reg_114416.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_37_V_address0 = weight_conv7_2_37_s_reg_114406.read();
        } else {
            weight_conv7_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_37_V_address1() {
    weight_conv7_2_37_V_address1 = weight_conv7_2_37_1_reg_114411.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_38_V_address0 = weight_conv7_2_38_2_reg_114431.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_38_V_address0 = weight_conv7_2_38_s_reg_114421.read();
        } else {
            weight_conv7_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_38_V_address1() {
    weight_conv7_2_38_V_address1 = weight_conv7_2_38_1_reg_114426.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_39_V_address0 = weight_conv7_2_39_2_reg_114446.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_39_V_address0 = weight_conv7_2_39_s_reg_114436.read();
        } else {
            weight_conv7_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_39_V_address1() {
    weight_conv7_2_39_V_address1 = weight_conv7_2_39_1_reg_114441.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_3_V_address0 = weight_conv7_2_3_V_3_reg_113906.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_3_V_address0 = weight_conv7_2_3_V_1_reg_113896.read();
        } else {
            weight_conv7_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_3_V_address1() {
    weight_conv7_2_3_V_address1 = weight_conv7_2_3_V_2_reg_113901.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_40_V_address0 = weight_conv7_2_40_2_reg_114461.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_40_V_address0 = weight_conv7_2_40_s_reg_114451.read();
        } else {
            weight_conv7_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_40_V_address1() {
    weight_conv7_2_40_V_address1 = weight_conv7_2_40_1_reg_114456.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_41_V_address0 = weight_conv7_2_41_2_reg_114476.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_41_V_address0 = weight_conv7_2_41_s_reg_114466.read();
        } else {
            weight_conv7_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_41_V_address1() {
    weight_conv7_2_41_V_address1 = weight_conv7_2_41_1_reg_114471.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_42_V_address0 = weight_conv7_2_42_2_reg_114491.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_42_V_address0 = weight_conv7_2_42_s_reg_114481.read();
        } else {
            weight_conv7_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_42_V_address1() {
    weight_conv7_2_42_V_address1 = weight_conv7_2_42_1_reg_114486.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_43_V_address0 = weight_conv7_2_43_2_reg_114506.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_43_V_address0 = weight_conv7_2_43_s_reg_114496.read();
        } else {
            weight_conv7_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_43_V_address1() {
    weight_conv7_2_43_V_address1 = weight_conv7_2_43_1_reg_114501.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_44_V_address0 = weight_conv7_2_44_2_reg_114521.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_44_V_address0 = weight_conv7_2_44_s_reg_114511.read();
        } else {
            weight_conv7_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_44_V_address1() {
    weight_conv7_2_44_V_address1 = weight_conv7_2_44_1_reg_114516.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_45_V_address0 = weight_conv7_2_45_2_reg_114536.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_45_V_address0 = weight_conv7_2_45_s_reg_114526.read();
        } else {
            weight_conv7_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_45_V_address1() {
    weight_conv7_2_45_V_address1 = weight_conv7_2_45_1_reg_114531.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_46_V_address0 = weight_conv7_2_46_2_reg_114551.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_46_V_address0 = weight_conv7_2_46_s_reg_114541.read();
        } else {
            weight_conv7_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_46_V_address1() {
    weight_conv7_2_46_V_address1 = weight_conv7_2_46_1_reg_114546.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_47_V_address0 = weight_conv7_2_47_2_reg_114566.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_47_V_address0 = weight_conv7_2_47_s_reg_114556.read();
        } else {
            weight_conv7_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_47_V_address1() {
    weight_conv7_2_47_V_address1 = weight_conv7_2_47_1_reg_114561.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_48_V_address0 = weight_conv7_2_48_2_reg_114581.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_48_V_address0 = weight_conv7_2_48_s_reg_114571.read();
        } else {
            weight_conv7_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_48_V_address1() {
    weight_conv7_2_48_V_address1 = weight_conv7_2_48_1_reg_114576.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_49_V_address0 = weight_conv7_2_49_2_reg_114596.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_49_V_address0 = weight_conv7_2_49_s_reg_114586.read();
        } else {
            weight_conv7_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_49_V_address1() {
    weight_conv7_2_49_V_address1 = weight_conv7_2_49_1_reg_114591.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_4_V_address0 = weight_conv7_2_4_V_3_reg_113921.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_4_V_address0 = weight_conv7_2_4_V_1_reg_113911.read();
        } else {
            weight_conv7_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_4_V_address1() {
    weight_conv7_2_4_V_address1 = weight_conv7_2_4_V_2_reg_113916.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_50_V_address0 = weight_conv7_2_50_2_reg_114611.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_50_V_address0 = weight_conv7_2_50_s_reg_114601.read();
        } else {
            weight_conv7_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_50_V_address1() {
    weight_conv7_2_50_V_address1 = weight_conv7_2_50_1_reg_114606.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_51_V_address0 = weight_conv7_2_51_2_reg_114626.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_51_V_address0 = weight_conv7_2_51_s_reg_114616.read();
        } else {
            weight_conv7_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_51_V_address1() {
    weight_conv7_2_51_V_address1 = weight_conv7_2_51_1_reg_114621.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_52_V_address0 = weight_conv7_2_52_2_reg_114641.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_52_V_address0 = weight_conv7_2_52_s_reg_114631.read();
        } else {
            weight_conv7_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_52_V_address1() {
    weight_conv7_2_52_V_address1 = weight_conv7_2_52_1_reg_114636.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_53_V_address0 = weight_conv7_2_53_2_reg_114656.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_53_V_address0 = weight_conv7_2_53_s_reg_114646.read();
        } else {
            weight_conv7_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_53_V_address1() {
    weight_conv7_2_53_V_address1 = weight_conv7_2_53_1_reg_114651.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_54_V_address0 = weight_conv7_2_54_2_reg_114671.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_54_V_address0 = weight_conv7_2_54_s_reg_114661.read();
        } else {
            weight_conv7_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_54_V_address1() {
    weight_conv7_2_54_V_address1 = weight_conv7_2_54_1_reg_114666.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_55_V_address0 = weight_conv7_2_55_2_reg_114686.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_55_V_address0 = weight_conv7_2_55_s_reg_114676.read();
        } else {
            weight_conv7_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_55_V_address1() {
    weight_conv7_2_55_V_address1 = weight_conv7_2_55_1_reg_114681.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_56_V_address0 = weight_conv7_2_56_2_reg_114701.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_56_V_address0 = weight_conv7_2_56_s_reg_114691.read();
        } else {
            weight_conv7_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_56_V_address1() {
    weight_conv7_2_56_V_address1 = weight_conv7_2_56_1_reg_114696.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_57_V_address0 = weight_conv7_2_57_2_reg_114716.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_57_V_address0 = weight_conv7_2_57_s_reg_114706.read();
        } else {
            weight_conv7_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_57_V_address1() {
    weight_conv7_2_57_V_address1 = weight_conv7_2_57_1_reg_114711.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_58_V_address0 = weight_conv7_2_58_2_reg_114731.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_58_V_address0 = weight_conv7_2_58_s_reg_114721.read();
        } else {
            weight_conv7_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_58_V_address1() {
    weight_conv7_2_58_V_address1 = weight_conv7_2_58_1_reg_114726.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_59_V_address0 = weight_conv7_2_59_2_reg_114746.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_59_V_address0 = weight_conv7_2_59_s_reg_114736.read();
        } else {
            weight_conv7_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_59_V_address1() {
    weight_conv7_2_59_V_address1 = weight_conv7_2_59_1_reg_114741.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_5_V_address0 = weight_conv7_2_5_V_3_reg_113936.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_5_V_address0 = weight_conv7_2_5_V_1_reg_113926.read();
        } else {
            weight_conv7_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_5_V_address1() {
    weight_conv7_2_5_V_address1 = weight_conv7_2_5_V_2_reg_113931.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_60_V_address0 = weight_conv7_2_60_2_reg_114761.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_60_V_address0 = weight_conv7_2_60_s_reg_114751.read();
        } else {
            weight_conv7_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_60_V_address1() {
    weight_conv7_2_60_V_address1 = weight_conv7_2_60_1_reg_114756.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_61_V_address0 = weight_conv7_2_61_2_reg_114776.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_61_V_address0 = weight_conv7_2_61_s_reg_114766.read();
        } else {
            weight_conv7_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_61_V_address1() {
    weight_conv7_2_61_V_address1 = weight_conv7_2_61_1_reg_114771.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_62_V_address0 = weight_conv7_2_62_2_reg_114791.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_62_V_address0 = weight_conv7_2_62_s_reg_114781.read();
        } else {
            weight_conv7_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_62_V_address1() {
    weight_conv7_2_62_V_address1 = weight_conv7_2_62_1_reg_114786.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_63_V_address0 = weight_conv7_2_63_2_reg_114806.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_63_V_address0 = weight_conv7_2_63_s_reg_114796.read();
        } else {
            weight_conv7_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_63_V_address1() {
    weight_conv7_2_63_V_address1 = weight_conv7_2_63_1_reg_114801.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_6_V_address0 = weight_conv7_2_6_V_3_reg_113951.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_6_V_address0 = weight_conv7_2_6_V_1_reg_113941.read();
        } else {
            weight_conv7_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_6_V_address1() {
    weight_conv7_2_6_V_address1 = weight_conv7_2_6_V_2_reg_113946.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_7_V_address0 = weight_conv7_2_7_V_3_reg_113966.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_7_V_address0 = weight_conv7_2_7_V_1_reg_113956.read();
        } else {
            weight_conv7_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_7_V_address1() {
    weight_conv7_2_7_V_address1 = weight_conv7_2_7_V_2_reg_113961.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_8_V_address0 = weight_conv7_2_8_V_3_reg_113981.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_8_V_address0 = weight_conv7_2_8_V_1_reg_113971.read();
        } else {
            weight_conv7_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_8_V_address1() {
    weight_conv7_2_8_V_address1 = weight_conv7_2_8_V_2_reg_113976.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_2_9_V_address0 = weight_conv7_2_9_V_3_reg_113996.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_2_9_V_address0 = weight_conv7_2_9_V_1_reg_113986.read();
        } else {
            weight_conv7_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_9_V_address1() {
    weight_conv7_2_9_V_address1 = weight_conv7_2_9_V_2_reg_113991.read();
}

void Block_arrayctor_loop::thread_weight_conv7_2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_2_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_2_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_2_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_2_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_0_V_address0 = weight_conv8_0_0_V_3_reg_117778.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_0_V_address0 = weight_conv8_0_0_V_1_reg_117768.read();
        } else {
            weight_conv8_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_0_V_address1() {
    weight_conv8_0_0_V_address1 = weight_conv8_0_0_V_2_reg_117773.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_10_V_address0 = weight_conv8_0_10_2_reg_117928.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_10_V_address0 = weight_conv8_0_10_s_reg_117918.read();
        } else {
            weight_conv8_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_10_V_address1() {
    weight_conv8_0_10_V_address1 = weight_conv8_0_10_1_reg_117923.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_11_V_address0 = weight_conv8_0_11_2_reg_117943.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_11_V_address0 = weight_conv8_0_11_s_reg_117933.read();
        } else {
            weight_conv8_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_11_V_address1() {
    weight_conv8_0_11_V_address1 = weight_conv8_0_11_1_reg_117938.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_12_V_address0 = weight_conv8_0_12_2_reg_117958.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_12_V_address0 = weight_conv8_0_12_s_reg_117948.read();
        } else {
            weight_conv8_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_12_V_address1() {
    weight_conv8_0_12_V_address1 = weight_conv8_0_12_1_reg_117953.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_13_V_address0 = weight_conv8_0_13_2_reg_117973.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_13_V_address0 = weight_conv8_0_13_s_reg_117963.read();
        } else {
            weight_conv8_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_13_V_address1() {
    weight_conv8_0_13_V_address1 = weight_conv8_0_13_1_reg_117968.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_14_V_address0 = weight_conv8_0_14_2_reg_117988.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_14_V_address0 = weight_conv8_0_14_s_reg_117978.read();
        } else {
            weight_conv8_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_14_V_address1() {
    weight_conv8_0_14_V_address1 = weight_conv8_0_14_1_reg_117983.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_15_V_address0 = weight_conv8_0_15_2_reg_118003.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_15_V_address0 = weight_conv8_0_15_s_reg_117993.read();
        } else {
            weight_conv8_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_15_V_address1() {
    weight_conv8_0_15_V_address1 = weight_conv8_0_15_1_reg_117998.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_16_V_address0 = weight_conv8_0_16_2_reg_118018.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_16_V_address0 = weight_conv8_0_16_s_reg_118008.read();
        } else {
            weight_conv8_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_16_V_address1() {
    weight_conv8_0_16_V_address1 = weight_conv8_0_16_1_reg_118013.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_17_V_address0 = weight_conv8_0_17_2_reg_118033.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_17_V_address0 = weight_conv8_0_17_s_reg_118023.read();
        } else {
            weight_conv8_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_17_V_address1() {
    weight_conv8_0_17_V_address1 = weight_conv8_0_17_1_reg_118028.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_18_V_address0 = weight_conv8_0_18_2_reg_118048.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_18_V_address0 = weight_conv8_0_18_s_reg_118038.read();
        } else {
            weight_conv8_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_18_V_address1() {
    weight_conv8_0_18_V_address1 = weight_conv8_0_18_1_reg_118043.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_19_V_address0 = weight_conv8_0_19_2_reg_118063.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_19_V_address0 = weight_conv8_0_19_s_reg_118053.read();
        } else {
            weight_conv8_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_19_V_address1() {
    weight_conv8_0_19_V_address1 = weight_conv8_0_19_1_reg_118058.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_1_V_address0 = weight_conv8_0_1_V_3_reg_117793.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_1_V_address0 = weight_conv8_0_1_V_1_reg_117783.read();
        } else {
            weight_conv8_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_1_V_address1() {
    weight_conv8_0_1_V_address1 = weight_conv8_0_1_V_2_reg_117788.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_20_V_address0 = weight_conv8_0_20_2_reg_118078.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_20_V_address0 = weight_conv8_0_20_s_reg_118068.read();
        } else {
            weight_conv8_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_20_V_address1() {
    weight_conv8_0_20_V_address1 = weight_conv8_0_20_1_reg_118073.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_21_V_address0 = weight_conv8_0_21_2_reg_118093.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_21_V_address0 = weight_conv8_0_21_s_reg_118083.read();
        } else {
            weight_conv8_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_21_V_address1() {
    weight_conv8_0_21_V_address1 = weight_conv8_0_21_1_reg_118088.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_22_V_address0 = weight_conv8_0_22_2_reg_118108.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_22_V_address0 = weight_conv8_0_22_s_reg_118098.read();
        } else {
            weight_conv8_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_22_V_address1() {
    weight_conv8_0_22_V_address1 = weight_conv8_0_22_1_reg_118103.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_23_V_address0 = weight_conv8_0_23_2_reg_118123.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_23_V_address0 = weight_conv8_0_23_s_reg_118113.read();
        } else {
            weight_conv8_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_23_V_address1() {
    weight_conv8_0_23_V_address1 = weight_conv8_0_23_1_reg_118118.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_24_V_address0 = weight_conv8_0_24_2_reg_118138.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_24_V_address0 = weight_conv8_0_24_s_reg_118128.read();
        } else {
            weight_conv8_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_24_V_address1() {
    weight_conv8_0_24_V_address1 = weight_conv8_0_24_1_reg_118133.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_25_V_address0 = weight_conv8_0_25_2_reg_118153.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_25_V_address0 = weight_conv8_0_25_s_reg_118143.read();
        } else {
            weight_conv8_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_25_V_address1() {
    weight_conv8_0_25_V_address1 = weight_conv8_0_25_1_reg_118148.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_26_V_address0 = weight_conv8_0_26_2_reg_118168.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_26_V_address0 = weight_conv8_0_26_s_reg_118158.read();
        } else {
            weight_conv8_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_26_V_address1() {
    weight_conv8_0_26_V_address1 = weight_conv8_0_26_1_reg_118163.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_27_V_address0 = weight_conv8_0_27_2_reg_118183.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_27_V_address0 = weight_conv8_0_27_s_reg_118173.read();
        } else {
            weight_conv8_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_27_V_address1() {
    weight_conv8_0_27_V_address1 = weight_conv8_0_27_1_reg_118178.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_28_V_address0 = weight_conv8_0_28_2_reg_118198.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_28_V_address0 = weight_conv8_0_28_s_reg_118188.read();
        } else {
            weight_conv8_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_28_V_address1() {
    weight_conv8_0_28_V_address1 = weight_conv8_0_28_1_reg_118193.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_29_V_address0 = weight_conv8_0_29_2_reg_118213.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_29_V_address0 = weight_conv8_0_29_s_reg_118203.read();
        } else {
            weight_conv8_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_29_V_address1() {
    weight_conv8_0_29_V_address1 = weight_conv8_0_29_1_reg_118208.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_2_V_address0 = weight_conv8_0_2_V_3_reg_117808.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_2_V_address0 = weight_conv8_0_2_V_1_reg_117798.read();
        } else {
            weight_conv8_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_2_V_address1() {
    weight_conv8_0_2_V_address1 = weight_conv8_0_2_V_2_reg_117803.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_30_V_address0 = weight_conv8_0_30_2_reg_118228.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_30_V_address0 = weight_conv8_0_30_s_reg_118218.read();
        } else {
            weight_conv8_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_30_V_address1() {
    weight_conv8_0_30_V_address1 = weight_conv8_0_30_1_reg_118223.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_31_V_address0 = weight_conv8_0_31_2_reg_118243.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_31_V_address0 = weight_conv8_0_31_s_reg_118233.read();
        } else {
            weight_conv8_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_31_V_address1() {
    weight_conv8_0_31_V_address1 = weight_conv8_0_31_1_reg_118238.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_32_V_address0 = weight_conv8_0_32_2_reg_118258.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_32_V_address0 = weight_conv8_0_32_s_reg_118248.read();
        } else {
            weight_conv8_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_32_V_address1() {
    weight_conv8_0_32_V_address1 = weight_conv8_0_32_1_reg_118253.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_33_V_address0 = weight_conv8_0_33_2_reg_118273.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_33_V_address0 = weight_conv8_0_33_s_reg_118263.read();
        } else {
            weight_conv8_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_33_V_address1() {
    weight_conv8_0_33_V_address1 = weight_conv8_0_33_1_reg_118268.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_34_V_address0 = weight_conv8_0_34_2_reg_118288.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_34_V_address0 = weight_conv8_0_34_s_reg_118278.read();
        } else {
            weight_conv8_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_34_V_address1() {
    weight_conv8_0_34_V_address1 = weight_conv8_0_34_1_reg_118283.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_35_V_address0 = weight_conv8_0_35_2_reg_118303.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_35_V_address0 = weight_conv8_0_35_s_reg_118293.read();
        } else {
            weight_conv8_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_35_V_address1() {
    weight_conv8_0_35_V_address1 = weight_conv8_0_35_1_reg_118298.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_36_V_address0 = weight_conv8_0_36_2_reg_118318.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_36_V_address0 = weight_conv8_0_36_s_reg_118308.read();
        } else {
            weight_conv8_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_36_V_address1() {
    weight_conv8_0_36_V_address1 = weight_conv8_0_36_1_reg_118313.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_37_V_address0 = weight_conv8_0_37_2_reg_118333.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_37_V_address0 = weight_conv8_0_37_s_reg_118323.read();
        } else {
            weight_conv8_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_37_V_address1() {
    weight_conv8_0_37_V_address1 = weight_conv8_0_37_1_reg_118328.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_38_V_address0 = weight_conv8_0_38_2_reg_118348.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_38_V_address0 = weight_conv8_0_38_s_reg_118338.read();
        } else {
            weight_conv8_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_38_V_address1() {
    weight_conv8_0_38_V_address1 = weight_conv8_0_38_1_reg_118343.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_39_V_address0 = weight_conv8_0_39_2_reg_118363.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_39_V_address0 = weight_conv8_0_39_s_reg_118353.read();
        } else {
            weight_conv8_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_39_V_address1() {
    weight_conv8_0_39_V_address1 = weight_conv8_0_39_1_reg_118358.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_3_V_address0 = weight_conv8_0_3_V_3_reg_117823.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_3_V_address0 = weight_conv8_0_3_V_1_reg_117813.read();
        } else {
            weight_conv8_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_3_V_address1() {
    weight_conv8_0_3_V_address1 = weight_conv8_0_3_V_2_reg_117818.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_40_V_address0 = weight_conv8_0_40_2_reg_118378.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_40_V_address0 = weight_conv8_0_40_s_reg_118368.read();
        } else {
            weight_conv8_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_40_V_address1() {
    weight_conv8_0_40_V_address1 = weight_conv8_0_40_1_reg_118373.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_41_V_address0 = weight_conv8_0_41_2_reg_118393.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_41_V_address0 = weight_conv8_0_41_s_reg_118383.read();
        } else {
            weight_conv8_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_41_V_address1() {
    weight_conv8_0_41_V_address1 = weight_conv8_0_41_1_reg_118388.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_42_V_address0 = weight_conv8_0_42_2_reg_118408.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_42_V_address0 = weight_conv8_0_42_s_reg_118398.read();
        } else {
            weight_conv8_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_42_V_address1() {
    weight_conv8_0_42_V_address1 = weight_conv8_0_42_1_reg_118403.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_43_V_address0 = weight_conv8_0_43_2_reg_118423.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_43_V_address0 = weight_conv8_0_43_s_reg_118413.read();
        } else {
            weight_conv8_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_43_V_address1() {
    weight_conv8_0_43_V_address1 = weight_conv8_0_43_1_reg_118418.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_44_V_address0 = weight_conv8_0_44_2_reg_118438.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_44_V_address0 = weight_conv8_0_44_s_reg_118428.read();
        } else {
            weight_conv8_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_44_V_address1() {
    weight_conv8_0_44_V_address1 = weight_conv8_0_44_1_reg_118433.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_45_V_address0 = weight_conv8_0_45_2_reg_118453.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_45_V_address0 = weight_conv8_0_45_s_reg_118443.read();
        } else {
            weight_conv8_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_45_V_address1() {
    weight_conv8_0_45_V_address1 = weight_conv8_0_45_1_reg_118448.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_46_V_address0 = weight_conv8_0_46_2_reg_118468.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_46_V_address0 = weight_conv8_0_46_s_reg_118458.read();
        } else {
            weight_conv8_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_46_V_address1() {
    weight_conv8_0_46_V_address1 = weight_conv8_0_46_1_reg_118463.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_47_V_address0 = weight_conv8_0_47_2_reg_118483.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_47_V_address0 = weight_conv8_0_47_s_reg_118473.read();
        } else {
            weight_conv8_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_47_V_address1() {
    weight_conv8_0_47_V_address1 = weight_conv8_0_47_1_reg_118478.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_48_V_address0 = weight_conv8_0_48_2_reg_118498.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_48_V_address0 = weight_conv8_0_48_s_reg_118488.read();
        } else {
            weight_conv8_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_48_V_address1() {
    weight_conv8_0_48_V_address1 = weight_conv8_0_48_1_reg_118493.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_49_V_address0 = weight_conv8_0_49_2_reg_118513.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_49_V_address0 = weight_conv8_0_49_s_reg_118503.read();
        } else {
            weight_conv8_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_49_V_address1() {
    weight_conv8_0_49_V_address1 = weight_conv8_0_49_1_reg_118508.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_4_V_address0 = weight_conv8_0_4_V_3_reg_117838.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_4_V_address0 = weight_conv8_0_4_V_1_reg_117828.read();
        } else {
            weight_conv8_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_4_V_address1() {
    weight_conv8_0_4_V_address1 = weight_conv8_0_4_V_2_reg_117833.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_50_V_address0 = weight_conv8_0_50_2_reg_118528.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_50_V_address0 = weight_conv8_0_50_s_reg_118518.read();
        } else {
            weight_conv8_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_50_V_address1() {
    weight_conv8_0_50_V_address1 = weight_conv8_0_50_1_reg_118523.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_51_V_address0 = weight_conv8_0_51_2_reg_118543.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_51_V_address0 = weight_conv8_0_51_s_reg_118533.read();
        } else {
            weight_conv8_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_51_V_address1() {
    weight_conv8_0_51_V_address1 = weight_conv8_0_51_1_reg_118538.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_52_V_address0 = weight_conv8_0_52_2_reg_118558.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_52_V_address0 = weight_conv8_0_52_s_reg_118548.read();
        } else {
            weight_conv8_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_52_V_address1() {
    weight_conv8_0_52_V_address1 = weight_conv8_0_52_1_reg_118553.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_53_V_address0 = weight_conv8_0_53_2_reg_118573.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_53_V_address0 = weight_conv8_0_53_s_reg_118563.read();
        } else {
            weight_conv8_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_53_V_address1() {
    weight_conv8_0_53_V_address1 = weight_conv8_0_53_1_reg_118568.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_54_V_address0 = weight_conv8_0_54_2_reg_118588.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_54_V_address0 = weight_conv8_0_54_s_reg_118578.read();
        } else {
            weight_conv8_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_54_V_address1() {
    weight_conv8_0_54_V_address1 = weight_conv8_0_54_1_reg_118583.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_55_V_address0 = weight_conv8_0_55_2_reg_118603.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_55_V_address0 = weight_conv8_0_55_s_reg_118593.read();
        } else {
            weight_conv8_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_55_V_address1() {
    weight_conv8_0_55_V_address1 = weight_conv8_0_55_1_reg_118598.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_56_V_address0 = weight_conv8_0_56_2_reg_118618.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_56_V_address0 = weight_conv8_0_56_s_reg_118608.read();
        } else {
            weight_conv8_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_56_V_address1() {
    weight_conv8_0_56_V_address1 = weight_conv8_0_56_1_reg_118613.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_57_V_address0 = weight_conv8_0_57_2_reg_118633.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_57_V_address0 = weight_conv8_0_57_s_reg_118623.read();
        } else {
            weight_conv8_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_57_V_address1() {
    weight_conv8_0_57_V_address1 = weight_conv8_0_57_1_reg_118628.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_58_V_address0 = weight_conv8_0_58_2_reg_118648.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_58_V_address0 = weight_conv8_0_58_s_reg_118638.read();
        } else {
            weight_conv8_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_58_V_address1() {
    weight_conv8_0_58_V_address1 = weight_conv8_0_58_1_reg_118643.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_59_V_address0 = weight_conv8_0_59_2_reg_118663.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_59_V_address0 = weight_conv8_0_59_s_reg_118653.read();
        } else {
            weight_conv8_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_59_V_address1() {
    weight_conv8_0_59_V_address1 = weight_conv8_0_59_1_reg_118658.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_5_V_address0 = weight_conv8_0_5_V_3_reg_117853.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_5_V_address0 = weight_conv8_0_5_V_1_reg_117843.read();
        } else {
            weight_conv8_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_5_V_address1() {
    weight_conv8_0_5_V_address1 = weight_conv8_0_5_V_2_reg_117848.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_60_V_address0 = weight_conv8_0_60_2_reg_118678.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_60_V_address0 = weight_conv8_0_60_s_reg_118668.read();
        } else {
            weight_conv8_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_60_V_address1() {
    weight_conv8_0_60_V_address1 = weight_conv8_0_60_1_reg_118673.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_61_V_address0 = weight_conv8_0_61_2_reg_118693.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_61_V_address0 = weight_conv8_0_61_s_reg_118683.read();
        } else {
            weight_conv8_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_61_V_address1() {
    weight_conv8_0_61_V_address1 = weight_conv8_0_61_1_reg_118688.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_62_V_address0 = weight_conv8_0_62_2_reg_118708.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_62_V_address0 = weight_conv8_0_62_s_reg_118698.read();
        } else {
            weight_conv8_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_62_V_address1() {
    weight_conv8_0_62_V_address1 = weight_conv8_0_62_1_reg_118703.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_63_V_address0 = weight_conv8_0_63_2_reg_118723.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_63_V_address0 = weight_conv8_0_63_s_reg_118713.read();
        } else {
            weight_conv8_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_63_V_address1() {
    weight_conv8_0_63_V_address1 = weight_conv8_0_63_1_reg_118718.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_6_V_address0 = weight_conv8_0_6_V_3_reg_117868.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_6_V_address0 = weight_conv8_0_6_V_1_reg_117858.read();
        } else {
            weight_conv8_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_6_V_address1() {
    weight_conv8_0_6_V_address1 = weight_conv8_0_6_V_2_reg_117863.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_7_V_address0 = weight_conv8_0_7_V_3_reg_117883.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_7_V_address0 = weight_conv8_0_7_V_1_reg_117873.read();
        } else {
            weight_conv8_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_7_V_address1() {
    weight_conv8_0_7_V_address1 = weight_conv8_0_7_V_2_reg_117878.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_8_V_address0 = weight_conv8_0_8_V_3_reg_117898.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_8_V_address0 = weight_conv8_0_8_V_1_reg_117888.read();
        } else {
            weight_conv8_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_8_V_address1() {
    weight_conv8_0_8_V_address1 = weight_conv8_0_8_V_2_reg_117893.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_0_9_V_address0 = weight_conv8_0_9_V_3_reg_117913.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_0_9_V_address0 = weight_conv8_0_9_V_1_reg_117903.read();
        } else {
            weight_conv8_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_9_V_address1() {
    weight_conv8_0_9_V_address1 = weight_conv8_0_9_V_2_reg_117908.read();
}

void Block_arrayctor_loop::thread_weight_conv8_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_0_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_0_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_0_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_0_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_0_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_0_V_address0 = weight_conv8_1_0_V_2_reg_118733.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_0_V_address0 = weight_conv8_1_0_V_1_reg_118728.read();
        } else {
            weight_conv8_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_0_V_address1() {
    weight_conv8_1_0_V_address1 = weight_conv8_1_0_V_3_reg_118738.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_10_V_address0 = weight_conv8_1_10_1_reg_118883.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_10_V_address0 = weight_conv8_1_10_s_reg_118878.read();
        } else {
            weight_conv8_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_10_V_address1() {
    weight_conv8_1_10_V_address1 = weight_conv8_1_10_2_reg_118888.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_11_V_address0 = weight_conv8_1_11_1_reg_118898.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_11_V_address0 = weight_conv8_1_11_s_reg_118893.read();
        } else {
            weight_conv8_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_11_V_address1() {
    weight_conv8_1_11_V_address1 = weight_conv8_1_11_2_reg_118903.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_12_V_address0 = weight_conv8_1_12_1_reg_118913.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_12_V_address0 = weight_conv8_1_12_s_reg_118908.read();
        } else {
            weight_conv8_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_12_V_address1() {
    weight_conv8_1_12_V_address1 = weight_conv8_1_12_2_reg_118918.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_13_V_address0 = weight_conv8_1_13_1_reg_118928.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_13_V_address0 = weight_conv8_1_13_s_reg_118923.read();
        } else {
            weight_conv8_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_13_V_address1() {
    weight_conv8_1_13_V_address1 = weight_conv8_1_13_2_reg_118933.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_14_V_address0 = weight_conv8_1_14_1_reg_118943.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_14_V_address0 = weight_conv8_1_14_s_reg_118938.read();
        } else {
            weight_conv8_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_14_V_address1() {
    weight_conv8_1_14_V_address1 = weight_conv8_1_14_2_reg_118948.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_15_V_address0 = weight_conv8_1_15_1_reg_118958.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_15_V_address0 = weight_conv8_1_15_s_reg_118953.read();
        } else {
            weight_conv8_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_15_V_address1() {
    weight_conv8_1_15_V_address1 = weight_conv8_1_15_2_reg_118963.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_16_V_address0 = weight_conv8_1_16_1_reg_118973.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_16_V_address0 = weight_conv8_1_16_s_reg_118968.read();
        } else {
            weight_conv8_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_16_V_address1() {
    weight_conv8_1_16_V_address1 = weight_conv8_1_16_2_reg_118978.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_17_V_address0 = weight_conv8_1_17_1_reg_118988.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_17_V_address0 = weight_conv8_1_17_s_reg_118983.read();
        } else {
            weight_conv8_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_17_V_address1() {
    weight_conv8_1_17_V_address1 = weight_conv8_1_17_2_reg_118993.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_18_V_address0 = weight_conv8_1_18_1_reg_119003.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_18_V_address0 = weight_conv8_1_18_s_reg_118998.read();
        } else {
            weight_conv8_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_18_V_address1() {
    weight_conv8_1_18_V_address1 = weight_conv8_1_18_2_reg_119008.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_19_V_address0 = weight_conv8_1_19_1_reg_119018.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_19_V_address0 = weight_conv8_1_19_s_reg_119013.read();
        } else {
            weight_conv8_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_19_V_address1() {
    weight_conv8_1_19_V_address1 = weight_conv8_1_19_2_reg_119023.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_1_V_address0 = weight_conv8_1_1_V_2_reg_118748.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_1_V_address0 = weight_conv8_1_1_V_1_reg_118743.read();
        } else {
            weight_conv8_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_1_V_address1() {
    weight_conv8_1_1_V_address1 = weight_conv8_1_1_V_3_reg_118753.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_20_V_address0 = weight_conv8_1_20_1_reg_119033.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_20_V_address0 = weight_conv8_1_20_s_reg_119028.read();
        } else {
            weight_conv8_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_20_V_address1() {
    weight_conv8_1_20_V_address1 = weight_conv8_1_20_2_reg_119038.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_21_V_address0 = weight_conv8_1_21_1_reg_119048.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_21_V_address0 = weight_conv8_1_21_s_reg_119043.read();
        } else {
            weight_conv8_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_21_V_address1() {
    weight_conv8_1_21_V_address1 = weight_conv8_1_21_2_reg_119053.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_22_V_address0 = weight_conv8_1_22_1_reg_119063.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_22_V_address0 = weight_conv8_1_22_s_reg_119058.read();
        } else {
            weight_conv8_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_22_V_address1() {
    weight_conv8_1_22_V_address1 = weight_conv8_1_22_2_reg_119068.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_23_V_address0 = weight_conv8_1_23_1_reg_119078.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_23_V_address0 = weight_conv8_1_23_s_reg_119073.read();
        } else {
            weight_conv8_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_23_V_address1() {
    weight_conv8_1_23_V_address1 = weight_conv8_1_23_2_reg_119083.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_24_V_address0 = weight_conv8_1_24_1_reg_119093.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_24_V_address0 = weight_conv8_1_24_s_reg_119088.read();
        } else {
            weight_conv8_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_24_V_address1() {
    weight_conv8_1_24_V_address1 = weight_conv8_1_24_2_reg_119098.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_25_V_address0 = weight_conv8_1_25_1_reg_119108.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_25_V_address0 = weight_conv8_1_25_s_reg_119103.read();
        } else {
            weight_conv8_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_25_V_address1() {
    weight_conv8_1_25_V_address1 = weight_conv8_1_25_2_reg_119113.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_26_V_address0 = weight_conv8_1_26_1_reg_119123.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_26_V_address0 = weight_conv8_1_26_s_reg_119118.read();
        } else {
            weight_conv8_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_26_V_address1() {
    weight_conv8_1_26_V_address1 = weight_conv8_1_26_2_reg_119128.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_27_V_address0 = weight_conv8_1_27_1_reg_119138.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_27_V_address0 = weight_conv8_1_27_s_reg_119133.read();
        } else {
            weight_conv8_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_27_V_address1() {
    weight_conv8_1_27_V_address1 = weight_conv8_1_27_2_reg_119143.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_28_V_address0 = weight_conv8_1_28_1_reg_119153.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_28_V_address0 = weight_conv8_1_28_s_reg_119148.read();
        } else {
            weight_conv8_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_28_V_address1() {
    weight_conv8_1_28_V_address1 = weight_conv8_1_28_2_reg_119158.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_29_V_address0 = weight_conv8_1_29_1_reg_119168.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_29_V_address0 = weight_conv8_1_29_s_reg_119163.read();
        } else {
            weight_conv8_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_29_V_address1() {
    weight_conv8_1_29_V_address1 = weight_conv8_1_29_2_reg_119173.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_2_V_address0 = weight_conv8_1_2_V_2_reg_118763.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_2_V_address0 = weight_conv8_1_2_V_1_reg_118758.read();
        } else {
            weight_conv8_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_2_V_address1() {
    weight_conv8_1_2_V_address1 = weight_conv8_1_2_V_3_reg_118768.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_30_V_address0 = weight_conv8_1_30_1_reg_119183.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_30_V_address0 = weight_conv8_1_30_s_reg_119178.read();
        } else {
            weight_conv8_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_30_V_address1() {
    weight_conv8_1_30_V_address1 = weight_conv8_1_30_2_reg_119188.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_31_V_address0 = weight_conv8_1_31_1_reg_119198.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_31_V_address0 = weight_conv8_1_31_s_reg_119193.read();
        } else {
            weight_conv8_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_31_V_address1() {
    weight_conv8_1_31_V_address1 = weight_conv8_1_31_2_reg_119203.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_32_V_address0 = weight_conv8_1_32_1_reg_119213.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_32_V_address0 = weight_conv8_1_32_s_reg_119208.read();
        } else {
            weight_conv8_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_32_V_address1() {
    weight_conv8_1_32_V_address1 = weight_conv8_1_32_2_reg_119218.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_33_V_address0 = weight_conv8_1_33_1_reg_119228.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_33_V_address0 = weight_conv8_1_33_s_reg_119223.read();
        } else {
            weight_conv8_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_33_V_address1() {
    weight_conv8_1_33_V_address1 = weight_conv8_1_33_2_reg_119233.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_34_V_address0 = weight_conv8_1_34_1_reg_119243.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_34_V_address0 = weight_conv8_1_34_s_reg_119238.read();
        } else {
            weight_conv8_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_34_V_address1() {
    weight_conv8_1_34_V_address1 = weight_conv8_1_34_2_reg_119248.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_35_V_address0 = weight_conv8_1_35_1_reg_119258.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_35_V_address0 = weight_conv8_1_35_s_reg_119253.read();
        } else {
            weight_conv8_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_35_V_address1() {
    weight_conv8_1_35_V_address1 = weight_conv8_1_35_2_reg_119263.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_36_V_address0 = weight_conv8_1_36_1_reg_119273.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_36_V_address0 = weight_conv8_1_36_s_reg_119268.read();
        } else {
            weight_conv8_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_36_V_address1() {
    weight_conv8_1_36_V_address1 = weight_conv8_1_36_2_reg_119278.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_37_V_address0 = weight_conv8_1_37_1_reg_119288.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_37_V_address0 = weight_conv8_1_37_s_reg_119283.read();
        } else {
            weight_conv8_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_37_V_address1() {
    weight_conv8_1_37_V_address1 = weight_conv8_1_37_2_reg_119293.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_38_V_address0 = weight_conv8_1_38_1_reg_119303.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_38_V_address0 = weight_conv8_1_38_s_reg_119298.read();
        } else {
            weight_conv8_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_38_V_address1() {
    weight_conv8_1_38_V_address1 = weight_conv8_1_38_2_reg_119308.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_39_V_address0 = weight_conv8_1_39_1_reg_119318.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_39_V_address0 = weight_conv8_1_39_s_reg_119313.read();
        } else {
            weight_conv8_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_39_V_address1() {
    weight_conv8_1_39_V_address1 = weight_conv8_1_39_2_reg_119323.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_3_V_address0 = weight_conv8_1_3_V_2_reg_118778.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_3_V_address0 = weight_conv8_1_3_V_1_reg_118773.read();
        } else {
            weight_conv8_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_3_V_address1() {
    weight_conv8_1_3_V_address1 = weight_conv8_1_3_V_3_reg_118783.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_40_V_address0 = weight_conv8_1_40_1_reg_119333.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_40_V_address0 = weight_conv8_1_40_s_reg_119328.read();
        } else {
            weight_conv8_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_40_V_address1() {
    weight_conv8_1_40_V_address1 = weight_conv8_1_40_2_reg_119338.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_41_V_address0 = weight_conv8_1_41_1_reg_119348.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_41_V_address0 = weight_conv8_1_41_s_reg_119343.read();
        } else {
            weight_conv8_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_41_V_address1() {
    weight_conv8_1_41_V_address1 = weight_conv8_1_41_2_reg_119353.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_42_V_address0 = weight_conv8_1_42_1_reg_119363.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_42_V_address0 = weight_conv8_1_42_s_reg_119358.read();
        } else {
            weight_conv8_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_42_V_address1() {
    weight_conv8_1_42_V_address1 = weight_conv8_1_42_2_reg_119368.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_43_V_address0 = weight_conv8_1_43_1_reg_119378.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_43_V_address0 = weight_conv8_1_43_s_reg_119373.read();
        } else {
            weight_conv8_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_43_V_address1() {
    weight_conv8_1_43_V_address1 = weight_conv8_1_43_2_reg_119383.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_44_V_address0 = weight_conv8_1_44_1_reg_119393.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_44_V_address0 = weight_conv8_1_44_s_reg_119388.read();
        } else {
            weight_conv8_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_44_V_address1() {
    weight_conv8_1_44_V_address1 = weight_conv8_1_44_2_reg_119398.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_45_V_address0 = weight_conv8_1_45_1_reg_119408.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_45_V_address0 = weight_conv8_1_45_s_reg_119403.read();
        } else {
            weight_conv8_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_45_V_address1() {
    weight_conv8_1_45_V_address1 = weight_conv8_1_45_2_reg_119413.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_46_V_address0 = weight_conv8_1_46_1_reg_119423.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_46_V_address0 = weight_conv8_1_46_s_reg_119418.read();
        } else {
            weight_conv8_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_46_V_address1() {
    weight_conv8_1_46_V_address1 = weight_conv8_1_46_2_reg_119428.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_47_V_address0 = weight_conv8_1_47_1_reg_119438.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_47_V_address0 = weight_conv8_1_47_s_reg_119433.read();
        } else {
            weight_conv8_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_47_V_address1() {
    weight_conv8_1_47_V_address1 = weight_conv8_1_47_2_reg_119443.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_48_V_address0 = weight_conv8_1_48_1_reg_119453.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_48_V_address0 = weight_conv8_1_48_s_reg_119448.read();
        } else {
            weight_conv8_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_48_V_address1() {
    weight_conv8_1_48_V_address1 = weight_conv8_1_48_2_reg_119458.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_49_V_address0 = weight_conv8_1_49_1_reg_119468.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_49_V_address0 = weight_conv8_1_49_s_reg_119463.read();
        } else {
            weight_conv8_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_49_V_address1() {
    weight_conv8_1_49_V_address1 = weight_conv8_1_49_2_reg_119473.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_4_V_address0 = weight_conv8_1_4_V_2_reg_118793.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_4_V_address0 = weight_conv8_1_4_V_1_reg_118788.read();
        } else {
            weight_conv8_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_4_V_address1() {
    weight_conv8_1_4_V_address1 = weight_conv8_1_4_V_3_reg_118798.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_50_V_address0 = weight_conv8_1_50_1_reg_119483.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_50_V_address0 = weight_conv8_1_50_s_reg_119478.read();
        } else {
            weight_conv8_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_50_V_address1() {
    weight_conv8_1_50_V_address1 = weight_conv8_1_50_2_reg_119488.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_51_V_address0 = weight_conv8_1_51_1_reg_119498.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_51_V_address0 = weight_conv8_1_51_s_reg_119493.read();
        } else {
            weight_conv8_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_51_V_address1() {
    weight_conv8_1_51_V_address1 = weight_conv8_1_51_2_reg_119503.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_52_V_address0 = weight_conv8_1_52_1_reg_119513.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_52_V_address0 = weight_conv8_1_52_s_reg_119508.read();
        } else {
            weight_conv8_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_52_V_address1() {
    weight_conv8_1_52_V_address1 = weight_conv8_1_52_2_reg_119518.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_53_V_address0 = weight_conv8_1_53_1_reg_119528.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_53_V_address0 = weight_conv8_1_53_s_reg_119523.read();
        } else {
            weight_conv8_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_53_V_address1() {
    weight_conv8_1_53_V_address1 = weight_conv8_1_53_2_reg_119533.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_54_V_address0 = weight_conv8_1_54_1_reg_119543.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_54_V_address0 = weight_conv8_1_54_s_reg_119538.read();
        } else {
            weight_conv8_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_54_V_address1() {
    weight_conv8_1_54_V_address1 = weight_conv8_1_54_2_reg_119548.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_55_V_address0 = weight_conv8_1_55_1_reg_119558.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_55_V_address0 = weight_conv8_1_55_s_reg_119553.read();
        } else {
            weight_conv8_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_55_V_address1() {
    weight_conv8_1_55_V_address1 = weight_conv8_1_55_2_reg_119563.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_56_V_address0 = weight_conv8_1_56_1_reg_119573.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_56_V_address0 = weight_conv8_1_56_s_reg_119568.read();
        } else {
            weight_conv8_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_56_V_address1() {
    weight_conv8_1_56_V_address1 = weight_conv8_1_56_2_reg_119578.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_57_V_address0 = weight_conv8_1_57_1_reg_119588.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_57_V_address0 = weight_conv8_1_57_s_reg_119583.read();
        } else {
            weight_conv8_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_57_V_address1() {
    weight_conv8_1_57_V_address1 = weight_conv8_1_57_2_reg_119593.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_58_V_address0 = weight_conv8_1_58_1_reg_119603.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_58_V_address0 = weight_conv8_1_58_s_reg_119598.read();
        } else {
            weight_conv8_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_58_V_address1() {
    weight_conv8_1_58_V_address1 = weight_conv8_1_58_2_reg_119608.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_59_V_address0 = weight_conv8_1_59_1_reg_119618.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_59_V_address0 = weight_conv8_1_59_s_reg_119613.read();
        } else {
            weight_conv8_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_59_V_address1() {
    weight_conv8_1_59_V_address1 = weight_conv8_1_59_2_reg_119623.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_5_V_address0 = weight_conv8_1_5_V_2_reg_118808.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_5_V_address0 = weight_conv8_1_5_V_1_reg_118803.read();
        } else {
            weight_conv8_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_5_V_address1() {
    weight_conv8_1_5_V_address1 = weight_conv8_1_5_V_3_reg_118813.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_60_V_address0 = weight_conv8_1_60_1_reg_119633.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_60_V_address0 = weight_conv8_1_60_s_reg_119628.read();
        } else {
            weight_conv8_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_60_V_address1() {
    weight_conv8_1_60_V_address1 = weight_conv8_1_60_2_reg_119638.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_61_V_address0 = weight_conv8_1_61_1_reg_119648.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_61_V_address0 = weight_conv8_1_61_s_reg_119643.read();
        } else {
            weight_conv8_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_61_V_address1() {
    weight_conv8_1_61_V_address1 = weight_conv8_1_61_2_reg_119653.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_62_V_address0 = weight_conv8_1_62_1_reg_119663.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_62_V_address0 = weight_conv8_1_62_s_reg_119658.read();
        } else {
            weight_conv8_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_62_V_address1() {
    weight_conv8_1_62_V_address1 = weight_conv8_1_62_2_reg_119668.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_63_V_address0 = weight_conv8_1_63_1_reg_119678.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_63_V_address0 = weight_conv8_1_63_s_reg_119673.read();
        } else {
            weight_conv8_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_63_V_address1() {
    weight_conv8_1_63_V_address1 = weight_conv8_1_63_2_reg_119683.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_6_V_address0 = weight_conv8_1_6_V_2_reg_118823.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_6_V_address0 = weight_conv8_1_6_V_1_reg_118818.read();
        } else {
            weight_conv8_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_6_V_address1() {
    weight_conv8_1_6_V_address1 = weight_conv8_1_6_V_3_reg_118828.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_7_V_address0 = weight_conv8_1_7_V_2_reg_118838.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_7_V_address0 = weight_conv8_1_7_V_1_reg_118833.read();
        } else {
            weight_conv8_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_7_V_address1() {
    weight_conv8_1_7_V_address1 = weight_conv8_1_7_V_3_reg_118843.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_8_V_address0 = weight_conv8_1_8_V_2_reg_118853.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_8_V_address0 = weight_conv8_1_8_V_1_reg_118848.read();
        } else {
            weight_conv8_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_8_V_address1() {
    weight_conv8_1_8_V_address1 = weight_conv8_1_8_V_3_reg_118858.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_1_9_V_address0 = weight_conv8_1_9_V_2_reg_118868.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_1_9_V_address0 = weight_conv8_1_9_V_1_reg_118863.read();
        } else {
            weight_conv8_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_9_V_address1() {
    weight_conv8_1_9_V_address1 = weight_conv8_1_9_V_3_reg_118873.read();
}

void Block_arrayctor_loop::thread_weight_conv8_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_1_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_1_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_1_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_1_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_1_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_0_V_address0 = weight_conv8_2_0_V_3_reg_119698.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_0_V_address0 = weight_conv8_2_0_V_1_reg_119688.read();
        } else {
            weight_conv8_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_0_V_address1() {
    weight_conv8_2_0_V_address1 = weight_conv8_2_0_V_2_reg_119693.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_10_V_address0 = weight_conv8_2_10_2_reg_119848.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_10_V_address0 = weight_conv8_2_10_s_reg_119838.read();
        } else {
            weight_conv8_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_10_V_address1() {
    weight_conv8_2_10_V_address1 = weight_conv8_2_10_1_reg_119843.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_11_V_address0 = weight_conv8_2_11_2_reg_119863.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_11_V_address0 = weight_conv8_2_11_s_reg_119853.read();
        } else {
            weight_conv8_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_11_V_address1() {
    weight_conv8_2_11_V_address1 = weight_conv8_2_11_1_reg_119858.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_12_V_address0 = weight_conv8_2_12_2_reg_119878.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_12_V_address0 = weight_conv8_2_12_s_reg_119868.read();
        } else {
            weight_conv8_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_12_V_address1() {
    weight_conv8_2_12_V_address1 = weight_conv8_2_12_1_reg_119873.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_13_V_address0 = weight_conv8_2_13_2_reg_119893.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_13_V_address0 = weight_conv8_2_13_s_reg_119883.read();
        } else {
            weight_conv8_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_13_V_address1() {
    weight_conv8_2_13_V_address1 = weight_conv8_2_13_1_reg_119888.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_14_V_address0 = weight_conv8_2_14_2_reg_119908.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_14_V_address0 = weight_conv8_2_14_s_reg_119898.read();
        } else {
            weight_conv8_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_14_V_address1() {
    weight_conv8_2_14_V_address1 = weight_conv8_2_14_1_reg_119903.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_15_V_address0 = weight_conv8_2_15_2_reg_119923.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_15_V_address0 = weight_conv8_2_15_s_reg_119913.read();
        } else {
            weight_conv8_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_15_V_address1() {
    weight_conv8_2_15_V_address1 = weight_conv8_2_15_1_reg_119918.read();
}

void Block_arrayctor_loop::thread_weight_conv8_2_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv8_2_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv8_2_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv8_2_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv8_2_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp30_stage1.read(), ap_const_boolean_0))) {
            weight_conv8_2_16_V_address0 = weight_conv8_2_16_2_reg_119938.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
            weight_conv8_2_16_V_address0 = weight_conv8_2_16_s_reg_119928.read();
        } else {
            weight_conv8_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv8_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv8_2_16_V_address1() {
    weight_conv8_2_16_V_address1 = weight_conv8_2_16_1_reg_119933.read();
}

}

