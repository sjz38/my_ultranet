-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfcY_rom is 
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


architecture rtl of conv3_weight_convfcY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0100", 1 => "1101", 2 => "1100", 3 => "0110", 4 => "1101", 
    5 => "1111", 6 => "0101", 7 => "0001", 8 => "0000", 9 => "0001", 
    10 => "1011", 11 => "1110", 12 => "1111", 13 => "0110", 14 => "0000", 
    15 => "0101", 16 => "0011", 17 => "1101", 18 => "0010", 19 => "0001", 
    20 => "1001", 21 => "1100", 22 => "1110", 23 => "1101", 24 => "1110", 
    25 => "1101", 26 => "0001", 27 => "1110", 28 => "1011", 29 => "1000", 
    30 => "0100", 31 => "0010", 32 => "1101", 33 => "0011", 34 => "0111", 
    35 => "1111", 36 => "0110", 37 => "0010", 38 => "1111", 39 => "0000", 
    40 => "0110", 41 => "1111", 42 => "0100", 43 => "1110", 44 => "0001", 
    45 => "1000", 46 => "0010", 47 => "0101", 48 => "1110", 49 => "0000", 
    50 => "1101", 51 => "0000", 52 => "0010", 53 => "1111", 54 => "1010", 
    55 => "1000", 56 => "1011", 57 => "1100", 58 => "0001", 59 => "1100", 
    60 => "0110", 61 => "1101", 62 => "1111", 63 => "0000" );

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

entity conv3_weight_convfcY is
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

architecture arch of conv3_weight_convfcY is
    component conv3_weight_convfcY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfcY_rom_U :  component conv3_weight_convfcY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


