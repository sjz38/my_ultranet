-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn3_b_batchnkXb_rom is 
    generic(
             DWIDTH     : integer := 21; 
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


architecture rtl of relu_bn3_b_batchnkXb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111110010101100111110", 1 => "000000111111010001111", 
    2 => "000001010000111110110", 3 => "111011010000011100010", 
    4 => "111111100010101101000", 5 => "000000001001010000001", 
    6 => "000100111010101111111", 7 => "000001110010101000010", 
    8 => "111110011110011111110", 9 => "111011011111010111100", 
    10 => "111011001111010001111", 11 => "111110001010001000000", 
    12 => "000001001100111100101", 13 => "000000001101011101000", 
    14 => "000000001100100011111", 15 => "000001011011001010001", 
    16 => "111110000011001010101", 17 => "000000011110111010101", 
    18 => "111110100000100101000", 19 => "000000000111111111100", 
    20 => "111111011011101110010", 21 => "110110011100101101000", 
    22 => "111111001101100100010", 23 => "000000101000011000101", 
    24 => "111010011000001011101", 25 => "111111000110011011100", 
    26 => "000010101110001000010", 27 => "000010000011100110011", 
    28 => "000001011100100010000", 29 => "000000111000000011010", 
    30 => "000010010011001000101", 31 => "111001111111101100110", 
    32 => "111111001001111101111", 33 => "111101101001010101001", 
    34 => "110100100111001000001", 35 => "000110001110000000011", 
    36 => "111110001110100011101", 37 => "111110101011111000100", 
    38 => "111010010110011001001", 39 => "111111110000110111000", 
    40 => "111100000100111110111", 41 => "111100101001100001101", 
    42 => "110011101001101100101", 43 => "000011100101000010100", 
    44 => "000011000010010001001", 45 => "111111111000001010011", 
    46 => "111110010001111100110", 47 => "000000101101110000010", 
    48 => "111111001000111000001", 49 => "000000100110110100101", 
    50 => "111111110011101100111", 51 => "111110001001001100100", 
    52 => "101101011001010011111", 53 => "111011101111100110101", 
    54 => "000001110111001111100", 55 => "111100100011000110011", 
    56 => "111111110100100110100", 57 => "111010100110001100100", 
    58 => "111111000000001001110", 59 => "111101110010001110110", 
    60 => "000000001010011100111", 61 => "000000100110011111111", 
    62 => "111111001010011101010", 63 => "000001110110111001111" );


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

entity relu_bn3_b_batchnkXb is
    generic (
        DataWidth : INTEGER := 21;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn3_b_batchnkXb is
    component relu_bn3_b_batchnkXb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn3_b_batchnkXb_rom_U :  component relu_bn3_b_batchnkXb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


