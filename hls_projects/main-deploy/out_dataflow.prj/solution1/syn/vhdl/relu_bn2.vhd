-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity relu_bn2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    start_full_n : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    start_out : OUT STD_LOGIC;
    start_write : OUT STD_LOGIC;
    conv2_pipe_3_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    conv2_pipe_3_V_V_empty_n : IN STD_LOGIC;
    conv2_pipe_3_V_V_read : OUT STD_LOGIC;
    relu2_pipe_4_V_V_din : OUT STD_LOGIC_VECTOR (4 downto 0);
    relu2_pipe_4_V_V_full_n : IN STD_LOGIC;
    relu2_pipe_4_V_V_write : OUT STD_LOGIC );
end;


architecture behav of relu_bn2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv19_0 : STD_LOGIC_VECTOR (18 downto 0) := "0000000000000000000";
    constant ap_const_lv14_0 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000000";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv19_64000 : STD_LOGIC_VECTOR (18 downto 0) := "1100100000000000000";
    constant ap_const_lv19_1 : STD_LOGIC_VECTOR (18 downto 0) := "0000000000000000001";
    constant ap_const_lv14_1400 : STD_LOGIC_VECTOR (13 downto 0) := "01010000000000";
    constant ap_const_lv6_20 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv14_1 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_19 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011001";
    constant ap_const_lv16_100 : STD_LOGIC_VECTOR (15 downto 0) := "0000000100000000";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal real_start : STD_LOGIC;
    signal start_once_reg : STD_LOGIC := '0';
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal internal_ap_ready : STD_LOGIC;
    signal a_batchnorm2_V_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal a_batchnorm2_V_ce0 : STD_LOGIC;
    signal a_batchnorm2_V_q0 : STD_LOGIC_VECTOR (9 downto 0);
    signal b_batchnorm2_V_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal b_batchnorm2_V_ce0 : STD_LOGIC;
    signal b_batchnorm2_V_q0 : STD_LOGIC_VECTOR (19 downto 0);
    signal conv2_pipe_3_V_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal icmp_ln296_reg_339 : STD_LOGIC_VECTOR (0 downto 0);
    signal relu2_pipe_4_V_V_blk_n : STD_LOGIC;
    signal indvar_flatten11_reg_153 : STD_LOGIC_VECTOR (18 downto 0);
    signal indvar_flatten_reg_164 : STD_LOGIC_VECTOR (13 downto 0);
    signal args21_0_0_reg_175 : STD_LOGIC_VECTOR (5 downto 0);
    signal icmp_ln296_fu_186_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal add_ln296_fu_192_p2 : STD_LOGIC_VECTOR (18 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal add_ln298_fu_242_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln297_fu_254_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal zext_ln304_fu_236_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage0_01001 : BOOLEAN;
    signal icmp_ln297_fu_198_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln298_fu_210_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln297_fu_204_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln297_fu_216_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln298_fu_222_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln298_fu_228_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal add_ln297_fu_248_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal grp_fu_328_p3 : STD_LOGIC_VECTOR (25 downto 0);
    signal trunc_ln_fu_274_p4 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_10_fu_283_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln1495_fu_290_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln1495_fu_313_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln1495_fu_305_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_s_fu_296_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_fu_328_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;
    signal grp_fu_328_p10 : STD_LOGIC_VECTOR (25 downto 0);

    component test_mac_muladd_1ewR IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (15 downto 0);
        din1 : IN STD_LOGIC_VECTOR (9 downto 0);
        din2 : IN STD_LOGIC_VECTOR (19 downto 0);
        dout : OUT STD_LOGIC_VECTOR (25 downto 0) );
    end component;


    component relu_bn2_a_batchneuR IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (9 downto 0) );
    end component;


    component relu_bn2_b_batchnevR IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (19 downto 0) );
    end component;



