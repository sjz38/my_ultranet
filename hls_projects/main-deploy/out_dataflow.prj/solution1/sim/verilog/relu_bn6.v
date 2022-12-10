// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module relu_bn6 (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        conv6_pipe_11_V_V_dout,
        conv6_pipe_11_V_V_empty_n,
        conv6_pipe_11_V_V_read,
        relu6_pipe_12_V_V_din,
        relu6_pipe_12_V_V_full_n,
        relu6_pipe_12_V_V_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state4 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [15:0] conv6_pipe_11_V_V_dout;
input   conv6_pipe_11_V_V_empty_n;
output   conv6_pipe_11_V_V_read;
output  [4:0] relu6_pipe_12_V_V_din;
input   relu6_pipe_12_V_V_full_n;
output   relu6_pipe_12_V_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg conv6_pipe_11_V_V_read;
reg relu6_pipe_12_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
wire   [5:0] a_batchnorm6_V_address0;
reg    a_batchnorm6_V_ce0;
wire  signed [9:0] a_batchnorm6_V_q0;
wire   [5:0] b_batchnorm6_V_address0;
reg    b_batchnorm6_V_ce0;
wire  signed [19:0] b_batchnorm6_V_q0;
reg    conv6_pipe_11_V_V_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] icmp_ln729_reg_339;
reg    relu6_pipe_12_V_V_blk_n;
reg   [13:0] indvar_flatten11_reg_153;
reg   [11:0] indvar_flatten_reg_164;
reg   [6:0] args25_0_0_reg_175;
wire   [0:0] icmp_ln729_fu_186_p2;
wire    ap_block_state2_pp0_stage0_iter0;
reg    ap_block_state3_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
wire   [13:0] add_ln729_fu_192_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [6:0] add_ln731_fu_242_p2;
wire   [11:0] select_ln730_fu_254_p3;
reg    ap_block_state1;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
wire   [63:0] zext_ln736_fu_236_p1;
reg    ap_block_pp0_stage0_01001;
wire   [0:0] icmp_ln730_fu_198_p2;
wire   [0:0] icmp_ln731_fu_210_p2;
wire   [0:0] xor_ln730_fu_204_p2;
wire   [0:0] and_ln730_fu_216_p2;
wire   [0:0] or_ln731_fu_222_p2;
wire   [6:0] select_ln731_fu_228_p3;
wire   [11:0] add_ln730_fu_248_p2;
wire  signed [24:0] grp_fu_328_p3;
wire   [14:0] trunc_ln_fu_274_p4;
wire   [0:0] tmp_6_fu_283_p3;
wire   [0:0] icmp_ln1495_fu_290_p2;
wire   [0:0] or_ln1495_fu_313_p2;
wire   [4:0] select_ln1495_fu_305_p3;
wire   [4:0] tmp_s_fu_296_p4;
wire    ap_CS_fsm_state4;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

relu_bn6_a_batchnvld #(
    .DataWidth( 10 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
a_batchnorm6_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(a_batchnorm6_V_address0),
    .ce0(a_batchnorm6_V_ce0),
    .q0(a_batchnorm6_V_q0)
);

relu_bn6_b_batchnvmd #(
    .DataWidth( 20 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
b_batchnorm6_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(b_batchnorm6_V_address0),
    .ce0(b_batchnorm6_V_ce0),
    .q0(b_batchnorm6_V_q0)
);

test_mac_muladd_1vnd #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 10 ),
    .din2_WIDTH( 20 ),
    .dout_WIDTH( 25 ))
