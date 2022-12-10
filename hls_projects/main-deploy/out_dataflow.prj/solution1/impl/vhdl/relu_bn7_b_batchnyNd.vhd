-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn7_b_batchnyNd_rom is 
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


architecture rtl of relu_bn7_b_batchnyNd_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "111000010010100100101", 1 => "000010000101010011100", 
    2 => "000011001001011101000", 3 => "000001101011100000000", 
    4 => "000001101111011101101", 5 => "111110010001100110110", 
    6 => "111111100010001101011", 7 => "000101110101100101000", 
    8 => "001011111110100000110", 9 => "000000001010110011100", 
    10 => "000010110001011011100", 11 => "000001010110110001110", 
    12 => "001101110111011111011", 13 => "000111000011111010100", 
    14 => "111001110111010000110", 15 => "111111101111000100001", 
    16 => "111010101101110001000", 17 => "000100110100111101001", 
    18 => "000011101110011001011", 19 => "000001101001010001011", 
    20 => "111110111010100010000", 21 => "010000000010101000001", 
    22 => "000011000001010001010", 23 => "000100000010110111011", 
    24 => "000110010101011011010", 25 => "000010100000011000010", 
    26 => "001101010111001000100", 27 => "000110101111111010010", 
    28 => "111111111110100001100", 29 => "011101111011010100100", 
    30 => "000011010010010000011", 31 => "111111100101010000000", 
    32 => "111011001000000010011", 33 => "111111111001000011110", 
    34 => "001100110101000001101", 35 => "111011011000111001111", 
    36 => "000101011011111001101", 37 => "001101100001100101111", 
    38 => "000000101111000010011", 39 => "111111011010000100111", 
    40 => "000111101111001111110", 41 => "000011001100010101000", 
    42 => "111001001010011100100", 43 => "001010111100011010100", 
    44 => "111110010100110000010", 45 => "000011111101110010110", 
    46 => "111111011100010010011", 47 => "000000010111001101011", 
    48 => "000011110011000001101", 49 => "001111101110101001000", 
    50 => "000001001101001001101", 51 => "111111001000111110010", 
    52 => "001001000110100011110", 53 => "001000111001101000000", 
    54 => "011011011100011001000", 55 => "111010110100011011000", 
    56 => "000010010000001110001", 57 => "001000011110011101010", 
    58 => "111010011111010010010", 59 => "000101010111101001010", 
    60 => "000011110100010001010", 61 => "111011110111010010011", 
    62 => "000011100000001101100", 63 => "010010011100000110100" );


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

entity relu_bn7_b_batchnyNd is
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

architecture arch of relu_bn7_b_batchnyNd is
    component relu_bn7_b_batchnyNd_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn7_b_batchnyNd_rom_U :  component relu_bn7_b_batchnyNd_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


