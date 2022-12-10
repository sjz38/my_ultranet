-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgh9_rom is 
    generic(
             DWIDTH     : integer := 5; 
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


architecture rtl of conv3_weight_convgh9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "11011", 2 => "00010", 3 => "11001", 4 => "11100", 
    5 => "11101", 6 => "00001", 7 => "00110", 8 => "11111", 9 => "11101", 
    10 => "11000", 11 => "11111", 12 => "00000", 13 => "01000", 14 => "11111", 
    15 to 16=> "11011", 17 => "00100", 18 => "11111", 19 to 20=> "11110", 21 => "11111", 
    22 => "00010", 23 => "00111", 24 => "11110", 25 => "00011", 26 => "11110", 
    27 => "11101", 28 => "00001", 29 => "11011", 30 => "11100", 31 => "00000", 
    32 => "00001", 33 => "11101", 34 => "11111", 35 => "00000", 36 => "11111", 
    37 => "00000", 38 => "00010", 39 => "00001", 40 => "11101", 41 => "01000", 
    42 => "11111", 43 => "00000", 44 => "11011", 45 => "00001", 46 => "00100", 
    47 => "11101", 48 to 49=> "00010", 50 => "01000", 51 => "11111", 52 => "00011", 
    53 => "11110", 54 => "00011", 55 => "11000", 56 => "00100", 57 => "11011", 
    58 => "00111", 59 => "11100", 60 => "00011", 61 => "11101", 62 => "00000", 
    63 => "11010" );

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

entity conv3_weight_convgh9 is
    generic (
        DataWidth : INTEGER := 5;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convgh9 is
    component conv3_weight_convgh9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgh9_rom_U :  component conv3_weight_convgh9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


