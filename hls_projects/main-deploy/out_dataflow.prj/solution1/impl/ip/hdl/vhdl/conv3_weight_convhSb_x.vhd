-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhSb_x_rom is 
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


architecture rtl of conv3_weight_convhSb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00110", 1 => "01000", 2 => "00111", 3 => "00001", 4 => "11101", 
    5 to 6=> "11110", 7 => "11010", 8 => "00111", 9 => "11110", 10 => "11011", 
    11 => "11000", 12 => "11011", 13 => "00100", 14 => "11100", 15 => "11110", 
    16 => "00000", 17 => "00101", 18 => "11110", 19 => "00011", 20 => "00100", 
    21 => "00000", 22 => "11011", 23 => "11110", 24 => "11100", 25 => "00110", 
    26 => "11111", 27 => "11000", 28 => "11101", 29 => "00001", 30 => "11111", 
    31 => "11101", 32 => "00010", 33 => "11110", 34 => "11111", 35 => "00010", 
    36 => "11000", 37 => "11011", 38 => "00010", 39 => "11100", 40 => "11010", 
    41 => "11110", 42 => "11001", 43 to 44=> "11100", 45 => "11101", 46 => "00110", 
    47 => "11110", 48 => "11101", 49 => "11110", 50 => "11100", 51 => "11010", 
    52 => "11110", 53 => "11010", 54 => "11110", 55 to 56=> "11011", 57 => "11100", 
    58 => "00011", 59 => "00111", 60 => "00100", 61 => "11100", 62 => "11111", 
    63 => "00010" );

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

entity conv3_weight_convhSb_x is
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

architecture arch of conv3_weight_convhSb_x is
    component conv3_weight_convhSb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhSb_x_rom_U :  component conv3_weight_convhSb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


