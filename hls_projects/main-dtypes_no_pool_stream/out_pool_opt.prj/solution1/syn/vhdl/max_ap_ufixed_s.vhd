-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity max_ap_ufixed_s is
port (
    ap_ready : OUT STD_LOGIC;
    x_V : IN STD_LOGIC_VECTOR (4 downto 0);
    y_V : IN STD_LOGIC_VECTOR (4 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (4 downto 0) );
end;


architecture behav of max_ap_ufixed_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal icmp_ln1494_fu_18_p2 : STD_LOGIC_VECTOR (0 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= 
        x_V when (icmp_ln1494_fu_18_p2(0) = '1') else 
        y_V;
    icmp_ln1494_fu_18_p2 <= "1" when (unsigned(x_V) > unsigned(y_V)) else "0";
end behav;