test_mac_muladd_1vnd_U867(
    .din0(conv6_pipe_11_V_V_dout),
    .din1(a_batchnorm6_V_q0),
    .din2(b_batchnorm6_V_q0),
    .dout(grp_fu_328_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state4)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln729_fu_186_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        args25_0_0_reg_175 <= add_ln731_fu_242_p2;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        args25_0_0_reg_175 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln729_fu_186_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        indvar_flatten11_reg_153 <= add_ln729_fu_192_p2;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten11_reg_153 <= 14'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln729_fu_186_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        indvar_flatten_reg_164 <= select_ln730_fu_254_p3;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_164 <= 12'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln729_reg_339 <= icmp_ln729_fu_186_p2;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        a_batchnorm6_V_ce0 = 1'b1;
    end else begin
        a_batchnorm6_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln729_fu_186_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        b_batchnorm6_V_ce0 = 1'b1;
    end else begin
        b_batchnorm6_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln729_reg_339 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        conv6_pipe_11_V_V_blk_n = conv6_pipe_11_V_V_empty_n;
    end else begin
        conv6_pipe_11_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln729_reg_339 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        conv6_pipe_11_V_V_read = 1'b1;
    end else begin
        conv6_pipe_11_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((icmp_ln729_reg_339 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        relu6_pipe_12_V_V_blk_n = relu6_pipe_12_V_V_full_n;
    end else begin
        relu6_pipe_12_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln729_reg_339 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        relu6_pipe_12_V_V_write = 1'b1;
    end else begin
        relu6_pipe_12_V_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((icmp_ln729_fu_186_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((icmp_ln729_fu_186_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_batchnorm6_V_address0 = zext_ln736_fu_236_p1;

assign add_ln729_fu_192_p2 = (indvar_flatten11_reg_153 + 14'd1);

assign add_ln730_fu_248_p2 = (12'd1 + indvar_flatten_reg_164);

assign add_ln731_fu_242_p2 = (7'd1 + select_ln731_fu_228_p3);

assign and_ln730_fu_216_p2 = (xor_ln730_fu_204_p2 & icmp_ln731_fu_210_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_enable_reg_pp0_iter1 == 1'b1) & (((icmp_ln729_reg_339 == 1'd0) & (relu6_pipe_12_V_V_full_n == 1'b0)) | ((icmp_ln729_reg_339 == 1'd0) & (conv6_pipe_11_V_V_empty_n == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_enable_reg_pp0_iter1 == 1'b1) & (((icmp_ln729_reg_339 == 1'd0) & (relu6_pipe_12_V_V_full_n == 1'b0)) | ((icmp_ln729_reg_339 == 1'd0) & (conv6_pipe_11_V_V_empty_n == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_enable_reg_pp0_iter1 == 1'b1) & (((icmp_ln729_reg_339 == 1'd0) & (relu6_pipe_12_V_V_full_n == 1'b0)) | ((icmp_ln729_reg_339 == 1'd0) & (conv6_pipe_11_V_V_empty_n == 1'b0))));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state3_pp0_stage0_iter1 = (((icmp_ln729_reg_339 == 1'd0) & (relu6_pipe_12_V_V_full_n == 1'b0)) | ((icmp_ln729_reg_339 == 1'd0) & (conv6_pipe_11_V_V_empty_n == 1'b0)));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign b_batchnorm6_V_address0 = zext_ln736_fu_236_p1;

assign icmp_ln1495_fu_290_p2 = (($signed(trunc_ln_fu_274_p4) > $signed(15'd256)) ? 1'b1 : 1'b0);

assign icmp_ln729_fu_186_p2 = ((indvar_flatten11_reg_153 == 14'd12800) ? 1'b1 : 1'b0);

assign icmp_ln730_fu_198_p2 = ((indvar_flatten_reg_164 == 12'd1280) ? 1'b1 : 1'b0);

assign icmp_ln731_fu_210_p2 = ((args25_0_0_reg_175 == 7'd64) ? 1'b1 : 1'b0);

assign or_ln1495_fu_313_p2 = (tmp_6_fu_283_p3 | icmp_ln1495_fu_290_p2);

assign or_ln731_fu_222_p2 = (icmp_ln730_fu_198_p2 | and_ln730_fu_216_p2);

assign relu6_pipe_12_V_V_din = ((or_ln1495_fu_313_p2[0:0] === 1'b1) ? select_ln1495_fu_305_p3 : tmp_s_fu_296_p4);

assign select_ln1495_fu_305_p3 = ((tmp_6_fu_283_p3[0:0] === 1'b1) ? 5'd0 : 5'd16);

assign select_ln730_fu_254_p3 = ((icmp_ln730_fu_198_p2[0:0] === 1'b1) ? 12'd1 : add_ln730_fu_248_p2);

assign select_ln731_fu_228_p3 = ((or_ln731_fu_222_p2[0:0] === 1'b1) ? 7'd0 : args25_0_0_reg_175);

assign start_out = real_start;

assign tmp_6_fu_283_p3 = grp_fu_328_p3[32'd24];

assign tmp_s_fu_296_p4 = {{grp_fu_328_p3[18:14]}};

assign trunc_ln_fu_274_p4 = {{grp_fu_328_p3[24:10]}};

assign xor_ln730_fu_204_p2 = (icmp_ln730_fu_198_p2 ^ 1'd1);

assign zext_ln736_fu_236_p1 = select_ln731_fu_228_p3;

endmodule //relu_bn6
