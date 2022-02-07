#pragma once
#include <hls_stream.h>
#include <ap_int.h>
#include <stdint.h>


#define SIZE 4

template <      unsigned MAT_ROW,
                        unsigned MAT_COL,
                        unsigned IN_BIT,
                        unsigned OUT_BIT,
                        unsigned W_BIT,
                        unsigned M_BIT,
                        unsigned INC_BIT,
                        unsigned BIAS_BIT,
                        unsigned SIMD,
                        unsigned PE,
                        unsigned L_SHIFT,
                        unsigned VECT_NUMS >
void PE_wrapper_borderB(
        int x, int y,
        stream<ap_uint<SIMD * IN_BIT * 2> >& fifo_a_in,
        stream<ap_uint<SIMD * IN_BIT * 2> >& fifo_a_out,
        stream<ap_uint<SIMD * W_BIT * 2> >& fifo_b_in,
        stream<ap_uint<PE*OUT_BIT> >& fifo_cout
) {
        #pragma HLS INLINE OFF
        matcol_loop: for (int ti = 0; ti < MAT_COL / SIZE; ti++) {
                vectnum_loop: for (int tj = 0; tj < VECT_NUMS / SIZE / 2; tj++) {
                    ap_uint<PE * OUT_BIT> cout;
                    matrow_loop: for (int i = 0; i < MAT_ROW / SIMD; i++) {
                          #pragma HLS PIPELINE II=1
                                ap_uint<SIMD*IN_BIT * 2> a = fifo_a_in.read();
                                ap_uint<SIMD*W_BIT * 2> b = fifo_b_in.read();
                                fifo_a_out.write(a);
                                simd_loop: for (int lane = 0; lane < SIMD * 2; lane++) {
                                        #pragma HLS UNROLL
                                        cout += a(IN_BIT-1,0) * b(W_BIT-1,0);
                                        a = a >> IN_BIT;
                                        b = b >> W_BIT;
                                }
                        }
                        fifo_cout.write(cout);
                }
        }
}

template <      unsigned MAT_ROW,
                        unsigned MAT_COL,
                        unsigned IN_BIT,
                        unsigned OUT_BIT,
                        unsigned W_BIT,
                        unsigned M_BIT,
                        unsigned INC_BIT,
                        unsigned BIAS_BIT,
                        unsigned SIMD,
                        unsigned PE,
                        unsigned L_SHIFT,
                        unsigned VECT_NUMS >
void PE_wrapper_borderA_borderB(
        int x, int y,
        stream<ap_uint<SIMD * IN_BIT * 2> >& fifo_a_in,
        stream<ap_uint<SIMD * W_BIT * 2> >& fifo_b_in,
        stream<ap_uint<PE*OUT_BIT> >& fifo_cout
) {
        #pragma HLS INLINE OFF
        for (int ti = 0; ti < MAT_COL / SIZE; ti++) {
                for (int tj = 0; tj < VECT_NUMS / SIZE / 2; tj++) {
                    ap_uint<PE * OUT_BIT> cout;
                    for (int i = 0; i < MAT_ROW / SIMD; i++) {
                          #pragma HLS PIPELINE II=1
                                ap_uint<SIMD * IN_BIT * 2> a = fifo_a_in.read();
                                ap_uint<SIMD * W_BIT * 2> b = fifo_b_in.read();
                                for (int lane = 0; lane < SIMD * 2; lane++) {
                                        #pragma HLS UNROLL
                                        cout += a(IN_BIT-1,0) * b(W_BIT-1,0);
                                        a = a >> IN_BIT;
                                        b = b >> W_BIT;
                                }
                        }
                        fifo_cout.write(cout);
                }
        }
}

template <      unsigned MAT_ROW,
                        unsigned MAT_COL,
                        unsigned IN_BIT,
                        unsigned OUT_BIT,
                        unsigned W_BIT,
                        unsigned M_BIT,
                        unsigned INC_BIT,
                        unsigned BIAS_BIT,
                        unsigned SIMD,
                        unsigned PE,
                        unsigned L_SHIFT,
                        unsigned VECT_NUMS >
