
`timescale 1 ns / 1 ps

  module test_mul_mul_12nsmIc_DSP48_14(a, b, p);
input [12 - 1 : 0] a;
input [7 - 1 : 0] b;
output [17 - 1 : 0] p;

assign p = $unsigned (a) * $unsigned (b);

endmodule
`timescale 1 ns / 1 ps
module test_mul_mul_12nsmIc(
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



test_mul_mul_12nsmIc_DSP48_14 test_mul_mul_12nsmIc_DSP48_14_U(
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

