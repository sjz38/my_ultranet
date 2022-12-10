-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn5_b_batchnrVc_rom is 
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


architecture rtl of relu_bn5_b_batchnrVc_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000001000101011100101", 1 => "111110011000011001001", 
    2 => "000011100100100100110", 3 => "000001100101000110101", 
    4 => "010000000010110001011", 5 => "111010111101100011011", 
    6 => "000001111101000111010", 7 => "000110110110111010110", 
    8 => "111011111100010001001", 9 => "111110100111100101001", 
    10 => "111110001010111100010", 11 => "111100000010111111000", 
    12 => "000011101101101101010", 13 => "000010011101101111111", 
    14 => "000001000011111011001", 15 => "000001000101111011001", 
    16 => "111111111110000000111", 17 => "111111110011100110000", 
    18 => "111111001011001101000", 19 => "111100010101110100000", 
    20 => "000100101001001110000", 21 => "000001100010000011110", 
    22 => "001011011000111001001", 23 => "111100111001110000100", 
    24 => "001011101101111000110", 25 => "000100000011010001010", 
    26 => "111001001100110011110", 27 => "000100110010110010111", 
    28 => "000010111000100000101", 29 => "111110010111100011010", 
    30 => "111101101010101101101", 31 => "000010000101011101001", 
    32 => "111111010000111110111", 33 => "000000001010111100011", 
    34 => "111001001001110100010", 35 => "111101110100110110001", 
    36 => "111101101110110100111", 37 => "000001101111001001100", 
    38 => "000110100010111011010", 39 => "111101010110011110100", 
    40 => "000110011111010011000", 41 => "111011011101011001100", 
    42 => "000010010110011000111", 43 => "001000001110010000010", 
    44 => "111101011110001001111", 45 => "000100110000110100100", 
    46 => "111100101011110010101", 47 => "000000000100110011101", 
    48 => "000010101001110101110", 49 => "111100100011101000100", 
    50 => "111101111101000110110", 51 => "000111111100100001111", 
    52 => "111111001100100100101", 53 => "000000111101001101001", 
    54 => "111111111101110101100", 55 => "001001101110001011011", 
    56 => "111110001101001101010", 57 => "111001000001010111010", 
    58 => "000111110111110111110", 59 => "000000100000110101111", 
    60 => "000001100110011110100", 61 => "001011011110000111100", 
    62 => "000010010100011101010", 63 => "111111011001011110100" );


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

entity relu_bn5_b_batchnrVc is
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

architecture arch of relu_bn5_b_batchnrVc is
    component relu_bn5_b_batchnrVc_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn5_b_batchnrVc_rom_U :  component relu_bn5_b_batchnrVc_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


