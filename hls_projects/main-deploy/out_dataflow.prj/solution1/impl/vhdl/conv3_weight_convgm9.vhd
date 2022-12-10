-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgm9_rom is 
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


architecture rtl of conv3_weight_convgm9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "00011", 2 => "11010", 3 => "11001", 4 => "11011", 
    5 => "11111", 6 => "11100", 7 => "11110", 8 => "00001", 9 => "00000", 
    10 => "11010", 11 => "00011", 12 => "00001", 13 => "11100", 14 => "11000", 
    15 => "01000", 16 => "11111", 17 => "11011", 18 => "11110", 19 => "00001", 
    20 => "00100", 21 => "11110", 22 => "11000", 23 => "11010", 24 => "11101", 
    25 => "00100", 26 => "00010", 27 => "00001", 28 => "00010", 29 => "11100", 
    30 => "11010", 31 => "11111", 32 => "11101", 33 => "00100", 34 => "01000", 
    35 => "00000", 36 => "00001", 37 => "00111", 38 => "11111", 39 => "11110", 
    40 => "01000", 41 => "00011", 42 => "11111", 43 => "00100", 44 => "11100", 
    45 => "00001", 46 => "11111", 47 => "00010", 48 => "11100", 49 => "11011", 
    50 => "11000", 51 => "11100", 52 => "00100", 53 => "11010", 54 => "01000", 
    55 => "11011", 56 => "11000", 57 => "00001", 58 => "11001", 59 => "11100", 
    60 => "00010", 61 => "11111", 62 => "00001", 63 => "11111" );

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

entity conv3_weight_convgm9 is
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

architecture arch of conv3_weight_convgm9 is
    component conv3_weight_convgm9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgm9_rom_U :  component conv3_weight_convgm9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


