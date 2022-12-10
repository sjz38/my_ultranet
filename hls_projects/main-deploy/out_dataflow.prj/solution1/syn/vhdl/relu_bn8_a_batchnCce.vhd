-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn8_a_batchnCce_rom is 
    generic(
             DWIDTH     : integer := 12; 
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


architecture rtl of relu_bn8_a_batchnCce_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000001101111", 1 => "111011000111", 2 => "000000010011", 
    3 => "000111011110", 4 => "000000011100", 5 => "000001111000", 
    6 => "001011010000", 7 => "000000111010", 8 => "000110111111", 
    9 => "000000100011", 10 => "000011100110", 11 => "000000100110", 
    12 => "000010111111", 13 => "001001100110", 14 => "001000100011", 
    15 => "000000010111", 16 => "000010000110", 17 => "001000000010", 
    18 => "000000011101", 19 => "000000011011", 20 => "000001011101", 
    21 => "000011000110", 22 => "000000101000", 23 => "000000100001", 
    24 => "001010010101", 25 => "110011011011", 26 => "000010111100", 
    27 => "000000011011", 28 => "000001000011", 29 => "010000010111", 
    30 => "001010111001", 31 => "000000010101", 32 => "001000011001", 
    33 => "000000100110", 34 => "000101011000", 35 => "000000101001", 
    36 => "000000011000", 37 => "000100010110", 38 => "000000100101", 
    39 => "000001111101", 40 => "000110100010", 41 => "000000010100", 
    42 => "000000100011", 43 => "000001001100", 44 => "000110100101", 
    45 => "000000101101", 46 => "001010100111", 47 => "000000100111", 
    48 => "000000011111", 49 => "000101111001", 50 => "000000011000", 
    51 => "001110101101", 52 => "000000011000", 53 => "000000010110", 
    54 => "000000111001", 55 => "000011010011", 56 => "000000110010", 
    57 => "000000100111", 58 => "000000011011", 59 => "000000011111", 
    60 => "000000011000", 61 => "000011010011", 62 => "000000011111", 
    63 => "000101101001" );

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

entity relu_bn8_a_batchnCce is
    generic (
        DataWidth : INTEGER := 12;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn8_a_batchnCce is
    component relu_bn8_a_batchnCce_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn8_a_batchnCce_rom_U :  component relu_bn8_a_batchnCce_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


