-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfmZ_rom is 
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


architecture rtl of conv3_weight_convfmZ_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "11101", 2 => "11010", 3 to 4=> "00101", 5 => "00010", 
    6 => "00001", 7 => "01000", 8 => "00000", 9 => "11110", 10 => "00111", 
    11 => "11000", 12 => "00001", 13 => "11000", 14 => "00010", 15 => "11111", 
    16 => "00001", 17 => "11011", 18 => "00100", 19 => "00001", 20 => "11110", 
    21 => "11001", 22 => "00011", 23 => "00100", 24 => "00011", 25 => "00010", 
    26 => "00000", 27 => "11111", 28 => "00111", 29 => "11101", 30 => "11111", 
    31 => "00001", 32 => "11100", 33 => "11001", 34 => "11111", 35 => "00011", 
    36 => "00010", 37 => "00100", 38 to 39=> "11100", 40 => "01000", 41 => "00100", 
    42 => "00110", 43 => "00001", 44 => "00010", 45 => "11110", 46 => "11100", 
    47 => "00110", 48 => "01000", 49 => "11111", 50 => "00011", 51 => "11011", 
    52 => "11111", 53 => "00010", 54 => "00000", 55 => "11011", 56 => "11010", 
    57 => "00111", 58 => "11101", 59 => "11111", 60 to 61=> "00100", 62 => "11111", 
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

entity conv3_weight_convfmZ is
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

architecture arch of conv3_weight_convfmZ is
    component conv3_weight_convfmZ_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfmZ_rom_U :  component conv3_weight_convfmZ_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