begin
    a_batchnorm2_V_U : component relu_bn2_a_batchneuR
    generic map (
        DataWidth => 10,
        AddressRange => 32,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => a_batchnorm2_V_address0,
        ce0 => a_batchnorm2_V_ce0,
        q0 => a_batchnorm2_V_q0);

    b_batchnorm2_V_U : component relu_bn2_b_batchnevR
    generic map (
        DataWidth => 20,
        AddressRange => 32,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => b_batchnorm2_V_address0,
        ce0 => b_batchnorm2_V_ce0,
        q0 => b_batchnorm2_V_q0);

    test_mac_muladd_1ewR_U312 : component test_mac_muladd_1ewR
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 16,
        din1_WIDTH => 10,
        din2_WIDTH => 20,
        dout_WIDTH => 26)
    port map (
        din0 => conv2_pipe_3_V_V_dout,
        din1 => grp_fu_328_p1,
        din2 => b_batchnorm2_V_q0,
        dout => grp_fu_328_p3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state2);
                elsif ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    start_once_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                start_once_reg <= ap_const_logic_0;
            else
                if (((internal_ap_ready = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
                    start_once_reg <= ap_const_logic_1;
                elsif ((internal_ap_ready = ap_const_logic_1)) then 
                    start_once_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    args21_0_0_reg_175_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln296_fu_186_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
                args21_0_0_reg_175 <= add_ln298_fu_242_p2;
            elsif ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                args21_0_0_reg_175 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    indvar_flatten11_reg_153_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln296_fu_186_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
                indvar_flatten11_reg_153 <= add_ln296_fu_192_p2;
            elsif ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten11_reg_153 <= ap_const_lv19_0;
            end if; 
        end if;
    end process;

    indvar_flatten_reg_164_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln296_fu_186_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
                indvar_flatten_reg_164 <= select_ln297_fu_254_p3;
            elsif ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten_reg_164 <= ap_const_lv14_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                icmp_ln296_reg_339 <= icmp_ln296_fu_186_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (real_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, icmp_ln296_fu_186_p2, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if (not(((icmp_ln296_fu_186_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif (((icmp_ln296_fu_186_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    a_batchnorm2_V_address0 <= zext_ln304_fu_236_p1(5 - 1 downto 0);

    a_batchnorm2_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
            a_batchnorm2_V_ce0 <= ap_const_logic_1;
        else 
            a_batchnorm2_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln296_fu_192_p2 <= std_logic_vector(unsigned(indvar_flatten11_reg_153) + unsigned(ap_const_lv19_1));
    add_ln297_fu_248_p2 <= std_logic_vector(unsigned(ap_const_lv14_1) + unsigned(indvar_flatten_reg_164));
    add_ln298_fu_242_p2 <= std_logic_vector(unsigned(ap_const_lv6_1) + unsigned(select_ln298_fu_228_p3));
    and_ln297_fu_216_p2 <= (xor_ln297_fu_204_p2 and icmp_ln298_fu_210_p2);
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state4 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_pp0_stage0_01001_assign_proc : process(conv2_pipe_3_V_V_empty_n, relu2_pipe_4_V_V_full_n, ap_enable_reg_pp0_iter1, icmp_ln296_reg_339)
    begin
                ap_block_pp0_stage0_01001 <= ((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (((icmp_ln296_reg_339 = ap_const_lv1_0) and (relu2_pipe_4_V_V_full_n = ap_const_logic_0)) or ((icmp_ln296_reg_339 = ap_const_lv1_0) and (conv2_pipe_3_V_V_empty_n = ap_const_logic_0))));
    end process;


    ap_block_pp0_stage0_11001_assign_proc : process(conv2_pipe_3_V_V_empty_n, relu2_pipe_4_V_V_full_n, ap_enable_reg_pp0_iter1, icmp_ln296_reg_339)
    begin
                ap_block_pp0_stage0_11001 <= ((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (((icmp_ln296_reg_339 = ap_const_lv1_0) and (relu2_pipe_4_V_V_full_n = ap_const_logic_0)) or ((icmp_ln296_reg_339 = ap_const_lv1_0) and (conv2_pipe_3_V_V_empty_n = ap_const_logic_0))));
    end process;


    ap_block_pp0_stage0_subdone_assign_proc : process(conv2_pipe_3_V_V_empty_n, relu2_pipe_4_V_V_full_n, ap_enable_reg_pp0_iter1, icmp_ln296_reg_339)
    begin
                ap_block_pp0_stage0_subdone <= ((ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (((icmp_ln296_reg_339 = ap_const_lv1_0) and (relu2_pipe_4_V_V_full_n = ap_const_logic_0)) or ((icmp_ln296_reg_339 = ap_const_lv1_0) and (conv2_pipe_3_V_V_empty_n = ap_const_logic_0))));
    end process;


    ap_block_state1_assign_proc : process(real_start, ap_done_reg)
    begin
                ap_block_state1 <= ((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;

        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_block_state3_pp0_stage0_iter1_assign_proc : process(conv2_pipe_3_V_V_empty_n, relu2_pipe_4_V_V_full_n, icmp_ln296_reg_339)
    begin
                ap_block_state3_pp0_stage0_iter1 <= (((icmp_ln296_reg_339 = ap_const_lv1_0) and (relu2_pipe_4_V_V_full_n = ap_const_logic_0)) or ((icmp_ln296_reg_339 = ap_const_lv1_0) and (conv2_pipe_3_V_V_empty_n = ap_const_logic_0)));
    end process;


    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln296_fu_186_p2)
    begin
        if ((icmp_ln296_fu_186_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(real_start, ap_CS_fsm_state1)
    begin
        if (((real_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_ready <= internal_ap_ready;
    b_batchnorm2_V_address0 <= zext_ln304_fu_236_p1(5 - 1 downto 0);

    b_batchnorm2_V_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
            b_batchnorm2_V_ce0 <= ap_const_logic_1;
        else 
            b_batchnorm2_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    conv2_pipe_3_V_V_blk_n_assign_proc : process(conv2_pipe_3_V_V_empty_n, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0, icmp_ln296_reg_339)
    begin
        if (((icmp_ln296_reg_339 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            conv2_pipe_3_V_V_blk_n <= conv2_pipe_3_V_V_empty_n;
        else 
            conv2_pipe_3_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    conv2_pipe_3_V_V_read_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, icmp_ln296_reg_339, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln296_reg_339 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            conv2_pipe_3_V_V_read <= ap_const_logic_1;
        else 
            conv2_pipe_3_V_V_read <= ap_const_logic_0;
        end if; 
    end process;

    grp_fu_328_p1 <= grp_fu_328_p10(10 - 1 downto 0);
    grp_fu_328_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(a_batchnorm2_V_q0),26));
    icmp_ln1495_fu_290_p2 <= "1" when (signed(trunc_ln_fu_274_p4) > signed(ap_const_lv16_100)) else "0";
    icmp_ln296_fu_186_p2 <= "1" when (indvar_flatten11_reg_153 = ap_const_lv19_64000) else "0";
    icmp_ln297_fu_198_p2 <= "1" when (indvar_flatten_reg_164 = ap_const_lv14_1400) else "0";
    icmp_ln298_fu_210_p2 <= "1" when (args21_0_0_reg_175 = ap_const_lv6_20) else "0";

    internal_ap_ready_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            internal_ap_ready <= ap_const_logic_1;
        else 
            internal_ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    or_ln1495_fu_313_p2 <= (tmp_10_fu_283_p3 or icmp_ln1495_fu_290_p2);
    or_ln298_fu_222_p2 <= (icmp_ln297_fu_198_p2 or and_ln297_fu_216_p2);

    real_start_assign_proc : process(ap_start, start_full_n, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (start_full_n = ap_const_logic_0))) then 
            real_start <= ap_const_logic_0;
        else 
            real_start <= ap_start;
        end if; 
    end process;


    relu2_pipe_4_V_V_blk_n_assign_proc : process(relu2_pipe_4_V_V_full_n, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0, icmp_ln296_reg_339)
    begin
        if (((icmp_ln296_reg_339 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            relu2_pipe_4_V_V_blk_n <= relu2_pipe_4_V_V_full_n;
        else 
            relu2_pipe_4_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    relu2_pipe_4_V_V_din <= 
        select_ln1495_fu_305_p3 when (or_ln1495_fu_313_p2(0) = '1') else 
        tmp_s_fu_296_p4;

    relu2_pipe_4_V_V_write_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, icmp_ln296_reg_339, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln296_reg_339 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            relu2_pipe_4_V_V_write <= ap_const_logic_1;
        else 
            relu2_pipe_4_V_V_write <= ap_const_logic_0;
        end if; 
    end process;

    select_ln1495_fu_305_p3 <= 
        ap_const_lv5_0 when (tmp_10_fu_283_p3(0) = '1') else 
        ap_const_lv5_10;
    select_ln297_fu_254_p3 <= 
        ap_const_lv14_1 when (icmp_ln297_fu_198_p2(0) = '1') else 
        add_ln297_fu_248_p2;
    select_ln298_fu_228_p3 <= 
        ap_const_lv6_0 when (or_ln298_fu_222_p2(0) = '1') else 
        args21_0_0_reg_175;
    start_out <= real_start;

    start_write_assign_proc : process(real_start, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
            start_write <= ap_const_logic_1;
        else 
            start_write <= ap_const_logic_0;
        end if; 
    end process;

    tmp_10_fu_283_p3 <= grp_fu_328_p3(25 downto 25);
    tmp_s_fu_296_p4 <= grp_fu_328_p3(18 downto 14);
    trunc_ln_fu_274_p4 <= grp_fu_328_p3(25 downto 10);
    xor_ln297_fu_204_p2 <= (icmp_ln297_fu_198_p2 xor ap_const_lv1_1);
    zext_ln304_fu_236_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln298_fu_228_p3),64));
end behav;