void PE_wrapper_borderA(
        int x, int y,
        stream<ap_uint<SIMD * IN_BIT * 2> >& fifo_a_in,
        stream<ap_uint<SIMD * W_BIT * 2> >& fifo_b_in,
        stream<ap_uint<SIMD * W_BIT * 2> >& fifo_b_out,
        stream<ap_uint<PE*OUT_BIT> >& fifo_cout
) {
        #pragma HLS INLINE OFF
        for (int ti = 0; ti < MAT_COL / SIZE; ti++) {
                for (int tj = 0; tj < VECT_NUMS / SIZE / 2; tj++) {
                    ap_uint<PE * OUT_BIT> cout;
                    for (int i = 0; i < MAT_ROW / SIMD; i++) {
                          #pragma HLS PIPELINE II=1
                                ap_uint<SIMD*IN_BIT*2> a = fifo_a_in.read();
                                ap_uint<SIMD*W_BIT*2> b = fifo_b_in.read();
                                fifo_b_out.write(b);
                                for (int lane = 0; lane < SIMD * 2; lane++) {
                                        #pragma HLS UNROLL
                                        cout += a(IN_BIT-1,0) * b(W_BIT-1,0);
                                        a = a >> IN_BIT;
                                        b = b >> W_BIT;
                                }
                        }
                        fifo_cout.write(cout);
                }
        }
}

template <      unsigned MAT_ROW,
                        unsigned MAT_COL,
                        unsigned IN_BIT,
                        unsigned OUT_BIT,
                        unsigned W_BIT,
                        unsigned M_BIT,
                        unsigned INC_BIT,
                        unsigned BIAS_BIT,
                        unsigned SIMD,
                        unsigned PE,
                        unsigned L_SHIFT,
                        unsigned VECT_NUMS >
void PE_wrapper(
        int x, int y,
        stream<ap_uint<SIMD * IN_BIT * 2> >& fifo_a_in,
        stream<ap_uint<SIMD * IN_BIT * 2> >& fifo_a_out,
        stream<ap_uint<SIMD * W_BIT * 2> >& fifo_b_in,
        stream<ap_uint<SIMD * W_BIT * 2> >& fifo_b_out,
        stream<ap_uint<PE*OUT_BIT> >& fifo_cout
) {
        #pragma HLS INLINE OFF
        vectnums_loop: for (int ti = 0; ti < VECT_NUMS / SIZE / 2; ti++) {
                matcol_loop: for (int tj = 0; tj < MAT_COL / SIZE; tj++) {
                    ap_uint<PE * OUT_BIT> cout;
                    matrow_loop: for (int i = 0; i < MAT_ROW / SIMD; i++) {
                          #pragma HLS PIPELINE II=1
                                ap_uint<SIMD*IN_BIT> a = fifo_a_in.read();
                                fifo_a_out.write(a);
                                ap_uint<SIMD*W_BIT> b = fifo_b_in.read();
                                fifo_b_out.write(b);
                                simd_loop: for (int lane = 0; lane < SIMD * 2; lane++) {
                                        #pragma HLS UNROLL
                                        cout += a(IN_BIT-1,0) * b(W_BIT-1,0);
                                        a = a >> IN_BIT;
                                        b = b >> W_BIT;
                                }
                        }
                        fifo_cout.write(cout);
                }
        }
}

