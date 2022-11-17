// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module max_ap_ufixed_s (
        ap_ready,
        x_V,
        y_V,
        ap_return
);


output   ap_ready;
input  [4:0] x_V;
input  [4:0] y_V;
output  [4:0] ap_return;

wire   [0:0] icmp_ln1494_fu_18_p2;

assign ap_ready = 1'b1;

assign ap_return = ((icmp_ln1494_fu_18_p2[0:0] === 1'b1) ? x_V : y_V);

assign icmp_ln1494_fu_18_p2 = ((x_V > y_V) ? 1'b1 : 1'b0);

endmodule //max_ap_ufixed_s
