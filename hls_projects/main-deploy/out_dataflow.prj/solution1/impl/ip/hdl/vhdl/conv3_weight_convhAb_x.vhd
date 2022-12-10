-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhAb_x_rom is 
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


architecture rtl of conv3_weight_convhAb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 to 2=> "01000", 3 => "00011", 4 => "11101", 5 => "11111", 
    6 => "11011", 7 => "00010", 8 => "00000", 9 => "00010", 10 => "11010", 
    11 => "00011", 12 => "01000", 13 => "11111", 14 => "00001", 15 => "11010", 
    16 => "00001", 17 => "11111", 18 => "11010", 19 => "00010", 20 => "11101", 
    21 => "00000", 22 to 23=> "11101", 24 to 25=> "00000", 26 => "00011", 27 => "01000", 
    28 => "00110", 29 to 30=> "11111", 31 => "00111", 32 => "00001", 33 => "11100", 
    34 => "00100", 35 => "00000", 36 => "00100", 37 => "00011", 38 to 39=> "00010", 
    40 => "00001", 41 => "11100", 42 => "00000", 43 => "01000", 44 => "00000", 
    45 => "00010", 46 => "11111", 47 => "11010", 48 => "11111", 49 => "11110", 
    50 => "11000", 51 => "11110", 52 => "11100", 53 => "11111", 54 => "11110", 
    55 => "11101", 56 => "00110", 57 => "00001", 58 => "11111", 59 => "00010", 
    60 => "11111", 61 => "00000", 62 => "11111", 63 => "00001" );

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

entity conv3_weight_convhAb_x is
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

architecture arch of conv3_weight_convhAb_x is
    component conv3_weight_convhAb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhAb_x_rom_U :  component conv3_weight_convhAb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