template<unsigned PE, unsigned OUT_BIT, unsigned VECT_NUMS, unsigned MAT_COL>
void drainer(
        stream<ap_uint<PE*OUT_BIT> >& out,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_00, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_01,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_02, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_03,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_10, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_11,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_12, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_13,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_20, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_21, 
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_22, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_23,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_30, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_31,
        stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_32, stream<ap_uint<PE*OUT_BIT> >& fifo_c_drainer_33 
) {
        #pragma HLS INLINE OFF
        drainer: for (int i = 0; i < VECT_NUMS * MAT_COL / 2; i+=16) {
                #pragma HLS PIPELINE II=16
                ap_uint<OUT_BIT> data_00 = fifo_c_drainer_00.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_01 = fifo_c_drainer_01.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_02 = fifo_c_drainer_02.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_03 = fifo_c_drainer_03.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_10 = fifo_c_drainer_10.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_11 = fifo_c_drainer_11.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_12 = fifo_c_drainer_12.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_13 = fifo_c_drainer_13.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_20 = fifo_c_drainer_20.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_21 = fifo_c_drainer_21.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_22 = fifo_c_drainer_22.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_23 = fifo_c_drainer_23.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_30 = fifo_c_drainer_30.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_31 = fifo_c_drainer_31.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_32 = fifo_c_drainer_32.read()(OUT_BIT-1,0);
                ap_uint<OUT_BIT> data_33 = fifo_c_drainer_33.read()(OUT_BIT-1,0);

                out.write((data_00, data_01, 
                        data_02, data_03, 
                        data_10, data_11, 
                        data_12, data_13));

                out.write((data_20, data_21,
                        data_22, data_23,
                        data_30, data_31,
                        data_32, data_33));
        }
}

template<unsigned MAT_ROW, unsigned SIMD, unsigned VECT_NUMS, unsigned IN_BIT>
void loader_A(
        stream<ap_uint<SIMD*IN_BIT> >& vec, 
        stream<ap_uint<SIMD*IN_BIT*2> >& fifo_localA0, stream<ap_uint<SIMD*IN_BIT*2> >& fifo_localA1,
    stream<ap_uint<SIMD*IN_BIT*2> >& fifo_localA2, stream<ap_uint<SIMD*IN_BIT*2> >& fifo_localA3
) {
        #pragma HLS INLINE OFF
        const unsigned total_reps = MAT_ROW / SIMD * VECT_NUMS;
        localA: for (int i = 0; i < total_reps; i+=4) {
                #pragma HLS PIPELINE II=4
                #pragma HLS loop_tripcount min=9*9*32/16*80*160*1 max=9*9*32/16*80*160*1
                fifo_localA0.write((vec.read(), vec.read()));
                fifo_localA1.write((vec.read(), vec.read()));
                fifo_localA2.write((vec.read(), vec.read()));
                fifo_localA3.write((vec.read(), vec.read()));
        }
}

template<unsigned MAT_COL, unsigned MAT_ROW, unsigned PE, unsigned W_BIT, unsigned SIMD>
void loader_B(
        const ap_uint<SIMD*W_BIT> weights[PE][(MAT_ROW/SIMD)*(MAT_COL/PE)],
        stream<ap_uint<SIMD*W_BIT*2> >& fifo_localB0, stream<ap_uint<SIMD*W_BIT*2> >& fifo_localB1,
    stream<ap_uint<SIMD*W_BIT*2> >& fifo_localB2, stream<ap_uint<SIMD*W_BIT*2> >& fifo_localB3
) {
        // weights[PE][(MAT_ROW/SIMD)*(MAT_COL/PE)]
        #pragma HLS INLINE OFF
        localB: for (int i = 0; i < MAT_COL * MAT_ROW / PE; i++) {
                #pragma HLS PIPELINE II=1
                fifo_localB0.write((weights[0][i], weights[1][i]));
                fifo_localB1.write((weights[2][i], weights[3][i]));
                fifo_localB2.write((weights[4][i], weights[5][i]));
                fifo_localB3.write((weights[6][i], weights[7][i]));
        }
}
/**
 * 矩阵向量计算单元
 * 同时进行量化激活处理
 */
