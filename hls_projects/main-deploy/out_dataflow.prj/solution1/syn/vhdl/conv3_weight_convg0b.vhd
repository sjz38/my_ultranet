-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg0b_rom is 
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


architecture rtl of conv3_weight_convg0b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00000", 2 => "11111", 3 => "00100", 4 => "11101", 
    5 => "11010", 6 => "11110", 7 => "11001", 8 => "11101", 9 => "00011", 
    10 => "00001", 11 to 12=> "11101", 13 => "01000", 14 to 15=> "11111", 16 to 17=> "00000", 
    18 => "01000", 19 => "11111", 20 => "11000", 21 => "11001", 22 to 23=> "11110", 
    24 => "11011", 25 => "00111", 26 => "11111", 27 => "11110", 28 => "00010", 
    29 => "11010", 30 => "00001", 31 => "11011", 32 => "00110", 33 => "11110", 
    34 => "00010", 35 => "11100", 36 to 37=> "11000", 38 => "00100", 39 => "11111", 
    40 => "00001", 41 => "00101", 42 => "11100", 43 => "00100", 44 => "11011", 
    45 => "11101", 46 => "11001", 47 => "00010", 48 => "00001", 49 => "11111", 
    50 => "00001", 51 => "11011", 52 => "11111", 53 => "00000", 54 => "00110", 
    55 => "11100", 56 => "11011", 57 => "11110", 58 => "00000", 59 => "11111", 
    60 => "01000", 61 => "11010", 62 => "11111", 63 => "00001" );

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

entity conv3_weight_convg0b is
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

architecture arch of conv3_weight_convg0b is
    component conv3_weight_convg0b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg0b_rom_U :  component conv3_weight_convg0b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


