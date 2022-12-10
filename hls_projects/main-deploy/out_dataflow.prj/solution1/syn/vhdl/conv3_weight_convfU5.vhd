-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfU5_rom is 
    generic(
             DWIDTH     : integer := 4; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv3_weight_convfU5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110", 1 => "0110", 2 => "0100", 3 => "1101", 4 => "1010", 
    5 => "1100", 6 => "1011", 7 => "0010", 8 => "0001", 9 to 10=> "1011", 
    11 => "1111", 12 => "1100", 13 => "0010", 14 => "0000", 15 => "1101", 
    16 => "1000", 17 => "1110", 18 => "1001", 19 to 20=> "0010", 21 => "1011", 
    22 => "0000", 23 => "1111", 24 => "1100", 25 to 26=> "0000", 27 => "0001", 
    28 => "0000", 29 => "1100", 30 => "1001", 31 => "1011", 32 => "1101", 
    33 => "1011", 34 => "1010", 35 to 36=> "0011", 37 => "1100", 38 => "1000", 
    39 => "0010", 40 => "1101", 41 to 42=> "0111", 43 => "0001", 44 => "1011", 
    45 => "1110", 46 => "1101", 47 => "0000", 48 => "1111", 49 => "1101", 
    50 => "1100", 51 => "0010", 52 => "0011", 53 => "1111", 54 => "1101", 
    55 => "1010", 56 => "1111", 57 => "0100", 58 => "1101", 59 => "1110", 
    60 => "1010", 61 => "1101", 62 => "0000", 63 => "0010" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity conv3_weight_convfU5 is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convfU5 is
    component conv3_weight_convfU5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfU5_rom_U :  component conv3_weight_convfU5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