template <      unsigned MAT_ROW,               // 展开后的k × k × in_ch
                        unsigned MAT_COL,               // 展开后的out_ch

                        unsigned IN_BIT,
                        unsigned OUT_BIT,               //

                        unsigned W_BIT,
                        unsigned M_BIT,                 // 乘累加后的计算结果的值

                        unsigned INC_BIT,               // 激活等差数列 的步长
                        unsigned BIAS_BIT,              //

                        unsigned SIMD,
                        unsigned PE,
                        unsigned L_SHIFT,
                        unsigned VECT_NUMS>
void systolic_array(
        stream<ap_uint<SIMD*IN_BIT> >& vec,
        const ap_uint<SIMD*W_BIT> weights[PE][(MAT_ROW/SIMD)*(MAT_COL/PE)],
        const ap_int<INC_BIT> inc[PE][MAT_COL/PE],
        const ap_int<BIAS_BIT> bias[PE][MAT_COL/PE],
        stream<ap_uint<PE*OUT_BIT> >& out,
        const unsigned reps = 1)
{
#pragma HLS DATAFLOW
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_localA0;
        #pragma HLS stream variable=fifo_localA0 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_localA1;
        #pragma HLS stream variable=fifo_localA1 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_localA2;
        #pragma HLS stream variable=fifo_localA2 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_localA3;
        #pragma HLS stream variable=fifo_localA3 depth=2

        stream<ap_uint<SIMD*W_BIT*2> > fifo_localB0;
        #pragma HLS stream variable=fifo_localB0 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_localB1;
        #pragma HLS stream variable=fifo_localB1 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_localB2;
        #pragma HLS stream variable=fifo_localA2 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_localB3;
        #pragma HLS stream variable=fifo_localB3 depth=2

        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_00;
        #pragma HLS stream variable=fifo_a_out_00 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_01;
        #pragma HLS stream variable=fifo_a_out_01 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_02;
        #pragma HLS stream variable=fifo_a_out_02 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_03;
        #pragma HLS stream variable=fifo_a_out_03 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_10;
        #pragma HLS stream variable=fifo_a_out_10 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_11;
        #pragma HLS stream variable=fifo_a_out_11 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_12;
        #pragma HLS stream variable=fifo_a_out_12 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_13;
        #pragma HLS stream variable=fifo_a_out_13 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_20;
        #pragma HLS stream variable=fifo_a_out_20 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_21;
        #pragma HLS stream variable=fifo_a_out_21 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_22;
        #pragma HLS stream variable=fifo_a_out_22 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_23;
        #pragma HLS stream variable=fifo_a_out_23 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_30;
        #pragma HLS stream variable=fifo_a_out_30 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_31;
        #pragma HLS stream variable=fifo_a_out_31 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_32;
        #pragma HLS stream variable=fifo_a_out_32 depth=2
        stream<ap_uint<SIMD*IN_BIT*2> > fifo_a_out_33;
        #pragma HLS stream variable=fifo_a_out_33 depth=2

        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_00;
        #pragma HLS stream variable=fifo_b_out_00 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_01;
        #pragma HLS stream variable=fifo_b_out_01 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_02;
        #pragma HLS stream variable=fifo_b_out_02 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_03;
        #pragma HLS stream variable=fifo_b_out_03 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_10;
        #pragma HLS stream variable=fifo_b_out_10 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_11;
        #pragma HLS stream variable=fifo_b_out_11 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_12;
        #pragma HLS stream variable=fifo_b_out_12 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_13;
        #pragma HLS stream variable=fifo_b_out_13 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_20;
        #pragma HLS stream variable=fifo_b_out_20 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_21;
        #pragma HLS stream variable=fifo_b_out_21 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_22;
        #pragma HLS stream variable=fifo_b_out_22 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_23;
        #pragma HLS stream variable=fifo_b_out_23 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_30;
        #pragma HLS stream variable=fifo_b_out_30 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_31;
        #pragma HLS stream variable=fifo_b_out_31 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_32;
        #pragma HLS stream variable=fifo_b_out_32 depth=2
        stream<ap_uint<SIMD*W_BIT*2> > fifo_b_out_33;
        #pragma HLS stream variable=fifo_b_out_33 depth=2

        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_00;
        #pragma HLS stream variable=fifo_c_drainer_00 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_01;
        #pragma HLS stream variable=fifo_c_drainer_01 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_02;
        #pragma HLS stream variable=fifo_c_drainer_02 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_03;
        #pragma HLS stream variable=fifo_c_drainer_03 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_10;
        #pragma HLS stream variable=fifo_c_drainer_10 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_11;
        #pragma HLS stream variable=fifo_c_drainer_11 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_12;
        #pragma HLS stream variable=fifo_c_drainer_12 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_13;
        #pragma HLS stream variable=fifo_c_drainer_13 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_20;
        #pragma HLS stream variable=fifo_c_drainer_20 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_21;
        #pragma HLS stream variable=fifo_c_drainer_21 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_22;
        #pragma HLS stream variable=fifo_c_drainer_22 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_23;
        #pragma HLS stream variable=fifo_c_drainer_23 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_30;
        #pragma HLS stream variable=fifo_c_drainer_30 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_31;
        #pragma HLS stream variable=fifo_c_drainer_31 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_32;
        #pragma HLS stream variable=fifo_c_drainer_32 depth=2
        stream<ap_uint<PE*OUT_BIT> > fifo_c_drainer_33;
        #pragma HLS stream variable=fifo_c_drainer_33 depth=2

        loader_A<MAT_ROW, SIMD, VECT_NUMS, IN_BIT>(vec, fifo_localA0, fifo_localA1, fifo_localA2, fifo_localA3);
        loader_B<MAT_COL, MAT_ROW, PE, W_BIT, SIMD>(weights, fifo_localB0, fifo_localB1, fifo_localB2, fifo_localB3);

        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (0, 0, fifo_localA0, fifo_a_out_00, fifo_localB0, fifo_b_out_00, fifo_c_drainer_00);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (0, 1, fifo_localA1, fifo_a_out_01, fifo_b_out_00, fifo_b_out_01, fifo_c_drainer_01);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (0, 2, fifo_localA2, fifo_a_out_02, fifo_b_out_01, fifo_b_out_02, fifo_c_drainer_02);
        PE_wrapper_borderB<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (0, 3, fifo_localA3, fifo_a_out_03, fifo_b_out_02, fifo_c_drainer_03);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (1, 0, fifo_a_out_00, fifo_a_out_10, fifo_localB1, fifo_b_out_10, fifo_c_drainer_10);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (1, 1, fifo_a_out_01, fifo_a_out_11, fifo_b_out_10, fifo_b_out_11, fifo_c_drainer_11);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (1, 2, fifo_a_out_02, fifo_a_out_12, fifo_b_out_11, fifo_b_out_12, fifo_c_drainer_12);
        PE_wrapper_borderB<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (1, 3, fifo_a_out_03, fifo_a_out_13, fifo_b_out_12, fifo_c_drainer_13);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (2, 0, fifo_a_out_10, fifo_a_out_20, fifo_localB2, fifo_b_out_20, fifo_c_drainer_20);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (2, 1, fifo_a_out_11, fifo_a_out_21, fifo_b_out_20, fifo_b_out_21, fifo_c_drainer_21);
        PE_wrapper<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (2, 2, fifo_a_out_12, fifo_a_out_22, fifo_b_out_21, fifo_b_out_22, fifo_c_drainer_22);
        PE_wrapper_borderB<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (2, 3, fifo_a_out_13, fifo_a_out_23, fifo_b_out_22, fifo_c_drainer_23);
        PE_wrapper_borderA<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (3, 0, fifo_a_out_20, fifo_localB3, fifo_b_out_30, fifo_c_drainer_30);
        PE_wrapper_borderA<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (3, 1, fifo_a_out_21, fifo_b_out_30, fifo_b_out_31, fifo_c_drainer_31);
        PE_wrapper_borderA<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (3, 2, fifo_a_out_22, fifo_b_out_31, fifo_b_out_32, fifo_c_drainer_32);
        PE_wrapper_borderA_borderB<MAT_ROW, MAT_COL, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, VECT_NUMS>
                (3, 3, fifo_a_out_23, fifo_b_out_32, fifo_c_drainer_33);

        drainer<PE, OUT_BIT, VECT_NUMS, MAT_COL>(out, 
          fifo_c_drainer_00,   fifo_c_drainer_01,
          fifo_c_drainer_02,   fifo_c_drainer_03,
          fifo_c_drainer_10,   fifo_c_drainer_11,
          fifo_c_drainer_12,   fifo_c_drainer_13,
          fifo_c_drainer_20,   fifo_c_drainer_21, 
          fifo_c_drainer_22,   fifo_c_drainer_23,
          fifo_c_drainer_30,   fifo_c_drainer_31,
          fifo_c_drainer_32,   fifo_c_drainer_33 );
}




