#pragma once
#include <ap_int.h>
#include <stdint.h>
#include <ap_fixed.h>
#include <hls_stream.h> 

void PE(
  hls::stream<ap_uint<4*32*3> >& fifo_a_in, 
  hls::stream<ap_uint<4*32*3> >& fifo_a_out,
  hls::stream<ap_uint<5*32*3> >& fifo_b_in,
  hls::stream<ap_uint<5*32*3> >& fifo_b_out,
  hls::stream<ap_ufixed<4,0> >& fifo_cout
) {
  #pragma HLS INLINE OFF
  COL: for (int i = 0; i < 42*82/4; i++) {
    ROW: for (int j = 0; j < 64/4; j++) {
      ap_ufixed<4,0> cout = 0;
      for (int i = 0; i < 3; i++) {
        #pragma HLS PIPELINE II=1
        ap_uint<4*32*3> a = fifo_a_in.read();
        ap_uint<5*32*3> b = fifo_b_in.read();
        fifo_a_out.write(a);
        fifo_b_out.write(b);
        for (int SIMD=0; SIMD<32*3; SIMD++){
          #pragma HLS UNROLL
          ap_ufixed<4,0> aa = a(3,0);
          ap_fixed<5,2> bb = b(4,0);
          cout += a * b;
          a = a >> 4;
          b = b >> 5;
        }
      }
      fifo_cout.write(cout);
    }
  }
}

void PE_borderA(
  hls::stream<ap_uint<4*32*3> >& fifo_a_in, 
  hls::stream<ap_uint<5*32*3> >& fifo_b_in,
  hls::stream<ap_uint<5*32*3> >& fifo_b_out,
  hls::stream<ap_ufixed<4,0> >& fifo_cout
) {
  #pragma HLS INLINE OFF
  COL: for (int i = 0; i < 42*82/4; i++) {
    ROW: for (int j = 0; j < 64/4; j++) {
      ap_ufixed<4,0> cout = 0;
      for (int i = 0; i < 3; i++) {
        #pragma HLS PIPELINE II=1
        ap_uint<4*32*3> a = fifo_a_in.read();
        ap_uint<5*32*3> b = fifo_b_in.read();
        fifo_b_out.write(b);
        for (int SIMD=0; SIMD<32*3; SIMD++){
          #pragma HLS UNROLL
          ap_ufixed<4,0> aa = a(3,0);
          ap_fixed<5,2> bb = b(4,0);
          cout += a * b;
          a = a >> 4;
          b = b >> 5;
        }
      }
      fifo_cout.write(cout);
    }
  }
}

