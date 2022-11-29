#include "Block_arrayctor_loop.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Block_arrayctor_loop::thread_weight_conv6_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_28_V_address0 = weight_conv6_0_28_2_reg_106524.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_28_V_address0 = weight_conv6_0_28_s_reg_106514.read();
        } else {
            weight_conv6_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_28_V_address1() {
    weight_conv6_0_28_V_address1 = weight_conv6_0_28_1_reg_106519.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_29_V_address0 = weight_conv6_0_29_2_reg_106539.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_29_V_address0 = weight_conv6_0_29_s_reg_106529.read();
        } else {
            weight_conv6_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_29_V_address1() {
    weight_conv6_0_29_V_address1 = weight_conv6_0_29_1_reg_106534.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_2_V_address0 = weight_conv6_0_2_V_3_reg_106134.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_2_V_address0 = weight_conv6_0_2_V_1_reg_106124.read();
        } else {
            weight_conv6_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_2_V_address1() {
    weight_conv6_0_2_V_address1 = weight_conv6_0_2_V_2_reg_106129.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_30_V_address0 = weight_conv6_0_30_2_reg_106554.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_30_V_address0 = weight_conv6_0_30_s_reg_106544.read();
        } else {
            weight_conv6_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_30_V_address1() {
    weight_conv6_0_30_V_address1 = weight_conv6_0_30_1_reg_106549.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_31_V_address0 = weight_conv6_0_31_2_reg_106569.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_31_V_address0 = weight_conv6_0_31_s_reg_106559.read();
        } else {
            weight_conv6_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_31_V_address1() {
    weight_conv6_0_31_V_address1 = weight_conv6_0_31_1_reg_106564.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_32_V_address0 = weight_conv6_0_32_2_reg_106584.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_32_V_address0 = weight_conv6_0_32_s_reg_106574.read();
        } else {
            weight_conv6_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_32_V_address1() {
    weight_conv6_0_32_V_address1 = weight_conv6_0_32_1_reg_106579.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_33_V_address0 = weight_conv6_0_33_2_reg_106599.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_33_V_address0 = weight_conv6_0_33_s_reg_106589.read();
        } else {
            weight_conv6_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_33_V_address1() {
    weight_conv6_0_33_V_address1 = weight_conv6_0_33_1_reg_106594.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_34_V_address0 = weight_conv6_0_34_2_reg_106614.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_34_V_address0 = weight_conv6_0_34_s_reg_106604.read();
        } else {
            weight_conv6_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_34_V_address1() {
    weight_conv6_0_34_V_address1 = weight_conv6_0_34_1_reg_106609.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_35_V_address0 = weight_conv6_0_35_2_reg_106629.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_35_V_address0 = weight_conv6_0_35_s_reg_106619.read();
        } else {
            weight_conv6_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_35_V_address1() {
    weight_conv6_0_35_V_address1 = weight_conv6_0_35_1_reg_106624.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_36_V_address0 = weight_conv6_0_36_2_reg_106644.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_36_V_address0 = weight_conv6_0_36_s_reg_106634.read();
        } else {
            weight_conv6_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_36_V_address1() {
    weight_conv6_0_36_V_address1 = weight_conv6_0_36_1_reg_106639.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_37_V_address0 = weight_conv6_0_37_2_reg_106659.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_37_V_address0 = weight_conv6_0_37_s_reg_106649.read();
        } else {
            weight_conv6_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_37_V_address1() {
    weight_conv6_0_37_V_address1 = weight_conv6_0_37_1_reg_106654.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_38_V_address0 = weight_conv6_0_38_2_reg_106674.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_38_V_address0 = weight_conv6_0_38_s_reg_106664.read();
        } else {
            weight_conv6_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_38_V_address1() {
    weight_conv6_0_38_V_address1 = weight_conv6_0_38_1_reg_106669.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_39_V_address0 = weight_conv6_0_39_2_reg_106689.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_39_V_address0 = weight_conv6_0_39_s_reg_106679.read();
        } else {
            weight_conv6_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_39_V_address1() {
    weight_conv6_0_39_V_address1 = weight_conv6_0_39_1_reg_106684.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_3_V_address0 = weight_conv6_0_3_V_3_reg_106149.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_3_V_address0 = weight_conv6_0_3_V_1_reg_106139.read();
        } else {
            weight_conv6_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_3_V_address1() {
    weight_conv6_0_3_V_address1 = weight_conv6_0_3_V_2_reg_106144.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_40_V_address0 = weight_conv6_0_40_2_reg_106704.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_40_V_address0 = weight_conv6_0_40_s_reg_106694.read();
        } else {
            weight_conv6_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_40_V_address1() {
    weight_conv6_0_40_V_address1 = weight_conv6_0_40_1_reg_106699.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_41_V_address0 = weight_conv6_0_41_2_reg_106719.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_41_V_address0 = weight_conv6_0_41_s_reg_106709.read();
        } else {
            weight_conv6_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_41_V_address1() {
    weight_conv6_0_41_V_address1 = weight_conv6_0_41_1_reg_106714.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_42_V_address0 = weight_conv6_0_42_2_reg_106734.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_42_V_address0 = weight_conv6_0_42_s_reg_106724.read();
        } else {
            weight_conv6_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_42_V_address1() {
    weight_conv6_0_42_V_address1 = weight_conv6_0_42_1_reg_106729.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_43_V_address0 = weight_conv6_0_43_2_reg_106749.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_43_V_address0 = weight_conv6_0_43_s_reg_106739.read();
        } else {
            weight_conv6_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_43_V_address1() {
    weight_conv6_0_43_V_address1 = weight_conv6_0_43_1_reg_106744.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_44_V_address0 = weight_conv6_0_44_2_reg_106764.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_44_V_address0 = weight_conv6_0_44_s_reg_106754.read();
        } else {
            weight_conv6_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_44_V_address1() {
    weight_conv6_0_44_V_address1 = weight_conv6_0_44_1_reg_106759.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_45_V_address0 = weight_conv6_0_45_2_reg_106779.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_45_V_address0 = weight_conv6_0_45_s_reg_106769.read();
        } else {
            weight_conv6_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_45_V_address1() {
    weight_conv6_0_45_V_address1 = weight_conv6_0_45_1_reg_106774.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_46_V_address0 = weight_conv6_0_46_2_reg_106794.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_46_V_address0 = weight_conv6_0_46_s_reg_106784.read();
        } else {
            weight_conv6_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_46_V_address1() {
    weight_conv6_0_46_V_address1 = weight_conv6_0_46_1_reg_106789.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_47_V_address0 = weight_conv6_0_47_2_reg_106809.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_47_V_address0 = weight_conv6_0_47_s_reg_106799.read();
        } else {
            weight_conv6_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_47_V_address1() {
    weight_conv6_0_47_V_address1 = weight_conv6_0_47_1_reg_106804.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_48_V_address0 = weight_conv6_0_48_2_reg_106824.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_48_V_address0 = weight_conv6_0_48_s_reg_106814.read();
        } else {
            weight_conv6_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_48_V_address1() {
    weight_conv6_0_48_V_address1 = weight_conv6_0_48_1_reg_106819.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_49_V_address0 = weight_conv6_0_49_2_reg_106839.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_49_V_address0 = weight_conv6_0_49_s_reg_106829.read();
        } else {
            weight_conv6_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_49_V_address1() {
    weight_conv6_0_49_V_address1 = weight_conv6_0_49_1_reg_106834.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_4_V_address0 = weight_conv6_0_4_V_3_reg_106164.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_4_V_address0 = weight_conv6_0_4_V_1_reg_106154.read();
        } else {
            weight_conv6_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_4_V_address1() {
    weight_conv6_0_4_V_address1 = weight_conv6_0_4_V_2_reg_106159.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_50_V_address0 = weight_conv6_0_50_2_reg_106854.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_50_V_address0 = weight_conv6_0_50_s_reg_106844.read();
        } else {
            weight_conv6_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_50_V_address1() {
    weight_conv6_0_50_V_address1 = weight_conv6_0_50_1_reg_106849.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_51_V_address0 = weight_conv6_0_51_2_reg_106869.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_51_V_address0 = weight_conv6_0_51_s_reg_106859.read();
        } else {
            weight_conv6_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_51_V_address1() {
    weight_conv6_0_51_V_address1 = weight_conv6_0_51_1_reg_106864.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_52_V_address0 = weight_conv6_0_52_2_reg_106884.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_52_V_address0 = weight_conv6_0_52_s_reg_106874.read();
        } else {
            weight_conv6_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_52_V_address1() {
    weight_conv6_0_52_V_address1 = weight_conv6_0_52_1_reg_106879.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_53_V_address0 = weight_conv6_0_53_2_reg_106899.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_53_V_address0 = weight_conv6_0_53_s_reg_106889.read();
        } else {
            weight_conv6_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_53_V_address1() {
    weight_conv6_0_53_V_address1 = weight_conv6_0_53_1_reg_106894.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_54_V_address0 = weight_conv6_0_54_2_reg_106914.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_54_V_address0 = weight_conv6_0_54_s_reg_106904.read();
        } else {
            weight_conv6_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_54_V_address1() {
    weight_conv6_0_54_V_address1 = weight_conv6_0_54_1_reg_106909.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_55_V_address0 = weight_conv6_0_55_2_reg_106929.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_55_V_address0 = weight_conv6_0_55_s_reg_106919.read();
        } else {
            weight_conv6_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_55_V_address1() {
    weight_conv6_0_55_V_address1 = weight_conv6_0_55_1_reg_106924.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_56_V_address0 = weight_conv6_0_56_2_reg_106944.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_56_V_address0 = weight_conv6_0_56_s_reg_106934.read();
        } else {
            weight_conv6_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_56_V_address1() {
    weight_conv6_0_56_V_address1 = weight_conv6_0_56_1_reg_106939.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_57_V_address0 = weight_conv6_0_57_2_reg_106959.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_57_V_address0 = weight_conv6_0_57_s_reg_106949.read();
        } else {
            weight_conv6_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_57_V_address1() {
    weight_conv6_0_57_V_address1 = weight_conv6_0_57_1_reg_106954.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_58_V_address0 = weight_conv6_0_58_2_reg_106974.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_58_V_address0 = weight_conv6_0_58_s_reg_106964.read();
        } else {
            weight_conv6_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_58_V_address1() {
    weight_conv6_0_58_V_address1 = weight_conv6_0_58_1_reg_106969.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_59_V_address0 = weight_conv6_0_59_2_reg_106989.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_59_V_address0 = weight_conv6_0_59_s_reg_106979.read();
        } else {
            weight_conv6_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_59_V_address1() {
    weight_conv6_0_59_V_address1 = weight_conv6_0_59_1_reg_106984.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_5_V_address0 = weight_conv6_0_5_V_3_reg_106179.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_5_V_address0 = weight_conv6_0_5_V_1_reg_106169.read();
        } else {
            weight_conv6_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_5_V_address1() {
    weight_conv6_0_5_V_address1 = weight_conv6_0_5_V_2_reg_106174.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_60_V_address0 = weight_conv6_0_60_2_reg_107004.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_60_V_address0 = weight_conv6_0_60_s_reg_106994.read();
        } else {
            weight_conv6_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_60_V_address1() {
    weight_conv6_0_60_V_address1 = weight_conv6_0_60_1_reg_106999.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_61_V_address0 = weight_conv6_0_61_2_reg_107019.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_61_V_address0 = weight_conv6_0_61_s_reg_107009.read();
        } else {
            weight_conv6_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_61_V_address1() {
    weight_conv6_0_61_V_address1 = weight_conv6_0_61_1_reg_107014.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_62_V_address0 = weight_conv6_0_62_2_reg_107034.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_62_V_address0 = weight_conv6_0_62_s_reg_107024.read();
        } else {
            weight_conv6_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_62_V_address1() {
    weight_conv6_0_62_V_address1 = weight_conv6_0_62_1_reg_107029.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_63_V_address0 = weight_conv6_0_63_2_reg_107049.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_63_V_address0 = weight_conv6_0_63_s_reg_107039.read();
        } else {
            weight_conv6_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_63_V_address1() {
    weight_conv6_0_63_V_address1 = weight_conv6_0_63_1_reg_107044.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_6_V_address0 = weight_conv6_0_6_V_3_reg_106194.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_6_V_address0 = weight_conv6_0_6_V_1_reg_106184.read();
        } else {
            weight_conv6_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_6_V_address1() {
    weight_conv6_0_6_V_address1 = weight_conv6_0_6_V_2_reg_106189.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_7_V_address0 = weight_conv6_0_7_V_3_reg_106209.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_7_V_address0 = weight_conv6_0_7_V_1_reg_106199.read();
        } else {
            weight_conv6_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_7_V_address1() {
    weight_conv6_0_7_V_address1 = weight_conv6_0_7_V_2_reg_106204.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_8_V_address0 = weight_conv6_0_8_V_3_reg_106224.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_8_V_address0 = weight_conv6_0_8_V_1_reg_106214.read();
        } else {
            weight_conv6_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_8_V_address1() {
    weight_conv6_0_8_V_address1 = weight_conv6_0_8_V_2_reg_106219.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_0_9_V_address0 = weight_conv6_0_9_V_3_reg_106239.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_0_9_V_address0 = weight_conv6_0_9_V_1_reg_106229.read();
        } else {
            weight_conv6_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_9_V_address1() {
    weight_conv6_0_9_V_address1 = weight_conv6_0_9_V_2_reg_106234.read();
}

void Block_arrayctor_loop::thread_weight_conv6_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_0_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_0_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_0_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_0_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_0_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_0_V_address0 = weight_conv6_1_0_V_2_reg_107059.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_0_V_address0 = weight_conv6_1_0_V_1_reg_107054.read();
        } else {
            weight_conv6_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_0_V_address1() {
    weight_conv6_1_0_V_address1 = weight_conv6_1_0_V_3_reg_107064.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_10_V_address0 = weight_conv6_1_10_1_reg_107209.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_10_V_address0 = weight_conv6_1_10_s_reg_107204.read();
        } else {
            weight_conv6_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_10_V_address1() {
    weight_conv6_1_10_V_address1 = weight_conv6_1_10_2_reg_107214.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_11_V_address0 = weight_conv6_1_11_1_reg_107224.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_11_V_address0 = weight_conv6_1_11_s_reg_107219.read();
        } else {
            weight_conv6_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_11_V_address1() {
    weight_conv6_1_11_V_address1 = weight_conv6_1_11_2_reg_107229.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_12_V_address0 = weight_conv6_1_12_1_reg_107239.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_12_V_address0 = weight_conv6_1_12_s_reg_107234.read();
        } else {
            weight_conv6_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_12_V_address1() {
    weight_conv6_1_12_V_address1 = weight_conv6_1_12_2_reg_107244.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_13_V_address0 = weight_conv6_1_13_1_reg_107254.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_13_V_address0 = weight_conv6_1_13_s_reg_107249.read();
        } else {
            weight_conv6_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_13_V_address1() {
    weight_conv6_1_13_V_address1 = weight_conv6_1_13_2_reg_107259.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_14_V_address0 = weight_conv6_1_14_1_reg_107269.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_14_V_address0 = weight_conv6_1_14_s_reg_107264.read();
        } else {
            weight_conv6_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_14_V_address1() {
    weight_conv6_1_14_V_address1 = weight_conv6_1_14_2_reg_107274.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_15_V_address0 = weight_conv6_1_15_1_reg_107284.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_15_V_address0 = weight_conv6_1_15_s_reg_107279.read();
        } else {
            weight_conv6_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_15_V_address1() {
    weight_conv6_1_15_V_address1 = weight_conv6_1_15_2_reg_107289.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_16_V_address0 = weight_conv6_1_16_1_reg_107299.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_16_V_address0 = weight_conv6_1_16_s_reg_107294.read();
        } else {
            weight_conv6_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_16_V_address1() {
    weight_conv6_1_16_V_address1 = weight_conv6_1_16_2_reg_107304.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_17_V_address0 = weight_conv6_1_17_1_reg_107314.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_17_V_address0 = weight_conv6_1_17_s_reg_107309.read();
        } else {
            weight_conv6_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_17_V_address1() {
    weight_conv6_1_17_V_address1 = weight_conv6_1_17_2_reg_107319.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_18_V_address0 = weight_conv6_1_18_1_reg_107329.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_18_V_address0 = weight_conv6_1_18_s_reg_107324.read();
        } else {
            weight_conv6_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_18_V_address1() {
    weight_conv6_1_18_V_address1 = weight_conv6_1_18_2_reg_107334.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_19_V_address0 = weight_conv6_1_19_1_reg_107344.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_19_V_address0 = weight_conv6_1_19_s_reg_107339.read();
        } else {
            weight_conv6_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_19_V_address1() {
    weight_conv6_1_19_V_address1 = weight_conv6_1_19_2_reg_107349.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_1_V_address0 = weight_conv6_1_1_V_2_reg_107074.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_1_V_address0 = weight_conv6_1_1_V_1_reg_107069.read();
        } else {
            weight_conv6_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_1_V_address1() {
    weight_conv6_1_1_V_address1 = weight_conv6_1_1_V_3_reg_107079.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_20_V_address0 = weight_conv6_1_20_1_reg_107359.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_20_V_address0 = weight_conv6_1_20_s_reg_107354.read();
        } else {
            weight_conv6_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_20_V_address1() {
    weight_conv6_1_20_V_address1 = weight_conv6_1_20_2_reg_107364.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_21_V_address0 = weight_conv6_1_21_1_reg_107374.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_21_V_address0 = weight_conv6_1_21_s_reg_107369.read();
        } else {
            weight_conv6_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_21_V_address1() {
    weight_conv6_1_21_V_address1 = weight_conv6_1_21_2_reg_107379.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_22_V_address0 = weight_conv6_1_22_1_reg_107389.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_22_V_address0 = weight_conv6_1_22_s_reg_107384.read();
        } else {
            weight_conv6_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_22_V_address1() {
    weight_conv6_1_22_V_address1 = weight_conv6_1_22_2_reg_107394.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_23_V_address0 = weight_conv6_1_23_1_reg_107404.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_23_V_address0 = weight_conv6_1_23_s_reg_107399.read();
        } else {
            weight_conv6_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_23_V_address1() {
    weight_conv6_1_23_V_address1 = weight_conv6_1_23_2_reg_107409.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_24_V_address0 = weight_conv6_1_24_1_reg_107419.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_24_V_address0 = weight_conv6_1_24_s_reg_107414.read();
        } else {
            weight_conv6_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_24_V_address1() {
    weight_conv6_1_24_V_address1 = weight_conv6_1_24_2_reg_107424.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_25_V_address0 = weight_conv6_1_25_1_reg_107434.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_25_V_address0 = weight_conv6_1_25_s_reg_107429.read();
        } else {
            weight_conv6_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_25_V_address1() {
    weight_conv6_1_25_V_address1 = weight_conv6_1_25_2_reg_107439.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_26_V_address0 = weight_conv6_1_26_1_reg_107449.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_26_V_address0 = weight_conv6_1_26_s_reg_107444.read();
        } else {
            weight_conv6_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_26_V_address1() {
    weight_conv6_1_26_V_address1 = weight_conv6_1_26_2_reg_107454.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_27_V_address0 = weight_conv6_1_27_1_reg_107464.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_27_V_address0 = weight_conv6_1_27_s_reg_107459.read();
        } else {
            weight_conv6_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_27_V_address1() {
    weight_conv6_1_27_V_address1 = weight_conv6_1_27_2_reg_107469.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_28_V_address0 = weight_conv6_1_28_1_reg_107479.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_28_V_address0 = weight_conv6_1_28_s_reg_107474.read();
        } else {
            weight_conv6_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_28_V_address1() {
    weight_conv6_1_28_V_address1 = weight_conv6_1_28_2_reg_107484.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_29_V_address0 = weight_conv6_1_29_1_reg_107494.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_29_V_address0 = weight_conv6_1_29_s_reg_107489.read();
        } else {
            weight_conv6_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_29_V_address1() {
    weight_conv6_1_29_V_address1 = weight_conv6_1_29_2_reg_107499.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_2_V_address0 = weight_conv6_1_2_V_2_reg_107089.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_2_V_address0 = weight_conv6_1_2_V_1_reg_107084.read();
        } else {
            weight_conv6_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_2_V_address1() {
    weight_conv6_1_2_V_address1 = weight_conv6_1_2_V_3_reg_107094.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_30_V_address0 = weight_conv6_1_30_1_reg_107509.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_30_V_address0 = weight_conv6_1_30_s_reg_107504.read();
        } else {
            weight_conv6_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_30_V_address1() {
    weight_conv6_1_30_V_address1 = weight_conv6_1_30_2_reg_107514.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_31_V_address0 = weight_conv6_1_31_1_reg_107524.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_31_V_address0 = weight_conv6_1_31_s_reg_107519.read();
        } else {
            weight_conv6_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_31_V_address1() {
    weight_conv6_1_31_V_address1 = weight_conv6_1_31_2_reg_107529.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_32_V_address0 = weight_conv6_1_32_1_reg_107539.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_32_V_address0 = weight_conv6_1_32_s_reg_107534.read();
        } else {
            weight_conv6_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_32_V_address1() {
    weight_conv6_1_32_V_address1 = weight_conv6_1_32_2_reg_107544.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_33_V_address0 = weight_conv6_1_33_1_reg_107554.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_33_V_address0 = weight_conv6_1_33_s_reg_107549.read();
        } else {
            weight_conv6_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_33_V_address1() {
    weight_conv6_1_33_V_address1 = weight_conv6_1_33_2_reg_107559.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_34_V_address0 = weight_conv6_1_34_1_reg_107569.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_34_V_address0 = weight_conv6_1_34_s_reg_107564.read();
        } else {
            weight_conv6_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_34_V_address1() {
    weight_conv6_1_34_V_address1 = weight_conv6_1_34_2_reg_107574.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_35_V_address0 = weight_conv6_1_35_1_reg_107584.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_35_V_address0 = weight_conv6_1_35_s_reg_107579.read();
        } else {
            weight_conv6_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_35_V_address1() {
    weight_conv6_1_35_V_address1 = weight_conv6_1_35_2_reg_107589.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_36_V_address0 = weight_conv6_1_36_1_reg_107599.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_36_V_address0 = weight_conv6_1_36_s_reg_107594.read();
        } else {
            weight_conv6_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_36_V_address1() {
    weight_conv6_1_36_V_address1 = weight_conv6_1_36_2_reg_107604.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_37_V_address0 = weight_conv6_1_37_1_reg_107614.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_37_V_address0 = weight_conv6_1_37_s_reg_107609.read();
        } else {
            weight_conv6_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_37_V_address1() {
    weight_conv6_1_37_V_address1 = weight_conv6_1_37_2_reg_107619.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_38_V_address0 = weight_conv6_1_38_1_reg_107629.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_38_V_address0 = weight_conv6_1_38_s_reg_107624.read();
        } else {
            weight_conv6_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_38_V_address1() {
    weight_conv6_1_38_V_address1 = weight_conv6_1_38_2_reg_107634.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_39_V_address0 = weight_conv6_1_39_1_reg_107644.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_39_V_address0 = weight_conv6_1_39_s_reg_107639.read();
        } else {
            weight_conv6_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_39_V_address1() {
    weight_conv6_1_39_V_address1 = weight_conv6_1_39_2_reg_107649.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_3_V_address0 = weight_conv6_1_3_V_2_reg_107104.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_3_V_address0 = weight_conv6_1_3_V_1_reg_107099.read();
        } else {
            weight_conv6_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_3_V_address1() {
    weight_conv6_1_3_V_address1 = weight_conv6_1_3_V_3_reg_107109.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_40_V_address0 = weight_conv6_1_40_1_reg_107659.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_40_V_address0 = weight_conv6_1_40_s_reg_107654.read();
        } else {
            weight_conv6_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_40_V_address1() {
    weight_conv6_1_40_V_address1 = weight_conv6_1_40_2_reg_107664.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_41_V_address0 = weight_conv6_1_41_1_reg_107674.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_41_V_address0 = weight_conv6_1_41_s_reg_107669.read();
        } else {
            weight_conv6_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_41_V_address1() {
    weight_conv6_1_41_V_address1 = weight_conv6_1_41_2_reg_107679.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_42_V_address0 = weight_conv6_1_42_1_reg_107689.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_42_V_address0 = weight_conv6_1_42_s_reg_107684.read();
        } else {
            weight_conv6_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_42_V_address1() {
    weight_conv6_1_42_V_address1 = weight_conv6_1_42_2_reg_107694.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_43_V_address0 = weight_conv6_1_43_1_reg_107704.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_43_V_address0 = weight_conv6_1_43_s_reg_107699.read();
        } else {
            weight_conv6_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_43_V_address1() {
    weight_conv6_1_43_V_address1 = weight_conv6_1_43_2_reg_107709.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_44_V_address0 = weight_conv6_1_44_1_reg_107719.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_44_V_address0 = weight_conv6_1_44_s_reg_107714.read();
        } else {
            weight_conv6_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_44_V_address1() {
    weight_conv6_1_44_V_address1 = weight_conv6_1_44_2_reg_107724.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_45_V_address0 = weight_conv6_1_45_1_reg_107734.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_45_V_address0 = weight_conv6_1_45_s_reg_107729.read();
        } else {
            weight_conv6_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_45_V_address1() {
    weight_conv6_1_45_V_address1 = weight_conv6_1_45_2_reg_107739.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_46_V_address0 = weight_conv6_1_46_1_reg_107749.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_46_V_address0 = weight_conv6_1_46_s_reg_107744.read();
        } else {
            weight_conv6_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_46_V_address1() {
    weight_conv6_1_46_V_address1 = weight_conv6_1_46_2_reg_107754.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_47_V_address0 = weight_conv6_1_47_1_reg_107764.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_47_V_address0 = weight_conv6_1_47_s_reg_107759.read();
        } else {
            weight_conv6_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_47_V_address1() {
    weight_conv6_1_47_V_address1 = weight_conv6_1_47_2_reg_107769.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_48_V_address0 = weight_conv6_1_48_1_reg_107779.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_48_V_address0 = weight_conv6_1_48_s_reg_107774.read();
        } else {
            weight_conv6_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_48_V_address1() {
    weight_conv6_1_48_V_address1 = weight_conv6_1_48_2_reg_107784.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_49_V_address0 = weight_conv6_1_49_1_reg_107794.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_49_V_address0 = weight_conv6_1_49_s_reg_107789.read();
        } else {
            weight_conv6_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_49_V_address1() {
    weight_conv6_1_49_V_address1 = weight_conv6_1_49_2_reg_107799.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_4_V_address0 = weight_conv6_1_4_V_2_reg_107119.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_4_V_address0 = weight_conv6_1_4_V_1_reg_107114.read();
        } else {
            weight_conv6_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_4_V_address1() {
    weight_conv6_1_4_V_address1 = weight_conv6_1_4_V_3_reg_107124.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_50_V_address0 = weight_conv6_1_50_1_reg_107809.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_50_V_address0 = weight_conv6_1_50_s_reg_107804.read();
        } else {
            weight_conv6_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_50_V_address1() {
    weight_conv6_1_50_V_address1 = weight_conv6_1_50_2_reg_107814.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_51_V_address0 = weight_conv6_1_51_1_reg_107824.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_51_V_address0 = weight_conv6_1_51_s_reg_107819.read();
        } else {
            weight_conv6_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_51_V_address1() {
    weight_conv6_1_51_V_address1 = weight_conv6_1_51_2_reg_107829.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_52_V_address0 = weight_conv6_1_52_1_reg_107839.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_52_V_address0 = weight_conv6_1_52_s_reg_107834.read();
        } else {
            weight_conv6_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_52_V_address1() {
    weight_conv6_1_52_V_address1 = weight_conv6_1_52_2_reg_107844.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_53_V_address0 = weight_conv6_1_53_1_reg_107854.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_53_V_address0 = weight_conv6_1_53_s_reg_107849.read();
        } else {
            weight_conv6_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_53_V_address1() {
    weight_conv6_1_53_V_address1 = weight_conv6_1_53_2_reg_107859.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_54_V_address0 = weight_conv6_1_54_1_reg_107869.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_54_V_address0 = weight_conv6_1_54_s_reg_107864.read();
        } else {
            weight_conv6_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_54_V_address1() {
    weight_conv6_1_54_V_address1 = weight_conv6_1_54_2_reg_107874.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_55_V_address0 = weight_conv6_1_55_1_reg_107884.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_55_V_address0 = weight_conv6_1_55_s_reg_107879.read();
        } else {
            weight_conv6_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_55_V_address1() {
    weight_conv6_1_55_V_address1 = weight_conv6_1_55_2_reg_107889.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_56_V_address0 = weight_conv6_1_56_1_reg_107899.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_56_V_address0 = weight_conv6_1_56_s_reg_107894.read();
        } else {
            weight_conv6_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_56_V_address1() {
    weight_conv6_1_56_V_address1 = weight_conv6_1_56_2_reg_107904.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_57_V_address0 = weight_conv6_1_57_1_reg_107914.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_57_V_address0 = weight_conv6_1_57_s_reg_107909.read();
        } else {
            weight_conv6_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_57_V_address1() {
    weight_conv6_1_57_V_address1 = weight_conv6_1_57_2_reg_107919.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_58_V_address0 = weight_conv6_1_58_1_reg_107929.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_58_V_address0 = weight_conv6_1_58_s_reg_107924.read();
        } else {
            weight_conv6_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_58_V_address1() {
    weight_conv6_1_58_V_address1 = weight_conv6_1_58_2_reg_107934.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_59_V_address0 = weight_conv6_1_59_1_reg_107944.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_59_V_address0 = weight_conv6_1_59_s_reg_107939.read();
        } else {
            weight_conv6_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_59_V_address1() {
    weight_conv6_1_59_V_address1 = weight_conv6_1_59_2_reg_107949.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_5_V_address0 = weight_conv6_1_5_V_2_reg_107134.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_5_V_address0 = weight_conv6_1_5_V_1_reg_107129.read();
        } else {
            weight_conv6_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_5_V_address1() {
    weight_conv6_1_5_V_address1 = weight_conv6_1_5_V_3_reg_107139.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_60_V_address0 = weight_conv6_1_60_1_reg_107959.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_60_V_address0 = weight_conv6_1_60_s_reg_107954.read();
        } else {
            weight_conv6_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_60_V_address1() {
    weight_conv6_1_60_V_address1 = weight_conv6_1_60_2_reg_107964.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_61_V_address0 = weight_conv6_1_61_1_reg_107974.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_61_V_address0 = weight_conv6_1_61_s_reg_107969.read();
        } else {
            weight_conv6_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_61_V_address1() {
    weight_conv6_1_61_V_address1 = weight_conv6_1_61_2_reg_107979.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_62_V_address0 = weight_conv6_1_62_1_reg_107989.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_62_V_address0 = weight_conv6_1_62_s_reg_107984.read();
        } else {
            weight_conv6_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_62_V_address1() {
    weight_conv6_1_62_V_address1 = weight_conv6_1_62_2_reg_107994.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_63_V_address0 = weight_conv6_1_63_1_reg_108004.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_63_V_address0 = weight_conv6_1_63_s_reg_107999.read();
        } else {
            weight_conv6_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_63_V_address1() {
    weight_conv6_1_63_V_address1 = weight_conv6_1_63_2_reg_108009.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_6_V_address0 = weight_conv6_1_6_V_2_reg_107149.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_6_V_address0 = weight_conv6_1_6_V_1_reg_107144.read();
        } else {
            weight_conv6_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_6_V_address1() {
    weight_conv6_1_6_V_address1 = weight_conv6_1_6_V_3_reg_107154.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_7_V_address0 = weight_conv6_1_7_V_2_reg_107164.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_7_V_address0 = weight_conv6_1_7_V_1_reg_107159.read();
        } else {
            weight_conv6_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_7_V_address1() {
    weight_conv6_1_7_V_address1 = weight_conv6_1_7_V_3_reg_107169.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_8_V_address0 = weight_conv6_1_8_V_2_reg_107179.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_8_V_address0 = weight_conv6_1_8_V_1_reg_107174.read();
        } else {
            weight_conv6_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_8_V_address1() {
    weight_conv6_1_8_V_address1 = weight_conv6_1_8_V_3_reg_107184.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_1_9_V_address0 = weight_conv6_1_9_V_2_reg_107194.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_1_9_V_address0 = weight_conv6_1_9_V_1_reg_107189.read();
        } else {
            weight_conv6_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_1_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_9_V_address1() {
    weight_conv6_1_9_V_address1 = weight_conv6_1_9_V_3_reg_107199.read();
}

void Block_arrayctor_loop::thread_weight_conv6_1_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_1_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_1_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_1_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_1_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_1_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_0_V_address0 = weight_conv6_2_0_V_3_reg_108024.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_0_V_address0 = weight_conv6_2_0_V_1_reg_108014.read();
        } else {
            weight_conv6_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_0_V_address1() {
    weight_conv6_2_0_V_address1 = weight_conv6_2_0_V_2_reg_108019.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_10_V_address0 = weight_conv6_2_10_2_reg_108174.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_10_V_address0 = weight_conv6_2_10_s_reg_108164.read();
        } else {
            weight_conv6_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_10_V_address1() {
    weight_conv6_2_10_V_address1 = weight_conv6_2_10_1_reg_108169.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_11_V_address0 = weight_conv6_2_11_2_reg_108189.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_11_V_address0 = weight_conv6_2_11_s_reg_108179.read();
        } else {
            weight_conv6_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_11_V_address1() {
    weight_conv6_2_11_V_address1 = weight_conv6_2_11_1_reg_108184.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_12_V_address0 = weight_conv6_2_12_2_reg_108204.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_12_V_address0 = weight_conv6_2_12_s_reg_108194.read();
        } else {
            weight_conv6_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_12_V_address1() {
    weight_conv6_2_12_V_address1 = weight_conv6_2_12_1_reg_108199.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_13_V_address0 = weight_conv6_2_13_2_reg_108219.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_13_V_address0 = weight_conv6_2_13_s_reg_108209.read();
        } else {
            weight_conv6_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_13_V_address1() {
    weight_conv6_2_13_V_address1 = weight_conv6_2_13_1_reg_108214.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_14_V_address0 = weight_conv6_2_14_2_reg_108234.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_14_V_address0 = weight_conv6_2_14_s_reg_108224.read();
        } else {
            weight_conv6_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_14_V_address1() {
    weight_conv6_2_14_V_address1 = weight_conv6_2_14_1_reg_108229.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_15_V_address0 = weight_conv6_2_15_2_reg_108249.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_15_V_address0 = weight_conv6_2_15_s_reg_108239.read();
        } else {
            weight_conv6_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_15_V_address1() {
    weight_conv6_2_15_V_address1 = weight_conv6_2_15_1_reg_108244.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_16_V_address0 = weight_conv6_2_16_2_reg_108264.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_16_V_address0 = weight_conv6_2_16_s_reg_108254.read();
        } else {
            weight_conv6_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_16_V_address1() {
    weight_conv6_2_16_V_address1 = weight_conv6_2_16_1_reg_108259.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_17_V_address0 = weight_conv6_2_17_2_reg_108279.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_17_V_address0 = weight_conv6_2_17_s_reg_108269.read();
        } else {
            weight_conv6_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_17_V_address1() {
    weight_conv6_2_17_V_address1 = weight_conv6_2_17_1_reg_108274.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_18_V_address0 = weight_conv6_2_18_2_reg_108294.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_18_V_address0 = weight_conv6_2_18_s_reg_108284.read();
        } else {
            weight_conv6_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_18_V_address1() {
    weight_conv6_2_18_V_address1 = weight_conv6_2_18_1_reg_108289.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_19_V_address0 = weight_conv6_2_19_2_reg_108309.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_19_V_address0 = weight_conv6_2_19_s_reg_108299.read();
        } else {
            weight_conv6_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_19_V_address1() {
    weight_conv6_2_19_V_address1 = weight_conv6_2_19_1_reg_108304.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_1_V_address0 = weight_conv6_2_1_V_3_reg_108039.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_1_V_address0 = weight_conv6_2_1_V_1_reg_108029.read();
        } else {
            weight_conv6_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_1_V_address1() {
    weight_conv6_2_1_V_address1 = weight_conv6_2_1_V_2_reg_108034.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_20_V_address0 = weight_conv6_2_20_2_reg_108324.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_20_V_address0 = weight_conv6_2_20_s_reg_108314.read();
        } else {
            weight_conv6_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_20_V_address1() {
    weight_conv6_2_20_V_address1 = weight_conv6_2_20_1_reg_108319.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_21_V_address0 = weight_conv6_2_21_2_reg_108339.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_21_V_address0 = weight_conv6_2_21_s_reg_108329.read();
        } else {
            weight_conv6_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_21_V_address1() {
    weight_conv6_2_21_V_address1 = weight_conv6_2_21_1_reg_108334.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_22_V_address0 = weight_conv6_2_22_2_reg_108354.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_22_V_address0 = weight_conv6_2_22_s_reg_108344.read();
        } else {
            weight_conv6_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_22_V_address1() {
    weight_conv6_2_22_V_address1 = weight_conv6_2_22_1_reg_108349.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_23_V_address0 = weight_conv6_2_23_2_reg_108369.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_23_V_address0 = weight_conv6_2_23_s_reg_108359.read();
        } else {
            weight_conv6_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_23_V_address1() {
    weight_conv6_2_23_V_address1 = weight_conv6_2_23_1_reg_108364.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_24_V_address0 = weight_conv6_2_24_2_reg_108384.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_24_V_address0 = weight_conv6_2_24_s_reg_108374.read();
        } else {
            weight_conv6_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_24_V_address1() {
    weight_conv6_2_24_V_address1 = weight_conv6_2_24_1_reg_108379.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_25_V_address0 = weight_conv6_2_25_2_reg_108399.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_25_V_address0 = weight_conv6_2_25_s_reg_108389.read();
        } else {
            weight_conv6_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_25_V_address1() {
    weight_conv6_2_25_V_address1 = weight_conv6_2_25_1_reg_108394.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_26_V_address0 = weight_conv6_2_26_2_reg_108414.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_26_V_address0 = weight_conv6_2_26_s_reg_108404.read();
        } else {
            weight_conv6_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_26_V_address1() {
    weight_conv6_2_26_V_address1 = weight_conv6_2_26_1_reg_108409.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_27_V_address0 = weight_conv6_2_27_2_reg_108429.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_27_V_address0 = weight_conv6_2_27_s_reg_108419.read();
        } else {
            weight_conv6_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_27_V_address1() {
    weight_conv6_2_27_V_address1 = weight_conv6_2_27_1_reg_108424.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_28_V_address0 = weight_conv6_2_28_2_reg_108444.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_28_V_address0 = weight_conv6_2_28_s_reg_108434.read();
        } else {
            weight_conv6_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_28_V_address1() {
    weight_conv6_2_28_V_address1 = weight_conv6_2_28_1_reg_108439.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_29_V_address0 = weight_conv6_2_29_2_reg_108459.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_29_V_address0 = weight_conv6_2_29_s_reg_108449.read();
        } else {
            weight_conv6_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_29_V_address1() {
    weight_conv6_2_29_V_address1 = weight_conv6_2_29_1_reg_108454.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_2_V_address0 = weight_conv6_2_2_V_3_reg_108054.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_2_V_address0 = weight_conv6_2_2_V_1_reg_108044.read();
        } else {
            weight_conv6_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_2_V_address1() {
    weight_conv6_2_2_V_address1 = weight_conv6_2_2_V_2_reg_108049.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_30_V_address0 = weight_conv6_2_30_2_reg_108474.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_30_V_address0 = weight_conv6_2_30_s_reg_108464.read();
        } else {
            weight_conv6_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_30_V_address1() {
    weight_conv6_2_30_V_address1 = weight_conv6_2_30_1_reg_108469.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_31_V_address0 = weight_conv6_2_31_2_reg_108489.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_31_V_address0 = weight_conv6_2_31_s_reg_108479.read();
        } else {
            weight_conv6_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_31_V_address1() {
    weight_conv6_2_31_V_address1 = weight_conv6_2_31_1_reg_108484.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_32_V_address0 = weight_conv6_2_32_2_reg_108504.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_32_V_address0 = weight_conv6_2_32_s_reg_108494.read();
        } else {
            weight_conv6_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_32_V_address1() {
    weight_conv6_2_32_V_address1 = weight_conv6_2_32_1_reg_108499.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_33_V_address0 = weight_conv6_2_33_2_reg_108519.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_33_V_address0 = weight_conv6_2_33_s_reg_108509.read();
        } else {
            weight_conv6_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_33_V_address1() {
    weight_conv6_2_33_V_address1 = weight_conv6_2_33_1_reg_108514.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_34_V_address0 = weight_conv6_2_34_2_reg_108534.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_34_V_address0 = weight_conv6_2_34_s_reg_108524.read();
        } else {
            weight_conv6_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_34_V_address1() {
    weight_conv6_2_34_V_address1 = weight_conv6_2_34_1_reg_108529.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_35_V_address0 = weight_conv6_2_35_2_reg_108549.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_35_V_address0 = weight_conv6_2_35_s_reg_108539.read();
        } else {
            weight_conv6_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_35_V_address1() {
    weight_conv6_2_35_V_address1 = weight_conv6_2_35_1_reg_108544.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_36_V_address0 = weight_conv6_2_36_2_reg_108564.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_36_V_address0 = weight_conv6_2_36_s_reg_108554.read();
        } else {
            weight_conv6_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_36_V_address1() {
    weight_conv6_2_36_V_address1 = weight_conv6_2_36_1_reg_108559.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_37_V_address0 = weight_conv6_2_37_2_reg_108579.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_37_V_address0 = weight_conv6_2_37_s_reg_108569.read();
        } else {
            weight_conv6_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_37_V_address1() {
    weight_conv6_2_37_V_address1 = weight_conv6_2_37_1_reg_108574.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_38_V_address0 = weight_conv6_2_38_2_reg_108594.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_38_V_address0 = weight_conv6_2_38_s_reg_108584.read();
        } else {
            weight_conv6_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_38_V_address1() {
    weight_conv6_2_38_V_address1 = weight_conv6_2_38_1_reg_108589.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_39_V_address0 = weight_conv6_2_39_2_reg_108609.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_39_V_address0 = weight_conv6_2_39_s_reg_108599.read();
        } else {
            weight_conv6_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_39_V_address1() {
    weight_conv6_2_39_V_address1 = weight_conv6_2_39_1_reg_108604.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_3_V_address0 = weight_conv6_2_3_V_3_reg_108069.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_3_V_address0 = weight_conv6_2_3_V_1_reg_108059.read();
        } else {
            weight_conv6_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_3_V_address1() {
    weight_conv6_2_3_V_address1 = weight_conv6_2_3_V_2_reg_108064.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_40_V_address0 = weight_conv6_2_40_2_reg_108624.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_40_V_address0 = weight_conv6_2_40_s_reg_108614.read();
        } else {
            weight_conv6_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_40_V_address1() {
    weight_conv6_2_40_V_address1 = weight_conv6_2_40_1_reg_108619.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_41_V_address0 = weight_conv6_2_41_2_reg_108639.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_41_V_address0 = weight_conv6_2_41_s_reg_108629.read();
        } else {
            weight_conv6_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_41_V_address1() {
    weight_conv6_2_41_V_address1 = weight_conv6_2_41_1_reg_108634.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_42_V_address0 = weight_conv6_2_42_2_reg_108654.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_42_V_address0 = weight_conv6_2_42_s_reg_108644.read();
        } else {
            weight_conv6_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_42_V_address1() {
    weight_conv6_2_42_V_address1 = weight_conv6_2_42_1_reg_108649.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_43_V_address0 = weight_conv6_2_43_2_reg_108669.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_43_V_address0 = weight_conv6_2_43_s_reg_108659.read();
        } else {
            weight_conv6_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_43_V_address1() {
    weight_conv6_2_43_V_address1 = weight_conv6_2_43_1_reg_108664.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_44_V_address0 = weight_conv6_2_44_2_reg_108684.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_44_V_address0 = weight_conv6_2_44_s_reg_108674.read();
        } else {
            weight_conv6_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_44_V_address1() {
    weight_conv6_2_44_V_address1 = weight_conv6_2_44_1_reg_108679.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_45_V_address0 = weight_conv6_2_45_2_reg_108699.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_45_V_address0 = weight_conv6_2_45_s_reg_108689.read();
        } else {
            weight_conv6_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_45_V_address1() {
    weight_conv6_2_45_V_address1 = weight_conv6_2_45_1_reg_108694.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_46_V_address0 = weight_conv6_2_46_2_reg_108714.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_46_V_address0 = weight_conv6_2_46_s_reg_108704.read();
        } else {
            weight_conv6_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_46_V_address1() {
    weight_conv6_2_46_V_address1 = weight_conv6_2_46_1_reg_108709.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_47_V_address0 = weight_conv6_2_47_2_reg_108729.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_47_V_address0 = weight_conv6_2_47_s_reg_108719.read();
        } else {
            weight_conv6_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_47_V_address1() {
    weight_conv6_2_47_V_address1 = weight_conv6_2_47_1_reg_108724.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_48_V_address0 = weight_conv6_2_48_2_reg_108744.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_48_V_address0 = weight_conv6_2_48_s_reg_108734.read();
        } else {
            weight_conv6_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_48_V_address1() {
    weight_conv6_2_48_V_address1 = weight_conv6_2_48_1_reg_108739.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_49_V_address0 = weight_conv6_2_49_2_reg_108759.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_49_V_address0 = weight_conv6_2_49_s_reg_108749.read();
        } else {
            weight_conv6_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_49_V_address1() {
    weight_conv6_2_49_V_address1 = weight_conv6_2_49_1_reg_108754.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_4_V_address0 = weight_conv6_2_4_V_3_reg_108084.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_4_V_address0 = weight_conv6_2_4_V_1_reg_108074.read();
        } else {
            weight_conv6_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_4_V_address1() {
    weight_conv6_2_4_V_address1 = weight_conv6_2_4_V_2_reg_108079.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_50_V_address0 = weight_conv6_2_50_2_reg_108774.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_50_V_address0 = weight_conv6_2_50_s_reg_108764.read();
        } else {
            weight_conv6_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_50_V_address1() {
    weight_conv6_2_50_V_address1 = weight_conv6_2_50_1_reg_108769.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_51_V_address0 = weight_conv6_2_51_2_reg_108789.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_51_V_address0 = weight_conv6_2_51_s_reg_108779.read();
        } else {
            weight_conv6_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_51_V_address1() {
    weight_conv6_2_51_V_address1 = weight_conv6_2_51_1_reg_108784.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_52_V_address0 = weight_conv6_2_52_2_reg_108804.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_52_V_address0 = weight_conv6_2_52_s_reg_108794.read();
        } else {
            weight_conv6_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_52_V_address1() {
    weight_conv6_2_52_V_address1 = weight_conv6_2_52_1_reg_108799.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_53_V_address0 = weight_conv6_2_53_2_reg_108819.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_53_V_address0 = weight_conv6_2_53_s_reg_108809.read();
        } else {
            weight_conv6_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_53_V_address1() {
    weight_conv6_2_53_V_address1 = weight_conv6_2_53_1_reg_108814.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_54_V_address0 = weight_conv6_2_54_2_reg_108834.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_54_V_address0 = weight_conv6_2_54_s_reg_108824.read();
        } else {
            weight_conv6_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_54_V_address1() {
    weight_conv6_2_54_V_address1 = weight_conv6_2_54_1_reg_108829.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_55_V_address0 = weight_conv6_2_55_2_reg_108849.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_55_V_address0 = weight_conv6_2_55_s_reg_108839.read();
        } else {
            weight_conv6_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_55_V_address1() {
    weight_conv6_2_55_V_address1 = weight_conv6_2_55_1_reg_108844.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_56_V_address0 = weight_conv6_2_56_2_reg_108864.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_56_V_address0 = weight_conv6_2_56_s_reg_108854.read();
        } else {
            weight_conv6_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_56_V_address1() {
    weight_conv6_2_56_V_address1 = weight_conv6_2_56_1_reg_108859.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_57_V_address0 = weight_conv6_2_57_2_reg_108879.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_57_V_address0 = weight_conv6_2_57_s_reg_108869.read();
        } else {
            weight_conv6_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_57_V_address1() {
    weight_conv6_2_57_V_address1 = weight_conv6_2_57_1_reg_108874.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_58_V_address0 = weight_conv6_2_58_2_reg_108894.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_58_V_address0 = weight_conv6_2_58_s_reg_108884.read();
        } else {
            weight_conv6_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_58_V_address1() {
    weight_conv6_2_58_V_address1 = weight_conv6_2_58_1_reg_108889.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_59_V_address0 = weight_conv6_2_59_2_reg_108909.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_59_V_address0 = weight_conv6_2_59_s_reg_108899.read();
        } else {
            weight_conv6_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_59_V_address1() {
    weight_conv6_2_59_V_address1 = weight_conv6_2_59_1_reg_108904.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_5_V_address0 = weight_conv6_2_5_V_3_reg_108099.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_5_V_address0 = weight_conv6_2_5_V_1_reg_108089.read();
        } else {
            weight_conv6_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_5_V_address1() {
    weight_conv6_2_5_V_address1 = weight_conv6_2_5_V_2_reg_108094.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_60_V_address0 = weight_conv6_2_60_2_reg_108924.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_60_V_address0 = weight_conv6_2_60_s_reg_108914.read();
        } else {
            weight_conv6_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_60_V_address1() {
    weight_conv6_2_60_V_address1 = weight_conv6_2_60_1_reg_108919.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_61_V_address0 = weight_conv6_2_61_2_reg_108939.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_61_V_address0 = weight_conv6_2_61_s_reg_108929.read();
        } else {
            weight_conv6_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_61_V_address1() {
    weight_conv6_2_61_V_address1 = weight_conv6_2_61_1_reg_108934.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_62_V_address0 = weight_conv6_2_62_2_reg_108954.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_62_V_address0 = weight_conv6_2_62_s_reg_108944.read();
        } else {
            weight_conv6_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_62_V_address1() {
    weight_conv6_2_62_V_address1 = weight_conv6_2_62_1_reg_108949.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_63_V_address0 = weight_conv6_2_63_2_reg_108969.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_63_V_address0 = weight_conv6_2_63_s_reg_108959.read();
        } else {
            weight_conv6_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_63_V_address1() {
    weight_conv6_2_63_V_address1 = weight_conv6_2_63_1_reg_108964.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_6_V_address0 = weight_conv6_2_6_V_3_reg_108114.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_6_V_address0 = weight_conv6_2_6_V_1_reg_108104.read();
        } else {
            weight_conv6_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_6_V_address1() {
    weight_conv6_2_6_V_address1 = weight_conv6_2_6_V_2_reg_108109.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_7_V_address0 = weight_conv6_2_7_V_3_reg_108129.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_7_V_address0 = weight_conv6_2_7_V_1_reg_108119.read();
        } else {
            weight_conv6_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_7_V_address1() {
    weight_conv6_2_7_V_address1 = weight_conv6_2_7_V_2_reg_108124.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_8_V_address0 = weight_conv6_2_8_V_3_reg_108144.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_8_V_address0 = weight_conv6_2_8_V_1_reg_108134.read();
        } else {
            weight_conv6_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_8_V_address1() {
    weight_conv6_2_8_V_address1 = weight_conv6_2_8_V_2_reg_108139.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp22_stage1.read(), ap_const_boolean_0))) {
            weight_conv6_2_9_V_address0 = weight_conv6_2_9_V_3_reg_108159.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
            weight_conv6_2_9_V_address0 = weight_conv6_2_9_V_1_reg_108149.read();
        } else {
            weight_conv6_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv6_2_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_9_V_address1() {
    weight_conv6_2_9_V_address1 = weight_conv6_2_9_V_2_reg_108154.read();
}

void Block_arrayctor_loop::thread_weight_conv6_2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv6_2_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv6_2_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv6_2_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv6_2_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv6_2_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_0_V_address0 = weight_conv7_0_0_V_3_reg_111941.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_0_V_address0 = weight_conv7_0_0_V_1_reg_111931.read();
        } else {
            weight_conv7_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_0_V_address1() {
    weight_conv7_0_0_V_address1 = weight_conv7_0_0_V_2_reg_111936.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_10_V_address0 = weight_conv7_0_10_2_reg_112091.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_10_V_address0 = weight_conv7_0_10_s_reg_112081.read();
        } else {
            weight_conv7_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_10_V_address1() {
    weight_conv7_0_10_V_address1 = weight_conv7_0_10_1_reg_112086.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_11_V_address0 = weight_conv7_0_11_2_reg_112106.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_11_V_address0 = weight_conv7_0_11_s_reg_112096.read();
        } else {
            weight_conv7_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_11_V_address1() {
    weight_conv7_0_11_V_address1 = weight_conv7_0_11_1_reg_112101.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_12_V_address0 = weight_conv7_0_12_2_reg_112121.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_12_V_address0 = weight_conv7_0_12_s_reg_112111.read();
        } else {
            weight_conv7_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_12_V_address1() {
    weight_conv7_0_12_V_address1 = weight_conv7_0_12_1_reg_112116.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_13_V_address0 = weight_conv7_0_13_2_reg_112136.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_13_V_address0 = weight_conv7_0_13_s_reg_112126.read();
        } else {
            weight_conv7_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_13_V_address1() {
    weight_conv7_0_13_V_address1 = weight_conv7_0_13_1_reg_112131.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_14_V_address0 = weight_conv7_0_14_2_reg_112151.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_14_V_address0 = weight_conv7_0_14_s_reg_112141.read();
        } else {
            weight_conv7_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_14_V_address1() {
    weight_conv7_0_14_V_address1 = weight_conv7_0_14_1_reg_112146.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_15_V_address0 = weight_conv7_0_15_2_reg_112166.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_15_V_address0 = weight_conv7_0_15_s_reg_112156.read();
        } else {
            weight_conv7_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_15_V_address1() {
    weight_conv7_0_15_V_address1 = weight_conv7_0_15_1_reg_112161.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_16_V_address0 = weight_conv7_0_16_2_reg_112181.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_16_V_address0 = weight_conv7_0_16_s_reg_112171.read();
        } else {
            weight_conv7_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_16_V_address1() {
    weight_conv7_0_16_V_address1 = weight_conv7_0_16_1_reg_112176.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_17_V_address0 = weight_conv7_0_17_2_reg_112196.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_17_V_address0 = weight_conv7_0_17_s_reg_112186.read();
        } else {
            weight_conv7_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_17_V_address1() {
    weight_conv7_0_17_V_address1 = weight_conv7_0_17_1_reg_112191.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_18_V_address0 = weight_conv7_0_18_2_reg_112211.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_18_V_address0 = weight_conv7_0_18_s_reg_112201.read();
        } else {
            weight_conv7_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_18_V_address1() {
    weight_conv7_0_18_V_address1 = weight_conv7_0_18_1_reg_112206.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_19_V_address0 = weight_conv7_0_19_2_reg_112226.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_19_V_address0 = weight_conv7_0_19_s_reg_112216.read();
        } else {
            weight_conv7_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_19_V_address1() {
    weight_conv7_0_19_V_address1 = weight_conv7_0_19_1_reg_112221.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_1_V_address0 = weight_conv7_0_1_V_3_reg_111956.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_1_V_address0 = weight_conv7_0_1_V_1_reg_111946.read();
        } else {
            weight_conv7_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_1_V_address1() {
    weight_conv7_0_1_V_address1 = weight_conv7_0_1_V_2_reg_111951.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_20_V_address0 = weight_conv7_0_20_2_reg_112241.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_20_V_address0 = weight_conv7_0_20_s_reg_112231.read();
        } else {
            weight_conv7_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_20_V_address1() {
    weight_conv7_0_20_V_address1 = weight_conv7_0_20_1_reg_112236.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_21_V_address0 = weight_conv7_0_21_2_reg_112256.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_21_V_address0 = weight_conv7_0_21_s_reg_112246.read();
        } else {
            weight_conv7_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_21_V_address1() {
    weight_conv7_0_21_V_address1 = weight_conv7_0_21_1_reg_112251.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_21_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_21_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_21_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_22_V_address0 = weight_conv7_0_22_2_reg_112271.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_22_V_address0 = weight_conv7_0_22_s_reg_112261.read();
        } else {
            weight_conv7_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_22_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_22_V_address1() {
    weight_conv7_0_22_V_address1 = weight_conv7_0_22_1_reg_112266.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_22_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_22_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_22_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_23_V_address0 = weight_conv7_0_23_2_reg_112286.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_23_V_address0 = weight_conv7_0_23_s_reg_112276.read();
        } else {
            weight_conv7_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_23_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_23_V_address1() {
    weight_conv7_0_23_V_address1 = weight_conv7_0_23_1_reg_112281.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_23_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_23_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_23_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_24_V_address0 = weight_conv7_0_24_2_reg_112301.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_24_V_address0 = weight_conv7_0_24_s_reg_112291.read();
        } else {
            weight_conv7_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_24_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_24_V_address1() {
    weight_conv7_0_24_V_address1 = weight_conv7_0_24_1_reg_112296.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_24_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_24_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_24_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_24_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_24_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_25_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_25_V_address0 = weight_conv7_0_25_2_reg_112316.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_25_V_address0 = weight_conv7_0_25_s_reg_112306.read();
        } else {
            weight_conv7_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_25_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_25_V_address1() {
    weight_conv7_0_25_V_address1 = weight_conv7_0_25_1_reg_112311.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_25_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_25_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_25_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_25_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_25_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_26_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_26_V_address0 = weight_conv7_0_26_2_reg_112331.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_26_V_address0 = weight_conv7_0_26_s_reg_112321.read();
        } else {
            weight_conv7_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_26_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_26_V_address1() {
    weight_conv7_0_26_V_address1 = weight_conv7_0_26_1_reg_112326.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_26_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_26_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_26_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_26_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_26_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_27_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_27_V_address0 = weight_conv7_0_27_2_reg_112346.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_27_V_address0 = weight_conv7_0_27_s_reg_112336.read();
        } else {
            weight_conv7_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_27_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_27_V_address1() {
    weight_conv7_0_27_V_address1 = weight_conv7_0_27_1_reg_112341.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_27_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_27_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_27_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_27_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_27_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_28_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_28_V_address0 = weight_conv7_0_28_2_reg_112361.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_28_V_address0 = weight_conv7_0_28_s_reg_112351.read();
        } else {
            weight_conv7_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_28_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_28_V_address1() {
    weight_conv7_0_28_V_address1 = weight_conv7_0_28_1_reg_112356.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_28_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_28_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_28_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_28_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_28_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_29_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_29_V_address0 = weight_conv7_0_29_2_reg_112376.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_29_V_address0 = weight_conv7_0_29_s_reg_112366.read();
        } else {
            weight_conv7_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_29_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_29_V_address1() {
    weight_conv7_0_29_V_address1 = weight_conv7_0_29_1_reg_112371.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_29_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_29_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_29_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_29_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_29_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_2_V_address0 = weight_conv7_0_2_V_3_reg_111971.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_2_V_address0 = weight_conv7_0_2_V_1_reg_111961.read();
        } else {
            weight_conv7_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_2_V_address1() {
    weight_conv7_0_2_V_address1 = weight_conv7_0_2_V_2_reg_111966.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_2_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_2_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_30_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_30_V_address0 = weight_conv7_0_30_2_reg_112391.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_30_V_address0 = weight_conv7_0_30_s_reg_112381.read();
        } else {
            weight_conv7_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_30_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_30_V_address1() {
    weight_conv7_0_30_V_address1 = weight_conv7_0_30_1_reg_112386.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_30_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_30_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_30_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_30_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_30_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_31_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_31_V_address0 = weight_conv7_0_31_2_reg_112406.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_31_V_address0 = weight_conv7_0_31_s_reg_112396.read();
        } else {
            weight_conv7_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_31_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_31_V_address1() {
    weight_conv7_0_31_V_address1 = weight_conv7_0_31_1_reg_112401.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_31_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_31_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_31_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_31_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_31_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_32_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_32_V_address0 = weight_conv7_0_32_2_reg_112421.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_32_V_address0 = weight_conv7_0_32_s_reg_112411.read();
        } else {
            weight_conv7_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_32_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_32_V_address1() {
    weight_conv7_0_32_V_address1 = weight_conv7_0_32_1_reg_112416.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_32_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_32_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_32_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_32_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_32_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_33_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_33_V_address0 = weight_conv7_0_33_2_reg_112436.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_33_V_address0 = weight_conv7_0_33_s_reg_112426.read();
        } else {
            weight_conv7_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_33_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_33_V_address1() {
    weight_conv7_0_33_V_address1 = weight_conv7_0_33_1_reg_112431.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_33_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_33_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_33_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_33_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_33_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_34_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_34_V_address0 = weight_conv7_0_34_2_reg_112451.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_34_V_address0 = weight_conv7_0_34_s_reg_112441.read();
        } else {
            weight_conv7_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_34_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_34_V_address1() {
    weight_conv7_0_34_V_address1 = weight_conv7_0_34_1_reg_112446.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_34_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_34_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_34_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_34_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_34_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_35_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_35_V_address0 = weight_conv7_0_35_2_reg_112466.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_35_V_address0 = weight_conv7_0_35_s_reg_112456.read();
        } else {
            weight_conv7_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_35_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_35_V_address1() {
    weight_conv7_0_35_V_address1 = weight_conv7_0_35_1_reg_112461.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_35_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_35_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_35_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_35_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_35_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_36_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_36_V_address0 = weight_conv7_0_36_2_reg_112481.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_36_V_address0 = weight_conv7_0_36_s_reg_112471.read();
        } else {
            weight_conv7_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_36_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_36_V_address1() {
    weight_conv7_0_36_V_address1 = weight_conv7_0_36_1_reg_112476.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_36_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_36_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_36_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_36_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_36_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_37_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_37_V_address0 = weight_conv7_0_37_2_reg_112496.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_37_V_address0 = weight_conv7_0_37_s_reg_112486.read();
        } else {
            weight_conv7_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_37_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_37_V_address1() {
    weight_conv7_0_37_V_address1 = weight_conv7_0_37_1_reg_112491.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_37_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_37_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_37_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_37_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_37_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_38_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_38_V_address0 = weight_conv7_0_38_2_reg_112511.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_38_V_address0 = weight_conv7_0_38_s_reg_112501.read();
        } else {
            weight_conv7_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_38_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_38_V_address1() {
    weight_conv7_0_38_V_address1 = weight_conv7_0_38_1_reg_112506.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_38_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_38_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_38_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_38_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_38_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_39_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_39_V_address0 = weight_conv7_0_39_2_reg_112526.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_39_V_address0 = weight_conv7_0_39_s_reg_112516.read();
        } else {
            weight_conv7_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_39_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_39_V_address1() {
    weight_conv7_0_39_V_address1 = weight_conv7_0_39_1_reg_112521.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_39_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_39_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_39_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_39_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_39_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_3_V_address0 = weight_conv7_0_3_V_3_reg_111986.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_3_V_address0 = weight_conv7_0_3_V_1_reg_111976.read();
        } else {
            weight_conv7_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_3_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_3_V_address1() {
    weight_conv7_0_3_V_address1 = weight_conv7_0_3_V_2_reg_111981.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_3_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_3_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_40_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_40_V_address0 = weight_conv7_0_40_2_reg_112541.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_40_V_address0 = weight_conv7_0_40_s_reg_112531.read();
        } else {
            weight_conv7_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_40_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_40_V_address1() {
    weight_conv7_0_40_V_address1 = weight_conv7_0_40_1_reg_112536.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_40_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_40_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_40_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_40_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_40_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_41_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_41_V_address0 = weight_conv7_0_41_2_reg_112556.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_41_V_address0 = weight_conv7_0_41_s_reg_112546.read();
        } else {
            weight_conv7_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_41_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_41_V_address1() {
    weight_conv7_0_41_V_address1 = weight_conv7_0_41_1_reg_112551.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_41_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_41_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_41_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_41_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_41_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_42_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_42_V_address0 = weight_conv7_0_42_2_reg_112571.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_42_V_address0 = weight_conv7_0_42_s_reg_112561.read();
        } else {
            weight_conv7_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_42_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_42_V_address1() {
    weight_conv7_0_42_V_address1 = weight_conv7_0_42_1_reg_112566.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_42_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_42_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_42_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_42_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_42_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_43_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_43_V_address0 = weight_conv7_0_43_2_reg_112586.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_43_V_address0 = weight_conv7_0_43_s_reg_112576.read();
        } else {
            weight_conv7_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_43_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_43_V_address1() {
    weight_conv7_0_43_V_address1 = weight_conv7_0_43_1_reg_112581.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_43_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_43_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_43_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_43_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_43_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_44_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_44_V_address0 = weight_conv7_0_44_2_reg_112601.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_44_V_address0 = weight_conv7_0_44_s_reg_112591.read();
        } else {
            weight_conv7_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_44_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_44_V_address1() {
    weight_conv7_0_44_V_address1 = weight_conv7_0_44_1_reg_112596.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_44_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_44_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_44_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_44_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_44_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_45_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_45_V_address0 = weight_conv7_0_45_2_reg_112616.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_45_V_address0 = weight_conv7_0_45_s_reg_112606.read();
        } else {
            weight_conv7_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_45_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_45_V_address1() {
    weight_conv7_0_45_V_address1 = weight_conv7_0_45_1_reg_112611.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_45_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_45_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_45_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_45_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_45_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_46_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_46_V_address0 = weight_conv7_0_46_2_reg_112631.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_46_V_address0 = weight_conv7_0_46_s_reg_112621.read();
        } else {
            weight_conv7_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_46_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_46_V_address1() {
    weight_conv7_0_46_V_address1 = weight_conv7_0_46_1_reg_112626.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_46_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_46_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_46_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_46_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_46_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_47_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_47_V_address0 = weight_conv7_0_47_2_reg_112646.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_47_V_address0 = weight_conv7_0_47_s_reg_112636.read();
        } else {
            weight_conv7_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_47_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_47_V_address1() {
    weight_conv7_0_47_V_address1 = weight_conv7_0_47_1_reg_112641.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_47_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_47_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_47_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_47_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_47_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_48_V_address0 = weight_conv7_0_48_2_reg_112661.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_48_V_address0 = weight_conv7_0_48_s_reg_112651.read();
        } else {
            weight_conv7_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_48_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_48_V_address1() {
    weight_conv7_0_48_V_address1 = weight_conv7_0_48_1_reg_112656.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_48_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_48_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_48_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_48_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_48_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_48_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_49_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_49_V_address0 = weight_conv7_0_49_2_reg_112676.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_49_V_address0 = weight_conv7_0_49_s_reg_112666.read();
        } else {
            weight_conv7_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_49_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_49_V_address1() {
    weight_conv7_0_49_V_address1 = weight_conv7_0_49_1_reg_112671.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_49_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_49_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_49_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_49_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_49_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_49_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_4_V_address0 = weight_conv7_0_4_V_3_reg_112001.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_4_V_address0 = weight_conv7_0_4_V_1_reg_111991.read();
        } else {
            weight_conv7_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_4_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_4_V_address1() {
    weight_conv7_0_4_V_address1 = weight_conv7_0_4_V_2_reg_111996.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_4_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_4_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_50_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_50_V_address0 = weight_conv7_0_50_2_reg_112691.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_50_V_address0 = weight_conv7_0_50_s_reg_112681.read();
        } else {
            weight_conv7_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_50_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_50_V_address1() {
    weight_conv7_0_50_V_address1 = weight_conv7_0_50_1_reg_112686.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_50_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_50_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_50_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_50_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_50_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_50_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_51_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_51_V_address0 = weight_conv7_0_51_2_reg_112706.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_51_V_address0 = weight_conv7_0_51_s_reg_112696.read();
        } else {
            weight_conv7_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_51_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_51_V_address1() {
    weight_conv7_0_51_V_address1 = weight_conv7_0_51_1_reg_112701.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_51_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_51_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_51_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_51_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_51_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_51_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_52_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_52_V_address0 = weight_conv7_0_52_2_reg_112721.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_52_V_address0 = weight_conv7_0_52_s_reg_112711.read();
        } else {
            weight_conv7_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_52_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_52_V_address1() {
    weight_conv7_0_52_V_address1 = weight_conv7_0_52_1_reg_112716.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_52_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_52_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_52_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_52_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_52_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_52_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_53_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_53_V_address0 = weight_conv7_0_53_2_reg_112736.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_53_V_address0 = weight_conv7_0_53_s_reg_112726.read();
        } else {
            weight_conv7_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_53_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_53_V_address1() {
    weight_conv7_0_53_V_address1 = weight_conv7_0_53_1_reg_112731.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_53_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_53_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_53_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_53_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_53_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_53_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_54_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_54_V_address0 = weight_conv7_0_54_2_reg_112751.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_54_V_address0 = weight_conv7_0_54_s_reg_112741.read();
        } else {
            weight_conv7_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_54_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_54_V_address1() {
    weight_conv7_0_54_V_address1 = weight_conv7_0_54_1_reg_112746.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_54_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_54_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_54_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_54_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_54_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_54_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_55_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_55_V_address0 = weight_conv7_0_55_2_reg_112766.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_55_V_address0 = weight_conv7_0_55_s_reg_112756.read();
        } else {
            weight_conv7_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_55_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_55_V_address1() {
    weight_conv7_0_55_V_address1 = weight_conv7_0_55_1_reg_112761.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_55_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_55_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_55_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_55_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_55_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_55_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_56_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_56_V_address0 = weight_conv7_0_56_2_reg_112781.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_56_V_address0 = weight_conv7_0_56_s_reg_112771.read();
        } else {
            weight_conv7_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_56_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_56_V_address1() {
    weight_conv7_0_56_V_address1 = weight_conv7_0_56_1_reg_112776.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_56_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_56_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_56_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_56_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_56_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_56_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_57_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_57_V_address0 = weight_conv7_0_57_2_reg_112796.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_57_V_address0 = weight_conv7_0_57_s_reg_112786.read();
        } else {
            weight_conv7_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_57_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_57_V_address1() {
    weight_conv7_0_57_V_address1 = weight_conv7_0_57_1_reg_112791.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_57_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_57_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_57_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_57_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_57_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_57_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_58_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_58_V_address0 = weight_conv7_0_58_2_reg_112811.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_58_V_address0 = weight_conv7_0_58_s_reg_112801.read();
        } else {
            weight_conv7_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_58_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_58_V_address1() {
    weight_conv7_0_58_V_address1 = weight_conv7_0_58_1_reg_112806.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_58_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_58_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_58_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_58_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_58_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_58_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_59_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_59_V_address0 = weight_conv7_0_59_2_reg_112826.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_59_V_address0 = weight_conv7_0_59_s_reg_112816.read();
        } else {
            weight_conv7_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_59_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_59_V_address1() {
    weight_conv7_0_59_V_address1 = weight_conv7_0_59_1_reg_112821.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_59_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_59_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_59_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_59_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_59_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_59_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_5_V_address0 = weight_conv7_0_5_V_3_reg_112016.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_5_V_address0 = weight_conv7_0_5_V_1_reg_112006.read();
        } else {
            weight_conv7_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_5_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_5_V_address1() {
    weight_conv7_0_5_V_address1 = weight_conv7_0_5_V_2_reg_112011.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_5_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_5_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_60_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_60_V_address0 = weight_conv7_0_60_2_reg_112841.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_60_V_address0 = weight_conv7_0_60_s_reg_112831.read();
        } else {
            weight_conv7_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_60_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_60_V_address1() {
    weight_conv7_0_60_V_address1 = weight_conv7_0_60_1_reg_112836.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_60_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_60_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_60_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_60_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_60_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_60_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_61_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_61_V_address0 = weight_conv7_0_61_2_reg_112856.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_61_V_address0 = weight_conv7_0_61_s_reg_112846.read();
        } else {
            weight_conv7_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_61_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_61_V_address1() {
    weight_conv7_0_61_V_address1 = weight_conv7_0_61_1_reg_112851.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_61_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_61_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_61_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_61_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_61_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_61_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_62_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_62_V_address0 = weight_conv7_0_62_2_reg_112871.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_62_V_address0 = weight_conv7_0_62_s_reg_112861.read();
        } else {
            weight_conv7_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_62_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_62_V_address1() {
    weight_conv7_0_62_V_address1 = weight_conv7_0_62_1_reg_112866.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_62_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_62_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_62_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_62_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_62_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_62_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_63_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_63_V_address0 = weight_conv7_0_63_2_reg_112886.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_63_V_address0 = weight_conv7_0_63_s_reg_112876.read();
        } else {
            weight_conv7_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_63_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_63_V_address1() {
    weight_conv7_0_63_V_address1 = weight_conv7_0_63_1_reg_112881.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_63_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_63_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_63_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_63_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_63_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_63_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_6_V_address0 = weight_conv7_0_6_V_3_reg_112031.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_6_V_address0 = weight_conv7_0_6_V_1_reg_112021.read();
        } else {
            weight_conv7_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_6_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_6_V_address1() {
    weight_conv7_0_6_V_address1 = weight_conv7_0_6_V_2_reg_112026.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_6_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_6_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_7_V_address0 = weight_conv7_0_7_V_3_reg_112046.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_7_V_address0 = weight_conv7_0_7_V_1_reg_112036.read();
        } else {
            weight_conv7_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_7_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_7_V_address1() {
    weight_conv7_0_7_V_address1 = weight_conv7_0_7_V_2_reg_112041.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_7_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_7_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_8_V_address0 = weight_conv7_0_8_V_3_reg_112061.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_8_V_address0 = weight_conv7_0_8_V_1_reg_112051.read();
        } else {
            weight_conv7_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_8_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_8_V_address1() {
    weight_conv7_0_8_V_address1 = weight_conv7_0_8_V_2_reg_112056.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_8_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_8_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_0_9_V_address0 = weight_conv7_0_9_V_3_reg_112076.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_0_9_V_address0 = weight_conv7_0_9_V_1_reg_112066.read();
        } else {
            weight_conv7_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_0_9_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_9_V_address1() {
    weight_conv7_0_9_V_address1 = weight_conv7_0_9_V_2_reg_112071.read();
}

void Block_arrayctor_loop::thread_weight_conv7_0_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_0_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_0_9_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_0_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_0_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_0_9_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_0_V_address0 = weight_conv7_1_0_V_2_reg_112896.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_0_V_address0 = weight_conv7_1_0_V_1_reg_112891.read();
        } else {
            weight_conv7_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_0_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_0_V_address1() {
    weight_conv7_1_0_V_address1 = weight_conv7_1_0_V_3_reg_112901.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_0_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_0_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_10_V_address0 = weight_conv7_1_10_1_reg_113046.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_10_V_address0 = weight_conv7_1_10_s_reg_113041.read();
        } else {
            weight_conv7_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_10_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_10_V_address1() {
    weight_conv7_1_10_V_address1 = weight_conv7_1_10_2_reg_113051.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_10_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_10_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_11_V_address0 = weight_conv7_1_11_1_reg_113061.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_11_V_address0 = weight_conv7_1_11_s_reg_113056.read();
        } else {
            weight_conv7_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_11_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_11_V_address1() {
    weight_conv7_1_11_V_address1 = weight_conv7_1_11_2_reg_113066.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_11_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_11_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_12_V_address0 = weight_conv7_1_12_1_reg_113076.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_12_V_address0 = weight_conv7_1_12_s_reg_113071.read();
        } else {
            weight_conv7_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_12_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_12_V_address1() {
    weight_conv7_1_12_V_address1 = weight_conv7_1_12_2_reg_113081.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_12_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_12_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_13_V_address0 = weight_conv7_1_13_1_reg_113091.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_13_V_address0 = weight_conv7_1_13_s_reg_113086.read();
        } else {
            weight_conv7_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_13_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_13_V_address1() {
    weight_conv7_1_13_V_address1 = weight_conv7_1_13_2_reg_113096.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_13_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_13_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_14_V_address0 = weight_conv7_1_14_1_reg_113106.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_14_V_address0 = weight_conv7_1_14_s_reg_113101.read();
        } else {
            weight_conv7_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_14_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_14_V_address1() {
    weight_conv7_1_14_V_address1 = weight_conv7_1_14_2_reg_113111.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_14_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_14_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_15_V_address0 = weight_conv7_1_15_1_reg_113121.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_15_V_address0 = weight_conv7_1_15_s_reg_113116.read();
        } else {
            weight_conv7_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_15_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_15_V_address1() {
    weight_conv7_1_15_V_address1 = weight_conv7_1_15_2_reg_113126.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_15_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_15_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_16_V_address0 = weight_conv7_1_16_1_reg_113136.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_16_V_address0 = weight_conv7_1_16_s_reg_113131.read();
        } else {
            weight_conv7_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_16_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_16_V_address1() {
    weight_conv7_1_16_V_address1 = weight_conv7_1_16_2_reg_113141.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_16_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_16_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_16_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_17_V_address0 = weight_conv7_1_17_1_reg_113151.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_17_V_address0 = weight_conv7_1_17_s_reg_113146.read();
        } else {
            weight_conv7_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_17_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_17_V_address1() {
    weight_conv7_1_17_V_address1 = weight_conv7_1_17_2_reg_113156.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_17_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_17_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_17_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_18_V_address0 = weight_conv7_1_18_1_reg_113166.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_18_V_address0 = weight_conv7_1_18_s_reg_113161.read();
        } else {
            weight_conv7_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_18_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_18_V_address1() {
    weight_conv7_1_18_V_address1 = weight_conv7_1_18_2_reg_113171.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_18_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_18_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_18_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_19_V_address0 = weight_conv7_1_19_1_reg_113181.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_19_V_address0 = weight_conv7_1_19_s_reg_113176.read();
        } else {
            weight_conv7_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_19_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_19_V_address1() {
    weight_conv7_1_19_V_address1 = weight_conv7_1_19_2_reg_113186.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_19_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_19_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_19_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_1_V_address0 = weight_conv7_1_1_V_2_reg_112911.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_1_V_address0 = weight_conv7_1_1_V_1_reg_112906.read();
        } else {
            weight_conv7_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_1_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_1_V_address1() {
    weight_conv7_1_1_V_address1 = weight_conv7_1_1_V_3_reg_112916.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_1_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_1_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_20_V_address0 = weight_conv7_1_20_1_reg_113196.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_20_V_address0 = weight_conv7_1_20_s_reg_113191.read();
        } else {
            weight_conv7_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_20_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_20_V_address1() {
    weight_conv7_1_20_V_address1 = weight_conv7_1_20_2_reg_113201.read();
}

void Block_arrayctor_loop::thread_weight_conv7_1_20_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)))) {
        weight_conv7_1_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_conv7_1_20_V_ce0 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0))) {
        weight_conv7_1_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_conv7_1_20_V_ce1 = ap_const_logic_0;
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp26_stage1.read(), ap_const_boolean_0))) {
            weight_conv7_1_21_V_address0 = weight_conv7_1_21_1_reg_113211.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
            weight_conv7_1_21_V_address0 = weight_conv7_1_21_s_reg_113206.read();
        } else {
            weight_conv7_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        weight_conv7_1_21_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void Block_arrayctor_loop::thread_weight_conv7_1_21_V_address1() {
    weight_conv7_1_21_V_address1 = weight_conv7_1_21_2_reg_113216.read();
}

}

