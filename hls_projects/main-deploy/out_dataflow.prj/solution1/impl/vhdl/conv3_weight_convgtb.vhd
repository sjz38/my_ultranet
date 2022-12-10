-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgtb_rom is 
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


architecture rtl of conv3_weight_convgtb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 => "11111", 2 => "11101", 3 => "00011", 4 => "11010", 
    5 => "00101", 6 => "00011", 7 => "11111", 8 => "11011", 9 => "00000", 
    10 => "11110", 11 => "11011", 12 => "00011", 13 => "00000", 14 => "11110", 
    15 => "11101", 16 => "00111", 17 => "00000", 18 => "11011", 19 => "11100", 
    20 => "00011", 21 => "11000", 22 => "11011", 23 => "00010", 24 => "00000", 
    25 => "11111", 26 => "00000", 27 => "00010", 28 => "01000", 29 => "00001", 
    30 => "00010", 31 => "11000", 32 => "00011", 33 => "00010", 34 => "11010", 
    35 => "11111", 36 => "00000", 37 => "00100", 38 => "11110", 39 => "11101", 
    40 => "00000", 41 => "00011", 42 to 43=> "00010", 44 => "11100", 45 => "00000", 
    46 => "11101", 47 => "00010", 48 => "00101", 49 => "11111", 50 => "11011", 
    51 => "00000", 52 => "11010", 53 => "11101", 54 to 56=> "00010", 57 => "11000", 
    58 => "00001", 59 => "11011", 60 => "00001", 61 => "11100", 62 => "00000", 
    63 => "00101" );

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

entity conv3_weight_convgtb is
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

architecture arch of conv3_weight_convgtb is
    component conv3_weight_convgtb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgtb_rom_U :  component conv3_weight_convgtb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