void PE_borderB(
  hls::stream<ap_uint<4*32*3> >& fifo_a_in, 
  hls::stream<ap_uint<4*32*3> >& fifo_a_out,
  hls::stream<ap_uint<5*32*3> >& fifo_b_in,
  hls::stream<ap_ufixed<4,0> >& fifo_cout
) {
  #pragma HLS INLINE OFF
  COL: for (int i = 0; i < 42*82/4; i++) {
    ROW: for (int j = 0; j < 64/4; j++) {
      ap_ufixed<4,0> cout = 0;
      for (int i = 0; i < 3; i++) {
        #pragma HLS PIPELINE II=1
        ap_uint<4*32*3> a = fifo_a_in.read();
        ap_uint<5*32*3> b = fifo_b_in.read();
        fifo_a_out.write(a);
        for (int SIMD=0; SIMD<32*3; SIMD++){
          #pragma HLS UNROLL
          ap_ufixed<4,0> aa = a(3,0);
          ap_fixed<5,2> bb = b(4,0);
          cout += a * b;
          a = a >> 4;
          b = b >> 5;
        }
      }
      fifo_cout.write(cout);
    }
  }
}
void PE_borderAB(
  hls::stream<ap_uint<4*32*3> >& fifo_a_in, 
  hls::stream<ap_uint<5*32*3> >& fifo_b_in,
  hls::stream<ap_ufixed<4,0> >& fifo_cout
) {
  #pragma HLS INLINE OFF
  COL: for (int i = 0; i < 42*82/4; i++) {
    ROW: for (int j = 0; j < 64/4; j++) {
      ap_ufixed<4,0> cout = 0;
      for (int i = 0; i < 3; i++) {
        #pragma HLS PIPELINE II=1
        ap_uint<4*32*3> a = fifo_a_in.read();
        ap_uint<5*32*3> b = fifo_b_in.read();
        for (int SIMD=0; SIMD<32*3; SIMD++){
          #pragma HLS UNROLL
          ap_ufixed<4,0> aa = a(3,0);
          ap_fixed<5,2> bb = b(4,0);
          cout += a * b;
          a = a >> 4;
          b = b >> 5;
        }
      }
      fifo_cout.write(cout);
    }
  }
}
void loader_A(
  ap_ufixed<4,0> im2col[42*82][3*3*32], 
  hls::stream<ap_uint<4*32*3> >& fifo_a_in0,
  hls::stream<ap_uint<4*32*3> >& fifo_a_in1,
  hls::stream<ap_uint<4*32*3> >& fifo_a_in2,
  hls::stream<ap_uint<4*32*3> >& fifo_a_in3
) {
  #pragma HLS INLINE OFF
  COL: for (int i = 0; i < 42*82/4; i++) {
    for (int j = 0; j < 3; j++) {
      #pragma HLS PIPELINE II=1
      ap_uint<4*32> data0 = 0;
      ap_uint<4*32> data1 = 0;
      ap_uint<4*32> data2 = 0;
      ap_uint<4*32> data3 = 0;
      for (int SIMD=0; SIMD<32*3; SIMD++){
        data0(SIMD*4+3, SIMD*4) = im2col[i*4][j*32*3+SIMD];
        data1(SIMD*4+3, SIMD*4) = im2col[i*4+1][j*32*3+SIMD];
        data2(SIMD*4+3, SIMD*4) = im2col[i*4+2][j*32*3+SIMD];
        data3(SIMD*4+3, SIMD*4) = im2col[i*4+3][j*32*3+SIMD];
      }
      fifo_a_in0.write(data0);
      fifo_a_in1.write(data1);
      fifo_a_in2.write(data2);
      fifo_a_in3.write(data3);
    }
  }  
}

void loader_B(
  ap_fixed<5,2> weight_conv3[64][32][3][3],
  hls::stream<ap_uint<5*32*3> >& fifo_b_in0,
  hls::stream<ap_uint<5*32*3> >& fifo_b_in1,
  hls::stream<ap_uint<5*32*3> >& fifo_b_in2,
  hls::stream<ap_uint<5*32*3> >& fifo_b_in3
){
  #pragma HLS INLINE OFF
  ROW: for (int i = 0; i < 64/4; i++) {
    for (int k0 = 0; k0 < 3; k0++) {
      #pragma HLS PIPELINE II=1
      ap_uint<5*32*3> data0;
      ap_uint<5*32*3> data1;
      ap_uint<5*32*3> data2;
      ap_uint<5*32*3> data3;
      for (int k1 = 0; k1 < 3; k1++) {
        for (int j = 0; j < 32; j++) {
          data0(k1*32+j*5+4, k1*32+j*5) = weight_conv3[i*4+0][j][k0][k1];
          data1(k1*32+j*5+4, k1*32+j*5) = weight_conv3[i*4+1][j][k0][k1];
          data2(k1*32+j*5+4, k1*32+j*5) = weight_conv3[i*4+2][j][k0][k1];
          data3(k1*32+j*5+4, k1*32+j*5) = weight_conv3[i*4+3][j][k0][k1];
        }
      }
      fifo_b_in0.write(data0);
      fifo_b_in1.write(data1);
      fifo_b_in2.write(data2);
      fifo_b_in3.write(data3);
    }
  }
}

