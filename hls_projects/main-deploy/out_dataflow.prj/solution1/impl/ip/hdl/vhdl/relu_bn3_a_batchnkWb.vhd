-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn3_a_batchnkWb_rom is 
    generic(
             DWIDTH     : integer := 9; 
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


architecture rtl of relu_bn3_a_batchnkWb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "010111011", 1 => "010010101", 2 => "010001000", 3 => "010100011", 
    4 => "001110111", 5 => "010110011", 6 => "010010011", 7 => "100001011", 
    8 => "010001010", 9 => "010000011", 10 => "011011111", 11 => "011010101", 
    12 => "010000000", 13 => "010010110", 14 => "001101110", 15 => "010010011", 
    16 => "011010010", 17 => "011010000", 18 => "011001001", 19 => "001101110", 
    20 => "010100010", 21 => "100011001", 22 => "011001001", 23 => "010000111", 
    24 => "011100010", 25 => "001001110", 26 => "001111101", 27 => "010100111", 
    28 => "001101011", 29 => "010110100", 30 => "001100000", 31 => "011000110", 
    32 => "011010111", 33 => "010101000", 34 => "011000100", 35 => "001010111", 
    36 => "011001100", 37 => "010001000", 38 => "010011000", 39 => "100000101", 
    40 => "010100100", 41 => "001011110", 42 => "010110000", 43 => "011010011", 
    44 => "010011101", 45 => "011000000", 46 => "001010010", 47 => "010111011", 
    48 => "010100000", 49 => "010111010", 50 => "010101011", 51 => "011001001", 
    52 => "110001100", 53 => "011010010", 54 => "010010100", 55 => "011101110", 
    56 => "001010110", 57 => "011011100", 58 => "010111000", 59 => "101000111", 
    60 => "100010011", 61 => "010010001", 62 => "000101101", 63 => "001111001" );

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

entity relu_bn3_a_batchnkWb is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn3_a_batchnkWb is
    component relu_bn3_a_batchnkWb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn3_a_batchnkWb_rom_U :  component relu_bn3_a_batchnkWb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


