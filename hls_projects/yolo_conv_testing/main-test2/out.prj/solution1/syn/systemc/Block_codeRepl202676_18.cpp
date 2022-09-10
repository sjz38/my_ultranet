#include "Block_codeRepl202676.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Block_codeRepl202676::thread_mul_ln703_3312_fu_154282_p0() {
    mul_ln703_3312_fu_154282_p0 = shl_ln728_3303_fu_154268_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3312_fu_154282_p1() {
    mul_ln703_3312_fu_154282_p1 =  (sc_lv<6>) (mul_ln703_3312_fu_154282_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3312_fu_154282_p10() {
    mul_ln703_3312_fu_154282_p10 = esl_zext<12,6>(conv8_window_buffer_877_reg_248281.read());
}

void Block_codeRepl202676::thread_mul_ln703_3312_fu_154282_p2() {
    mul_ln703_3312_fu_154282_p2 = (!mul_ln703_3312_fu_154282_p0.read().is_01() || !mul_ln703_3312_fu_154282_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3312_fu_154282_p0.read()) * sc_biguint<6>(mul_ln703_3312_fu_154282_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3314_fu_154320_p0() {
    mul_ln703_3314_fu_154320_p0 = shl_ln728_3305_fu_154306_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3314_fu_154320_p1() {
    mul_ln703_3314_fu_154320_p1 =  (sc_lv<6>) (mul_ln703_3314_fu_154320_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3314_fu_154320_p10() {
    mul_ln703_3314_fu_154320_p10 = esl_zext<12,6>(conv8_window_buffer_881_reg_248301.read());
}

void Block_codeRepl202676::thread_mul_ln703_3314_fu_154320_p2() {
    mul_ln703_3314_fu_154320_p2 = (!mul_ln703_3314_fu_154320_p0.read().is_01() || !mul_ln703_3314_fu_154320_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3314_fu_154320_p0.read()) * sc_biguint<6>(mul_ln703_3314_fu_154320_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3316_fu_154358_p0() {
    mul_ln703_3316_fu_154358_p0 = shl_ln728_3307_fu_154344_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3316_fu_154358_p1() {
    mul_ln703_3316_fu_154358_p1 =  (sc_lv<6>) (mul_ln703_3316_fu_154358_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3316_fu_154358_p10() {
    mul_ln703_3316_fu_154358_p10 = esl_zext<12,6>(conv8_window_buffer_505_reg_250979.read());
}

void Block_codeRepl202676::thread_mul_ln703_3316_fu_154358_p2() {
    mul_ln703_3316_fu_154358_p2 = (!mul_ln703_3316_fu_154358_p0.read().is_01() || !mul_ln703_3316_fu_154358_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3316_fu_154358_p0.read()) * sc_biguint<6>(mul_ln703_3316_fu_154358_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3319_fu_158222_p0() {
    mul_ln703_3319_fu_158222_p0 = shl_ln728_3310_fu_158207_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3319_fu_158222_p1() {
    mul_ln703_3319_fu_158222_p1 =  (sc_lv<6>) (mul_ln703_3319_fu_158222_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3319_fu_158222_p10() {
    mul_ln703_3319_fu_158222_p10 = esl_zext<12,6>(conv8_pad_pipe_8_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_3319_fu_158222_p2() {
    mul_ln703_3319_fu_158222_p2 = (!mul_ln703_3319_fu_158222_p0.read().is_01() || !mul_ln703_3319_fu_158222_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3319_fu_158222_p0.read()) * sc_biguint<6>(mul_ln703_3319_fu_158222_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3321_fu_154458_p0() {
    mul_ln703_3321_fu_154458_p0 = shl_ln728_3312_fu_154444_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3321_fu_154458_p1() {
    mul_ln703_3321_fu_154458_p1 =  (sc_lv<6>) (mul_ln703_3321_fu_154458_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3321_fu_154458_p10() {
    mul_ln703_3321_fu_154458_p10 = esl_zext<12,6>(conv8_window_buffer_886_reg_248326.read());
}

void Block_codeRepl202676::thread_mul_ln703_3321_fu_154458_p2() {
    mul_ln703_3321_fu_154458_p2 = (!mul_ln703_3321_fu_154458_p0.read().is_01() || !mul_ln703_3321_fu_154458_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3321_fu_154458_p0.read()) * sc_biguint<6>(mul_ln703_3321_fu_154458_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3323_fu_154496_p0() {
    mul_ln703_3323_fu_154496_p0 = shl_ln728_3314_fu_154482_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3323_fu_154496_p1() {
    mul_ln703_3323_fu_154496_p1 =  (sc_lv<6>) (mul_ln703_3323_fu_154496_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3323_fu_154496_p10() {
    mul_ln703_3323_fu_154496_p10 = esl_zext<12,6>(conv8_window_buffer_890_reg_248346.read());
}

void Block_codeRepl202676::thread_mul_ln703_3323_fu_154496_p2() {
    mul_ln703_3323_fu_154496_p2 = (!mul_ln703_3323_fu_154496_p0.read().is_01() || !mul_ln703_3323_fu_154496_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3323_fu_154496_p0.read()) * sc_biguint<6>(mul_ln703_3323_fu_154496_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3325_fu_154534_p0() {
    mul_ln703_3325_fu_154534_p0 = shl_ln728_3316_fu_154520_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3325_fu_154534_p1() {
    mul_ln703_3325_fu_154534_p1 =  (sc_lv<6>) (mul_ln703_3325_fu_154534_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3325_fu_154534_p10() {
    mul_ln703_3325_fu_154534_p10 = esl_zext<12,6>(conv8_window_buffer_507_reg_250989.read());
}

void Block_codeRepl202676::thread_mul_ln703_3325_fu_154534_p2() {
    mul_ln703_3325_fu_154534_p2 = (!mul_ln703_3325_fu_154534_p0.read().is_01() || !mul_ln703_3325_fu_154534_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3325_fu_154534_p0.read()) * sc_biguint<6>(mul_ln703_3325_fu_154534_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3328_fu_158342_p0() {
    mul_ln703_3328_fu_158342_p0 = shl_ln728_3319_fu_158327_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3328_fu_158342_p1() {
    mul_ln703_3328_fu_158342_p1 =  (sc_lv<6>) (mul_ln703_3328_fu_158342_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3328_fu_158342_p10() {
    mul_ln703_3328_fu_158342_p10 = esl_zext<12,6>(conv8_pad_pipe_8_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_3328_fu_158342_p2() {
    mul_ln703_3328_fu_158342_p2 = (!mul_ln703_3328_fu_158342_p0.read().is_01() || !mul_ln703_3328_fu_158342_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3328_fu_158342_p0.read()) * sc_biguint<6>(mul_ln703_3328_fu_158342_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_332_fu_68217_p0() {
    mul_ln703_332_fu_68217_p0 = shl_ln728_328_fu_68203_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_332_fu_68217_p1() {
    mul_ln703_332_fu_68217_p1 =  (sc_lv<6>) (mul_ln703_332_fu_68217_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_332_fu_68217_p10() {
    mul_ln703_332_fu_68217_p10 = esl_zext<12,6>(conv3_window_buffer_227_reg_183989.read());
}

void Block_codeRepl202676::thread_mul_ln703_332_fu_68217_p2() {
    mul_ln703_332_fu_68217_p2 = (!mul_ln703_332_fu_68217_p0.read().is_01() || !mul_ln703_332_fu_68217_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_332_fu_68217_p0.read()) * sc_biguint<6>(mul_ln703_332_fu_68217_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3330_fu_154558_p0() {
    mul_ln703_3330_fu_154558_p0 = shl_ln728_3321_fu_154544_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3330_fu_154558_p1() {
    mul_ln703_3330_fu_154558_p1 =  (sc_lv<6>) (mul_ln703_3330_fu_154558_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3330_fu_154558_p10() {
    mul_ln703_3330_fu_154558_p10 = esl_zext<12,6>(conv8_window_buffer_894_reg_248366.read());
}

void Block_codeRepl202676::thread_mul_ln703_3330_fu_154558_p2() {
    mul_ln703_3330_fu_154558_p2 = (!mul_ln703_3330_fu_154558_p0.read().is_01() || !mul_ln703_3330_fu_154558_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3330_fu_154558_p0.read()) * sc_biguint<6>(mul_ln703_3330_fu_154558_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3332_fu_154578_p0() {
    mul_ln703_3332_fu_154578_p0 = shl_ln728_3323_fu_154564_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3332_fu_154578_p1() {
    mul_ln703_3332_fu_154578_p1 =  (sc_lv<6>) (mul_ln703_3332_fu_154578_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3332_fu_154578_p10() {
    mul_ln703_3332_fu_154578_p10 = esl_zext<12,6>(conv8_window_buffer_891_reg_248351.read());
}

void Block_codeRepl202676::thread_mul_ln703_3332_fu_154578_p2() {
    mul_ln703_3332_fu_154578_p2 = (!mul_ln703_3332_fu_154578_p0.read().is_01() || !mul_ln703_3332_fu_154578_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3332_fu_154578_p0.read()) * sc_biguint<6>(mul_ln703_3332_fu_154578_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3334_fu_154773_p0() {
    mul_ln703_3334_fu_154773_p0 = shl_ln728_3325_fu_154759_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3334_fu_154773_p1() {
    mul_ln703_3334_fu_154773_p1 =  (sc_lv<6>) (mul_ln703_3334_fu_154773_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3334_fu_154773_p10() {
    mul_ln703_3334_fu_154773_p10 = esl_zext<12,6>(conv8_window_buffer_509_reg_250999.read());
}

void Block_codeRepl202676::thread_mul_ln703_3334_fu_154773_p2() {
    mul_ln703_3334_fu_154773_p2 = (!mul_ln703_3334_fu_154773_p0.read().is_01() || !mul_ln703_3334_fu_154773_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3334_fu_154773_p0.read()) * sc_biguint<6>(mul_ln703_3334_fu_154773_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3337_fu_158477_p0() {
    mul_ln703_3337_fu_158477_p0 = shl_ln728_3328_fu_158462_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3337_fu_158477_p1() {
    mul_ln703_3337_fu_158477_p1 =  (sc_lv<6>) (mul_ln703_3337_fu_158477_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3337_fu_158477_p10() {
    mul_ln703_3337_fu_158477_p10 = esl_zext<12,6>(conv8_pad_pipe_8_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_3337_fu_158477_p2() {
    mul_ln703_3337_fu_158477_p2 = (!mul_ln703_3337_fu_158477_p0.read().is_01() || !mul_ln703_3337_fu_158477_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3337_fu_158477_p0.read()) * sc_biguint<6>(mul_ln703_3337_fu_158477_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3339_fu_154793_p0() {
    mul_ln703_3339_fu_154793_p0 = shl_ln728_3330_fu_154779_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3339_fu_154793_p1() {
    mul_ln703_3339_fu_154793_p1 =  (sc_lv<6>) (mul_ln703_3339_fu_154793_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3339_fu_154793_p10() {
    mul_ln703_3339_fu_154793_p10 = esl_zext<12,6>(conv8_window_buffer_876_reg_248276.read());
}

void Block_codeRepl202676::thread_mul_ln703_3339_fu_154793_p2() {
    mul_ln703_3339_fu_154793_p2 = (!mul_ln703_3339_fu_154793_p0.read().is_01() || !mul_ln703_3339_fu_154793_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3339_fu_154793_p0.read()) * sc_biguint<6>(mul_ln703_3339_fu_154793_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3341_fu_154813_p0() {
    mul_ln703_3341_fu_154813_p0 = shl_ln728_3332_fu_154799_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3341_fu_154813_p1() {
    mul_ln703_3341_fu_154813_p1 =  (sc_lv<6>) (mul_ln703_3341_fu_154813_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3341_fu_154813_p10() {
    mul_ln703_3341_fu_154813_p10 = esl_zext<12,6>(conv8_window_buffer_873_reg_248261.read());
}

void Block_codeRepl202676::thread_mul_ln703_3341_fu_154813_p2() {
    mul_ln703_3341_fu_154813_p2 = (!mul_ln703_3341_fu_154813_p0.read().is_01() || !mul_ln703_3341_fu_154813_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3341_fu_154813_p0.read()) * sc_biguint<6>(mul_ln703_3341_fu_154813_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3343_fu_154833_p0() {
    mul_ln703_3343_fu_154833_p0 = shl_ln728_3334_fu_154819_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3343_fu_154833_p1() {
    mul_ln703_3343_fu_154833_p1 =  (sc_lv<6>) (mul_ln703_3343_fu_154833_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3343_fu_154833_p10() {
    mul_ln703_3343_fu_154833_p10 = esl_zext<12,6>(conv8_window_buffer_511_reg_251009.read());
}

void Block_codeRepl202676::thread_mul_ln703_3343_fu_154833_p2() {
    mul_ln703_3343_fu_154833_p2 = (!mul_ln703_3343_fu_154833_p0.read().is_01() || !mul_ln703_3343_fu_154833_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3343_fu_154833_p0.read()) * sc_biguint<6>(mul_ln703_3343_fu_154833_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3346_fu_158645_p0() {
    mul_ln703_3346_fu_158645_p0 = shl_ln728_3337_fu_158630_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3346_fu_158645_p1() {
    mul_ln703_3346_fu_158645_p1 =  (sc_lv<6>) (mul_ln703_3346_fu_158645_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3346_fu_158645_p10() {
    mul_ln703_3346_fu_158645_p10 = esl_zext<12,6>(conv8_pad_pipe_8_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_3346_fu_158645_p2() {
    mul_ln703_3346_fu_158645_p2 = (!mul_ln703_3346_fu_158645_p0.read().is_01() || !mul_ln703_3346_fu_158645_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_3346_fu_158645_p0.read()) * sc_biguint<6>(mul_ln703_3346_fu_158645_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3347_fu_159807_p0() {
    mul_ln703_3347_fu_159807_p0 = tmp_110_reg_258643.read();
}

void Block_codeRepl202676::thread_mul_ln703_3347_fu_159807_p1() {
    mul_ln703_3347_fu_159807_p1 =  (sc_lv<5>) (mul_ln703_3347_fu_159807_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_3347_fu_159807_p10() {
    mul_ln703_3347_fu_159807_p10 = esl_zext<10,5>(relu8_0_V_load_reg_258648.read());
}

void Block_codeRepl202676::thread_mul_ln703_3347_fu_159807_p2() {
    mul_ln703_3347_fu_159807_p2 = (!mul_ln703_3347_fu_159807_p0.read().is_01() || !mul_ln703_3347_fu_159807_p1.read().is_01())? sc_lv<10>(): sc_bigint<5>(mul_ln703_3347_fu_159807_p0.read()) * sc_biguint<5>(mul_ln703_3347_fu_159807_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_334_fu_68241_p0() {
    mul_ln703_334_fu_68241_p0 = shl_ln728_330_fu_68227_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_334_fu_68241_p1() {
    mul_ln703_334_fu_68241_p1 =  (sc_lv<6>) (mul_ln703_334_fu_68241_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_334_fu_68241_p10() {
    mul_ln703_334_fu_68241_p10 = esl_zext<12,6>(conv3_window_buffer_374_reg_182455.read());
}

void Block_codeRepl202676::thread_mul_ln703_334_fu_68241_p2() {
    mul_ln703_334_fu_68241_p2 = (!mul_ln703_334_fu_68241_p0.read().is_01() || !mul_ln703_334_fu_68241_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_334_fu_68241_p0.read()) * sc_biguint<6>(mul_ln703_334_fu_68241_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_337_fu_65689_p0() {
    mul_ln703_337_fu_65689_p0 = shl_ln728_333_fu_65674_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_337_fu_65689_p1() {
    mul_ln703_337_fu_65689_p1 =  (sc_lv<6>) (mul_ln703_337_fu_65689_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_337_fu_65689_p10() {
    mul_ln703_337_fu_65689_p10 = esl_zext<12,6>(conv3_window_buffer_377_reg_182471.read());
}

void Block_codeRepl202676::thread_mul_ln703_337_fu_65689_p2() {
    mul_ln703_337_fu_65689_p2 = (!mul_ln703_337_fu_65689_p0.read().is_01() || !mul_ln703_337_fu_65689_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_337_fu_65689_p0.read()) * sc_biguint<6>(mul_ln703_337_fu_65689_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_339_fu_68364_p0() {
    mul_ln703_339_fu_68364_p0 = shl_ln728_335_fu_68349_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_339_fu_68364_p1() {
    mul_ln703_339_fu_68364_p1 =  (sc_lv<6>) (mul_ln703_339_fu_68364_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_339_fu_68364_p10() {
    mul_ln703_339_fu_68364_p10 = esl_zext<12,6>(conv3_window_buffer_381_reg_182491.read());
}

void Block_codeRepl202676::thread_mul_ln703_339_fu_68364_p2() {
    mul_ln703_339_fu_68364_p2 = (!mul_ln703_339_fu_68364_p0.read().is_01() || !mul_ln703_339_fu_68364_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_339_fu_68364_p0.read()) * sc_biguint<6>(mul_ln703_339_fu_68364_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_341_fu_68384_p0() {
    mul_ln703_341_fu_68384_p0 = shl_ln728_337_fu_68370_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_341_fu_68384_p1() {
    mul_ln703_341_fu_68384_p1 =  (sc_lv<6>) (mul_ln703_341_fu_68384_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_341_fu_68384_p10() {
    mul_ln703_341_fu_68384_p10 = esl_zext<12,6>(conv3_window_buffer_229_reg_183999.read());
}

void Block_codeRepl202676::thread_mul_ln703_341_fu_68384_p2() {
    mul_ln703_341_fu_68384_p2 = (!mul_ln703_341_fu_68384_p0.read().is_01() || !mul_ln703_341_fu_68384_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_341_fu_68384_p0.read()) * sc_biguint<6>(mul_ln703_341_fu_68384_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_343_fu_68404_p0() {
    mul_ln703_343_fu_68404_p0 = shl_ln728_339_fu_68390_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_343_fu_68404_p1() {
    mul_ln703_343_fu_68404_p1 =  (sc_lv<6>) (mul_ln703_343_fu_68404_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_343_fu_68404_p10() {
    mul_ln703_343_fu_68404_p10 = esl_zext<12,6>(conv3_window_buffer_383_reg_182501.read());
}

void Block_codeRepl202676::thread_mul_ln703_343_fu_68404_p2() {
    mul_ln703_343_fu_68404_p2 = (!mul_ln703_343_fu_68404_p0.read().is_01() || !mul_ln703_343_fu_68404_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_343_fu_68404_p0.read()) * sc_biguint<6>(mul_ln703_343_fu_68404_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_346_fu_68438_p0() {
    mul_ln703_346_fu_68438_p0 = shl_ln728_342_fu_68424_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_346_fu_68438_p1() {
    mul_ln703_346_fu_68438_p1 =  (sc_lv<6>) (mul_ln703_346_fu_68438_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_346_fu_68438_p10() {
    mul_ln703_346_fu_68438_p10 = esl_zext<12,6>(conv3_window_buffer_386_reg_182516.read());
}

void Block_codeRepl202676::thread_mul_ln703_346_fu_68438_p2() {
    mul_ln703_346_fu_68438_p2 = (!mul_ln703_346_fu_68438_p0.read().is_01() || !mul_ln703_346_fu_68438_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_346_fu_68438_p0.read()) * sc_biguint<6>(mul_ln703_346_fu_68438_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_348_fu_68462_p0() {
    mul_ln703_348_fu_68462_p0 = shl_ln728_344_fu_68448_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_348_fu_68462_p1() {
    mul_ln703_348_fu_68462_p1 =  (sc_lv<6>) (mul_ln703_348_fu_68462_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_348_fu_68462_p10() {
    mul_ln703_348_fu_68462_p10 = esl_zext<12,6>(conv3_window_buffer_390_reg_182536.read());
}

void Block_codeRepl202676::thread_mul_ln703_348_fu_68462_p2() {
    mul_ln703_348_fu_68462_p2 = (!mul_ln703_348_fu_68462_p0.read().is_01() || !mul_ln703_348_fu_68462_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_348_fu_68462_p0.read()) * sc_biguint<6>(mul_ln703_348_fu_68462_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_350_fu_68620_p0() {
    mul_ln703_350_fu_68620_p0 = shl_ln728_346_fu_68606_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_350_fu_68620_p1() {
    mul_ln703_350_fu_68620_p1 =  (sc_lv<6>) (mul_ln703_350_fu_68620_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_350_fu_68620_p10() {
    mul_ln703_350_fu_68620_p10 = esl_zext<12,6>(conv3_window_buffer_231_reg_184009.read());
}

void Block_codeRepl202676::thread_mul_ln703_350_fu_68620_p2() {
    mul_ln703_350_fu_68620_p2 = (!mul_ln703_350_fu_68620_p0.read().is_01() || !mul_ln703_350_fu_68620_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_350_fu_68620_p0.read()) * sc_biguint<6>(mul_ln703_350_fu_68620_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_352_fu_68640_p0() {
    mul_ln703_352_fu_68640_p0 = shl_ln728_348_fu_68626_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_352_fu_68640_p1() {
    mul_ln703_352_fu_68640_p1 =  (sc_lv<6>) (mul_ln703_352_fu_68640_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_352_fu_68640_p10() {
    mul_ln703_352_fu_68640_p10 = esl_zext<12,6>(conv3_window_buffer_392_reg_182546.read());
}

void Block_codeRepl202676::thread_mul_ln703_352_fu_68640_p2() {
    mul_ln703_352_fu_68640_p2 = (!mul_ln703_352_fu_68640_p0.read().is_01() || !mul_ln703_352_fu_68640_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_352_fu_68640_p0.read()) * sc_biguint<6>(mul_ln703_352_fu_68640_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_355_fu_68674_p0() {
    mul_ln703_355_fu_68674_p0 = shl_ln728_351_fu_68660_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_355_fu_68674_p1() {
    mul_ln703_355_fu_68674_p1 =  (sc_lv<6>) (mul_ln703_355_fu_68674_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_355_fu_68674_p10() {
    mul_ln703_355_fu_68674_p10 = esl_zext<12,6>(conv3_window_buffer_395_reg_182561.read());
}

void Block_codeRepl202676::thread_mul_ln703_355_fu_68674_p2() {
    mul_ln703_355_fu_68674_p2 = (!mul_ln703_355_fu_68674_p0.read().is_01() || !mul_ln703_355_fu_68674_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_355_fu_68674_p0.read()) * sc_biguint<6>(mul_ln703_355_fu_68674_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_357_fu_68698_p0() {
    mul_ln703_357_fu_68698_p0 = shl_ln728_353_fu_68684_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_357_fu_68698_p1() {
    mul_ln703_357_fu_68698_p1 =  (sc_lv<6>) (mul_ln703_357_fu_68698_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_357_fu_68698_p10() {
    mul_ln703_357_fu_68698_p10 = esl_zext<12,6>(conv3_window_buffer_399_reg_182581.read());
}

void Block_codeRepl202676::thread_mul_ln703_357_fu_68698_p2() {
    mul_ln703_357_fu_68698_p2 = (!mul_ln703_357_fu_68698_p0.read().is_01() || !mul_ln703_357_fu_68698_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_357_fu_68698_p0.read()) * sc_biguint<6>(mul_ln703_357_fu_68698_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_359_fu_68718_p0() {
    mul_ln703_359_fu_68718_p0 = shl_ln728_355_fu_68704_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_359_fu_68718_p1() {
    mul_ln703_359_fu_68718_p1 =  (sc_lv<6>) (mul_ln703_359_fu_68718_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_359_fu_68718_p10() {
    mul_ln703_359_fu_68718_p10 = esl_zext<12,6>(conv3_window_buffer_233_reg_184019.read());
}

void Block_codeRepl202676::thread_mul_ln703_359_fu_68718_p2() {
    mul_ln703_359_fu_68718_p2 = (!mul_ln703_359_fu_68718_p0.read().is_01() || !mul_ln703_359_fu_68718_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_359_fu_68718_p0.read()) * sc_biguint<6>(mul_ln703_359_fu_68718_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_361_fu_68897_p0() {
    mul_ln703_361_fu_68897_p0 = shl_ln728_357_fu_68883_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_361_fu_68897_p1() {
    mul_ln703_361_fu_68897_p1 =  (sc_lv<6>) (mul_ln703_361_fu_68897_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_361_fu_68897_p10() {
    mul_ln703_361_fu_68897_p10 = esl_zext<12,6>(conv3_window_buffer_401_reg_182591.read());
}

void Block_codeRepl202676::thread_mul_ln703_361_fu_68897_p2() {
    mul_ln703_361_fu_68897_p2 = (!mul_ln703_361_fu_68897_p0.read().is_01() || !mul_ln703_361_fu_68897_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_361_fu_68897_p0.read()) * sc_biguint<6>(mul_ln703_361_fu_68897_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_363_fu_66332_p0() {
    mul_ln703_363_fu_66332_p0 = shl_ln728_359_fu_66317_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_363_fu_66332_p1() {
    mul_ln703_363_fu_66332_p1 =  (sc_lv<6>) (mul_ln703_363_fu_66332_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_363_fu_66332_p10() {
    mul_ln703_363_fu_66332_p10 = esl_zext<12,6>(conv3_window_buffer_405_reg_182611.read());
}

void Block_codeRepl202676::thread_mul_ln703_363_fu_66332_p2() {
    mul_ln703_363_fu_66332_p2 = (!mul_ln703_363_fu_66332_p0.read().is_01() || !mul_ln703_363_fu_66332_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_363_fu_66332_p0.read()) * sc_biguint<6>(mul_ln703_363_fu_66332_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_365_fu_70298_p0() {
    mul_ln703_365_fu_70298_p0 = shl_ln728_361_fu_70284_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_365_fu_70298_p1() {
    mul_ln703_365_fu_70298_p1 =  (sc_lv<6>) (mul_ln703_365_fu_70298_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_365_fu_70298_p10() {
    mul_ln703_365_fu_70298_p10 = esl_zext<12,6>(conv3_window_buffer_234_reg_184024.read());
}

void Block_codeRepl202676::thread_mul_ln703_365_fu_70298_p2() {
    mul_ln703_365_fu_70298_p2 = (!mul_ln703_365_fu_70298_p0.read().is_01() || !mul_ln703_365_fu_70298_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_365_fu_70298_p0.read()) * sc_biguint<6>(mul_ln703_365_fu_70298_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_367_fu_70336_p0() {
    mul_ln703_367_fu_70336_p0 = shl_ln728_363_fu_70322_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_367_fu_70336_p1() {
    mul_ln703_367_fu_70336_p1 =  (sc_lv<6>) (mul_ln703_367_fu_70336_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_367_fu_70336_p10() {
    mul_ln703_367_fu_70336_p10 = esl_zext<12,6>(conv3_window_buffer_400_reg_182586.read());
}

void Block_codeRepl202676::thread_mul_ln703_367_fu_70336_p2() {
    mul_ln703_367_fu_70336_p2 = (!mul_ln703_367_fu_70336_p0.read().is_01() || !mul_ln703_367_fu_70336_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_367_fu_70336_p0.read()) * sc_biguint<6>(mul_ln703_367_fu_70336_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_369_fu_70360_p0() {
    mul_ln703_369_fu_70360_p0 = shl_ln728_365_fu_70346_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_369_fu_70360_p1() {
    mul_ln703_369_fu_70360_p1 =  (sc_lv<6>) (mul_ln703_369_fu_70360_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_369_fu_70360_p10() {
    mul_ln703_369_fu_70360_p10 = esl_zext<12,6>(conv3_window_buffer_397_reg_182571.read());
}

void Block_codeRepl202676::thread_mul_ln703_369_fu_70360_p2() {
    mul_ln703_369_fu_70360_p2 = (!mul_ln703_369_fu_70360_p0.read().is_01() || !mul_ln703_369_fu_70360_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_369_fu_70360_p0.read()) * sc_biguint<6>(mul_ln703_369_fu_70360_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_36_fu_60305_p0() {
    mul_ln703_36_fu_60305_p0 = shl_ln728_33_fu_60290_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_36_fu_60305_p1() {
    mul_ln703_36_fu_60305_p1 =  (sc_lv<6>) (mul_ln703_36_fu_60305_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_36_fu_60305_p10() {
    mul_ln703_36_fu_60305_p10 = esl_zext<12,6>(conv2_window_buffer_132_reg_177810.read());
}

void Block_codeRepl202676::thread_mul_ln703_36_fu_60305_p2() {
    mul_ln703_36_fu_60305_p2 = (!mul_ln703_36_fu_60305_p0.read().is_01() || !mul_ln703_36_fu_60305_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_36_fu_60305_p0.read()) * sc_biguint<6>(mul_ln703_36_fu_60305_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_372_fu_66353_p0() {
    mul_ln703_372_fu_66353_p0 = shl_ln728_368_fu_66338_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_372_fu_66353_p1() {
    mul_ln703_372_fu_66353_p1 =  (sc_lv<6>) (mul_ln703_372_fu_66353_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_372_fu_66353_p10() {
    mul_ln703_372_fu_66353_p10 = esl_zext<12,6>(conv3_window_buffer_391_reg_182541.read());
}

void Block_codeRepl202676::thread_mul_ln703_372_fu_66353_p2() {
    mul_ln703_372_fu_66353_p2 = (!mul_ln703_372_fu_66353_p0.read().is_01() || !mul_ln703_372_fu_66353_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_372_fu_66353_p0.read()) * sc_biguint<6>(mul_ln703_372_fu_66353_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_374_fu_68917_p0() {
    mul_ln703_374_fu_68917_p0 = shl_ln728_370_fu_68903_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_374_fu_68917_p1() {
    mul_ln703_374_fu_68917_p1 =  (sc_lv<6>) (mul_ln703_374_fu_68917_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_374_fu_68917_p10() {
    mul_ln703_374_fu_68917_p10 = esl_zext<12,6>(conv3_window_buffer_236_reg_184034.read());
}

void Block_codeRepl202676::thread_mul_ln703_374_fu_68917_p2() {
    mul_ln703_374_fu_68917_p2 = (!mul_ln703_374_fu_68917_p0.read().is_01() || !mul_ln703_374_fu_68917_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_374_fu_68917_p0.read()) * sc_biguint<6>(mul_ln703_374_fu_68917_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_376_fu_68937_p0() {
    mul_ln703_376_fu_68937_p0 = shl_ln728_372_fu_68923_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_376_fu_68937_p1() {
    mul_ln703_376_fu_68937_p1 =  (sc_lv<6>) (mul_ln703_376_fu_68937_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_376_fu_68937_p10() {
    mul_ln703_376_fu_68937_p10 = esl_zext<12,6>(conv3_window_buffer_382_reg_182496.read());
}

void Block_codeRepl202676::thread_mul_ln703_376_fu_68937_p2() {
    mul_ln703_376_fu_68937_p2 = (!mul_ln703_376_fu_68937_p0.read().is_01() || !mul_ln703_376_fu_68937_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_376_fu_68937_p0.read()) * sc_biguint<6>(mul_ln703_376_fu_68937_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_378_fu_68958_p0() {
    mul_ln703_378_fu_68958_p0 = shl_ln728_374_fu_68943_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_378_fu_68958_p1() {
    mul_ln703_378_fu_68958_p1 =  (sc_lv<6>) (mul_ln703_378_fu_68958_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_378_fu_68958_p10() {
    mul_ln703_378_fu_68958_p10 = esl_zext<12,6>(conv3_window_buffer_379_reg_182481.read());
}

void Block_codeRepl202676::thread_mul_ln703_378_fu_68958_p2() {
    mul_ln703_378_fu_68958_p2 = (!mul_ln703_378_fu_68958_p0.read().is_01() || !mul_ln703_378_fu_68958_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_378_fu_68958_p0.read()) * sc_biguint<6>(mul_ln703_378_fu_68958_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_381_fu_66545_p0() {
    mul_ln703_381_fu_66545_p0 = shl_ln728_377_fu_66531_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_381_fu_66545_p1() {
    mul_ln703_381_fu_66545_p1 =  (sc_lv<6>) (mul_ln703_381_fu_66545_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_381_fu_66545_p10() {
    mul_ln703_381_fu_66545_p10 = esl_zext<12,6>(conv3_window_buffer_373_reg_182450.read());
}

void Block_codeRepl202676::thread_mul_ln703_381_fu_66545_p2() {
    mul_ln703_381_fu_66545_p2 = (!mul_ln703_381_fu_66545_p0.read().is_01() || !mul_ln703_381_fu_66545_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_381_fu_66545_p0.read()) * sc_biguint<6>(mul_ln703_381_fu_66545_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_383_fu_70380_p0() {
    mul_ln703_383_fu_70380_p0 = shl_ln728_379_fu_70366_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_383_fu_70380_p1() {
    mul_ln703_383_fu_70380_p1 =  (sc_lv<6>) (mul_ln703_383_fu_70380_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_383_fu_70380_p10() {
    mul_ln703_383_fu_70380_p10 = esl_zext<12,6>(conv3_window_buffer_238_reg_184044.read());
}

void Block_codeRepl202676::thread_mul_ln703_383_fu_70380_p2() {
    mul_ln703_383_fu_70380_p2 = (!mul_ln703_383_fu_70380_p0.read().is_01() || !mul_ln703_383_fu_70380_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_383_fu_70380_p0.read()) * sc_biguint<6>(mul_ln703_383_fu_70380_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_385_fu_70400_p0() {
    mul_ln703_385_fu_70400_p0 = shl_ln728_381_fu_70386_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_385_fu_70400_p1() {
    mul_ln703_385_fu_70400_p1 =  (sc_lv<6>) (mul_ln703_385_fu_70400_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_385_fu_70400_p10() {
    mul_ln703_385_fu_70400_p10 = esl_zext<12,6>(conv3_window_buffer_364_reg_182405.read());
}

void Block_codeRepl202676::thread_mul_ln703_385_fu_70400_p2() {
    mul_ln703_385_fu_70400_p2 = (!mul_ln703_385_fu_70400_p0.read().is_01() || !mul_ln703_385_fu_70400_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_385_fu_70400_p0.read()) * sc_biguint<6>(mul_ln703_385_fu_70400_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_387_fu_70637_p0() {
    mul_ln703_387_fu_70637_p0 = shl_ln728_383_fu_70623_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_387_fu_70637_p1() {
    mul_ln703_387_fu_70637_p1 =  (sc_lv<6>) (mul_ln703_387_fu_70637_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_387_fu_70637_p10() {
    mul_ln703_387_fu_70637_p10 = esl_zext<12,6>(conv3_window_buffer_361_reg_182390.read());
}

void Block_codeRepl202676::thread_mul_ln703_387_fu_70637_p2() {
    mul_ln703_387_fu_70637_p2 = (!mul_ln703_387_fu_70637_p0.read().is_01() || !mul_ln703_387_fu_70637_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_387_fu_70637_p0.read()) * sc_biguint<6>(mul_ln703_387_fu_70637_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_390_fu_66565_p0() {
    mul_ln703_390_fu_66565_p0 = shl_ln728_386_fu_66551_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_390_fu_66565_p1() {
    mul_ln703_390_fu_66565_p1 =  (sc_lv<6>) (mul_ln703_390_fu_66565_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_390_fu_66565_p10() {
    mul_ln703_390_fu_66565_p10 = esl_zext<12,6>(conv3_window_buffer_355_reg_182360.read());
}

void Block_codeRepl202676::thread_mul_ln703_390_fu_66565_p2() {
    mul_ln703_390_fu_66565_p2 = (!mul_ln703_390_fu_66565_p0.read().is_01() || !mul_ln703_390_fu_66565_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_390_fu_66565_p0.read()) * sc_biguint<6>(mul_ln703_390_fu_66565_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_392_fu_68992_p0() {
    mul_ln703_392_fu_68992_p0 = shl_ln728_388_fu_68978_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_392_fu_68992_p1() {
    mul_ln703_392_fu_68992_p1 =  (sc_lv<6>) (mul_ln703_392_fu_68992_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_392_fu_68992_p10() {
    mul_ln703_392_fu_68992_p10 = esl_zext<12,6>(conv3_window_buffer_240_reg_184055.read());
}

void Block_codeRepl202676::thread_mul_ln703_392_fu_68992_p2() {
    mul_ln703_392_fu_68992_p2 = (!mul_ln703_392_fu_68992_p0.read().is_01() || !mul_ln703_392_fu_68992_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_392_fu_68992_p0.read()) * sc_biguint<6>(mul_ln703_392_fu_68992_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_394_fu_69061_p0() {
    mul_ln703_394_fu_69061_p0 = shl_ln728_390_fu_69047_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_394_fu_69061_p1() {
    mul_ln703_394_fu_69061_p1 =  (sc_lv<6>) (mul_ln703_394_fu_69061_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_394_fu_69061_p10() {
    mul_ln703_394_fu_69061_p10 = esl_zext<12,6>(conv3_window_buffer_346_reg_182315.read());
}

void Block_codeRepl202676::thread_mul_ln703_394_fu_69061_p2() {
    mul_ln703_394_fu_69061_p2 = (!mul_ln703_394_fu_69061_p0.read().is_01() || !mul_ln703_394_fu_69061_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_394_fu_69061_p0.read()) * sc_biguint<6>(mul_ln703_394_fu_69061_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_396_fu_69099_p0() {
    mul_ln703_396_fu_69099_p0 = shl_ln728_392_fu_69085_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_396_fu_69099_p1() {
    mul_ln703_396_fu_69099_p1 =  (sc_lv<6>) (mul_ln703_396_fu_69099_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_396_fu_69099_p10() {
    mul_ln703_396_fu_69099_p10 = esl_zext<12,6>(conv3_window_buffer_343_reg_182300.read());
}

void Block_codeRepl202676::thread_mul_ln703_396_fu_69099_p2() {
    mul_ln703_396_fu_69099_p2 = (!mul_ln703_396_fu_69099_p0.read().is_01() || !mul_ln703_396_fu_69099_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_396_fu_69099_p0.read()) * sc_biguint<6>(mul_ln703_396_fu_69099_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_398_fu_70801_p0() {
    mul_ln703_398_fu_70801_p0 = shl_ln728_394_fu_70786_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_398_fu_70801_p1() {
    mul_ln703_398_fu_70801_p1 =  (sc_lv<6>) (mul_ln703_398_fu_70801_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_398_fu_70801_p10() {
    mul_ln703_398_fu_70801_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_398_fu_70801_p2() {
    mul_ln703_398_fu_70801_p2 = (!mul_ln703_398_fu_70801_p0.read().is_01() || !mul_ln703_398_fu_70801_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_398_fu_70801_p0.read()) * sc_biguint<6>(mul_ln703_398_fu_70801_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_39_fu_59926_p0() {
    mul_ln703_39_fu_59926_p0 = shl_ln728_36_fu_59911_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_39_fu_59926_p1() {
    mul_ln703_39_fu_59926_p1 =  (sc_lv<6>) (mul_ln703_39_fu_59926_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_39_fu_59926_p10() {
    mul_ln703_39_fu_59926_p10 = esl_zext<12,6>(conv2_window_buffer_134_reg_177820.read());
}

void Block_codeRepl202676::thread_mul_ln703_39_fu_59926_p2() {
    mul_ln703_39_fu_59926_p2 = (!mul_ln703_39_fu_59926_p0.read().is_01() || !mul_ln703_39_fu_59926_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_39_fu_59926_p0.read()) * sc_biguint<6>(mul_ln703_39_fu_59926_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_3_fu_57823_p0() {
    mul_ln703_3_fu_57823_p0 = shl_ln728_2_fu_57808_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_3_fu_57823_p1() {
    mul_ln703_3_fu_57823_p1 = conv1_window_buffer_18_reg_176839.read();
}

void Block_codeRepl202676::thread_mul_ln703_3_fu_57823_p2() {
    mul_ln703_3_fu_57823_p2 = (!mul_ln703_3_fu_57823_p0.read().is_01() || !mul_ln703_3_fu_57823_p1.read().is_01())? sc_lv<14>(): sc_bigint<6>(mul_ln703_3_fu_57823_p0.read()) * sc_bigint<8>(mul_ln703_3_fu_57823_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_400_fu_69137_p0() {
    mul_ln703_400_fu_69137_p0 = shl_ln728_396_fu_69123_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_400_fu_69137_p1() {
    mul_ln703_400_fu_69137_p1 =  (sc_lv<6>) (mul_ln703_400_fu_69137_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_400_fu_69137_p10() {
    mul_ln703_400_fu_69137_p10 = esl_zext<12,6>(conv3_window_buffer_406_reg_182616.read());
}

void Block_codeRepl202676::thread_mul_ln703_400_fu_69137_p2() {
    mul_ln703_400_fu_69137_p2 = (!mul_ln703_400_fu_69137_p0.read().is_01() || !mul_ln703_400_fu_69137_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_400_fu_69137_p0.read()) * sc_biguint<6>(mul_ln703_400_fu_69137_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_402_fu_69175_p0() {
    mul_ln703_402_fu_69175_p0 = shl_ln728_398_fu_69161_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_402_fu_69175_p1() {
    mul_ln703_402_fu_69175_p1 =  (sc_lv<6>) (mul_ln703_402_fu_69175_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_402_fu_69175_p10() {
    mul_ln703_402_fu_69175_p10 = esl_zext<12,6>(conv3_window_buffer_409_reg_182632.read());
}

void Block_codeRepl202676::thread_mul_ln703_402_fu_69175_p2() {
    mul_ln703_402_fu_69175_p2 = (!mul_ln703_402_fu_69175_p0.read().is_01() || !mul_ln703_402_fu_69175_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_402_fu_69175_p0.read()) * sc_biguint<6>(mul_ln703_402_fu_69175_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_404_fu_69213_p0() {
    mul_ln703_404_fu_69213_p0 = shl_ln728_400_fu_69199_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_404_fu_69213_p1() {
    mul_ln703_404_fu_69213_p1 =  (sc_lv<6>) (mul_ln703_404_fu_69213_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_404_fu_69213_p10() {
    mul_ln703_404_fu_69213_p10 = esl_zext<12,6>(conv3_window_buffer_243_reg_184070.read());
}

void Block_codeRepl202676::thread_mul_ln703_404_fu_69213_p2() {
    mul_ln703_404_fu_69213_p2 = (!mul_ln703_404_fu_69213_p0.read().is_01() || !mul_ln703_404_fu_69213_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_404_fu_69213_p0.read()) * sc_biguint<6>(mul_ln703_404_fu_69213_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_407_fu_70942_p0() {
    mul_ln703_407_fu_70942_p0 = shl_ln728_403_fu_70927_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_407_fu_70942_p1() {
    mul_ln703_407_fu_70942_p1 =  (sc_lv<6>) (mul_ln703_407_fu_70942_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_407_fu_70942_p10() {
    mul_ln703_407_fu_70942_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_407_fu_70942_p2() {
    mul_ln703_407_fu_70942_p2 = (!mul_ln703_407_fu_70942_p0.read().is_01() || !mul_ln703_407_fu_70942_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_407_fu_70942_p0.read()) * sc_biguint<6>(mul_ln703_407_fu_70942_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_409_fu_69345_p0() {
    mul_ln703_409_fu_69345_p0 = shl_ln728_405_fu_69331_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_409_fu_69345_p1() {
    mul_ln703_409_fu_69345_p1 =  (sc_lv<6>) (mul_ln703_409_fu_69345_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_409_fu_69345_p10() {
    mul_ln703_409_fu_69345_p10 = esl_zext<12,6>(conv3_window_buffer_412_reg_182647.read());
}

void Block_codeRepl202676::thread_mul_ln703_409_fu_69345_p2() {
    mul_ln703_409_fu_69345_p2 = (!mul_ln703_409_fu_69345_p0.read().is_01() || !mul_ln703_409_fu_69345_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_409_fu_69345_p0.read()) * sc_biguint<6>(mul_ln703_409_fu_69345_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_411_fu_69365_p0() {
    mul_ln703_411_fu_69365_p0 = shl_ln728_407_fu_69351_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_411_fu_69365_p1() {
    mul_ln703_411_fu_69365_p1 =  (sc_lv<6>) (mul_ln703_411_fu_69365_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_411_fu_69365_p10() {
    mul_ln703_411_fu_69365_p10 = esl_zext<12,6>(conv3_window_buffer_415_reg_182662.read());
}

void Block_codeRepl202676::thread_mul_ln703_411_fu_69365_p2() {
    mul_ln703_411_fu_69365_p2 = (!mul_ln703_411_fu_69365_p0.read().is_01() || !mul_ln703_411_fu_69365_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_411_fu_69365_p0.read()) * sc_biguint<6>(mul_ln703_411_fu_69365_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_413_fu_69385_p0() {
    mul_ln703_413_fu_69385_p0 = shl_ln728_409_fu_69371_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_413_fu_69385_p1() {
    mul_ln703_413_fu_69385_p1 =  (sc_lv<6>) (mul_ln703_413_fu_69385_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_413_fu_69385_p10() {
    mul_ln703_413_fu_69385_p10 = esl_zext<12,6>(conv3_window_buffer_245_reg_184080.read());
}

void Block_codeRepl202676::thread_mul_ln703_413_fu_69385_p2() {
    mul_ln703_413_fu_69385_p2 = (!mul_ln703_413_fu_69385_p0.read().is_01() || !mul_ln703_413_fu_69385_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_413_fu_69385_p0.read()) * sc_biguint<6>(mul_ln703_413_fu_69385_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_416_fu_71104_p0() {
    mul_ln703_416_fu_71104_p0 = shl_ln728_412_fu_71089_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_416_fu_71104_p1() {
    mul_ln703_416_fu_71104_p1 =  (sc_lv<6>) (mul_ln703_416_fu_71104_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_416_fu_71104_p10() {
    mul_ln703_416_fu_71104_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_416_fu_71104_p2() {
    mul_ln703_416_fu_71104_p2 = (!mul_ln703_416_fu_71104_p0.read().is_01() || !mul_ln703_416_fu_71104_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_416_fu_71104_p0.read()) * sc_biguint<6>(mul_ln703_416_fu_71104_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_418_fu_69405_p0() {
    mul_ln703_418_fu_69405_p0 = shl_ln728_414_fu_69391_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_418_fu_69405_p1() {
    mul_ln703_418_fu_69405_p1 =  (sc_lv<6>) (mul_ln703_418_fu_69405_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_418_fu_69405_p10() {
    mul_ln703_418_fu_69405_p10 = esl_zext<12,6>(conv3_window_buffer_418_reg_182677.read());
}

void Block_codeRepl202676::thread_mul_ln703_418_fu_69405_p2() {
    mul_ln703_418_fu_69405_p2 = (!mul_ln703_418_fu_69405_p0.read().is_01() || !mul_ln703_418_fu_69405_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_418_fu_69405_p0.read()) * sc_biguint<6>(mul_ln703_418_fu_69405_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_41_fu_60107_p0() {
    mul_ln703_41_fu_60107_p0 = shl_ln728_38_fu_60092_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_41_fu_60107_p1() {
    mul_ln703_41_fu_60107_p1 =  (sc_lv<6>) (mul_ln703_41_fu_60107_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_41_fu_60107_p10() {
    mul_ln703_41_fu_60107_p10 = esl_zext<12,6>(conv2_window_buffer_137_reg_177835.read());
}

void Block_codeRepl202676::thread_mul_ln703_41_fu_60107_p2() {
    mul_ln703_41_fu_60107_p2 = (!mul_ln703_41_fu_60107_p0.read().is_01() || !mul_ln703_41_fu_60107_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_41_fu_60107_p0.read()) * sc_biguint<6>(mul_ln703_41_fu_60107_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_420_fu_69425_p0() {
    mul_ln703_420_fu_69425_p0 = shl_ln728_416_fu_69411_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_420_fu_69425_p1() {
    mul_ln703_420_fu_69425_p1 =  (sc_lv<6>) (mul_ln703_420_fu_69425_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_420_fu_69425_p10() {
    mul_ln703_420_fu_69425_p10 = esl_zext<12,6>(conv3_window_buffer_421_reg_182692.read());
}

void Block_codeRepl202676::thread_mul_ln703_420_fu_69425_p2() {
    mul_ln703_420_fu_69425_p2 = (!mul_ln703_420_fu_69425_p0.read().is_01() || !mul_ln703_420_fu_69425_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_420_fu_69425_p0.read()) * sc_biguint<6>(mul_ln703_420_fu_69425_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_422_fu_69569_p0() {
    mul_ln703_422_fu_69569_p0 = shl_ln728_418_fu_69555_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_422_fu_69569_p1() {
    mul_ln703_422_fu_69569_p1 =  (sc_lv<6>) (mul_ln703_422_fu_69569_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_422_fu_69569_p10() {
    mul_ln703_422_fu_69569_p10 = esl_zext<12,6>(conv3_window_buffer_247_reg_184090.read());
}

void Block_codeRepl202676::thread_mul_ln703_422_fu_69569_p2() {
    mul_ln703_422_fu_69569_p2 = (!mul_ln703_422_fu_69569_p0.read().is_01() || !mul_ln703_422_fu_69569_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_422_fu_69569_p0.read()) * sc_biguint<6>(mul_ln703_422_fu_69569_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_425_fu_71220_p0() {
    mul_ln703_425_fu_71220_p0 = shl_ln728_421_fu_71205_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_425_fu_71220_p1() {
    mul_ln703_425_fu_71220_p1 =  (sc_lv<6>) (mul_ln703_425_fu_71220_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_425_fu_71220_p10() {
    mul_ln703_425_fu_71220_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_425_fu_71220_p2() {
    mul_ln703_425_fu_71220_p2 = (!mul_ln703_425_fu_71220_p0.read().is_01() || !mul_ln703_425_fu_71220_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_425_fu_71220_p0.read()) * sc_biguint<6>(mul_ln703_425_fu_71220_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_427_fu_69589_p0() {
    mul_ln703_427_fu_69589_p0 = shl_ln728_423_fu_69575_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_427_fu_69589_p1() {
    mul_ln703_427_fu_69589_p1 =  (sc_lv<6>) (mul_ln703_427_fu_69589_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_427_fu_69589_p10() {
    mul_ln703_427_fu_69589_p10 = esl_zext<12,6>(conv3_window_buffer_424_reg_182707.read());
}

void Block_codeRepl202676::thread_mul_ln703_427_fu_69589_p2() {
    mul_ln703_427_fu_69589_p2 = (!mul_ln703_427_fu_69589_p0.read().is_01() || !mul_ln703_427_fu_69589_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_427_fu_69589_p0.read()) * sc_biguint<6>(mul_ln703_427_fu_69589_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_429_fu_69609_p0() {
    mul_ln703_429_fu_69609_p0 = shl_ln728_425_fu_69595_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_429_fu_69609_p1() {
    mul_ln703_429_fu_69609_p1 =  (sc_lv<6>) (mul_ln703_429_fu_69609_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_429_fu_69609_p10() {
    mul_ln703_429_fu_69609_p10 = esl_zext<12,6>(conv3_window_buffer_427_reg_182722.read());
}

void Block_codeRepl202676::thread_mul_ln703_429_fu_69609_p2() {
    mul_ln703_429_fu_69609_p2 = (!mul_ln703_429_fu_69609_p0.read().is_01() || !mul_ln703_429_fu_69609_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_429_fu_69609_p0.read()) * sc_biguint<6>(mul_ln703_429_fu_69609_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_431_fu_69629_p0() {
    mul_ln703_431_fu_69629_p0 = shl_ln728_427_fu_69615_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_431_fu_69629_p1() {
    mul_ln703_431_fu_69629_p1 =  (sc_lv<6>) (mul_ln703_431_fu_69629_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_431_fu_69629_p10() {
    mul_ln703_431_fu_69629_p10 = esl_zext<12,6>(conv3_window_buffer_249_reg_184100.read());
}

void Block_codeRepl202676::thread_mul_ln703_431_fu_69629_p2() {
    mul_ln703_431_fu_69629_p2 = (!mul_ln703_431_fu_69629_p0.read().is_01() || !mul_ln703_431_fu_69629_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_431_fu_69629_p0.read()) * sc_biguint<6>(mul_ln703_431_fu_69629_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_434_fu_71364_p0() {
    mul_ln703_434_fu_71364_p0 = shl_ln728_430_fu_71349_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_434_fu_71364_p1() {
    mul_ln703_434_fu_71364_p1 =  (sc_lv<6>) (mul_ln703_434_fu_71364_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_434_fu_71364_p10() {
    mul_ln703_434_fu_71364_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_434_fu_71364_p2() {
    mul_ln703_434_fu_71364_p2 = (!mul_ln703_434_fu_71364_p0.read().is_01() || !mul_ln703_434_fu_71364_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_434_fu_71364_p0.read()) * sc_biguint<6>(mul_ln703_434_fu_71364_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_436_fu_70657_p0() {
    mul_ln703_436_fu_70657_p0 = shl_ln728_432_fu_70643_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_436_fu_70657_p1() {
    mul_ln703_436_fu_70657_p1 =  (sc_lv<6>) (mul_ln703_436_fu_70657_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_436_fu_70657_p10() {
    mul_ln703_436_fu_70657_p10 = esl_zext<12,6>(conv3_window_buffer_430_reg_182737.read());
}

void Block_codeRepl202676::thread_mul_ln703_436_fu_70657_p2() {
    mul_ln703_436_fu_70657_p2 = (!mul_ln703_436_fu_70657_p0.read().is_01() || !mul_ln703_436_fu_70657_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_436_fu_70657_p0.read()) * sc_biguint<6>(mul_ln703_436_fu_70657_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_438_fu_70677_p0() {
    mul_ln703_438_fu_70677_p0 = shl_ln728_434_fu_70663_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_438_fu_70677_p1() {
    mul_ln703_438_fu_70677_p1 =  (sc_lv<6>) (mul_ln703_438_fu_70677_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_438_fu_70677_p10() {
    mul_ln703_438_fu_70677_p10 = esl_zext<12,6>(conv3_window_buffer_433_reg_182752.read());
}

void Block_codeRepl202676::thread_mul_ln703_438_fu_70677_p2() {
    mul_ln703_438_fu_70677_p2 = (!mul_ln703_438_fu_70677_p0.read().is_01() || !mul_ln703_438_fu_70677_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_438_fu_70677_p0.read()) * sc_biguint<6>(mul_ln703_438_fu_70677_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_43_fu_60344_p0() {
    mul_ln703_43_fu_60344_p0 = shl_ln728_40_fu_60329_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_43_fu_60344_p1() {
    mul_ln703_43_fu_60344_p1 =  (sc_lv<6>) (mul_ln703_43_fu_60344_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_43_fu_60344_p10() {
    mul_ln703_43_fu_60344_p10 = esl_zext<12,6>(conv2_window_buffer_99_reg_178784.read());
}

void Block_codeRepl202676::thread_mul_ln703_43_fu_60344_p2() {
    mul_ln703_43_fu_60344_p2 = (!mul_ln703_43_fu_60344_p0.read().is_01() || !mul_ln703_43_fu_60344_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_43_fu_60344_p0.read()) * sc_biguint<6>(mul_ln703_43_fu_60344_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_440_fu_70697_p0() {
    mul_ln703_440_fu_70697_p0 = shl_ln728_436_fu_70683_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_440_fu_70697_p1() {
    mul_ln703_440_fu_70697_p1 =  (sc_lv<6>) (mul_ln703_440_fu_70697_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_440_fu_70697_p10() {
    mul_ln703_440_fu_70697_p10 = esl_zext<12,6>(conv3_window_buffer_251_reg_184111.read());
}

void Block_codeRepl202676::thread_mul_ln703_440_fu_70697_p2() {
    mul_ln703_440_fu_70697_p2 = (!mul_ln703_440_fu_70697_p0.read().is_01() || !mul_ln703_440_fu_70697_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_440_fu_70697_p0.read()) * sc_biguint<6>(mul_ln703_440_fu_70697_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_443_fu_71554_p0() {
    mul_ln703_443_fu_71554_p0 = shl_ln728_439_fu_71539_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_443_fu_71554_p1() {
    mul_ln703_443_fu_71554_p1 =  (sc_lv<6>) (mul_ln703_443_fu_71554_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_443_fu_71554_p10() {
    mul_ln703_443_fu_71554_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_443_fu_71554_p2() {
    mul_ln703_443_fu_71554_p2 = (!mul_ln703_443_fu_71554_p0.read().is_01() || !mul_ln703_443_fu_71554_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_443_fu_71554_p0.read()) * sc_biguint<6>(mul_ln703_443_fu_71554_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_445_fu_69649_p0() {
    mul_ln703_445_fu_69649_p0 = shl_ln728_441_fu_69635_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_445_fu_69649_p1() {
    mul_ln703_445_fu_69649_p1 =  (sc_lv<6>) (mul_ln703_445_fu_69649_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_445_fu_69649_p10() {
    mul_ln703_445_fu_69649_p10 = esl_zext<12,6>(conv3_window_buffer_436_reg_182768.read());
}

void Block_codeRepl202676::thread_mul_ln703_445_fu_69649_p2() {
    mul_ln703_445_fu_69649_p2 = (!mul_ln703_445_fu_69649_p0.read().is_01() || !mul_ln703_445_fu_69649_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_445_fu_69649_p0.read()) * sc_biguint<6>(mul_ln703_445_fu_69649_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_447_fu_69852_p0() {
    mul_ln703_447_fu_69852_p0 = shl_ln728_443_fu_69838_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_447_fu_69852_p1() {
    mul_ln703_447_fu_69852_p1 =  (sc_lv<6>) (mul_ln703_447_fu_69852_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_447_fu_69852_p10() {
    mul_ln703_447_fu_69852_p10 = esl_zext<12,6>(conv3_window_buffer_439_reg_182783.read());
}

void Block_codeRepl202676::thread_mul_ln703_447_fu_69852_p2() {
    mul_ln703_447_fu_69852_p2 = (!mul_ln703_447_fu_69852_p0.read().is_01() || !mul_ln703_447_fu_69852_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_447_fu_69852_p0.read()) * sc_biguint<6>(mul_ln703_447_fu_69852_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_449_fu_69872_p0() {
    mul_ln703_449_fu_69872_p0 = shl_ln728_445_fu_69858_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_449_fu_69872_p1() {
    mul_ln703_449_fu_69872_p1 =  (sc_lv<6>) (mul_ln703_449_fu_69872_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_449_fu_69872_p10() {
    mul_ln703_449_fu_69872_p10 = esl_zext<12,6>(conv3_window_buffer_253_reg_184121.read());
}

void Block_codeRepl202676::thread_mul_ln703_449_fu_69872_p2() {
    mul_ln703_449_fu_69872_p2 = (!mul_ln703_449_fu_69872_p0.read().is_01() || !mul_ln703_449_fu_69872_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_449_fu_69872_p0.read()) * sc_biguint<6>(mul_ln703_449_fu_69872_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_452_fu_71755_p0() {
    mul_ln703_452_fu_71755_p0 = shl_ln728_448_fu_71740_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_452_fu_71755_p1() {
    mul_ln703_452_fu_71755_p1 =  (sc_lv<6>) (mul_ln703_452_fu_71755_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_452_fu_71755_p10() {
    mul_ln703_452_fu_71755_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_452_fu_71755_p2() {
    mul_ln703_452_fu_71755_p2 = (!mul_ln703_452_fu_71755_p0.read().is_01() || !mul_ln703_452_fu_71755_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_452_fu_71755_p0.read()) * sc_biguint<6>(mul_ln703_452_fu_71755_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_454_fu_70717_p0() {
    mul_ln703_454_fu_70717_p0 = shl_ln728_450_fu_70703_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_454_fu_70717_p1() {
    mul_ln703_454_fu_70717_p1 =  (sc_lv<6>) (mul_ln703_454_fu_70717_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_454_fu_70717_p10() {
    mul_ln703_454_fu_70717_p10 = esl_zext<12,6>(conv3_window_buffer_442_reg_182799.read());
}

void Block_codeRepl202676::thread_mul_ln703_454_fu_70717_p2() {
    mul_ln703_454_fu_70717_p2 = (!mul_ln703_454_fu_70717_p0.read().is_01() || !mul_ln703_454_fu_70717_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_454_fu_70717_p0.read()) * sc_biguint<6>(mul_ln703_454_fu_70717_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_456_fu_70855_p0() {
    mul_ln703_456_fu_70855_p0 = shl_ln728_452_fu_70841_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_456_fu_70855_p1() {
    mul_ln703_456_fu_70855_p1 =  (sc_lv<6>) (mul_ln703_456_fu_70855_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_456_fu_70855_p10() {
    mul_ln703_456_fu_70855_p10 = esl_zext<12,6>(conv3_window_buffer_445_reg_182816.read());
}

void Block_codeRepl202676::thread_mul_ln703_456_fu_70855_p2() {
    mul_ln703_456_fu_70855_p2 = (!mul_ln703_456_fu_70855_p0.read().is_01() || !mul_ln703_456_fu_70855_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_456_fu_70855_p0.read()) * sc_biguint<6>(mul_ln703_456_fu_70855_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_458_fu_70875_p0() {
    mul_ln703_458_fu_70875_p0 = shl_ln728_454_fu_70861_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_458_fu_70875_p1() {
    mul_ln703_458_fu_70875_p1 =  (sc_lv<6>) (mul_ln703_458_fu_70875_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_458_fu_70875_p10() {
    mul_ln703_458_fu_70875_p10 = esl_zext<12,6>(conv3_window_buffer_255_reg_184131.read());
}

void Block_codeRepl202676::thread_mul_ln703_458_fu_70875_p2() {
    mul_ln703_458_fu_70875_p2 = (!mul_ln703_458_fu_70875_p0.read().is_01() || !mul_ln703_458_fu_70875_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_458_fu_70875_p0.read()) * sc_biguint<6>(mul_ln703_458_fu_70875_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_45_fu_60560_p0() {
    mul_ln703_45_fu_60560_p0 = shl_ln728_42_fu_60545_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_45_fu_60560_p1() {
    mul_ln703_45_fu_60560_p1 =  (sc_lv<6>) (mul_ln703_45_fu_60560_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_45_fu_60560_p10() {
    mul_ln703_45_fu_60560_p10 = esl_zext<12,6>(conv2_window_buffer_138_reg_177840.read());
}

void Block_codeRepl202676::thread_mul_ln703_45_fu_60560_p2() {
    mul_ln703_45_fu_60560_p2 = (!mul_ln703_45_fu_60560_p0.read().is_01() || !mul_ln703_45_fu_60560_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_45_fu_60560_p0.read()) * sc_biguint<6>(mul_ln703_45_fu_60560_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_461_fu_72010_p0() {
    mul_ln703_461_fu_72010_p0 = shl_ln728_457_fu_71995_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_461_fu_72010_p1() {
    mul_ln703_461_fu_72010_p1 =  (sc_lv<6>) (mul_ln703_461_fu_72010_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_461_fu_72010_p10() {
    mul_ln703_461_fu_72010_p10 = esl_zext<12,6>(conv3_pad_pipe_3_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_461_fu_72010_p2() {
    mul_ln703_461_fu_72010_p2 = (!mul_ln703_461_fu_72010_p0.read().is_01() || !mul_ln703_461_fu_72010_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_461_fu_72010_p0.read()) * sc_biguint<6>(mul_ln703_461_fu_72010_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_464_fu_76197_p0() {
    mul_ln703_464_fu_76197_p0 = shl_ln728_459_fu_76182_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_464_fu_76197_p1() {
    mul_ln703_464_fu_76197_p1 =  (sc_lv<6>) (mul_ln703_464_fu_76197_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_464_fu_76197_p10() {
    mul_ln703_464_fu_76197_p10 = esl_zext<12,6>(conv4_window_buffer_534_reg_189995.read());
}

void Block_codeRepl202676::thread_mul_ln703_464_fu_76197_p2() {
    mul_ln703_464_fu_76197_p2 = (!mul_ln703_464_fu_76197_p0.read().is_01() || !mul_ln703_464_fu_76197_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_464_fu_76197_p0.read()) * sc_biguint<6>(mul_ln703_464_fu_76197_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_466_fu_76320_p0() {
    mul_ln703_466_fu_76320_p0 = shl_ln728_461_fu_76305_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_466_fu_76320_p1() {
    mul_ln703_466_fu_76320_p1 =  (sc_lv<6>) (mul_ln703_466_fu_76320_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_466_fu_76320_p10() {
    mul_ln703_466_fu_76320_p10 = esl_zext<12,6>(conv4_window_buffer_538_reg_190015.read());
}

void Block_codeRepl202676::thread_mul_ln703_466_fu_76320_p2() {
    mul_ln703_466_fu_76320_p2 = (!mul_ln703_466_fu_76320_p0.read().is_01() || !mul_ln703_466_fu_76320_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_466_fu_76320_p0.read()) * sc_biguint<6>(mul_ln703_466_fu_76320_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_470_fu_76498_p0() {
    mul_ln703_470_fu_76498_p0 = shl_ln728_465_fu_76483_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_470_fu_76498_p1() {
    mul_ln703_470_fu_76498_p1 =  (sc_lv<6>) (mul_ln703_470_fu_76498_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_470_fu_76498_p10() {
    mul_ln703_470_fu_76498_p10 = esl_zext<12,6>(conv4_window_buffer_536_reg_190005.read());
}

void Block_codeRepl202676::thread_mul_ln703_470_fu_76498_p2() {
    mul_ln703_470_fu_76498_p2 = (!mul_ln703_470_fu_76498_p0.read().is_01() || !mul_ln703_470_fu_76498_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_470_fu_76498_p0.read()) * sc_biguint<6>(mul_ln703_470_fu_76498_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_473_fu_76356_p0() {
    mul_ln703_473_fu_76356_p0 = shl_ln728_468_fu_76341_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_473_fu_76356_p1() {
    mul_ln703_473_fu_76356_p1 =  (sc_lv<6>) (mul_ln703_473_fu_76356_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_473_fu_76356_p10() {
    mul_ln703_473_fu_76356_p10 = esl_zext<12,6>(conv4_window_buffer_532_reg_189985.read());
}

void Block_codeRepl202676::thread_mul_ln703_473_fu_76356_p2() {
    mul_ln703_473_fu_76356_p2 = (!mul_ln703_473_fu_76356_p0.read().is_01() || !mul_ln703_473_fu_76356_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_473_fu_76356_p0.read()) * sc_biguint<6>(mul_ln703_473_fu_76356_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_475_fu_76381_p0() {
    mul_ln703_475_fu_76381_p0 = shl_ln728_470_fu_76366_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_475_fu_76381_p1() {
    mul_ln703_475_fu_76381_p1 =  (sc_lv<6>) (mul_ln703_475_fu_76381_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_475_fu_76381_p10() {
    mul_ln703_475_fu_76381_p10 = esl_zext<12,6>(conv4_window_buffer_531_reg_189980.read());
}

void Block_codeRepl202676::thread_mul_ln703_475_fu_76381_p2() {
    mul_ln703_475_fu_76381_p2 = (!mul_ln703_475_fu_76381_p0.read().is_01() || !mul_ln703_475_fu_76381_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_475_fu_76381_p0.read()) * sc_biguint<6>(mul_ln703_475_fu_76381_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_477_fu_76536_p0() {
    mul_ln703_477_fu_76536_p0 = shl_ln728_472_fu_76521_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_477_fu_76536_p1() {
    mul_ln703_477_fu_76536_p1 =  (sc_lv<6>) (mul_ln703_477_fu_76536_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_477_fu_76536_p10() {
    mul_ln703_477_fu_76536_p10 = esl_zext<12,6>(conv4_window_buffer_387_reg_193840.read());
}

void Block_codeRepl202676::thread_mul_ln703_477_fu_76536_p2() {
    mul_ln703_477_fu_76536_p2 = (!mul_ln703_477_fu_76536_p0.read().is_01() || !mul_ln703_477_fu_76536_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_477_fu_76536_p0.read()) * sc_biguint<6>(mul_ln703_477_fu_76536_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_479_fu_76716_p0() {
    mul_ln703_479_fu_76716_p0 = shl_ln728_474_fu_76701_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_479_fu_76716_p1() {
    mul_ln703_479_fu_76716_p1 =  (sc_lv<6>) (mul_ln703_479_fu_76716_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_479_fu_76716_p10() {
    mul_ln703_479_fu_76716_p10 = esl_zext<12,6>(conv4_window_buffer_528_reg_189965.read());
}

void Block_codeRepl202676::thread_mul_ln703_479_fu_76716_p2() {
    mul_ln703_479_fu_76716_p2 = (!mul_ln703_479_fu_76716_p0.read().is_01() || !mul_ln703_479_fu_76716_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_479_fu_76716_p0.read()) * sc_biguint<6>(mul_ln703_479_fu_76716_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_47_fu_59785_p0() {
    mul_ln703_47_fu_59785_p0 = shl_ln728_44_fu_59770_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_47_fu_59785_p1() {
    mul_ln703_47_fu_59785_p1 =  (sc_lv<6>) (mul_ln703_47_fu_59785_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_47_fu_59785_p10() {
    mul_ln703_47_fu_59785_p10 = esl_zext<12,6>(conv2_window_buffer_141_reg_177855.read());
}

void Block_codeRepl202676::thread_mul_ln703_47_fu_59785_p2() {
    mul_ln703_47_fu_59785_p2 = (!mul_ln703_47_fu_59785_p0.read().is_01() || !mul_ln703_47_fu_59785_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_47_fu_59785_p0.read()) * sc_biguint<6>(mul_ln703_47_fu_59785_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_481_fu_76077_p0() {
    mul_ln703_481_fu_76077_p0 = shl_ln728_476_fu_76062_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_481_fu_76077_p1() {
    mul_ln703_481_fu_76077_p1 =  (sc_lv<6>) (mul_ln703_481_fu_76077_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_481_fu_76077_p10() {
    mul_ln703_481_fu_76077_p10 = esl_zext<12,6>(conv4_window_buffer_527_reg_189960.read());
}

void Block_codeRepl202676::thread_mul_ln703_481_fu_76077_p2() {
    mul_ln703_481_fu_76077_p2 = (!mul_ln703_481_fu_76077_p0.read().is_01() || !mul_ln703_481_fu_76077_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_481_fu_76077_p0.read()) * sc_biguint<6>(mul_ln703_481_fu_76077_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_483_fu_76417_p0() {
    mul_ln703_483_fu_76417_p0 = shl_ln728_478_fu_76402_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_483_fu_76417_p1() {
    mul_ln703_483_fu_76417_p1 =  (sc_lv<6>) (mul_ln703_483_fu_76417_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_483_fu_76417_p10() {
    mul_ln703_483_fu_76417_p10 = esl_zext<12,6>(conv4_window_buffer_388_reg_193845.read());
}

void Block_codeRepl202676::thread_mul_ln703_483_fu_76417_p2() {
    mul_ln703_483_fu_76417_p2 = (!mul_ln703_483_fu_76417_p0.read().is_01() || !mul_ln703_483_fu_76417_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_483_fu_76417_p0.read()) * sc_biguint<6>(mul_ln703_483_fu_76417_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_486_fu_76557_p0() {
    mul_ln703_486_fu_76557_p0 = shl_ln728_481_fu_76542_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_486_fu_76557_p1() {
    mul_ln703_486_fu_76557_p1 =  (sc_lv<6>) (mul_ln703_486_fu_76557_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_486_fu_76557_p10() {
    mul_ln703_486_fu_76557_p10 = esl_zext<12,6>(conv4_window_buffer_389_reg_193850.read());
}

void Block_codeRepl202676::thread_mul_ln703_486_fu_76557_p2() {
    mul_ln703_486_fu_76557_p2 = (!mul_ln703_486_fu_76557_p0.read().is_01() || !mul_ln703_486_fu_76557_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_486_fu_76557_p0.read()) * sc_biguint<6>(mul_ln703_486_fu_76557_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_488_fu_76770_p0() {
    mul_ln703_488_fu_76770_p0 = shl_ln728_483_fu_76755_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_488_fu_76770_p1() {
    mul_ln703_488_fu_76770_p1 =  (sc_lv<6>) (mul_ln703_488_fu_76770_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_488_fu_76770_p10() {
    mul_ln703_488_fu_76770_p10 = esl_zext<12,6>(conv4_window_buffer_522_reg_189935.read());
}

void Block_codeRepl202676::thread_mul_ln703_488_fu_76770_p2() {
    mul_ln703_488_fu_76770_p2 = (!mul_ln703_488_fu_76770_p0.read().is_01() || !mul_ln703_488_fu_76770_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_488_fu_76770_p0.read()) * sc_biguint<6>(mul_ln703_488_fu_76770_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_490_fu_76098_p0() {
    mul_ln703_490_fu_76098_p0 = shl_ln728_485_fu_76083_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_490_fu_76098_p1() {
    mul_ln703_490_fu_76098_p1 =  (sc_lv<6>) (mul_ln703_490_fu_76098_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_490_fu_76098_p10() {
    mul_ln703_490_fu_76098_p10 = esl_zext<12,6>(conv4_window_buffer_521_reg_189930.read());
}

void Block_codeRepl202676::thread_mul_ln703_490_fu_76098_p2() {
    mul_ln703_490_fu_76098_p2 = (!mul_ln703_490_fu_76098_p0.read().is_01() || !mul_ln703_490_fu_76098_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_490_fu_76098_p0.read()) * sc_biguint<6>(mul_ln703_490_fu_76098_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_492_fu_76592_p0() {
    mul_ln703_492_fu_76592_p0 = shl_ln728_487_fu_76578_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_492_fu_76592_p1() {
    mul_ln703_492_fu_76592_p1 =  (sc_lv<6>) (mul_ln703_492_fu_76592_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_492_fu_76592_p10() {
    mul_ln703_492_fu_76592_p10 = esl_zext<12,6>(conv4_window_buffer_390_reg_193855.read());
}

void Block_codeRepl202676::thread_mul_ln703_492_fu_76592_p2() {
    mul_ln703_492_fu_76592_p2 = (!mul_ln703_492_fu_76592_p0.read().is_01() || !mul_ln703_492_fu_76592_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_492_fu_76592_p0.read()) * sc_biguint<6>(mul_ln703_492_fu_76592_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_495_fu_76632_p0() {
    mul_ln703_495_fu_76632_p0 = shl_ln728_490_fu_76617_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_495_fu_76632_p1() {
    mul_ln703_495_fu_76632_p1 =  (sc_lv<6>) (mul_ln703_495_fu_76632_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_495_fu_76632_p10() {
    mul_ln703_495_fu_76632_p10 = esl_zext<12,6>(conv4_window_buffer_391_reg_193860.read());
}

void Block_codeRepl202676::thread_mul_ln703_495_fu_76632_p2() {
    mul_ln703_495_fu_76632_p2 = (!mul_ln703_495_fu_76632_p0.read().is_01() || !mul_ln703_495_fu_76632_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_495_fu_76632_p0.read()) * sc_biguint<6>(mul_ln703_495_fu_76632_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_497_fu_76791_p0() {
    mul_ln703_497_fu_76791_p0 = shl_ln728_492_fu_76776_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_497_fu_76791_p1() {
    mul_ln703_497_fu_76791_p1 =  (sc_lv<6>) (mul_ln703_497_fu_76791_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_497_fu_76791_p10() {
    mul_ln703_497_fu_76791_p10 = esl_zext<12,6>(conv4_window_buffer_516_reg_189905.read());
}

void Block_codeRepl202676::thread_mul_ln703_497_fu_76791_p2() {
    mul_ln703_497_fu_76791_p2 = (!mul_ln703_497_fu_76791_p0.read().is_01() || !mul_ln703_497_fu_76791_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_497_fu_76791_p0.read()) * sc_biguint<6>(mul_ln703_497_fu_76791_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_499_fu_76119_p0() {
    mul_ln703_499_fu_76119_p0 = shl_ln728_494_fu_76104_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_499_fu_76119_p1() {
    mul_ln703_499_fu_76119_p1 =  (sc_lv<6>) (mul_ln703_499_fu_76119_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_499_fu_76119_p10() {
    mul_ln703_499_fu_76119_p10 = esl_zext<12,6>(conv4_window_buffer_515_reg_189900.read());
}

void Block_codeRepl202676::thread_mul_ln703_499_fu_76119_p2() {
    mul_ln703_499_fu_76119_p2 = (!mul_ln703_499_fu_76119_p0.read().is_01() || !mul_ln703_499_fu_76119_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_499_fu_76119_p0.read()) * sc_biguint<6>(mul_ln703_499_fu_76119_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_49_fu_59947_p0() {
    mul_ln703_49_fu_59947_p0 = shl_ln728_46_fu_59932_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_49_fu_59947_p1() {
    mul_ln703_49_fu_59947_p1 =  (sc_lv<6>) (mul_ln703_49_fu_59947_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_49_fu_59947_p10() {
    mul_ln703_49_fu_59947_p10 = esl_zext<12,6>(conv2_window_buffer_100_reg_178789.read());
}

void Block_codeRepl202676::thread_mul_ln703_49_fu_59947_p2() {
    mul_ln703_49_fu_59947_p2 = (!mul_ln703_49_fu_59947_p0.read().is_01() || !mul_ln703_49_fu_59947_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_49_fu_59947_p0.read()) * sc_biguint<6>(mul_ln703_49_fu_59947_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_501_fu_76812_p0() {
    mul_ln703_501_fu_76812_p0 = shl_ln728_496_fu_76797_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_501_fu_76812_p1() {
    mul_ln703_501_fu_76812_p1 =  (sc_lv<6>) (mul_ln703_501_fu_76812_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_501_fu_76812_p10() {
    mul_ln703_501_fu_76812_p10 = esl_zext<12,6>(conv4_window_buffer_392_reg_193865.read());
}

void Block_codeRepl202676::thread_mul_ln703_501_fu_76812_p2() {
    mul_ln703_501_fu_76812_p2 = (!mul_ln703_501_fu_76812_p0.read().is_01() || !mul_ln703_501_fu_76812_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_501_fu_76812_p0.read()) * sc_biguint<6>(mul_ln703_501_fu_76812_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_504_fu_76833_p0() {
    mul_ln703_504_fu_76833_p0 = shl_ln728_499_fu_76818_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_504_fu_76833_p1() {
    mul_ln703_504_fu_76833_p1 =  (sc_lv<6>) (mul_ln703_504_fu_76833_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_504_fu_76833_p10() {
    mul_ln703_504_fu_76833_p10 = esl_zext<12,6>(conv4_window_buffer_393_reg_193870.read());
}

void Block_codeRepl202676::thread_mul_ln703_504_fu_76833_p2() {
    mul_ln703_504_fu_76833_p2 = (!mul_ln703_504_fu_76833_p0.read().is_01() || !mul_ln703_504_fu_76833_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_504_fu_76833_p0.read()) * sc_biguint<6>(mul_ln703_504_fu_76833_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_506_fu_76966_p0() {
    mul_ln703_506_fu_76966_p0 = shl_ln728_501_fu_76951_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_506_fu_76966_p1() {
    mul_ln703_506_fu_76966_p1 =  (sc_lv<6>) (mul_ln703_506_fu_76966_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_506_fu_76966_p10() {
    mul_ln703_506_fu_76966_p10 = esl_zext<12,6>(conv4_window_buffer_540_reg_190025.read());
}

void Block_codeRepl202676::thread_mul_ln703_506_fu_76966_p2() {
    mul_ln703_506_fu_76966_p2 = (!mul_ln703_506_fu_76966_p0.read().is_01() || !mul_ln703_506_fu_76966_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_506_fu_76966_p0.read()) * sc_biguint<6>(mul_ln703_506_fu_76966_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_508_fu_76140_p0() {
    mul_ln703_508_fu_76140_p0 = shl_ln728_503_fu_76125_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_508_fu_76140_p1() {
    mul_ln703_508_fu_76140_p1 =  (sc_lv<6>) (mul_ln703_508_fu_76140_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_508_fu_76140_p10() {
    mul_ln703_508_fu_76140_p10 = esl_zext<12,6>(conv4_window_buffer_545_reg_190050.read());
}

void Block_codeRepl202676::thread_mul_ln703_508_fu_76140_p2() {
    mul_ln703_508_fu_76140_p2 = (!mul_ln703_508_fu_76140_p0.read().is_01() || !mul_ln703_508_fu_76140_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_508_fu_76140_p0.read()) * sc_biguint<6>(mul_ln703_508_fu_76140_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_510_fu_76986_p0() {
    mul_ln703_510_fu_76986_p0 = shl_ln728_505_fu_76972_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_510_fu_76986_p1() {
    mul_ln703_510_fu_76986_p1 =  (sc_lv<6>) (mul_ln703_510_fu_76986_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_510_fu_76986_p10() {
    mul_ln703_510_fu_76986_p10 = esl_zext<12,6>(conv4_window_buffer_394_reg_193875.read());
}

void Block_codeRepl202676::thread_mul_ln703_510_fu_76986_p2() {
    mul_ln703_510_fu_76986_p2 = (!mul_ln703_510_fu_76986_p0.read().is_01() || !mul_ln703_510_fu_76986_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_510_fu_76986_p0.read()) * sc_biguint<6>(mul_ln703_510_fu_76986_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_513_fu_77020_p0() {
    mul_ln703_513_fu_77020_p0 = shl_ln728_508_fu_77006_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_513_fu_77020_p1() {
    mul_ln703_513_fu_77020_p1 =  (sc_lv<6>) (mul_ln703_513_fu_77020_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_513_fu_77020_p10() {
    mul_ln703_513_fu_77020_p10 = esl_zext<12,6>(conv4_window_buffer_395_reg_193880.read());
}

void Block_codeRepl202676::thread_mul_ln703_513_fu_77020_p2() {
    mul_ln703_513_fu_77020_p2 = (!mul_ln703_513_fu_77020_p0.read().is_01() || !mul_ln703_513_fu_77020_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_513_fu_77020_p0.read()) * sc_biguint<6>(mul_ln703_513_fu_77020_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_515_fu_79546_p0() {
    mul_ln703_515_fu_79546_p0 = shl_ln728_510_fu_79532_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_515_fu_79546_p1() {
    mul_ln703_515_fu_79546_p1 =  (sc_lv<6>) (mul_ln703_515_fu_79546_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_515_fu_79546_p10() {
    mul_ln703_515_fu_79546_p10 = esl_zext<12,6>(conv4_window_buffer_549_reg_190070.read());
}

void Block_codeRepl202676::thread_mul_ln703_515_fu_79546_p2() {
    mul_ln703_515_fu_79546_p2 = (!mul_ln703_515_fu_79546_p0.read().is_01() || !mul_ln703_515_fu_79546_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_515_fu_79546_p0.read()) * sc_biguint<6>(mul_ln703_515_fu_79546_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_517_fu_78939_p0() {
    mul_ln703_517_fu_78939_p0 = shl_ln728_512_fu_78925_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_517_fu_78939_p1() {
    mul_ln703_517_fu_78939_p1 =  (sc_lv<6>) (mul_ln703_517_fu_78939_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_517_fu_78939_p10() {
    mul_ln703_517_fu_78939_p10 = esl_zext<12,6>(conv4_window_buffer_553_reg_190090.read());
}

void Block_codeRepl202676::thread_mul_ln703_517_fu_78939_p2() {
    mul_ln703_517_fu_78939_p2 = (!mul_ln703_517_fu_78939_p0.read().is_01() || !mul_ln703_517_fu_78939_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_517_fu_78939_p0.read()) * sc_biguint<6>(mul_ln703_517_fu_78939_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_519_fu_79737_p0() {
    mul_ln703_519_fu_79737_p0 = shl_ln728_514_fu_79723_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_519_fu_79737_p1() {
    mul_ln703_519_fu_79737_p1 =  (sc_lv<6>) (mul_ln703_519_fu_79737_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_519_fu_79737_p10() {
    mul_ln703_519_fu_79737_p10 = esl_zext<12,6>(conv4_window_buffer_396_reg_193885.read());
}

void Block_codeRepl202676::thread_mul_ln703_519_fu_79737_p2() {
    mul_ln703_519_fu_79737_p2 = (!mul_ln703_519_fu_79737_p0.read().is_01() || !mul_ln703_519_fu_79737_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_519_fu_79737_p0.read()) * sc_biguint<6>(mul_ln703_519_fu_79737_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_522_fu_77044_p0() {
    mul_ln703_522_fu_77044_p0 = shl_ln728_517_fu_77030_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_522_fu_77044_p1() {
    mul_ln703_522_fu_77044_p1 =  (sc_lv<6>) (mul_ln703_522_fu_77044_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_522_fu_77044_p10() {
    mul_ln703_522_fu_77044_p10 = esl_zext<12,6>(conv4_window_buffer_397_reg_193890.read());
}

void Block_codeRepl202676::thread_mul_ln703_522_fu_77044_p2() {
    mul_ln703_522_fu_77044_p2 = (!mul_ln703_522_fu_77044_p0.read().is_01() || !mul_ln703_522_fu_77044_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_522_fu_77044_p0.read()) * sc_biguint<6>(mul_ln703_522_fu_77044_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_524_fu_77064_p0() {
    mul_ln703_524_fu_77064_p0 = shl_ln728_519_fu_77050_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_524_fu_77064_p1() {
    mul_ln703_524_fu_77064_p1 =  (sc_lv<6>) (mul_ln703_524_fu_77064_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_524_fu_77064_p10() {
    mul_ln703_524_fu_77064_p10 = esl_zext<12,6>(conv4_window_buffer_557_reg_190111.read());
}

void Block_codeRepl202676::thread_mul_ln703_524_fu_77064_p2() {
    mul_ln703_524_fu_77064_p2 = (!mul_ln703_524_fu_77064_p0.read().is_01() || !mul_ln703_524_fu_77064_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_524_fu_77064_p0.read()) * sc_biguint<6>(mul_ln703_524_fu_77064_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_526_fu_76161_p0() {
    mul_ln703_526_fu_76161_p0 = shl_ln728_521_fu_76146_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_526_fu_76161_p1() {
    mul_ln703_526_fu_76161_p1 =  (sc_lv<6>) (mul_ln703_526_fu_76161_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_526_fu_76161_p10() {
    mul_ln703_526_fu_76161_p10 = esl_zext<12,6>(conv4_window_buffer_561_reg_190131.read());
}

void Block_codeRepl202676::thread_mul_ln703_526_fu_76161_p2() {
    mul_ln703_526_fu_76161_p2 = (!mul_ln703_526_fu_76161_p0.read().is_01() || !mul_ln703_526_fu_76161_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_526_fu_76161_p0.read()) * sc_biguint<6>(mul_ln703_526_fu_76161_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_528_fu_77169_p0() {
    mul_ln703_528_fu_77169_p0 = shl_ln728_523_fu_77155_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_528_fu_77169_p1() {
    mul_ln703_528_fu_77169_p1 =  (sc_lv<6>) (mul_ln703_528_fu_77169_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_528_fu_77169_p10() {
    mul_ln703_528_fu_77169_p10 = esl_zext<12,6>(conv4_window_buffer_398_reg_193895.read());
}

void Block_codeRepl202676::thread_mul_ln703_528_fu_77169_p2() {
    mul_ln703_528_fu_77169_p2 = (!mul_ln703_528_fu_77169_p0.read().is_01() || !mul_ln703_528_fu_77169_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_528_fu_77169_p0.read()) * sc_biguint<6>(mul_ln703_528_fu_77169_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_52_fu_60365_p0() {
    mul_ln703_52_fu_60365_p0 = shl_ln728_49_fu_60350_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_52_fu_60365_p1() {
    mul_ln703_52_fu_60365_p1 =  (sc_lv<6>) (mul_ln703_52_fu_60365_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_52_fu_60365_p10() {
    mul_ln703_52_fu_60365_p10 = esl_zext<12,6>(conv2_window_buffer_101_reg_178794.read());
}

void Block_codeRepl202676::thread_mul_ln703_52_fu_60365_p2() {
    mul_ln703_52_fu_60365_p2 = (!mul_ln703_52_fu_60365_p0.read().is_01() || !mul_ln703_52_fu_60365_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_52_fu_60365_p0.read()) * sc_biguint<6>(mul_ln703_52_fu_60365_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_531_fu_77203_p0() {
    mul_ln703_531_fu_77203_p0 = shl_ln728_526_fu_77189_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_531_fu_77203_p1() {
    mul_ln703_531_fu_77203_p1 =  (sc_lv<6>) (mul_ln703_531_fu_77203_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_531_fu_77203_p10() {
    mul_ln703_531_fu_77203_p10 = esl_zext<12,6>(conv4_window_buffer_399_reg_193900.read());
}

void Block_codeRepl202676::thread_mul_ln703_531_fu_77203_p2() {
    mul_ln703_531_fu_77203_p2 = (!mul_ln703_531_fu_77203_p0.read().is_01() || !mul_ln703_531_fu_77203_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_531_fu_77203_p0.read()) * sc_biguint<6>(mul_ln703_531_fu_77203_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_533_fu_79775_p0() {
    mul_ln703_533_fu_79775_p0 = shl_ln728_528_fu_79761_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_533_fu_79775_p1() {
    mul_ln703_533_fu_79775_p1 =  (sc_lv<6>) (mul_ln703_533_fu_79775_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_533_fu_79775_p10() {
    mul_ln703_533_fu_79775_p10 = esl_zext<12,6>(conv4_window_buffer_565_reg_190151.read());
}

void Block_codeRepl202676::thread_mul_ln703_533_fu_79775_p2() {
    mul_ln703_533_fu_79775_p2 = (!mul_ln703_533_fu_79775_p0.read().is_01() || !mul_ln703_533_fu_79775_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_533_fu_79775_p0.read()) * sc_biguint<6>(mul_ln703_533_fu_79775_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_535_fu_79130_p0() {
    mul_ln703_535_fu_79130_p0 = shl_ln728_530_fu_79116_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_535_fu_79130_p1() {
    mul_ln703_535_fu_79130_p1 =  (sc_lv<6>) (mul_ln703_535_fu_79130_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_535_fu_79130_p10() {
    mul_ln703_535_fu_79130_p10 = esl_zext<12,6>(conv4_window_buffer_569_reg_190171.read());
}

void Block_codeRepl202676::thread_mul_ln703_535_fu_79130_p2() {
    mul_ln703_535_fu_79130_p2 = (!mul_ln703_535_fu_79130_p0.read().is_01() || !mul_ln703_535_fu_79130_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_535_fu_79130_p0.read()) * sc_biguint<6>(mul_ln703_535_fu_79130_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_537_fu_79813_p0() {
    mul_ln703_537_fu_79813_p0 = shl_ln728_532_fu_79799_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_537_fu_79813_p1() {
    mul_ln703_537_fu_79813_p1 =  (sc_lv<6>) (mul_ln703_537_fu_79813_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_537_fu_79813_p10() {
    mul_ln703_537_fu_79813_p10 = esl_zext<12,6>(conv4_window_buffer_400_reg_193905.read());
}

void Block_codeRepl202676::thread_mul_ln703_537_fu_79813_p2() {
    mul_ln703_537_fu_79813_p2 = (!mul_ln703_537_fu_79813_p0.read().is_01() || !mul_ln703_537_fu_79813_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_537_fu_79813_p0.read()) * sc_biguint<6>(mul_ln703_537_fu_79813_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_540_fu_77227_p0() {
    mul_ln703_540_fu_77227_p0 = shl_ln728_535_fu_77213_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_540_fu_77227_p1() {
    mul_ln703_540_fu_77227_p1 =  (sc_lv<6>) (mul_ln703_540_fu_77227_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_540_fu_77227_p10() {
    mul_ln703_540_fu_77227_p10 = esl_zext<12,6>(conv4_window_buffer_401_reg_193910.read());
}

void Block_codeRepl202676::thread_mul_ln703_540_fu_77227_p2() {
    mul_ln703_540_fu_77227_p2 = (!mul_ln703_540_fu_77227_p0.read().is_01() || !mul_ln703_540_fu_77227_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_540_fu_77227_p0.read()) * sc_biguint<6>(mul_ln703_540_fu_77227_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_542_fu_77247_p0() {
    mul_ln703_542_fu_77247_p0 = shl_ln728_537_fu_77233_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_542_fu_77247_p1() {
    mul_ln703_542_fu_77247_p1 =  (sc_lv<6>) (mul_ln703_542_fu_77247_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_542_fu_77247_p10() {
    mul_ln703_542_fu_77247_p10 = esl_zext<12,6>(conv4_window_buffer_573_reg_190191.read());
}

void Block_codeRepl202676::thread_mul_ln703_542_fu_77247_p2() {
    mul_ln703_542_fu_77247_p2 = (!mul_ln703_542_fu_77247_p0.read().is_01() || !mul_ln703_542_fu_77247_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_542_fu_77247_p0.read()) * sc_biguint<6>(mul_ln703_542_fu_77247_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_544_fu_76218_p0() {
    mul_ln703_544_fu_76218_p0 = shl_ln728_539_fu_76203_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_544_fu_76218_p1() {
    mul_ln703_544_fu_76218_p1 =  (sc_lv<6>) (mul_ln703_544_fu_76218_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_544_fu_76218_p10() {
    mul_ln703_544_fu_76218_p10 = esl_zext<12,6>(conv4_window_buffer_577_reg_190211.read());
}

void Block_codeRepl202676::thread_mul_ln703_544_fu_76218_p2() {
    mul_ln703_544_fu_76218_p2 = (!mul_ln703_544_fu_76218_p0.read().is_01() || !mul_ln703_544_fu_76218_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_544_fu_76218_p0.read()) * sc_biguint<6>(mul_ln703_544_fu_76218_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_546_fu_77267_p0() {
    mul_ln703_546_fu_77267_p0 = shl_ln728_541_fu_77253_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_546_fu_77267_p1() {
    mul_ln703_546_fu_77267_p1 =  (sc_lv<6>) (mul_ln703_546_fu_77267_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_546_fu_77267_p10() {
    mul_ln703_546_fu_77267_p10 = esl_zext<12,6>(conv4_window_buffer_402_reg_193915.read());
}

void Block_codeRepl202676::thread_mul_ln703_546_fu_77267_p2() {
    mul_ln703_546_fu_77267_p2 = (!mul_ln703_546_fu_77267_p0.read().is_01() || !mul_ln703_546_fu_77267_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_546_fu_77267_p0.read()) * sc_biguint<6>(mul_ln703_546_fu_77267_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_548_fu_77407_p0() {
    mul_ln703_548_fu_77407_p0 = shl_ln728_543_fu_77393_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_548_fu_77407_p1() {
    mul_ln703_548_fu_77407_p1 =  (sc_lv<6>) (mul_ln703_548_fu_77407_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_548_fu_77407_p10() {
    mul_ln703_548_fu_77407_p10 = esl_zext<12,6>(conv4_window_buffer_579_reg_190221.read());
}

void Block_codeRepl202676::thread_mul_ln703_548_fu_77407_p2() {
    mul_ln703_548_fu_77407_p2 = (!mul_ln703_548_fu_77407_p0.read().is_01() || !mul_ln703_548_fu_77407_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_548_fu_77407_p0.read()) * sc_biguint<6>(mul_ln703_548_fu_77407_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_54_fu_60613_p0() {
    mul_ln703_54_fu_60613_p0 = shl_ln728_51_fu_60598_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_54_fu_60613_p1() {
    mul_ln703_54_fu_60613_p1 =  (sc_lv<6>) (mul_ln703_54_fu_60613_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_54_fu_60613_p10() {
    mul_ln703_54_fu_60613_p10 = esl_zext<12,6>(conv2_window_buffer_144_reg_177870.read());
}

void Block_codeRepl202676::thread_mul_ln703_54_fu_60613_p2() {
    mul_ln703_54_fu_60613_p2 = (!mul_ln703_54_fu_60613_p0.read().is_01() || !mul_ln703_54_fu_60613_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_54_fu_60613_p0.read()) * sc_biguint<6>(mul_ln703_54_fu_60613_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_550_fu_79851_p0() {
    mul_ln703_550_fu_79851_p0 = shl_ln728_545_fu_79837_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_550_fu_79851_p1() {
    mul_ln703_550_fu_79851_p1 =  (sc_lv<6>) (mul_ln703_550_fu_79851_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_550_fu_79851_p10() {
    mul_ln703_550_fu_79851_p10 = esl_zext<12,6>(conv4_window_buffer_582_reg_190236.read());
}

void Block_codeRepl202676::thread_mul_ln703_550_fu_79851_p2() {
    mul_ln703_550_fu_79851_p2 = (!mul_ln703_550_fu_79851_p0.read().is_01() || !mul_ln703_550_fu_79851_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_550_fu_79851_p0.read()) * sc_biguint<6>(mul_ln703_550_fu_79851_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_552_fu_85419_p0() {
    mul_ln703_552_fu_85419_p0 = shl_ln728_547_fu_85405_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_552_fu_85419_p1() {
    mul_ln703_552_fu_85419_p1 =  (sc_lv<6>) (mul_ln703_552_fu_85419_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_552_fu_85419_p10() {
    mul_ln703_552_fu_85419_p10 = esl_zext<12,6>(tmp_V_518_reg_199419.read());
}

void Block_codeRepl202676::thread_mul_ln703_552_fu_85419_p2() {
    mul_ln703_552_fu_85419_p2 = (!mul_ln703_552_fu_85419_p0.read().is_01() || !mul_ln703_552_fu_85419_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_552_fu_85419_p0.read()) * sc_biguint<6>(mul_ln703_552_fu_85419_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_554_fu_79889_p0() {
    mul_ln703_554_fu_79889_p0 = shl_ln728_549_fu_79875_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_554_fu_79889_p1() {
    mul_ln703_554_fu_79889_p1 =  (sc_lv<6>) (mul_ln703_554_fu_79889_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_554_fu_79889_p10() {
    mul_ln703_554_fu_79889_p10 = esl_zext<12,6>(conv4_window_buffer_584_reg_190246.read());
}

void Block_codeRepl202676::thread_mul_ln703_554_fu_79889_p2() {
    mul_ln703_554_fu_79889_p2 = (!mul_ln703_554_fu_79889_p0.read().is_01() || !mul_ln703_554_fu_79889_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_554_fu_79889_p0.read()) * sc_biguint<6>(mul_ln703_554_fu_79889_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_557_fu_77427_p0() {
    mul_ln703_557_fu_77427_p0 = shl_ln728_552_fu_77413_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_557_fu_77427_p1() {
    mul_ln703_557_fu_77427_p1 =  (sc_lv<6>) (mul_ln703_557_fu_77427_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_557_fu_77427_p10() {
    mul_ln703_557_fu_77427_p10 = esl_zext<12,6>(conv4_window_buffer_587_reg_190261.read());
}

void Block_codeRepl202676::thread_mul_ln703_557_fu_77427_p2() {
    mul_ln703_557_fu_77427_p2 = (!mul_ln703_557_fu_77427_p0.read().is_01() || !mul_ln703_557_fu_77427_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_557_fu_77427_p0.read()) * sc_biguint<6>(mul_ln703_557_fu_77427_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_559_fu_79968_p0() {
    mul_ln703_559_fu_79968_p0 = shl_ln728_554_fu_79954_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_559_fu_79968_p1() {
    mul_ln703_559_fu_79968_p1 =  (sc_lv<6>) (mul_ln703_559_fu_79968_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_559_fu_79968_p10() {
    mul_ln703_559_fu_79968_p10 = esl_zext<12,6>(conv4_window_buffer_590_reg_190277.read());
}

void Block_codeRepl202676::thread_mul_ln703_559_fu_79968_p2() {
    mul_ln703_559_fu_79968_p2 = (!mul_ln703_559_fu_79968_p0.read().is_01() || !mul_ln703_559_fu_79968_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_559_fu_79968_p0.read()) * sc_biguint<6>(mul_ln703_559_fu_79968_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_561_fu_85667_p0() {
    mul_ln703_561_fu_85667_p0 = shl_ln728_556_fu_85653_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_561_fu_85667_p1() {
    mul_ln703_561_fu_85667_p1 =  (sc_lv<6>) (mul_ln703_561_fu_85667_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_561_fu_85667_p10() {
    mul_ln703_561_fu_85667_p10 = esl_zext<12,6>(tmp_V_519_reg_199469.read());
}

void Block_codeRepl202676::thread_mul_ln703_561_fu_85667_p2() {
    mul_ln703_561_fu_85667_p2 = (!mul_ln703_561_fu_85667_p0.read().is_01() || !mul_ln703_561_fu_85667_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_561_fu_85667_p0.read()) * sc_biguint<6>(mul_ln703_561_fu_85667_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_563_fu_80006_p0() {
    mul_ln703_563_fu_80006_p0 = shl_ln728_558_fu_79992_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_563_fu_80006_p1() {
    mul_ln703_563_fu_80006_p1 =  (sc_lv<6>) (mul_ln703_563_fu_80006_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_563_fu_80006_p10() {
    mul_ln703_563_fu_80006_p10 = esl_zext<12,6>(conv4_window_buffer_592_reg_190287.read());
}

void Block_codeRepl202676::thread_mul_ln703_563_fu_80006_p2() {
    mul_ln703_563_fu_80006_p2 = (!mul_ln703_563_fu_80006_p0.read().is_01() || !mul_ln703_563_fu_80006_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_563_fu_80006_p0.read()) * sc_biguint<6>(mul_ln703_563_fu_80006_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_566_fu_77447_p0() {
    mul_ln703_566_fu_77447_p0 = shl_ln728_561_fu_77433_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_566_fu_77447_p1() {
    mul_ln703_566_fu_77447_p1 =  (sc_lv<6>) (mul_ln703_566_fu_77447_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_566_fu_77447_p10() {
    mul_ln703_566_fu_77447_p10 = esl_zext<12,6>(conv4_window_buffer_595_reg_190302.read());
}

void Block_codeRepl202676::thread_mul_ln703_566_fu_77447_p2() {
    mul_ln703_566_fu_77447_p2 = (!mul_ln703_566_fu_77447_p0.read().is_01() || !mul_ln703_566_fu_77447_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_566_fu_77447_p0.read()) * sc_biguint<6>(mul_ln703_566_fu_77447_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_568_fu_80044_p0() {
    mul_ln703_568_fu_80044_p0 = shl_ln728_563_fu_80030_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_568_fu_80044_p1() {
    mul_ln703_568_fu_80044_p1 =  (sc_lv<6>) (mul_ln703_568_fu_80044_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_568_fu_80044_p10() {
    mul_ln703_568_fu_80044_p10 = esl_zext<12,6>(conv4_window_buffer_598_reg_190318.read());
}

void Block_codeRepl202676::thread_mul_ln703_568_fu_80044_p2() {
    mul_ln703_568_fu_80044_p2 = (!mul_ln703_568_fu_80044_p0.read().is_01() || !mul_ln703_568_fu_80044_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_568_fu_80044_p0.read()) * sc_biguint<6>(mul_ln703_568_fu_80044_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_56_fu_59806_p0() {
    mul_ln703_56_fu_59806_p0 = shl_ln728_53_fu_59791_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_56_fu_59806_p1() {
    mul_ln703_56_fu_59806_p1 =  (sc_lv<6>) (mul_ln703_56_fu_59806_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_56_fu_59806_p10() {
    mul_ln703_56_fu_59806_p10 = esl_zext<12,6>(conv2_window_buffer_147_reg_177885.read());
}

void Block_codeRepl202676::thread_mul_ln703_56_fu_59806_p2() {
    mul_ln703_56_fu_59806_p2 = (!mul_ln703_56_fu_59806_p0.read().is_01() || !mul_ln703_56_fu_59806_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_56_fu_59806_p0.read()) * sc_biguint<6>(mul_ln703_56_fu_59806_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_570_fu_85705_p0() {
    mul_ln703_570_fu_85705_p0 = shl_ln728_565_fu_85691_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_570_fu_85705_p1() {
    mul_ln703_570_fu_85705_p1 =  (sc_lv<6>) (mul_ln703_570_fu_85705_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_570_fu_85705_p10() {
    mul_ln703_570_fu_85705_p10 = esl_zext<12,6>(tmp_V_520_reg_199514.read());
}

void Block_codeRepl202676::thread_mul_ln703_570_fu_85705_p2() {
    mul_ln703_570_fu_85705_p2 = (!mul_ln703_570_fu_85705_p0.read().is_01() || !mul_ln703_570_fu_85705_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_570_fu_85705_p0.read()) * sc_biguint<6>(mul_ln703_570_fu_85705_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_572_fu_80082_p0() {
    mul_ln703_572_fu_80082_p0 = shl_ln728_567_fu_80068_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_572_fu_80082_p1() {
    mul_ln703_572_fu_80082_p1 =  (sc_lv<6>) (mul_ln703_572_fu_80082_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_572_fu_80082_p10() {
    mul_ln703_572_fu_80082_p10 = esl_zext<12,6>(conv4_window_buffer_600_reg_190328.read());
}

void Block_codeRepl202676::thread_mul_ln703_572_fu_80082_p2() {
    mul_ln703_572_fu_80082_p2 = (!mul_ln703_572_fu_80082_p0.read().is_01() || !mul_ln703_572_fu_80082_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_572_fu_80082_p0.read()) * sc_biguint<6>(mul_ln703_572_fu_80082_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_575_fu_77467_p0() {
    mul_ln703_575_fu_77467_p0 = shl_ln728_570_fu_77453_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_575_fu_77467_p1() {
    mul_ln703_575_fu_77467_p1 =  (sc_lv<6>) (mul_ln703_575_fu_77467_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_575_fu_77467_p10() {
    mul_ln703_575_fu_77467_p10 = esl_zext<12,6>(conv4_window_buffer_603_reg_190343.read());
}

void Block_codeRepl202676::thread_mul_ln703_575_fu_77467_p2() {
    mul_ln703_575_fu_77467_p2 = (!mul_ln703_575_fu_77467_p0.read().is_01() || !mul_ln703_575_fu_77467_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_575_fu_77467_p0.read()) * sc_biguint<6>(mul_ln703_575_fu_77467_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_577_fu_77487_p0() {
    mul_ln703_577_fu_77487_p0 = shl_ln728_572_fu_77473_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_577_fu_77487_p1() {
    mul_ln703_577_fu_77487_p1 =  (sc_lv<6>) (mul_ln703_577_fu_77487_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_577_fu_77487_p10() {
    mul_ln703_577_fu_77487_p10 = esl_zext<12,6>(conv4_window_buffer_606_reg_190358.read());
}

void Block_codeRepl202676::thread_mul_ln703_577_fu_77487_p2() {
    mul_ln703_577_fu_77487_p2 = (!mul_ln703_577_fu_77487_p0.read().is_01() || !mul_ln703_577_fu_77487_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_577_fu_77487_p0.read()) * sc_biguint<6>(mul_ln703_577_fu_77487_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_579_fu_78960_p0() {
    mul_ln703_579_fu_78960_p0 = shl_ln728_574_fu_78945_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_579_fu_78960_p1() {
    mul_ln703_579_fu_78960_p1 =  (sc_lv<6>) (mul_ln703_579_fu_78960_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_579_fu_78960_p10() {
    mul_ln703_579_fu_78960_p10 = esl_zext<12,6>(reg_56487.read());
}

void Block_codeRepl202676::thread_mul_ln703_579_fu_78960_p2() {
    mul_ln703_579_fu_78960_p2 = (!mul_ln703_579_fu_78960_p0.read().is_01() || !mul_ln703_579_fu_78960_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_579_fu_78960_p0.read()) * sc_biguint<6>(mul_ln703_579_fu_78960_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_581_fu_77624_p0() {
    mul_ln703_581_fu_77624_p0 = shl_ln728_576_fu_77610_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_581_fu_77624_p1() {
    mul_ln703_581_fu_77624_p1 =  (sc_lv<6>) (mul_ln703_581_fu_77624_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_581_fu_77624_p10() {
    mul_ln703_581_fu_77624_p10 = esl_zext<12,6>(conv4_window_buffer_608_reg_190368.read());
}

void Block_codeRepl202676::thread_mul_ln703_581_fu_77624_p2() {
    mul_ln703_581_fu_77624_p2 = (!mul_ln703_581_fu_77624_p0.read().is_01() || !mul_ln703_581_fu_77624_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_581_fu_77624_p0.read()) * sc_biguint<6>(mul_ln703_581_fu_77624_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_584_fu_77658_p0() {
    mul_ln703_584_fu_77658_p0 = shl_ln728_579_fu_77644_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_584_fu_77658_p1() {
    mul_ln703_584_fu_77658_p1 =  (sc_lv<6>) (mul_ln703_584_fu_77658_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_584_fu_77658_p10() {
    mul_ln703_584_fu_77658_p10 = esl_zext<12,6>(conv4_window_buffer_611_reg_190383.read());
}

void Block_codeRepl202676::thread_mul_ln703_584_fu_77658_p2() {
    mul_ln703_584_fu_77658_p2 = (!mul_ln703_584_fu_77658_p0.read().is_01() || !mul_ln703_584_fu_77658_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_584_fu_77658_p0.read()) * sc_biguint<6>(mul_ln703_584_fu_77658_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_586_fu_80120_p0() {
    mul_ln703_586_fu_80120_p0 = shl_ln728_581_fu_80106_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_586_fu_80120_p1() {
    mul_ln703_586_fu_80120_p1 =  (sc_lv<6>) (mul_ln703_586_fu_80120_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_586_fu_80120_p10() {
    mul_ln703_586_fu_80120_p10 = esl_zext<12,6>(conv4_window_buffer_613_reg_190393.read());
}

void Block_codeRepl202676::thread_mul_ln703_586_fu_80120_p2() {
    mul_ln703_586_fu_80120_p2 = (!mul_ln703_586_fu_80120_p0.read().is_01() || !mul_ln703_586_fu_80120_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_586_fu_80120_p0.read()) * sc_biguint<6>(mul_ln703_586_fu_80120_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_588_fu_85760_p0() {
    mul_ln703_588_fu_85760_p0 = shl_ln728_583_fu_85746_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_588_fu_85760_p1() {
    mul_ln703_588_fu_85760_p1 =  (sc_lv<6>) (mul_ln703_588_fu_85760_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_588_fu_85760_p10() {
    mul_ln703_588_fu_85760_p10 = esl_zext<12,6>(tmp_V_522_reg_199599.read());
}

void Block_codeRepl202676::thread_mul_ln703_588_fu_85760_p2() {
    mul_ln703_588_fu_85760_p2 = (!mul_ln703_588_fu_85760_p0.read().is_01() || !mul_ln703_588_fu_85760_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_588_fu_85760_p0.read()) * sc_biguint<6>(mul_ln703_588_fu_85760_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_58_fu_59968_p0() {
    mul_ln703_58_fu_59968_p0 = shl_ln728_55_fu_59953_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_58_fu_59968_p1() {
    mul_ln703_58_fu_59968_p1 =  (sc_lv<6>) (mul_ln703_58_fu_59968_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_58_fu_59968_p10() {
    mul_ln703_58_fu_59968_p10 = esl_zext<12,6>(conv2_window_buffer_102_reg_178799.read());
}

void Block_codeRepl202676::thread_mul_ln703_58_fu_59968_p2() {
    mul_ln703_58_fu_59968_p2 = (!mul_ln703_58_fu_59968_p0.read().is_01() || !mul_ln703_58_fu_59968_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_58_fu_59968_p0.read()) * sc_biguint<6>(mul_ln703_58_fu_59968_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_590_fu_80191_p0() {
    mul_ln703_590_fu_80191_p0 = shl_ln728_585_fu_80177_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_590_fu_80191_p1() {
    mul_ln703_590_fu_80191_p1 =  (sc_lv<6>) (mul_ln703_590_fu_80191_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_590_fu_80191_p10() {
    mul_ln703_590_fu_80191_p10 = esl_zext<12,6>(conv4_window_buffer_602_reg_190338.read());
}

void Block_codeRepl202676::thread_mul_ln703_590_fu_80191_p2() {
    mul_ln703_590_fu_80191_p2 = (!mul_ln703_590_fu_80191_p0.read().is_01() || !mul_ln703_590_fu_80191_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_590_fu_80191_p0.read()) * sc_biguint<6>(mul_ln703_590_fu_80191_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_593_fu_77682_p0() {
    mul_ln703_593_fu_77682_p0 = shl_ln728_588_fu_77668_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_593_fu_77682_p1() {
    mul_ln703_593_fu_77682_p1 =  (sc_lv<6>) (mul_ln703_593_fu_77682_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_593_fu_77682_p10() {
    mul_ln703_593_fu_77682_p10 = esl_zext<12,6>(conv4_window_buffer_594_reg_190297.read());
}

void Block_codeRepl202676::thread_mul_ln703_593_fu_77682_p2() {
    mul_ln703_593_fu_77682_p2 = (!mul_ln703_593_fu_77682_p0.read().is_01() || !mul_ln703_593_fu_77682_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_593_fu_77682_p0.read()) * sc_biguint<6>(mul_ln703_593_fu_77682_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_595_fu_80229_p0() {
    mul_ln703_595_fu_80229_p0 = shl_ln728_590_fu_80215_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_595_fu_80229_p1() {
    mul_ln703_595_fu_80229_p1 =  (sc_lv<6>) (mul_ln703_595_fu_80229_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_595_fu_80229_p10() {
    mul_ln703_595_fu_80229_p10 = esl_zext<12,6>(conv4_window_buffer_591_reg_190282.read());
}

void Block_codeRepl202676::thread_mul_ln703_595_fu_80229_p2() {
    mul_ln703_595_fu_80229_p2 = (!mul_ln703_595_fu_80229_p0.read().is_01() || !mul_ln703_595_fu_80229_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_595_fu_80229_p0.read()) * sc_biguint<6>(mul_ln703_595_fu_80229_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_597_fu_85784_p0() {
    mul_ln703_597_fu_85784_p0 = shl_ln728_592_fu_85770_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_597_fu_85784_p1() {
    mul_ln703_597_fu_85784_p1 =  (sc_lv<6>) (mul_ln703_597_fu_85784_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_597_fu_85784_p10() {
    mul_ln703_597_fu_85784_p10 = esl_zext<12,6>(tmp_V_523_reg_199649.read());
}

void Block_codeRepl202676::thread_mul_ln703_597_fu_85784_p2() {
    mul_ln703_597_fu_85784_p2 = (!mul_ln703_597_fu_85784_p0.read().is_01() || !mul_ln703_597_fu_85784_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_597_fu_85784_p0.read()) * sc_biguint<6>(mul_ln703_597_fu_85784_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_599_fu_80267_p0() {
    mul_ln703_599_fu_80267_p0 = shl_ln728_594_fu_80253_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_599_fu_80267_p1() {
    mul_ln703_599_fu_80267_p1 =  (sc_lv<6>) (mul_ln703_599_fu_80267_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_599_fu_80267_p10() {
    mul_ln703_599_fu_80267_p10 = esl_zext<12,6>(conv4_window_buffer_578_reg_190216.read());
}

void Block_codeRepl202676::thread_mul_ln703_599_fu_80267_p2() {
    mul_ln703_599_fu_80267_p2 = (!mul_ln703_599_fu_80267_p0.read().is_01() || !mul_ln703_599_fu_80267_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_599_fu_80267_p0.read()) * sc_biguint<6>(mul_ln703_599_fu_80267_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_5_fu_57941_p0() {
    mul_ln703_5_fu_57941_p0 = shl_ln728_4_fu_57926_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_5_fu_57941_p1() {
    mul_ln703_5_fu_57941_p1 = conv1_window_buffer_26_reg_176619.read();
}

void Block_codeRepl202676::thread_mul_ln703_5_fu_57941_p2() {
    mul_ln703_5_fu_57941_p2 = (!mul_ln703_5_fu_57941_p0.read().is_01() || !mul_ln703_5_fu_57941_p1.read().is_01())? sc_lv<14>(): sc_bigint<6>(mul_ln703_5_fu_57941_p0.read()) * sc_bigint<8>(mul_ln703_5_fu_57941_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_602_fu_77702_p0() {
    mul_ln703_602_fu_77702_p0 = shl_ln728_597_fu_77688_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_602_fu_77702_p1() {
    mul_ln703_602_fu_77702_p1 =  (sc_lv<6>) (mul_ln703_602_fu_77702_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_602_fu_77702_p10() {
    mul_ln703_602_fu_77702_p10 = esl_zext<12,6>(conv4_window_buffer_570_reg_190176.read());
}

void Block_codeRepl202676::thread_mul_ln703_602_fu_77702_p2() {
    mul_ln703_602_fu_77702_p2 = (!mul_ln703_602_fu_77702_p0.read().is_01() || !mul_ln703_602_fu_77702_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_602_fu_77702_p0.read()) * sc_biguint<6>(mul_ln703_602_fu_77702_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_604_fu_80305_p0() {
    mul_ln703_604_fu_80305_p0 = shl_ln728_599_fu_80291_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_604_fu_80305_p1() {
    mul_ln703_604_fu_80305_p1 =  (sc_lv<6>) (mul_ln703_604_fu_80305_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_604_fu_80305_p10() {
    mul_ln703_604_fu_80305_p10 = esl_zext<12,6>(conv4_window_buffer_567_reg_190161.read());
}

void Block_codeRepl202676::thread_mul_ln703_604_fu_80305_p2() {
    mul_ln703_604_fu_80305_p2 = (!mul_ln703_604_fu_80305_p0.read().is_01() || !mul_ln703_604_fu_80305_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_604_fu_80305_p0.read()) * sc_biguint<6>(mul_ln703_604_fu_80305_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_606_fu_85805_p0() {
    mul_ln703_606_fu_85805_p0 = shl_ln728_601_fu_85790_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_606_fu_85805_p1() {
    mul_ln703_606_fu_85805_p1 =  (sc_lv<6>) (mul_ln703_606_fu_85805_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_606_fu_85805_p10() {
    mul_ln703_606_fu_85805_p10 = esl_zext<12,6>(reg_56487.read());
}

void Block_codeRepl202676::thread_mul_ln703_606_fu_85805_p2() {
    mul_ln703_606_fu_85805_p2 = (!mul_ln703_606_fu_85805_p0.read().is_01() || !mul_ln703_606_fu_85805_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_606_fu_85805_p0.read()) * sc_biguint<6>(mul_ln703_606_fu_85805_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_608_fu_80343_p0() {
    mul_ln703_608_fu_80343_p0 = shl_ln728_603_fu_80329_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_608_fu_80343_p1() {
    mul_ln703_608_fu_80343_p1 =  (sc_lv<6>) (mul_ln703_608_fu_80343_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_608_fu_80343_p10() {
    mul_ln703_608_fu_80343_p10 = esl_zext<12,6>(conv4_window_buffer_554_reg_190095.read());
}

void Block_codeRepl202676::thread_mul_ln703_608_fu_80343_p2() {
    mul_ln703_608_fu_80343_p2 = (!mul_ln703_608_fu_80343_p0.read().is_01() || !mul_ln703_608_fu_80343_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_608_fu_80343_p0.read()) * sc_biguint<6>(mul_ln703_608_fu_80343_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_60_fu_60164_p0() {
    mul_ln703_60_fu_60164_p0 = shl_ln728_57_fu_60149_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_60_fu_60164_p1() {
    mul_ln703_60_fu_60164_p1 =  (sc_lv<6>) (mul_ln703_60_fu_60164_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_60_fu_60164_p10() {
    mul_ln703_60_fu_60164_p10 = esl_zext<12,6>(conv2_window_buffer_148_reg_177890.read());
}

void Block_codeRepl202676::thread_mul_ln703_60_fu_60164_p2() {
    mul_ln703_60_fu_60164_p2 = (!mul_ln703_60_fu_60164_p0.read().is_01() || !mul_ln703_60_fu_60164_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_60_fu_60164_p0.read()) * sc_biguint<6>(mul_ln703_60_fu_60164_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_611_fu_77722_p0() {
    mul_ln703_611_fu_77722_p0 = shl_ln728_606_fu_77708_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_611_fu_77722_p1() {
    mul_ln703_611_fu_77722_p1 =  (sc_lv<6>) (mul_ln703_611_fu_77722_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_611_fu_77722_p10() {
    mul_ln703_611_fu_77722_p10 = esl_zext<12,6>(conv4_window_buffer_546_reg_190055.read());
}

void Block_codeRepl202676::thread_mul_ln703_611_fu_77722_p2() {
    mul_ln703_611_fu_77722_p2 = (!mul_ln703_611_fu_77722_p0.read().is_01() || !mul_ln703_611_fu_77722_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_611_fu_77722_p0.read()) * sc_biguint<6>(mul_ln703_611_fu_77722_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_613_fu_77830_p0() {
    mul_ln703_613_fu_77830_p0 = shl_ln728_608_fu_77816_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_613_fu_77830_p1() {
    mul_ln703_613_fu_77830_p1 =  (sc_lv<6>) (mul_ln703_613_fu_77830_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_613_fu_77830_p10() {
    mul_ln703_613_fu_77830_p10 = esl_zext<12,6>(conv4_window_buffer_543_reg_190040.read());
}

void Block_codeRepl202676::thread_mul_ln703_613_fu_77830_p2() {
    mul_ln703_613_fu_77830_p2 = (!mul_ln703_613_fu_77830_p0.read().is_01() || !mul_ln703_613_fu_77830_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_613_fu_77830_p0.read()) * sc_biguint<6>(mul_ln703_613_fu_77830_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_615_fu_79151_p0() {
    mul_ln703_615_fu_79151_p0 = shl_ln728_610_fu_79136_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_615_fu_79151_p1() {
    mul_ln703_615_fu_79151_p1 =  (sc_lv<6>) (mul_ln703_615_fu_79151_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_615_fu_79151_p10() {
    mul_ln703_615_fu_79151_p10 = esl_zext<12,6>(conv4_pad_pipe_4_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_615_fu_79151_p2() {
    mul_ln703_615_fu_79151_p2 = (!mul_ln703_615_fu_79151_p0.read().is_01() || !mul_ln703_615_fu_79151_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_615_fu_79151_p0.read()) * sc_biguint<6>(mul_ln703_615_fu_79151_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_617_fu_77850_p0() {
    mul_ln703_617_fu_77850_p0 = shl_ln728_612_fu_77836_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_617_fu_77850_p1() {
    mul_ln703_617_fu_77850_p1 =  (sc_lv<6>) (mul_ln703_617_fu_77850_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_617_fu_77850_p10() {
    mul_ln703_617_fu_77850_p10 = esl_zext<12,6>(conv4_window_buffer_615_reg_190403.read());
}

void Block_codeRepl202676::thread_mul_ln703_617_fu_77850_p2() {
    mul_ln703_617_fu_77850_p2 = (!mul_ln703_617_fu_77850_p0.read().is_01() || !mul_ln703_617_fu_77850_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_617_fu_77850_p0.read()) * sc_biguint<6>(mul_ln703_617_fu_77850_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_619_fu_77870_p0() {
    mul_ln703_619_fu_77870_p0 = shl_ln728_614_fu_77856_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_619_fu_77870_p1() {
    mul_ln703_619_fu_77870_p1 =  (sc_lv<6>) (mul_ln703_619_fu_77870_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_619_fu_77870_p10() {
    mul_ln703_619_fu_77870_p10 = esl_zext<12,6>(conv4_window_buffer_619_reg_190423.read());
}

void Block_codeRepl202676::thread_mul_ln703_619_fu_77870_p2() {
    mul_ln703_619_fu_77870_p2 = (!mul_ln703_619_fu_77870_p0.read().is_01() || !mul_ln703_619_fu_77870_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_619_fu_77870_p0.read()) * sc_biguint<6>(mul_ln703_619_fu_77870_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_621_fu_80422_p0() {
    mul_ln703_621_fu_80422_p0 = shl_ln728_616_fu_80408_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_621_fu_80422_p1() {
    mul_ln703_621_fu_80422_p1 =  (sc_lv<6>) (mul_ln703_621_fu_80422_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_621_fu_80422_p10() {
    mul_ln703_621_fu_80422_p10 = esl_zext<12,6>(conv4_window_buffer_419_reg_194000.read());
}

void Block_codeRepl202676::thread_mul_ln703_621_fu_80422_p2() {
    mul_ln703_621_fu_80422_p2 = (!mul_ln703_621_fu_80422_p0.read().is_01() || !mul_ln703_621_fu_80422_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_621_fu_80422_p0.read()) * sc_biguint<6>(mul_ln703_621_fu_80422_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_623_fu_80460_p0() {
    mul_ln703_623_fu_80460_p0 = shl_ln728_618_fu_80446_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_623_fu_80460_p1() {
    mul_ln703_623_fu_80460_p1 =  (sc_lv<6>) (mul_ln703_623_fu_80460_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_623_fu_80460_p10() {
    mul_ln703_623_fu_80460_p10 = esl_zext<12,6>(conv4_window_buffer_621_reg_190433.read());
}

void Block_codeRepl202676::thread_mul_ln703_623_fu_80460_p2() {
    mul_ln703_623_fu_80460_p2 = (!mul_ln703_623_fu_80460_p0.read().is_01() || !mul_ln703_623_fu_80460_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_623_fu_80460_p0.read()) * sc_biguint<6>(mul_ln703_623_fu_80460_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_625_fu_79171_p0() {
    mul_ln703_625_fu_79171_p0 = shl_ln728_620_fu_79157_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_625_fu_79171_p1() {
    mul_ln703_625_fu_79171_p1 =  (sc_lv<6>) (mul_ln703_625_fu_79171_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_625_fu_79171_p10() {
    mul_ln703_625_fu_79171_p10 = esl_zext<12,6>(conv4_window_buffer_625_reg_190453.read());
}

void Block_codeRepl202676::thread_mul_ln703_625_fu_79171_p2() {
    mul_ln703_625_fu_79171_p2 = (!mul_ln703_625_fu_79171_p0.read().is_01() || !mul_ln703_625_fu_79171_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_625_fu_79171_p0.read()) * sc_biguint<6>(mul_ln703_625_fu_79171_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_628_fu_77890_p0() {
    mul_ln703_628_fu_77890_p0 = shl_ln728_623_fu_77876_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_628_fu_77890_p1() {
    mul_ln703_628_fu_77890_p1 =  (sc_lv<6>) (mul_ln703_628_fu_77890_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_628_fu_77890_p10() {
    mul_ln703_628_fu_77890_p10 = esl_zext<12,6>(conv4_window_buffer_628_reg_190468.read());
}

void Block_codeRepl202676::thread_mul_ln703_628_fu_77890_p2() {
    mul_ln703_628_fu_77890_p2 = (!mul_ln703_628_fu_77890_p0.read().is_01() || !mul_ln703_628_fu_77890_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_628_fu_77890_p0.read()) * sc_biguint<6>(mul_ln703_628_fu_77890_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_62_fu_60404_p0() {
    mul_ln703_62_fu_60404_p0 = shl_ln728_59_fu_60389_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_62_fu_60404_p1() {
    mul_ln703_62_fu_60404_p1 =  (sc_lv<6>) (mul_ln703_62_fu_60404_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_62_fu_60404_p10() {
    mul_ln703_62_fu_60404_p10 = esl_zext<12,6>(conv2_window_buffer_151_reg_177905.read());
}

void Block_codeRepl202676::thread_mul_ln703_62_fu_60404_p2() {
    mul_ln703_62_fu_60404_p2 = (!mul_ln703_62_fu_60404_p0.read().is_01() || !mul_ln703_62_fu_60404_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_62_fu_60404_p0.read()) * sc_biguint<6>(mul_ln703_62_fu_60404_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_630_fu_80498_p0() {
    mul_ln703_630_fu_80498_p0 = shl_ln728_625_fu_80484_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_630_fu_80498_p1() {
    mul_ln703_630_fu_80498_p1 =  (sc_lv<6>) (mul_ln703_630_fu_80498_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_630_fu_80498_p10() {
    mul_ln703_630_fu_80498_p10 = esl_zext<12,6>(conv4_window_buffer_421_reg_194010.read());
}

void Block_codeRepl202676::thread_mul_ln703_630_fu_80498_p2() {
    mul_ln703_630_fu_80498_p2 = (!mul_ln703_630_fu_80498_p0.read().is_01() || !mul_ln703_630_fu_80498_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_630_fu_80498_p0.read()) * sc_biguint<6>(mul_ln703_630_fu_80498_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_632_fu_80536_p0() {
    mul_ln703_632_fu_80536_p0 = shl_ln728_627_fu_80522_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_632_fu_80536_p1() {
    mul_ln703_632_fu_80536_p1 =  (sc_lv<6>) (mul_ln703_632_fu_80536_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_632_fu_80536_p10() {
    mul_ln703_632_fu_80536_p10 = esl_zext<12,6>(conv4_window_buffer_630_reg_190478.read());
}

void Block_codeRepl202676::thread_mul_ln703_632_fu_80536_p2() {
    mul_ln703_632_fu_80536_p2 = (!mul_ln703_632_fu_80536_p0.read().is_01() || !mul_ln703_632_fu_80536_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_632_fu_80536_p0.read()) * sc_biguint<6>(mul_ln703_632_fu_80536_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_634_fu_79191_p0() {
    mul_ln703_634_fu_79191_p0 = shl_ln728_629_fu_79177_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_634_fu_79191_p1() {
    mul_ln703_634_fu_79191_p1 =  (sc_lv<6>) (mul_ln703_634_fu_79191_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_634_fu_79191_p10() {
    mul_ln703_634_fu_79191_p10 = esl_zext<12,6>(conv4_window_buffer_634_reg_190499.read());
}

void Block_codeRepl202676::thread_mul_ln703_634_fu_79191_p2() {
    mul_ln703_634_fu_79191_p2 = (!mul_ln703_634_fu_79191_p0.read().is_01() || !mul_ln703_634_fu_79191_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_634_fu_79191_p0.read()) * sc_biguint<6>(mul_ln703_634_fu_79191_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_637_fu_77910_p0() {
    mul_ln703_637_fu_77910_p0 = shl_ln728_632_fu_77896_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_637_fu_77910_p1() {
    mul_ln703_637_fu_77910_p1 =  (sc_lv<6>) (mul_ln703_637_fu_77910_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_637_fu_77910_p10() {
    mul_ln703_637_fu_77910_p10 = esl_zext<12,6>(conv4_window_buffer_637_reg_190514.read());
}

void Block_codeRepl202676::thread_mul_ln703_637_fu_77910_p2() {
    mul_ln703_637_fu_77910_p2 = (!mul_ln703_637_fu_77910_p0.read().is_01() || !mul_ln703_637_fu_77910_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_637_fu_77910_p0.read()) * sc_biguint<6>(mul_ln703_637_fu_77910_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_639_fu_80574_p0() {
    mul_ln703_639_fu_80574_p0 = shl_ln728_634_fu_80560_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_639_fu_80574_p1() {
    mul_ln703_639_fu_80574_p1 =  (sc_lv<6>) (mul_ln703_639_fu_80574_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_639_fu_80574_p10() {
    mul_ln703_639_fu_80574_p10 = esl_zext<12,6>(conv4_window_buffer_423_reg_194020.read());
}

void Block_codeRepl202676::thread_mul_ln703_639_fu_80574_p2() {
    mul_ln703_639_fu_80574_p2 = (!mul_ln703_639_fu_80574_p0.read().is_01() || !mul_ln703_639_fu_80574_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_639_fu_80574_p0.read()) * sc_biguint<6>(mul_ln703_639_fu_80574_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_641_fu_80641_p0() {
    mul_ln703_641_fu_80641_p0 = shl_ln728_636_fu_80627_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_641_fu_80641_p1() {
    mul_ln703_641_fu_80641_p1 =  (sc_lv<6>) (mul_ln703_641_fu_80641_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_641_fu_80641_p10() {
    mul_ln703_641_fu_80641_p10 = esl_zext<12,6>(conv4_window_buffer_639_reg_190524.read());
}

void Block_codeRepl202676::thread_mul_ln703_641_fu_80641_p2() {
    mul_ln703_641_fu_80641_p2 = (!mul_ln703_641_fu_80641_p0.read().is_01() || !mul_ln703_641_fu_80641_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_641_fu_80641_p0.read()) * sc_biguint<6>(mul_ln703_641_fu_80641_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_643_fu_79211_p0() {
    mul_ln703_643_fu_79211_p0 = shl_ln728_638_fu_79197_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_643_fu_79211_p1() {
    mul_ln703_643_fu_79211_p1 =  (sc_lv<6>) (mul_ln703_643_fu_79211_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_643_fu_79211_p10() {
    mul_ln703_643_fu_79211_p10 = esl_zext<12,6>(conv4_window_buffer_643_reg_190544.read());
}

void Block_codeRepl202676::thread_mul_ln703_643_fu_79211_p2() {
    mul_ln703_643_fu_79211_p2 = (!mul_ln703_643_fu_79211_p0.read().is_01() || !mul_ln703_643_fu_79211_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_643_fu_79211_p0.read()) * sc_biguint<6>(mul_ln703_643_fu_79211_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_646_fu_78032_p0() {
    mul_ln703_646_fu_78032_p0 = shl_ln728_641_fu_78018_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_646_fu_78032_p1() {
    mul_ln703_646_fu_78032_p1 =  (sc_lv<6>) (mul_ln703_646_fu_78032_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_646_fu_78032_p10() {
    mul_ln703_646_fu_78032_p10 = esl_zext<12,6>(conv4_window_buffer_646_reg_190559.read());
}

void Block_codeRepl202676::thread_mul_ln703_646_fu_78032_p2() {
    mul_ln703_646_fu_78032_p2 = (!mul_ln703_646_fu_78032_p0.read().is_01() || !mul_ln703_646_fu_78032_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_646_fu_78032_p0.read()) * sc_biguint<6>(mul_ln703_646_fu_78032_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_648_fu_80679_p0() {
    mul_ln703_648_fu_80679_p0 = shl_ln728_643_fu_80665_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_648_fu_80679_p1() {
    mul_ln703_648_fu_80679_p1 =  (sc_lv<6>) (mul_ln703_648_fu_80679_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_648_fu_80679_p10() {
    mul_ln703_648_fu_80679_p10 = esl_zext<12,6>(conv4_window_buffer_425_reg_194030.read());
}

void Block_codeRepl202676::thread_mul_ln703_648_fu_80679_p2() {
    mul_ln703_648_fu_80679_p2 = (!mul_ln703_648_fu_80679_p0.read().is_01() || !mul_ln703_648_fu_80679_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_648_fu_80679_p0.read()) * sc_biguint<6>(mul_ln703_648_fu_80679_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_64_fu_61190_p0() {
    mul_ln703_64_fu_61190_p0 = shl_ln728_61_fu_61175_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_64_fu_61190_p1() {
    mul_ln703_64_fu_61190_p1 =  (sc_lv<6>) (mul_ln703_64_fu_61190_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_64_fu_61190_p10() {
    mul_ln703_64_fu_61190_p10 = esl_zext<12,6>(reg_56251.read());
}

void Block_codeRepl202676::thread_mul_ln703_64_fu_61190_p2() {
    mul_ln703_64_fu_61190_p2 = (!mul_ln703_64_fu_61190_p0.read().is_01() || !mul_ln703_64_fu_61190_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_64_fu_61190_p0.read()) * sc_biguint<6>(mul_ln703_64_fu_61190_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_650_fu_80717_p0() {
    mul_ln703_650_fu_80717_p0 = shl_ln728_645_fu_80703_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_650_fu_80717_p1() {
    mul_ln703_650_fu_80717_p1 =  (sc_lv<6>) (mul_ln703_650_fu_80717_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_650_fu_80717_p10() {
    mul_ln703_650_fu_80717_p10 = esl_zext<12,6>(conv4_window_buffer_648_reg_190569.read());
}

void Block_codeRepl202676::thread_mul_ln703_650_fu_80717_p2() {
    mul_ln703_650_fu_80717_p2 = (!mul_ln703_650_fu_80717_p0.read().is_01() || !mul_ln703_650_fu_80717_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_650_fu_80717_p0.read()) * sc_biguint<6>(mul_ln703_650_fu_80717_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_652_fu_79333_p0() {
    mul_ln703_652_fu_79333_p0 = shl_ln728_647_fu_79319_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_652_fu_79333_p1() {
    mul_ln703_652_fu_79333_p1 =  (sc_lv<6>) (mul_ln703_652_fu_79333_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_652_fu_79333_p10() {
    mul_ln703_652_fu_79333_p10 = esl_zext<12,6>(conv4_window_buffer_652_reg_190589.read());
}

void Block_codeRepl202676::thread_mul_ln703_652_fu_79333_p2() {
    mul_ln703_652_fu_79333_p2 = (!mul_ln703_652_fu_79333_p0.read().is_01() || !mul_ln703_652_fu_79333_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_652_fu_79333_p0.read()) * sc_biguint<6>(mul_ln703_652_fu_79333_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_655_fu_78052_p0() {
    mul_ln703_655_fu_78052_p0 = shl_ln728_650_fu_78038_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_655_fu_78052_p1() {
    mul_ln703_655_fu_78052_p1 =  (sc_lv<6>) (mul_ln703_655_fu_78052_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_655_fu_78052_p10() {
    mul_ln703_655_fu_78052_p10 = esl_zext<12,6>(conv4_window_buffer_655_reg_190604.read());
}

void Block_codeRepl202676::thread_mul_ln703_655_fu_78052_p2() {
    mul_ln703_655_fu_78052_p2 = (!mul_ln703_655_fu_78052_p0.read().is_01() || !mul_ln703_655_fu_78052_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_655_fu_78052_p0.read()) * sc_biguint<6>(mul_ln703_655_fu_78052_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_657_fu_80755_p0() {
    mul_ln703_657_fu_80755_p0 = shl_ln728_652_fu_80741_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_657_fu_80755_p1() {
    mul_ln703_657_fu_80755_p1 =  (sc_lv<6>) (mul_ln703_657_fu_80755_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_657_fu_80755_p10() {
    mul_ln703_657_fu_80755_p10 = esl_zext<12,6>(conv4_window_buffer_427_reg_194040.read());
}

void Block_codeRepl202676::thread_mul_ln703_657_fu_80755_p2() {
    mul_ln703_657_fu_80755_p2 = (!mul_ln703_657_fu_80755_p0.read().is_01() || !mul_ln703_657_fu_80755_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_657_fu_80755_p0.read()) * sc_biguint<6>(mul_ln703_657_fu_80755_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_659_fu_80793_p0() {
    mul_ln703_659_fu_80793_p0 = shl_ln728_654_fu_80779_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_659_fu_80793_p1() {
    mul_ln703_659_fu_80793_p1 =  (sc_lv<6>) (mul_ln703_659_fu_80793_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_659_fu_80793_p10() {
    mul_ln703_659_fu_80793_p10 = esl_zext<12,6>(conv4_window_buffer_657_reg_190614.read());
}

void Block_codeRepl202676::thread_mul_ln703_659_fu_80793_p2() {
    mul_ln703_659_fu_80793_p2 = (!mul_ln703_659_fu_80793_p0.read().is_01() || !mul_ln703_659_fu_80793_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_659_fu_80793_p0.read()) * sc_biguint<6>(mul_ln703_659_fu_80793_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_661_fu_79353_p0() {
    mul_ln703_661_fu_79353_p0 = shl_ln728_656_fu_79339_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_661_fu_79353_p1() {
    mul_ln703_661_fu_79353_p1 =  (sc_lv<6>) (mul_ln703_661_fu_79353_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_661_fu_79353_p10() {
    mul_ln703_661_fu_79353_p10 = esl_zext<12,6>(conv4_window_buffer_661_reg_190634.read());
}

void Block_codeRepl202676::thread_mul_ln703_661_fu_79353_p2() {
    mul_ln703_661_fu_79353_p2 = (!mul_ln703_661_fu_79353_p0.read().is_01() || !mul_ln703_661_fu_79353_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_661_fu_79353_p0.read()) * sc_biguint<6>(mul_ln703_661_fu_79353_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_664_fu_78072_p0() {
    mul_ln703_664_fu_78072_p0 = shl_ln728_659_fu_78058_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_664_fu_78072_p1() {
    mul_ln703_664_fu_78072_p1 =  (sc_lv<6>) (mul_ln703_664_fu_78072_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_664_fu_78072_p10() {
    mul_ln703_664_fu_78072_p10 = esl_zext<12,6>(conv4_window_buffer_664_reg_190649.read());
}

void Block_codeRepl202676::thread_mul_ln703_664_fu_78072_p2() {
    mul_ln703_664_fu_78072_p2 = (!mul_ln703_664_fu_78072_p0.read().is_01() || !mul_ln703_664_fu_78072_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_664_fu_78072_p0.read()) * sc_biguint<6>(mul_ln703_664_fu_78072_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_666_fu_80867_p0() {
    mul_ln703_666_fu_80867_p0 = shl_ln728_661_fu_80853_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_666_fu_80867_p1() {
    mul_ln703_666_fu_80867_p1 =  (sc_lv<6>) (mul_ln703_666_fu_80867_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_666_fu_80867_p10() {
    mul_ln703_666_fu_80867_p10 = esl_zext<12,6>(conv4_window_buffer_429_reg_194050.read());
}

void Block_codeRepl202676::thread_mul_ln703_666_fu_80867_p2() {
    mul_ln703_666_fu_80867_p2 = (!mul_ln703_666_fu_80867_p0.read().is_01() || !mul_ln703_666_fu_80867_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_666_fu_80867_p0.read()) * sc_biguint<6>(mul_ln703_666_fu_80867_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_668_fu_80905_p0() {
    mul_ln703_668_fu_80905_p0 = shl_ln728_663_fu_80891_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_668_fu_80905_p1() {
    mul_ln703_668_fu_80905_p1 =  (sc_lv<6>) (mul_ln703_668_fu_80905_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_668_fu_80905_p10() {
    mul_ln703_668_fu_80905_p10 = esl_zext<12,6>(conv4_window_buffer_666_reg_190659.read());
}

void Block_codeRepl202676::thread_mul_ln703_668_fu_80905_p2() {
    mul_ln703_668_fu_80905_p2 = (!mul_ln703_668_fu_80905_p0.read().is_01() || !mul_ln703_668_fu_80905_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_668_fu_80905_p0.read()) * sc_biguint<6>(mul_ln703_668_fu_80905_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_66_fu_60185_p0() {
    mul_ln703_66_fu_60185_p0 = shl_ln728_63_fu_60170_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_66_fu_60185_p1() {
    mul_ln703_66_fu_60185_p1 =  (sc_lv<6>) (mul_ln703_66_fu_60185_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_66_fu_60185_p10() {
    mul_ln703_66_fu_60185_p10 = esl_zext<12,6>(conv2_window_buffer_152_reg_177910.read());
}

void Block_codeRepl202676::thread_mul_ln703_66_fu_60185_p2() {
    mul_ln703_66_fu_60185_p2 = (!mul_ln703_66_fu_60185_p0.read().is_01() || !mul_ln703_66_fu_60185_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_66_fu_60185_p0.read()) * sc_biguint<6>(mul_ln703_66_fu_60185_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_670_fu_79373_p0() {
    mul_ln703_670_fu_79373_p0 = shl_ln728_665_fu_79359_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_670_fu_79373_p1() {
    mul_ln703_670_fu_79373_p1 =  (sc_lv<6>) (mul_ln703_670_fu_79373_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_670_fu_79373_p10() {
    mul_ln703_670_fu_79373_p10 = esl_zext<12,6>(conv4_window_buffer_670_reg_190679.read());
}

void Block_codeRepl202676::thread_mul_ln703_670_fu_79373_p2() {
    mul_ln703_670_fu_79373_p2 = (!mul_ln703_670_fu_79373_p0.read().is_01() || !mul_ln703_670_fu_79373_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_670_fu_79373_p0.read()) * sc_biguint<6>(mul_ln703_670_fu_79373_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_673_fu_78092_p0() {
    mul_ln703_673_fu_78092_p0 = shl_ln728_668_fu_78078_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_673_fu_78092_p1() {
    mul_ln703_673_fu_78092_p1 =  (sc_lv<6>) (mul_ln703_673_fu_78092_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_673_fu_78092_p10() {
    mul_ln703_673_fu_78092_p10 = esl_zext<12,6>(conv4_window_buffer_673_reg_190694.read());
}

void Block_codeRepl202676::thread_mul_ln703_673_fu_78092_p2() {
    mul_ln703_673_fu_78092_p2 = (!mul_ln703_673_fu_78092_p0.read().is_01() || !mul_ln703_673_fu_78092_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_673_fu_78092_p0.read()) * sc_biguint<6>(mul_ln703_673_fu_78092_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_675_fu_80943_p0() {
    mul_ln703_675_fu_80943_p0 = shl_ln728_670_fu_80929_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_675_fu_80943_p1() {
    mul_ln703_675_fu_80943_p1 =  (sc_lv<6>) (mul_ln703_675_fu_80943_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_675_fu_80943_p10() {
    mul_ln703_675_fu_80943_p10 = esl_zext<12,6>(conv4_window_buffer_431_reg_194060.read());
}

void Block_codeRepl202676::thread_mul_ln703_675_fu_80943_p2() {
    mul_ln703_675_fu_80943_p2 = (!mul_ln703_675_fu_80943_p0.read().is_01() || !mul_ln703_675_fu_80943_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_675_fu_80943_p0.read()) * sc_biguint<6>(mul_ln703_675_fu_80943_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_677_fu_80981_p0() {
    mul_ln703_677_fu_80981_p0 = shl_ln728_672_fu_80967_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_677_fu_80981_p1() {
    mul_ln703_677_fu_80981_p1 =  (sc_lv<6>) (mul_ln703_677_fu_80981_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_677_fu_80981_p10() {
    mul_ln703_677_fu_80981_p10 = esl_zext<12,6>(conv4_window_buffer_675_reg_190704.read());
}

void Block_codeRepl202676::thread_mul_ln703_677_fu_80981_p2() {
    mul_ln703_677_fu_80981_p2 = (!mul_ln703_677_fu_80981_p0.read().is_01() || !mul_ln703_677_fu_80981_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_677_fu_80981_p0.read()) * sc_biguint<6>(mul_ln703_677_fu_80981_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_679_fu_79393_p0() {
    mul_ln703_679_fu_79393_p0 = shl_ln728_674_fu_79379_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_679_fu_79393_p1() {
    mul_ln703_679_fu_79393_p1 =  (sc_lv<6>) (mul_ln703_679_fu_79393_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_679_fu_79393_p10() {
    mul_ln703_679_fu_79393_p10 = esl_zext<12,6>(conv4_window_buffer_679_reg_190724.read());
}

void Block_codeRepl202676::thread_mul_ln703_679_fu_79393_p2() {
    mul_ln703_679_fu_79393_p2 = (!mul_ln703_679_fu_79393_p0.read().is_01() || !mul_ln703_679_fu_79393_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_679_fu_79393_p0.read()) * sc_biguint<6>(mul_ln703_679_fu_79393_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_682_fu_78112_p0() {
    mul_ln703_682_fu_78112_p0 = shl_ln728_677_fu_78098_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_682_fu_78112_p1() {
    mul_ln703_682_fu_78112_p1 =  (sc_lv<6>) (mul_ln703_682_fu_78112_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_682_fu_78112_p10() {
    mul_ln703_682_fu_78112_p10 = esl_zext<12,6>(conv4_window_buffer_677_reg_190714.read());
}

void Block_codeRepl202676::thread_mul_ln703_682_fu_78112_p2() {
    mul_ln703_682_fu_78112_p2 = (!mul_ln703_682_fu_78112_p0.read().is_01() || !mul_ln703_682_fu_78112_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_682_fu_78112_p0.read()) * sc_biguint<6>(mul_ln703_682_fu_78112_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_684_fu_78234_p0() {
    mul_ln703_684_fu_78234_p0 = shl_ln728_679_fu_78220_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_684_fu_78234_p1() {
    mul_ln703_684_fu_78234_p1 =  (sc_lv<6>) (mul_ln703_684_fu_78234_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_684_fu_78234_p10() {
    mul_ln703_684_fu_78234_p10 = esl_zext<12,6>(conv4_window_buffer_433_reg_194070.read());
}

void Block_codeRepl202676::thread_mul_ln703_684_fu_78234_p2() {
    mul_ln703_684_fu_78234_p2 = (!mul_ln703_684_fu_78234_p0.read().is_01() || !mul_ln703_684_fu_78234_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_684_fu_78234_p0.read()) * sc_biguint<6>(mul_ln703_684_fu_78234_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_686_fu_78254_p0() {
    mul_ln703_686_fu_78254_p0 = shl_ln728_681_fu_78240_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_686_fu_78254_p1() {
    mul_ln703_686_fu_78254_p1 =  (sc_lv<6>) (mul_ln703_686_fu_78254_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_686_fu_78254_p10() {
    mul_ln703_686_fu_78254_p10 = esl_zext<12,6>(conv4_window_buffer_668_reg_190669.read());
}

void Block_codeRepl202676::thread_mul_ln703_686_fu_78254_p2() {
    mul_ln703_686_fu_78254_p2 = (!mul_ln703_686_fu_78254_p0.read().is_01() || !mul_ln703_686_fu_78254_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_686_fu_78254_p0.read()) * sc_biguint<6>(mul_ln703_686_fu_78254_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_688_fu_76239_p0() {
    mul_ln703_688_fu_76239_p0 = shl_ln728_683_fu_76224_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_688_fu_76239_p1() {
    mul_ln703_688_fu_76239_p1 =  (sc_lv<6>) (mul_ln703_688_fu_76239_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_688_fu_76239_p10() {
    mul_ln703_688_fu_76239_p10 = esl_zext<12,6>(conv4_window_buffer_665_reg_190654.read());
}

void Block_codeRepl202676::thread_mul_ln703_688_fu_76239_p2() {
    mul_ln703_688_fu_76239_p2 = (!mul_ln703_688_fu_76239_p0.read().is_01() || !mul_ln703_688_fu_76239_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_688_fu_76239_p0.read()) * sc_biguint<6>(mul_ln703_688_fu_76239_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_690_fu_78274_p0() {
    mul_ln703_690_fu_78274_p0 = shl_ln728_685_fu_78260_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_690_fu_78274_p1() {
    mul_ln703_690_fu_78274_p1 =  (sc_lv<6>) (mul_ln703_690_fu_78274_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_690_fu_78274_p10() {
    mul_ln703_690_fu_78274_p10 = esl_zext<12,6>(conv4_window_buffer_434_reg_194075.read());
}

void Block_codeRepl202676::thread_mul_ln703_690_fu_78274_p2() {
    mul_ln703_690_fu_78274_p2 = (!mul_ln703_690_fu_78274_p0.read().is_01() || !mul_ln703_690_fu_78274_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_690_fu_78274_p0.read()) * sc_biguint<6>(mul_ln703_690_fu_78274_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_692_fu_81019_p0() {
    mul_ln703_692_fu_81019_p0 = shl_ln728_687_fu_81005_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_692_fu_81019_p1() {
    mul_ln703_692_fu_81019_p1 =  (sc_lv<6>) (mul_ln703_692_fu_81019_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_692_fu_81019_p10() {
    mul_ln703_692_fu_81019_p10 = esl_zext<12,6>(conv4_window_buffer_656_reg_190609.read());
}

void Block_codeRepl202676::thread_mul_ln703_692_fu_81019_p2() {
    mul_ln703_692_fu_81019_p2 = (!mul_ln703_692_fu_81019_p0.read().is_01() || !mul_ln703_692_fu_81019_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_692_fu_81019_p0.read()) * sc_biguint<6>(mul_ln703_692_fu_81019_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_694_fu_81081_p0() {
    mul_ln703_694_fu_81081_p0 = shl_ln728_689_fu_81067_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_694_fu_81081_p1() {
    mul_ln703_694_fu_81081_p1 =  (sc_lv<6>) (mul_ln703_694_fu_81081_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_694_fu_81081_p10() {
    mul_ln703_694_fu_81081_p10 = esl_zext<12,6>(conv4_window_buffer_653_reg_190594.read());
}

void Block_codeRepl202676::thread_mul_ln703_694_fu_81081_p2() {
    mul_ln703_694_fu_81081_p2 = (!mul_ln703_694_fu_81081_p0.read().is_01() || !mul_ln703_694_fu_81081_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_694_fu_81081_p0.read()) * sc_biguint<6>(mul_ln703_694_fu_81081_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_696_fu_86028_p0() {
    mul_ln703_696_fu_86028_p0 = shl_ln728_691_fu_86014_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_696_fu_86028_p1() {
    mul_ln703_696_fu_86028_p1 =  (sc_lv<6>) (mul_ln703_696_fu_86028_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_696_fu_86028_p10() {
    mul_ln703_696_fu_86028_p10 = esl_zext<12,6>(tmp_V_534_reg_200010.read());
}

void Block_codeRepl202676::thread_mul_ln703_696_fu_86028_p2() {
    mul_ln703_696_fu_86028_p2 = (!mul_ln703_696_fu_86028_p0.read().is_01() || !mul_ln703_696_fu_86028_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_696_fu_86028_p0.read()) * sc_biguint<6>(mul_ln703_696_fu_86028_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_699_fu_78294_p0() {
    mul_ln703_699_fu_78294_p0 = shl_ln728_694_fu_78280_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_699_fu_78294_p1() {
    mul_ln703_699_fu_78294_p1 =  (sc_lv<6>) (mul_ln703_699_fu_78294_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_699_fu_78294_p10() {
    mul_ln703_699_fu_78294_p10 = esl_zext<12,6>(conv4_window_buffer_436_reg_194085.read());
}

void Block_codeRepl202676::thread_mul_ln703_699_fu_78294_p2() {
    mul_ln703_699_fu_78294_p2 = (!mul_ln703_699_fu_78294_p0.read().is_01() || !mul_ln703_699_fu_78294_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_699_fu_78294_p0.read()) * sc_biguint<6>(mul_ln703_699_fu_78294_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_69_fu_59989_p0() {
    mul_ln703_69_fu_59989_p0 = shl_ln728_66_fu_59974_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_69_fu_59989_p1() {
    mul_ln703_69_fu_59989_p1 =  (sc_lv<6>) (mul_ln703_69_fu_59989_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_69_fu_59989_p10() {
    mul_ln703_69_fu_59989_p10 = esl_zext<12,6>(conv2_window_buffer_154_reg_177920.read());
}

void Block_codeRepl202676::thread_mul_ln703_69_fu_59989_p2() {
    mul_ln703_69_fu_59989_p2 = (!mul_ln703_69_fu_59989_p0.read().is_01() || !mul_ln703_69_fu_59989_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_69_fu_59989_p0.read()) * sc_biguint<6>(mul_ln703_69_fu_59989_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_701_fu_81119_p0() {
    mul_ln703_701_fu_81119_p0 = shl_ln728_696_fu_81105_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_701_fu_81119_p1() {
    mul_ln703_701_fu_81119_p1 =  (sc_lv<6>) (mul_ln703_701_fu_81119_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_701_fu_81119_p10() {
    mul_ln703_701_fu_81119_p10 = esl_zext<12,6>(conv4_window_buffer_638_reg_190519.read());
}

void Block_codeRepl202676::thread_mul_ln703_701_fu_81119_p2() {
    mul_ln703_701_fu_81119_p2 = (!mul_ln703_701_fu_81119_p0.read().is_01() || !mul_ln703_701_fu_81119_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_701_fu_81119_p0.read()) * sc_biguint<6>(mul_ln703_701_fu_81119_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_703_fu_81157_p0() {
    mul_ln703_703_fu_81157_p0 = shl_ln728_698_fu_81143_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_703_fu_81157_p1() {
    mul_ln703_703_fu_81157_p1 =  (sc_lv<6>) (mul_ln703_703_fu_81157_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_703_fu_81157_p10() {
    mul_ln703_703_fu_81157_p10 = esl_zext<12,6>(conv4_window_buffer_635_reg_190504.read());
}

void Block_codeRepl202676::thread_mul_ln703_703_fu_81157_p2() {
    mul_ln703_703_fu_81157_p2 = (!mul_ln703_703_fu_81157_p0.read().is_01() || !mul_ln703_703_fu_81157_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_703_fu_81157_p0.read()) * sc_biguint<6>(mul_ln703_703_fu_81157_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_705_fu_86048_p0() {
    mul_ln703_705_fu_86048_p0 = shl_ln728_700_fu_86034_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_705_fu_86048_p1() {
    mul_ln703_705_fu_86048_p1 =  (sc_lv<6>) (mul_ln703_705_fu_86048_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_705_fu_86048_p10() {
    mul_ln703_705_fu_86048_p10 = esl_zext<12,6>(tmp_V_535_reg_200031.read());
}

void Block_codeRepl202676::thread_mul_ln703_705_fu_86048_p2() {
    mul_ln703_705_fu_86048_p2 = (!mul_ln703_705_fu_86048_p0.read().is_01() || !mul_ln703_705_fu_86048_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_705_fu_86048_p0.read()) * sc_biguint<6>(mul_ln703_705_fu_86048_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_708_fu_78314_p0() {
    mul_ln703_708_fu_78314_p0 = shl_ln728_703_fu_78300_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_708_fu_78314_p1() {
    mul_ln703_708_fu_78314_p1 =  (sc_lv<6>) (mul_ln703_708_fu_78314_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_708_fu_78314_p10() {
    mul_ln703_708_fu_78314_p10 = esl_zext<12,6>(conv4_window_buffer_438_reg_194095.read());
}

void Block_codeRepl202676::thread_mul_ln703_708_fu_78314_p2() {
    mul_ln703_708_fu_78314_p2 = (!mul_ln703_708_fu_78314_p0.read().is_01() || !mul_ln703_708_fu_78314_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_708_fu_78314_p0.read()) * sc_biguint<6>(mul_ln703_708_fu_78314_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_710_fu_81195_p0() {
    mul_ln703_710_fu_81195_p0 = shl_ln728_705_fu_81181_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_710_fu_81195_p1() {
    mul_ln703_710_fu_81195_p1 =  (sc_lv<6>) (mul_ln703_710_fu_81195_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_710_fu_81195_p10() {
    mul_ln703_710_fu_81195_p10 = esl_zext<12,6>(conv4_window_buffer_620_reg_190428.read());
}

void Block_codeRepl202676::thread_mul_ln703_710_fu_81195_p2() {
    mul_ln703_710_fu_81195_p2 = (!mul_ln703_710_fu_81195_p0.read().is_01() || !mul_ln703_710_fu_81195_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_710_fu_81195_p0.read()) * sc_biguint<6>(mul_ln703_710_fu_81195_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_712_fu_81233_p0() {
    mul_ln703_712_fu_81233_p0 = shl_ln728_707_fu_81219_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_712_fu_81233_p1() {
    mul_ln703_712_fu_81233_p1 =  (sc_lv<6>) (mul_ln703_712_fu_81233_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_712_fu_81233_p10() {
    mul_ln703_712_fu_81233_p10 = esl_zext<12,6>(conv4_window_buffer_617_reg_190413.read());
}

void Block_codeRepl202676::thread_mul_ln703_712_fu_81233_p2() {
    mul_ln703_712_fu_81233_p2 = (!mul_ln703_712_fu_81233_p0.read().is_01() || !mul_ln703_712_fu_81233_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_712_fu_81233_p0.read()) * sc_biguint<6>(mul_ln703_712_fu_81233_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_714_fu_86068_p0() {
    mul_ln703_714_fu_86068_p0 = shl_ln728_709_fu_86054_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_714_fu_86068_p1() {
    mul_ln703_714_fu_86068_p1 =  (sc_lv<6>) (mul_ln703_714_fu_86068_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_714_fu_86068_p10() {
    mul_ln703_714_fu_86068_p10 = esl_zext<12,6>(tmp_V_536_reg_200056.read());
}

void Block_codeRepl202676::thread_mul_ln703_714_fu_86068_p2() {
    mul_ln703_714_fu_86068_p2 = (!mul_ln703_714_fu_86068_p0.read().is_01() || !mul_ln703_714_fu_86068_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_714_fu_86068_p0.read()) * sc_biguint<6>(mul_ln703_714_fu_86068_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_717_fu_78436_p0() {
    mul_ln703_717_fu_78436_p0 = shl_ln728_712_fu_78422_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_717_fu_78436_p1() {
    mul_ln703_717_fu_78436_p1 =  (sc_lv<6>) (mul_ln703_717_fu_78436_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_717_fu_78436_p10() {
    mul_ln703_717_fu_78436_p10 = esl_zext<12,6>(conv4_window_buffer_440_reg_194105.read());
}

void Block_codeRepl202676::thread_mul_ln703_717_fu_78436_p2() {
    mul_ln703_717_fu_78436_p2 = (!mul_ln703_717_fu_78436_p0.read().is_01() || !mul_ln703_717_fu_78436_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_717_fu_78436_p0.read()) * sc_biguint<6>(mul_ln703_717_fu_78436_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_719_fu_81312_p0() {
    mul_ln703_719_fu_81312_p0 = shl_ln728_714_fu_81298_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_719_fu_81312_p1() {
    mul_ln703_719_fu_81312_p1 =  (sc_lv<6>) (mul_ln703_719_fu_81312_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_719_fu_81312_p10() {
    mul_ln703_719_fu_81312_p10 = esl_zext<12,6>(conv4_window_buffer_683_reg_190745.read());
}

void Block_codeRepl202676::thread_mul_ln703_719_fu_81312_p2() {
    mul_ln703_719_fu_81312_p2 = (!mul_ln703_719_fu_81312_p0.read().is_01() || !mul_ln703_719_fu_81312_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_719_fu_81312_p0.read()) * sc_biguint<6>(mul_ln703_719_fu_81312_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_71_fu_60458_p0() {
    mul_ln703_71_fu_60458_p0 = shl_ln728_68_fu_60443_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_71_fu_60458_p1() {
    mul_ln703_71_fu_60458_p1 =  (sc_lv<6>) (mul_ln703_71_fu_60458_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_71_fu_60458_p10() {
    mul_ln703_71_fu_60458_p10 = esl_zext<12,6>(conv2_window_buffer_157_reg_177935.read());
}

void Block_codeRepl202676::thread_mul_ln703_71_fu_60458_p2() {
    mul_ln703_71_fu_60458_p2 = (!mul_ln703_71_fu_60458_p0.read().is_01() || !mul_ln703_71_fu_60458_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_71_fu_60458_p0.read()) * sc_biguint<6>(mul_ln703_71_fu_60458_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_721_fu_81350_p0() {
    mul_ln703_721_fu_81350_p0 = shl_ln728_716_fu_81336_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_721_fu_81350_p1() {
    mul_ln703_721_fu_81350_p1 =  (sc_lv<6>) (mul_ln703_721_fu_81350_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_721_fu_81350_p10() {
    mul_ln703_721_fu_81350_p10 = esl_zext<12,6>(conv4_window_buffer_687_reg_190765.read());
}

void Block_codeRepl202676::thread_mul_ln703_721_fu_81350_p2() {
    mul_ln703_721_fu_81350_p2 = (!mul_ln703_721_fu_81350_p0.read().is_01() || !mul_ln703_721_fu_81350_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_721_fu_81350_p0.read()) * sc_biguint<6>(mul_ln703_721_fu_81350_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_723_fu_86088_p0() {
    mul_ln703_723_fu_86088_p0 = shl_ln728_718_fu_86074_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_723_fu_86088_p1() {
    mul_ln703_723_fu_86088_p1 =  (sc_lv<6>) (mul_ln703_723_fu_86088_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_723_fu_86088_p10() {
    mul_ln703_723_fu_86088_p10 = esl_zext<12,6>(tmp_V_537_reg_200096.read());
}

void Block_codeRepl202676::thread_mul_ln703_723_fu_86088_p2() {
    mul_ln703_723_fu_86088_p2 = (!mul_ln703_723_fu_86088_p0.read().is_01() || !mul_ln703_723_fu_86088_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_723_fu_86088_p0.read()) * sc_biguint<6>(mul_ln703_723_fu_86088_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_726_fu_78456_p0() {
    mul_ln703_726_fu_78456_p0 = shl_ln728_721_fu_78442_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_726_fu_78456_p1() {
    mul_ln703_726_fu_78456_p1 =  (sc_lv<6>) (mul_ln703_726_fu_78456_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_726_fu_78456_p10() {
    mul_ln703_726_fu_78456_p10 = esl_zext<12,6>(conv4_window_buffer_442_reg_194115.read());
}

void Block_codeRepl202676::thread_mul_ln703_726_fu_78456_p2() {
    mul_ln703_726_fu_78456_p2 = (!mul_ln703_726_fu_78456_p0.read().is_01() || !mul_ln703_726_fu_78456_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_726_fu_78456_p0.read()) * sc_biguint<6>(mul_ln703_726_fu_78456_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_728_fu_81388_p0() {
    mul_ln703_728_fu_81388_p0 = shl_ln728_723_fu_81374_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_728_fu_81388_p1() {
    mul_ln703_728_fu_81388_p1 =  (sc_lv<6>) (mul_ln703_728_fu_81388_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_728_fu_81388_p10() {
    mul_ln703_728_fu_81388_p10 = esl_zext<12,6>(conv4_window_buffer_692_reg_190791.read());
}

void Block_codeRepl202676::thread_mul_ln703_728_fu_81388_p2() {
    mul_ln703_728_fu_81388_p2 = (!mul_ln703_728_fu_81388_p0.read().is_01() || !mul_ln703_728_fu_81388_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_728_fu_81388_p0.read()) * sc_biguint<6>(mul_ln703_728_fu_81388_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_730_fu_81426_p0() {
    mul_ln703_730_fu_81426_p0 = shl_ln728_725_fu_81412_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_730_fu_81426_p1() {
    mul_ln703_730_fu_81426_p1 =  (sc_lv<6>) (mul_ln703_730_fu_81426_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_730_fu_81426_p10() {
    mul_ln703_730_fu_81426_p10 = esl_zext<12,6>(conv4_window_buffer_696_reg_190811.read());
}

void Block_codeRepl202676::thread_mul_ln703_730_fu_81426_p2() {
    mul_ln703_730_fu_81426_p2 = (!mul_ln703_730_fu_81426_p0.read().is_01() || !mul_ln703_730_fu_81426_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_730_fu_81426_p0.read()) * sc_biguint<6>(mul_ln703_730_fu_81426_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_732_fu_86108_p0() {
    mul_ln703_732_fu_86108_p0 = shl_ln728_727_fu_86094_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_732_fu_86108_p1() {
    mul_ln703_732_fu_86108_p1 =  (sc_lv<6>) (mul_ln703_732_fu_86108_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_732_fu_86108_p10() {
    mul_ln703_732_fu_86108_p10 = esl_zext<12,6>(tmp_V_538_reg_200141.read());
}

void Block_codeRepl202676::thread_mul_ln703_732_fu_86108_p2() {
    mul_ln703_732_fu_86108_p2 = (!mul_ln703_732_fu_86108_p0.read().is_01() || !mul_ln703_732_fu_86108_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_732_fu_86108_p0.read()) * sc_biguint<6>(mul_ln703_732_fu_86108_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_735_fu_78476_p0() {
    mul_ln703_735_fu_78476_p0 = shl_ln728_730_fu_78462_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_735_fu_78476_p1() {
    mul_ln703_735_fu_78476_p1 =  (sc_lv<6>) (mul_ln703_735_fu_78476_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_735_fu_78476_p10() {
    mul_ln703_735_fu_78476_p10 = esl_zext<12,6>(conv4_window_buffer_444_reg_194125.read());
}

void Block_codeRepl202676::thread_mul_ln703_735_fu_78476_p2() {
    mul_ln703_735_fu_78476_p2 = (!mul_ln703_735_fu_78476_p0.read().is_01() || !mul_ln703_735_fu_78476_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_735_fu_78476_p0.read()) * sc_biguint<6>(mul_ln703_735_fu_78476_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_737_fu_81467_p0() {
    mul_ln703_737_fu_81467_p0 = shl_ln728_732_fu_81453_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_737_fu_81467_p1() {
    mul_ln703_737_fu_81467_p1 =  (sc_lv<6>) (mul_ln703_737_fu_81467_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_737_fu_81467_p10() {
    mul_ln703_737_fu_81467_p10 = esl_zext<12,6>(conv4_window_buffer_701_reg_190836.read());
}

void Block_codeRepl202676::thread_mul_ln703_737_fu_81467_p2() {
    mul_ln703_737_fu_81467_p2 = (!mul_ln703_737_fu_81467_p0.read().is_01() || !mul_ln703_737_fu_81467_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_737_fu_81467_p0.read()) * sc_biguint<6>(mul_ln703_737_fu_81467_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_739_fu_81561_p0() {
    mul_ln703_739_fu_81561_p0 = shl_ln728_734_fu_81547_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_739_fu_81561_p1() {
    mul_ln703_739_fu_81561_p1 =  (sc_lv<6>) (mul_ln703_739_fu_81561_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_739_fu_81561_p10() {
    mul_ln703_739_fu_81561_p10 = esl_zext<12,6>(conv4_window_buffer_705_reg_190856.read());
}

void Block_codeRepl202676::thread_mul_ln703_739_fu_81561_p2() {
    mul_ln703_739_fu_81561_p2 = (!mul_ln703_739_fu_81561_p0.read().is_01() || !mul_ln703_739_fu_81561_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_739_fu_81561_p0.read()) * sc_biguint<6>(mul_ln703_739_fu_81561_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_73_fu_61210_p0() {
    mul_ln703_73_fu_61210_p0 = shl_ln728_70_fu_61196_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_73_fu_61210_p1() {
    mul_ln703_73_fu_61210_p1 =  (sc_lv<6>) (mul_ln703_73_fu_61210_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_73_fu_61210_p10() {
    mul_ln703_73_fu_61210_p10 = esl_zext<12,6>(tmp_V_465_reg_179947.read());
}

void Block_codeRepl202676::thread_mul_ln703_73_fu_61210_p2() {
    mul_ln703_73_fu_61210_p2 = (!mul_ln703_73_fu_61210_p0.read().is_01() || !mul_ln703_73_fu_61210_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_73_fu_61210_p0.read()) * sc_biguint<6>(mul_ln703_73_fu_61210_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_741_fu_86399_p0() {
    mul_ln703_741_fu_86399_p0 = shl_ln728_736_fu_86385_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_741_fu_86399_p1() {
    mul_ln703_741_fu_86399_p1 =  (sc_lv<6>) (mul_ln703_741_fu_86399_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_741_fu_86399_p10() {
    mul_ln703_741_fu_86399_p10 = esl_zext<12,6>(tmp_V_539_reg_200191.read());
}

void Block_codeRepl202676::thread_mul_ln703_741_fu_86399_p2() {
    mul_ln703_741_fu_86399_p2 = (!mul_ln703_741_fu_86399_p0.read().is_01() || !mul_ln703_741_fu_86399_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_741_fu_86399_p0.read()) * sc_biguint<6>(mul_ln703_741_fu_86399_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_744_fu_78496_p0() {
    mul_ln703_744_fu_78496_p0 = shl_ln728_739_fu_78482_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_744_fu_78496_p1() {
    mul_ln703_744_fu_78496_p1 =  (sc_lv<6>) (mul_ln703_744_fu_78496_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_744_fu_78496_p10() {
    mul_ln703_744_fu_78496_p10 = esl_zext<12,6>(conv4_window_buffer_446_reg_194135.read());
}

void Block_codeRepl202676::thread_mul_ln703_744_fu_78496_p2() {
    mul_ln703_744_fu_78496_p2 = (!mul_ln703_744_fu_78496_p0.read().is_01() || !mul_ln703_744_fu_78496_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_744_fu_78496_p0.read()) * sc_biguint<6>(mul_ln703_744_fu_78496_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_746_fu_81616_p0() {
    mul_ln703_746_fu_81616_p0 = shl_ln728_741_fu_81602_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_746_fu_81616_p1() {
    mul_ln703_746_fu_81616_p1 =  (sc_lv<6>) (mul_ln703_746_fu_81616_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_746_fu_81616_p10() {
    mul_ln703_746_fu_81616_p10 = esl_zext<12,6>(conv4_window_buffer_710_reg_190881.read());
}

void Block_codeRepl202676::thread_mul_ln703_746_fu_81616_p2() {
    mul_ln703_746_fu_81616_p2 = (!mul_ln703_746_fu_81616_p0.read().is_01() || !mul_ln703_746_fu_81616_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_746_fu_81616_p0.read()) * sc_biguint<6>(mul_ln703_746_fu_81616_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_748_fu_81636_p0() {
    mul_ln703_748_fu_81636_p0 = shl_ln728_743_fu_81622_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_748_fu_81636_p1() {
    mul_ln703_748_fu_81636_p1 =  (sc_lv<6>) (mul_ln703_748_fu_81636_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_748_fu_81636_p10() {
    mul_ln703_748_fu_81636_p10 = esl_zext<12,6>(conv4_window_buffer_714_reg_190901.read());
}

void Block_codeRepl202676::thread_mul_ln703_748_fu_81636_p2() {
    mul_ln703_748_fu_81636_p2 = (!mul_ln703_748_fu_81636_p0.read().is_01() || !mul_ln703_748_fu_81636_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_748_fu_81636_p0.read()) * sc_biguint<6>(mul_ln703_748_fu_81636_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_750_fu_86419_p0() {
    mul_ln703_750_fu_86419_p0 = shl_ln728_745_fu_86405_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_750_fu_86419_p1() {
    mul_ln703_750_fu_86419_p1 =  (sc_lv<6>) (mul_ln703_750_fu_86419_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_750_fu_86419_p10() {
    mul_ln703_750_fu_86419_p10 = esl_zext<12,6>(tmp_V_540_reg_200241.read());
}

void Block_codeRepl202676::thread_mul_ln703_750_fu_86419_p2() {
    mul_ln703_750_fu_86419_p2 = (!mul_ln703_750_fu_86419_p0.read().is_01() || !mul_ln703_750_fu_86419_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_750_fu_86419_p0.read()) * sc_biguint<6>(mul_ln703_750_fu_86419_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_753_fu_78516_p0() {
    mul_ln703_753_fu_78516_p0 = shl_ln728_748_fu_78502_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_753_fu_78516_p1() {
    mul_ln703_753_fu_78516_p1 =  (sc_lv<6>) (mul_ln703_753_fu_78516_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_753_fu_78516_p10() {
    mul_ln703_753_fu_78516_p10 = esl_zext<12,6>(conv4_window_buffer_448_reg_194146.read());
}

void Block_codeRepl202676::thread_mul_ln703_753_fu_78516_p2() {
    mul_ln703_753_fu_78516_p2 = (!mul_ln703_753_fu_78516_p0.read().is_01() || !mul_ln703_753_fu_78516_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_753_fu_78516_p0.read()) * sc_biguint<6>(mul_ln703_753_fu_78516_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_755_fu_78629_p0() {
    mul_ln703_755_fu_78629_p0 = shl_ln728_750_fu_78615_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_755_fu_78629_p1() {
    mul_ln703_755_fu_78629_p1 =  (sc_lv<6>) (mul_ln703_755_fu_78629_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_755_fu_78629_p10() {
    mul_ln703_755_fu_78629_p10 = esl_zext<12,6>(conv4_window_buffer_719_reg_190926.read());
}

void Block_codeRepl202676::thread_mul_ln703_755_fu_78629_p2() {
    mul_ln703_755_fu_78629_p2 = (!mul_ln703_755_fu_78629_p0.read().is_01() || !mul_ln703_755_fu_78629_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_755_fu_78629_p0.read()) * sc_biguint<6>(mul_ln703_755_fu_78629_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_757_fu_78649_p0() {
    mul_ln703_757_fu_78649_p0 = shl_ln728_752_fu_78635_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_757_fu_78649_p1() {
    mul_ln703_757_fu_78649_p1 =  (sc_lv<6>) (mul_ln703_757_fu_78649_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_757_fu_78649_p10() {
    mul_ln703_757_fu_78649_p10 = esl_zext<12,6>(conv4_window_buffer_723_reg_190946.read());
}

void Block_codeRepl202676::thread_mul_ln703_757_fu_78649_p2() {
    mul_ln703_757_fu_78649_p2 = (!mul_ln703_757_fu_78649_p0.read().is_01() || !mul_ln703_757_fu_78649_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_757_fu_78649_p0.read()) * sc_biguint<6>(mul_ln703_757_fu_78649_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_759_fu_82534_p0() {
    mul_ln703_759_fu_82534_p0 = shl_ln728_754_fu_82519_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_759_fu_82534_p1() {
    mul_ln703_759_fu_82534_p1 =  (sc_lv<6>) (mul_ln703_759_fu_82534_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_759_fu_82534_p10() {
    mul_ln703_759_fu_82534_p10 = esl_zext<12,6>(conv4_pad_pipe_4_V_V_dout.read());
}

void Block_codeRepl202676::thread_mul_ln703_759_fu_82534_p2() {
    mul_ln703_759_fu_82534_p2 = (!mul_ln703_759_fu_82534_p0.read().is_01() || !mul_ln703_759_fu_82534_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_759_fu_82534_p0.read()) * sc_biguint<6>(mul_ln703_759_fu_82534_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_75_fu_60224_p0() {
    mul_ln703_75_fu_60224_p0 = shl_ln728_72_fu_60209_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_75_fu_60224_p1() {
    mul_ln703_75_fu_60224_p1 =  (sc_lv<6>) (mul_ln703_75_fu_60224_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_75_fu_60224_p10() {
    mul_ln703_75_fu_60224_p10 = esl_zext<12,6>(conv2_window_buffer_158_reg_177940.read());
}

void Block_codeRepl202676::thread_mul_ln703_75_fu_60224_p2() {
    mul_ln703_75_fu_60224_p2 = (!mul_ln703_75_fu_60224_p0.read().is_01() || !mul_ln703_75_fu_60224_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_75_fu_60224_p0.read()) * sc_biguint<6>(mul_ln703_75_fu_60224_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_761_fu_78669_p0() {
    mul_ln703_761_fu_78669_p0 = shl_ln728_756_fu_78655_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_761_fu_78669_p1() {
    mul_ln703_761_fu_78669_p1 =  (sc_lv<6>) (mul_ln703_761_fu_78669_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_761_fu_78669_p10() {
    mul_ln703_761_fu_78669_p10 = esl_zext<12,6>(conv4_window_buffer_725_reg_190956.read());
}

void Block_codeRepl202676::thread_mul_ln703_761_fu_78669_p2() {
    mul_ln703_761_fu_78669_p2 = (!mul_ln703_761_fu_78669_p0.read().is_01() || !mul_ln703_761_fu_78669_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_761_fu_78669_p0.read()) * sc_biguint<6>(mul_ln703_761_fu_78669_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_763_fu_81656_p0() {
    mul_ln703_763_fu_81656_p0 = shl_ln728_758_fu_81642_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_763_fu_81656_p1() {
    mul_ln703_763_fu_81656_p1 =  (sc_lv<6>) (mul_ln703_763_fu_81656_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_763_fu_81656_p10() {
    mul_ln703_763_fu_81656_p10 = esl_zext<12,6>(conv4_window_buffer_729_reg_190976.read());
}

void Block_codeRepl202676::thread_mul_ln703_763_fu_81656_p2() {
    mul_ln703_763_fu_81656_p2 = (!mul_ln703_763_fu_81656_p0.read().is_01() || !mul_ln703_763_fu_81656_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_763_fu_81656_p0.read()) * sc_biguint<6>(mul_ln703_763_fu_81656_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_765_fu_81676_p0() {
    mul_ln703_765_fu_81676_p0 = shl_ln728_760_fu_81662_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_765_fu_81676_p1() {
    mul_ln703_765_fu_81676_p1 =  (sc_lv<6>) (mul_ln703_765_fu_81676_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_765_fu_81676_p10() {
    mul_ln703_765_fu_81676_p10 = esl_zext<12,6>(conv4_window_buffer_451_reg_194161.read());
}

void Block_codeRepl202676::thread_mul_ln703_765_fu_81676_p2() {
    mul_ln703_765_fu_81676_p2 = (!mul_ln703_765_fu_81676_p0.read().is_01() || !mul_ln703_765_fu_81676_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_765_fu_81676_p0.read()) * sc_biguint<6>(mul_ln703_765_fu_81676_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_767_fu_81805_p0() {
    mul_ln703_767_fu_81805_p0 = shl_ln728_762_fu_81791_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_767_fu_81805_p1() {
    mul_ln703_767_fu_81805_p1 =  (sc_lv<6>) (mul_ln703_767_fu_81805_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_767_fu_81805_p10() {
    mul_ln703_767_fu_81805_p10 = esl_zext<12,6>(conv4_window_buffer_731_reg_190986.read());
}

void Block_codeRepl202676::thread_mul_ln703_767_fu_81805_p2() {
    mul_ln703_767_fu_81805_p2 = (!mul_ln703_767_fu_81805_p0.read().is_01() || !mul_ln703_767_fu_81805_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_767_fu_81805_p0.read()) * sc_biguint<6>(mul_ln703_767_fu_81805_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_770_fu_78689_p0() {
    mul_ln703_770_fu_78689_p0 = shl_ln728_765_fu_78675_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_770_fu_78689_p1() {
    mul_ln703_770_fu_78689_p1 =  (sc_lv<6>) (mul_ln703_770_fu_78689_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_770_fu_78689_p10() {
    mul_ln703_770_fu_78689_p10 = esl_zext<12,6>(conv4_window_buffer_734_reg_191001.read());
}

void Block_codeRepl202676::thread_mul_ln703_770_fu_78689_p2() {
    mul_ln703_770_fu_78689_p2 = (!mul_ln703_770_fu_78689_p0.read().is_01() || !mul_ln703_770_fu_78689_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_770_fu_78689_p0.read()) * sc_biguint<6>(mul_ln703_770_fu_78689_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_772_fu_81825_p0() {
    mul_ln703_772_fu_81825_p0 = shl_ln728_767_fu_81811_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_772_fu_81825_p1() {
    mul_ln703_772_fu_81825_p1 =  (sc_lv<6>) (mul_ln703_772_fu_81825_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_772_fu_81825_p10() {
    mul_ln703_772_fu_81825_p10 = esl_zext<12,6>(conv4_window_buffer_738_reg_191021.read());
}

void Block_codeRepl202676::thread_mul_ln703_772_fu_81825_p2() {
    mul_ln703_772_fu_81825_p2 = (!mul_ln703_772_fu_81825_p0.read().is_01() || !mul_ln703_772_fu_81825_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_772_fu_81825_p0.read()) * sc_biguint<6>(mul_ln703_772_fu_81825_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_774_fu_81845_p0() {
    mul_ln703_774_fu_81845_p0 = shl_ln728_769_fu_81831_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_774_fu_81845_p1() {
    mul_ln703_774_fu_81845_p1 =  (sc_lv<6>) (mul_ln703_774_fu_81845_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_774_fu_81845_p10() {
    mul_ln703_774_fu_81845_p10 = esl_zext<12,6>(conv4_window_buffer_453_reg_194171.read());
}

void Block_codeRepl202676::thread_mul_ln703_774_fu_81845_p2() {
    mul_ln703_774_fu_81845_p2 = (!mul_ln703_774_fu_81845_p0.read().is_01() || !mul_ln703_774_fu_81845_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_774_fu_81845_p0.read()) * sc_biguint<6>(mul_ln703_774_fu_81845_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_776_fu_81865_p0() {
    mul_ln703_776_fu_81865_p0 = shl_ln728_771_fu_81851_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_776_fu_81865_p1() {
    mul_ln703_776_fu_81865_p1 =  (sc_lv<6>) (mul_ln703_776_fu_81865_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_776_fu_81865_p10() {
    mul_ln703_776_fu_81865_p10 = esl_zext<12,6>(conv4_window_buffer_740_reg_191031.read());
}

void Block_codeRepl202676::thread_mul_ln703_776_fu_81865_p2() {
    mul_ln703_776_fu_81865_p2 = (!mul_ln703_776_fu_81865_p0.read().is_01() || !mul_ln703_776_fu_81865_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_776_fu_81865_p0.read()) * sc_biguint<6>(mul_ln703_776_fu_81865_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_779_fu_78709_p0() {
    mul_ln703_779_fu_78709_p0 = shl_ln728_774_fu_78695_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_779_fu_78709_p1() {
    mul_ln703_779_fu_78709_p1 =  (sc_lv<6>) (mul_ln703_779_fu_78709_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_779_fu_78709_p10() {
    mul_ln703_779_fu_78709_p10 = esl_zext<12,6>(conv4_window_buffer_743_reg_191046.read());
}

void Block_codeRepl202676::thread_mul_ln703_779_fu_78709_p2() {
    mul_ln703_779_fu_78709_p2 = (!mul_ln703_779_fu_78709_p0.read().is_01() || !mul_ln703_779_fu_78709_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_779_fu_78709_p0.read()) * sc_biguint<6>(mul_ln703_779_fu_78709_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_77_fu_60634_p0() {
    mul_ln703_77_fu_60634_p0 = shl_ln728_74_fu_60619_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_77_fu_60634_p1() {
    mul_ln703_77_fu_60634_p1 =  (sc_lv<6>) (mul_ln703_77_fu_60634_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_77_fu_60634_p10() {
    mul_ln703_77_fu_60634_p10 = esl_zext<12,6>(conv2_window_buffer_161_reg_177955.read());
}

void Block_codeRepl202676::thread_mul_ln703_77_fu_60634_p2() {
    mul_ln703_77_fu_60634_p2 = (!mul_ln703_77_fu_60634_p0.read().is_01() || !mul_ln703_77_fu_60634_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_77_fu_60634_p0.read()) * sc_biguint<6>(mul_ln703_77_fu_60634_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_781_fu_81885_p0() {
    mul_ln703_781_fu_81885_p0 = shl_ln728_776_fu_81871_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_781_fu_81885_p1() {
    mul_ln703_781_fu_81885_p1 =  (sc_lv<6>) (mul_ln703_781_fu_81885_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_781_fu_81885_p10() {
    mul_ln703_781_fu_81885_p10 = esl_zext<12,6>(conv4_window_buffer_747_reg_191066.read());
}

void Block_codeRepl202676::thread_mul_ln703_781_fu_81885_p2() {
    mul_ln703_781_fu_81885_p2 = (!mul_ln703_781_fu_81885_p0.read().is_01() || !mul_ln703_781_fu_81885_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_781_fu_81885_p0.read()) * sc_biguint<6>(mul_ln703_781_fu_81885_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_783_fu_82010_p0() {
    mul_ln703_783_fu_82010_p0 = shl_ln728_778_fu_81996_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_783_fu_82010_p1() {
    mul_ln703_783_fu_82010_p1 =  (sc_lv<6>) (mul_ln703_783_fu_82010_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_783_fu_82010_p10() {
    mul_ln703_783_fu_82010_p10 = esl_zext<12,6>(conv4_window_buffer_455_reg_194181.read());
}

void Block_codeRepl202676::thread_mul_ln703_783_fu_82010_p2() {
    mul_ln703_783_fu_82010_p2 = (!mul_ln703_783_fu_82010_p0.read().is_01() || !mul_ln703_783_fu_82010_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_783_fu_82010_p0.read()) * sc_biguint<6>(mul_ln703_783_fu_82010_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_785_fu_82030_p0() {
    mul_ln703_785_fu_82030_p0 = shl_ln728_780_fu_82016_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_785_fu_82030_p1() {
    mul_ln703_785_fu_82030_p1 =  (sc_lv<6>) (mul_ln703_785_fu_82030_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_785_fu_82030_p10() {
    mul_ln703_785_fu_82030_p10 = esl_zext<12,6>(conv4_window_buffer_742_reg_191041.read());
}

void Block_codeRepl202676::thread_mul_ln703_785_fu_82030_p2() {
    mul_ln703_785_fu_82030_p2 = (!mul_ln703_785_fu_82030_p0.read().is_01() || !mul_ln703_785_fu_82030_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_785_fu_82030_p0.read()) * sc_biguint<6>(mul_ln703_785_fu_82030_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_788_fu_78825_p0() {
    mul_ln703_788_fu_78825_p0 = shl_ln728_783_fu_78811_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_788_fu_78825_p1() {
    mul_ln703_788_fu_78825_p1 =  (sc_lv<6>) (mul_ln703_788_fu_78825_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_788_fu_78825_p10() {
    mul_ln703_788_fu_78825_p10 = esl_zext<12,6>(conv4_window_buffer_736_reg_191011.read());
}

void Block_codeRepl202676::thread_mul_ln703_788_fu_78825_p2() {
    mul_ln703_788_fu_78825_p2 = (!mul_ln703_788_fu_78825_p0.read().is_01() || !mul_ln703_788_fu_78825_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_788_fu_78825_p0.read()) * sc_biguint<6>(mul_ln703_788_fu_78825_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_790_fu_82050_p0() {
    mul_ln703_790_fu_82050_p0 = shl_ln728_785_fu_82036_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_790_fu_82050_p1() {
    mul_ln703_790_fu_82050_p1 =  (sc_lv<6>) (mul_ln703_790_fu_82050_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_790_fu_82050_p10() {
    mul_ln703_790_fu_82050_p10 = esl_zext<12,6>(conv4_window_buffer_733_reg_190996.read());
}

void Block_codeRepl202676::thread_mul_ln703_790_fu_82050_p2() {
    mul_ln703_790_fu_82050_p2 = (!mul_ln703_790_fu_82050_p0.read().is_01() || !mul_ln703_790_fu_82050_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_790_fu_82050_p0.read()) * sc_biguint<6>(mul_ln703_790_fu_82050_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_792_fu_82070_p0() {
    mul_ln703_792_fu_82070_p0 = shl_ln728_787_fu_82056_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_792_fu_82070_p1() {
    mul_ln703_792_fu_82070_p1 =  (sc_lv<6>) (mul_ln703_792_fu_82070_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_792_fu_82070_p10() {
    mul_ln703_792_fu_82070_p10 = esl_zext<12,6>(conv4_window_buffer_457_reg_194191.read());
}

void Block_codeRepl202676::thread_mul_ln703_792_fu_82070_p2() {
    mul_ln703_792_fu_82070_p2 = (!mul_ln703_792_fu_82070_p0.read().is_01() || !mul_ln703_792_fu_82070_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_792_fu_82070_p0.read()) * sc_biguint<6>(mul_ln703_792_fu_82070_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_794_fu_82090_p0() {
    mul_ln703_794_fu_82090_p0 = shl_ln728_789_fu_82076_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_794_fu_82090_p1() {
    mul_ln703_794_fu_82090_p1 =  (sc_lv<6>) (mul_ln703_794_fu_82090_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_794_fu_82090_p10() {
    mul_ln703_794_fu_82090_p10 = esl_zext<12,6>(conv4_window_buffer_724_reg_190951.read());
}

void Block_codeRepl202676::thread_mul_ln703_794_fu_82090_p2() {
    mul_ln703_794_fu_82090_p2 = (!mul_ln703_794_fu_82090_p0.read().is_01() || !mul_ln703_794_fu_82090_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_794_fu_82090_p0.read()) * sc_biguint<6>(mul_ln703_794_fu_82090_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_797_fu_78845_p0() {
    mul_ln703_797_fu_78845_p0 = shl_ln728_792_fu_78831_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_797_fu_78845_p1() {
    mul_ln703_797_fu_78845_p1 =  (sc_lv<6>) (mul_ln703_797_fu_78845_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_797_fu_78845_p10() {
    mul_ln703_797_fu_78845_p10 = esl_zext<12,6>(conv4_window_buffer_718_reg_190921.read());
}

void Block_codeRepl202676::thread_mul_ln703_797_fu_78845_p2() {
    mul_ln703_797_fu_78845_p2 = (!mul_ln703_797_fu_78845_p0.read().is_01() || !mul_ln703_797_fu_78845_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_797_fu_78845_p0.read()) * sc_biguint<6>(mul_ln703_797_fu_78845_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_799_fu_82224_p0() {
    mul_ln703_799_fu_82224_p0 = shl_ln728_794_fu_82210_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_799_fu_82224_p1() {
    mul_ln703_799_fu_82224_p1 =  (sc_lv<6>) (mul_ln703_799_fu_82224_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_799_fu_82224_p10() {
    mul_ln703_799_fu_82224_p10 = esl_zext<12,6>(conv4_window_buffer_715_reg_190906.read());
}

void Block_codeRepl202676::thread_mul_ln703_799_fu_82224_p2() {
    mul_ln703_799_fu_82224_p2 = (!mul_ln703_799_fu_82224_p0.read().is_01() || !mul_ln703_799_fu_82224_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_799_fu_82224_p0.read()) * sc_biguint<6>(mul_ln703_799_fu_82224_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_79_fu_61244_p0() {
    mul_ln703_79_fu_61244_p0 = shl_ln728_76_fu_61230_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_79_fu_61244_p1() {
    mul_ln703_79_fu_61244_p1 =  (sc_lv<6>) (mul_ln703_79_fu_61244_p10.read());
}

void Block_codeRepl202676::thread_mul_ln703_79_fu_61244_p10() {
    mul_ln703_79_fu_61244_p10 = esl_zext<12,6>(conv2_window_buffer_107_reg_178824.read());
}

void Block_codeRepl202676::thread_mul_ln703_79_fu_61244_p2() {
    mul_ln703_79_fu_61244_p2 = (!mul_ln703_79_fu_61244_p0.read().is_01() || !mul_ln703_79_fu_61244_p1.read().is_01())? sc_lv<12>(): sc_bigint<6>(mul_ln703_79_fu_61244_p0.read()) * sc_biguint<6>(mul_ln703_79_fu_61244_p1.read());
}

void Block_codeRepl202676::thread_mul_ln703_801_fu_82244_p0() {
    mul_ln703_801_fu_82244_p0 = shl_ln728_796_fu_82230_p3.read();
}

void Block_codeRepl202676::thread_mul_ln703_801_fu_82244_p1() {
    mul_ln703_801_fu_82244_p1 =  (sc_lv<6>) (mul_ln703_801_fu_82244_p10.read());
}

}

