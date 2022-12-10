-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhOb_x_rom is 
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


architecture rtl of conv3_weight_convhOb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011", 1 => "11100", 2 => "11110", 3 => "00100", 4 => "00010", 
    5 => "11010", 6 => "11101", 7 => "00001", 8 => "01000", 9 => "00000", 
    10 => "01000", 11 => "00010", 12 => "00001", 13 => "11101", 14 => "00111", 
    15 to 16=> "11100", 17 => "00100", 18 => "11000", 19 => "11100", 20 => "01000", 
    21 => "11101", 22 => "11011", 23 => "00000", 24 to 25=> "00011", 26 => "00100", 
    27 => "11110", 28 => "11011", 29 => "01000", 30 => "11100", 31 to 33=> "11101", 
    34 => "00000", 35 => "11000", 36 to 37=> "01000", 38 => "00011", 39 => "11111", 
    40 => "11100", 41 => "11011", 42 => "11100", 43 => "00100", 44 => "11110", 
    45 => "11101", 46 => "00001", 47 => "11110", 48 => "00100", 49 => "11010", 
    50 => "01000", 51 => "11110", 52 => "11111", 53 => "11000", 54 => "01000", 
    55 => "00010", 56 => "11001", 57 => "00000", 58 => "11011", 59 => "11110", 
    60 => "11101", 61 => "11110", 62 to 63=> "11111" );

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

entity conv3_weight_convhOb_x is
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

architecture arch of conv3_weight_convhOb_x is
    component conv3_weight_convhOb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhOb_x_rom_U :  component conv3_weight_convhOb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