template <
                        unsigned IN_ROW,
                        unsigned IN_COL,
                        unsigned IN_CH,
                        unsigned IN_BIT,

                        unsigned OUT_CH,
                        unsigned OUT_BIT,               // 量化激活后的位宽

                        unsigned W_BIT,
                        unsigned M_BIT,
                        unsigned INC_BIT,
                        unsigned BIAS_BIT,

                        unsigned SIMD,
                        unsigned PE,
                        unsigned L_SHIFT>
void conv3x3_bn_act_systolic(
        stream<ap_uint<IN_BIT * IN_CH> >& in,
        const ap_uint<SIMD*W_BIT> weights[PE][((IN_CH*9)/SIMD)*(OUT_CH/PE)],
        const ap_int<INC_BIT> inc[PE][OUT_CH/PE],
        const ap_int<BIAS_BIT> bias[PE][OUT_CH/PE],
        stream<ap_uint<OUT_BIT*OUT_CH> >& out,
        const unsigned reps = 1)
{
#pragma HLS DATAFLOW

        const unsigned INTER_ROW = IN_ROW + 2;
        const unsigned INTER_COL = IN_COL + 2;
        // 暂时认为输入 输出维度不变
        const unsigned OUT_ROW = IN_ROW;
        const unsigned OUT_COL = IN_COL;

        // stream<ap_uint<IN_CH*IN_BIT> > in_adj("in_adj");
        // StreamingDataWidthConverter_Batch<IN_STREAM_BIT, IN_CH*IN_BIT>(in, in_adj, reps);
        // pading
        stream<ap_uint<IN_CH*IN_BIT> > padding_out("samepad_out");
        padding<IN_ROW, IN_COL, IN_CH, IN_BIT, 1>(in, padding_out, reps);

        stream<ap_uint<IN_CH*IN_BIT> > swu_out("swu_out");
        SWU<3, 1, INTER_ROW, INTER_COL, IN_CH, IN_BIT> (padding_out, swu_out, reps);
        // 位宽调整
        stream<ap_uint<SIMD*IN_BIT> > adj_out("adj_out");
        StreamingDataWidthConverter_Batch<IN_CH*IN_BIT, SIMD*IN_BIT, 9*OUT_ROW*OUT_COL>(swu_out, adj_out, reps);

        // cout << "adj_out size " << adj_out.size() << endl;
        // 矩阵向量计算
        stream<ap_uint<PE*OUT_BIT> > mvau_out("mvau_out");

        systolic_array<IN_CH*3*3, OUT_CH, IN_BIT, OUT_BIT, W_BIT, M_BIT, INC_BIT, BIAS_BIT, SIMD, PE, L_SHIFT, OUT_ROW*OUT_COL>


        (adj_out, weights, inc, bias, mvau_out, reps);
        // cout << "mvau_out size " << mvau_out.size() << endl;
        StreamingDataWidthConverter_Batch<PE*OUT_BIT, OUT_CH*OUT_BIT, OUT_ROW * OUT_COL * OUT_CH / PE>(mvau_out, out, reps);