void drainer(
  hls::stream<ap_uint<4*16> >& fifo_out,
  hls::stream<ap_ufixed<4,0> >& fifo_out_00, hls::stream<ap_ufixed<4,0> >& fifo_out_01, hls::stream<ap_ufixed<4,0> >& fifo_out_02, hls::stream<ap_ufixed<4,0> >& fifo_out_03,
  hls::stream<ap_ufixed<4,0> >& fifo_out_10, hls::stream<ap_ufixed<4,0> >& fifo_out_11, hls::stream<ap_ufixed<4,0> >& fifo_out_12, hls::stream<ap_ufixed<4,0> >& fifo_out_13,
  hls::stream<ap_ufixed<4,0> >& fifo_out_20, hls::stream<ap_ufixed<4,0> >& fifo_out_21, hls::stream<ap_ufixed<4,0> >& fifo_out_22, hls::stream<ap_ufixed<4,0> >& fifo_out_23,
  hls::stream<ap_ufixed<4,0> >& fifo_out_30, hls::stream<ap_ufixed<4,0> >& fifo_out_31, hls::stream<ap_ufixed<4,0> >& fifo_out_32, hls::stream<ap_ufixed<4,0> >& fifo_out_33
){
  #pragma HLS DATAFLOW

  ROW: for (int i = 0; i < 64/4; i++){
    COL: for (int j = 0; j < 42*82/4; j++) {
      #pragma HLS PIPELINE II=1
      ap_uint<16*4> data;
      data(4*0+3, 4*0) = fifo_out_00.read();
      data(4*1+3, 4*1) = fifo_out_01.read();
      data(4*2+3, 4*2) = fifo_out_02.read();
      data(4*3+3, 4*3) = fifo_out_03.read();
      data(4*4+3, 4*4) = fifo_out_10.read();
      data(4*5+3, 4*5) = fifo_out_11.read();
      data(4*6+3, 4*6) = fifo_out_12.read();
      data(4*7+3, 4*7) = fifo_out_13.read();
      data(4*8+3, 4*8) = fifo_out_20.read();
      data(4*9+3, 4*9) = fifo_out_21.read();
      data(4*10+3, 4*10) = fifo_out_22.read();
      data(4*11+3, 4*11) = fifo_out_23.read();
      data(4*12+3, 4*12) = fifo_out_30.read();
      data(4*13+3, 4*13) = fifo_out_31.read();
      data(4*14+3, 4*14) = fifo_out_32.read();
      data(4*15+3, 4*15) = fifo_out_33.read();
      fifo_out.write(data);
    }
  }
}
void conv3_sys(ap_ufixed<4,0> conv3_pad[1][32][42][82], ap_fixed<5, 2> weight_conv3[64][32][3][3], hls::stream<ap_uint<4*16> > &conv3_pipe_9) {
    
  ap_ufixed<4, 0> im2col[42*82][3*3*32];
  ap_fixed<5, 2> weights[64][3*3*32];
  #pragma HLS array_partition variable=im2col complete dim=2

  ap_ufixed<4, 0> conv3_line_buffer[1][32][3][82];
  ap_ufixed<4, 0> conv3_window_buffer[1][32][3][3];
  im2col_nn2: for (int nn2 = 0; nn2 < 1; ++nn2) {
    conv3_yy_reuse2: for (int yy_reuse2 = 0; yy_reuse2 < 42; ++yy_reuse2) {
      conv3_xx_reuse2: for (int xx_reuse2 = 0; xx_reuse2 < 82; ++xx_reuse2) {
        #pragma HLS pipeline
        conv3_pad_2: for (int conv3_pad_2 = 0; conv3_pad_2 < 32; ++conv3_pad_2) {
          conv3_pad_1: for (int conv3_pad_1 = 0; conv3_pad_1 < 2; ++conv3_pad_1) {
            conv3_line_buffer[0][conv3_pad_2][conv3_pad_1][xx_reuse2] = conv3_line_buffer[0][conv3_pad_2][(conv3_pad_1 + 1)][xx_reuse2];
          }
          conv3_line_buffer[0][conv3_pad_2][2][xx_reuse2] = conv3_pad[nn2][conv3_pad_2][yy_reuse2][xx_reuse2];
        }
        if (2 <= yy_reuse2) {
          conv3_line_buffer_1: for (int conv3_line_buffer_1 = 0; conv3_line_buffer_1 < 3; ++conv3_line_buffer_1) {
            conv3_line_buffer_2: for (int conv3_line_buffer_2 = 0; conv3_line_buffer_2 < 32; ++conv3_line_buffer_2) {
              conv3_line_buffer_0: for (int conv3_line_buffer_0 = 0; conv3_line_buffer_0 < 2; ++conv3_line_buffer_0) {
                conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][conv3_line_buffer_0] = conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][(conv3_line_buffer_0 + 1)];
              }
              conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][2] = conv3_line_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][xx_reuse2];
            }
          }
          if (2 <= xx_reuse2) {
            conv3_ra106: for (int ra106 = 0; ra106 < 32; ++ra106) {
              conv3_ra107: for (int ra107 = 0; ra107 < 3; ++ra107) {
                conv3_ra108: for (int ra108 = 0; ra108 < 3; ++ra108) {
                  im2col[yy_reuse2*82+xx_reuse2][ra106*3+ra107*3+ra108] = conv3_window_buffer[0][ra106][ra107][ra108];
                }
              }
            }
          }
        }
      }
    }    
  }

  #pragma HLS DATAFLOW
  hls::stream<ap_uint<4*32*3> > fifo_localA0;
  #pragma HLS stream variable=fifo_localA0 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_localA1;
  #pragma HLS stream variable=fifo_localA1 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_localA2;
  #pragma HLS stream variable=fifo_localA2 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_localA3;
  #pragma HLS stream variable=fifo_localA3 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_localB0;
  #pragma HLS stream variable=fifo_localB0 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_localB1;
  #pragma HLS stream variable=fifo_localB1 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_localB2;
  #pragma HLS stream variable=fifo_localB2 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_localB3;
  #pragma HLS stream variable=fifo_localB3 depth=1024

  hls::stream<ap_uint<4*32*3> > fifo_a_out_00;
  #pragma HLS stream variable=fifo_a_out_00 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_01;
  #pragma HLS stream variable=fifo_a_out_01 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_02;
  #pragma HLS stream variable=fifo_a_out_02 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_03;
  #pragma HLS stream variable=fifo_a_out_03 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_10;
  #pragma HLS stream variable=fifo_a_out_10 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_11;
  #pragma HLS stream variable=fifo_a_out_11 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_12;
  #pragma HLS stream variable=fifo_a_out_12 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_13;
  #pragma HLS stream variable=fifo_a_out_13 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_20;
  #pragma HLS stream variable=fifo_a_out_20 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_21;
  #pragma HLS stream variable=fifo_a_out_21 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_22;
  #pragma HLS stream variable=fifo_a_out_22 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_23;
  #pragma HLS stream variable=fifo_a_out_23 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_30;
  #pragma HLS stream variable=fifo_a_out_30 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_31;
  #pragma HLS stream variable=fifo_a_out_31 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_32;
  #pragma HLS stream variable=fifo_a_out_32 depth=1024
  hls::stream<ap_uint<4*32*3> > fifo_a_out_33;
  #pragma HLS stream variable=fifo_a_out_33 depth=1024

  hls::stream<ap_uint<5*32*3> > fifo_b_out_00;
  #pragma HLS stream variable=fifo_b_out_00 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_01;
  #pragma HLS stream variable=fifo_b_out_01 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_02;
  #pragma HLS stream variable=fifo_b_out_02 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_03;
  #pragma HLS stream variable=fifo_b_out_03 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_10;
  #pragma HLS stream variable=fifo_b_out_10 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_11;
  #pragma HLS stream variable=fifo_b_out_11 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_12;
  #pragma HLS stream variable=fifo_b_out_12 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_13;
  #pragma HLS stream variable=fifo_b_out_13 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_20;
  #pragma HLS stream variable=fifo_b_out_20 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_21;
  #pragma HLS stream variable=fifo_b_out_21 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_22;
  #pragma HLS stream variable=fifo_b_out_22 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_23;
  #pragma HLS stream variable=fifo_b_out_23 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_30;
  #pragma HLS stream variable=fifo_b_out_30 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_31;
  #pragma HLS stream variable=fifo_b_out_31 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_32;
  #pragma HLS stream variable=fifo_b_out_32 depth=1024
  hls::stream<ap_uint<5*32*3> > fifo_b_out_33;
  #pragma HLS stream variable=fifo_b_out_33 depth=1024

  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_00;
  #pragma HLS stream variable=fifo_c_drainer_00 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_01;
  #pragma HLS stream variable=fifo_c_drainer_01 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_02;
  #pragma HLS stream variable=fifo_c_drainer_02 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_03;
  #pragma HLS stream variable=fifo_c_drainer_03 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_10;
  #pragma HLS stream variable=fifo_c_drainer_10 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_11;
  #pragma HLS stream variable=fifo_c_drainer_11 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_12;
  #pragma HLS stream variable=fifo_c_drainer_12 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_13;
  #pragma HLS stream variable=fifo_c_drainer_13 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_20;
  #pragma HLS stream variable=fifo_c_drainer_20 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_21;
  #pragma HLS stream variable=fifo_c_drainer_21 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_22;
  #pragma HLS stream variable=fifo_c_drainer_22 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_23;
  #pragma HLS stream variable=fifo_c_drainer_23 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_30;
  #pragma HLS stream variable=fifo_c_drainer_30 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_31;
  #pragma HLS stream variable=fifo_c_drainer_31 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_32;
  #pragma HLS stream variable=fifo_c_drainer_32 depth=1024
  hls::stream<ap_ufixed<4,0> > fifo_c_drainer_33;
  #pragma HLS stream variable=fifo_c_drainer_33 depth=1024

  loader_A(im2col, fifo_localA0, fifo_localA1, fifo_localA2, fifo_localA3);
  loader_B(weight_conv3, fifo_localB0, fifo_localB1, fifo_localB2, fifo_localB3);

  // 0, 0
  PE(fifo_localA0, fifo_a_out_00, fifo_localB0, fifo_b_out_00, fifo_c_drainer_00);
  // 0, 1
  PE(fifo_localA1, fifo_a_out_01, fifo_b_out_00, fifo_b_out_01, fifo_c_drainer_01);
  // 0, 2
  PE(fifo_localA2, fifo_a_out_02, fifo_b_out_01, fifo_b_out_02, fifo_c_drainer_02);
  // 0, 3
  PE_borderB(fifo_localA3, fifo_a_out_03, fifo_b_out_02, fifo_c_drainer_03); 
  
  // 1, 0
  PE(fifo_a_out_00, fifo_a_out_10, fifo_localB1, fifo_b_out_10, fifo_c_drainer_10);
  // 1, 1
  PE(fifo_a_out_01, fifo_a_out_11, fifo_b_out_10, fifo_b_out_11, fifo_c_drainer_11);
  // 1, 2
  PE(fifo_a_out_02, fifo_a_out_12, fifo_b_out_11, fifo_b_out_12, fifo_c_drainer_12);
  // 1, 3
  PE_borderB(fifo_a_out_03, fifo_a_out_13, fifo_b_out_12, fifo_c_drainer_13); 

  // 2, 0
  PE(fifo_a_out_10, fifo_a_out_20, fifo_localB2, fifo_b_out_20, fifo_c_drainer_20);
  // 2, 1
  PE(fifo_a_out_11, fifo_a_out_21, fifo_b_out_20, fifo_b_out_21, fifo_c_drainer_21);
  // 2, 2
  PE(fifo_a_out_12, fifo_a_out_22, fifo_b_out_21, fifo_b_out_22, fifo_c_drainer_22);
  // 2, 3
  PE_borderB(fifo_a_out_13, fifo_a_out_23, fifo_b_out_22, fifo_c_drainer_23); 

  // 3, 0
  PE_borderA(fifo_a_out_20, fifo_localB3, fifo_b_out_30, fifo_c_drainer_30);
  // 3, 1
  PE_borderA(fifo_a_out_21, fifo_b_out_30, fifo_b_out_31, fifo_c_drainer_31);
  // 3, 2
  PE_borderA(fifo_a_out_22, fifo_b_out_31, fifo_b_out_32, fifo_c_drainer_32);
  // 3, 3
  PE_borderAB(fifo_a_out_23, fifo_b_out_32, fifo_c_drainer_33); 


  drainer(
    conv3_pipe_9,
    fifo_c_drainer_00,   fifo_c_drainer_01,
    fifo_c_drainer_02,   fifo_c_drainer_03,
    fifo_c_drainer_10,   fifo_c_drainer_11,
    fifo_c_drainer_12,   fifo_c_drainer_13,
    fifo_c_drainer_20,   fifo_c_drainer_21, 
    fifo_c_drainer_22,   fifo_c_drainer_23,
    fifo_c_drainer_30,   fifo_c_drainer_31,
    fifo_c_drainer_32,   fifo_c_drainer_33 
  );

}