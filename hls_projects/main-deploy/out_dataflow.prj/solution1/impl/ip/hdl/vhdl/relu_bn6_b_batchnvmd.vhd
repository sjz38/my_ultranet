-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn6_b_batchnvmd_rom is 
    generic(
             DWIDTH     : integer := 20; 
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


architecture rtl of relu_bn6_b_batchnvmd_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101000110001000100", 1 => "11111010001110010001", 
    2 => "11101100000000000011", 3 => "11110100010000100000", 
    4 => "00100100000101101001", 5 => "00111110110100000011", 
    6 => "00011000010010101001", 7 => "00010001000111110001", 
    8 => "11111011010011101100", 9 => "11010110001110011000", 
    10 => "11111110000011101000", 11 => "00100100010001110111", 
    12 => "00001101110000111110", 13 => "00100001111111001110", 
    14 => "00101000110110100101", 15 => "00101110010000100000", 
    16 => "11101111111000110001", 17 => "00010111011001100011", 
    18 => "00010011101010001101", 19 => "00110001000000000111", 
    20 => "00101000011010110111", 21 => "00000101010100010100", 
    22 => "00010001011101111001", 23 => "00010111001010000010", 
    24 => "11111010110100111001", 25 => "00100000100010011110", 
    26 => "00111110001011111010", 27 => "00100000001101100101", 
    28 => "11111000110101101010", 29 => "11101011011111011000", 
    30 => "00001011001010001011", 31 => "11100100100100101110", 
    32 => "11011101001010110000", 33 => "00001010110000000100", 
    34 => "01000110101000010000", 35 => "00110011000001010011", 
    36 => "11001010111101010100", 37 => "00001001011101001001", 
    38 => "11111111101010111000", 39 => "01000111000101001010", 
    40 => "00100100111000100111", 41 => "00010010011011101000", 
    42 => "00011101000101010100", 43 => "00000000110110001101", 
    44 => "11111011111000010000", 45 => "00100001010101010010", 
    46 => "00000011111010110101", 47 => "11111110110000001001", 
    48 => "11111000011101000101", 49 => "00001001110100111111", 
    50 => "00011100100010011100", 51 => "11110110101110011111", 
    52 => "11111010001101010101", 53 => "00010001010001000010", 
    54 => "00001011100100000010", 55 => "11001010011101101111", 
    56 => "11111010011101110000", 57 => "01011100000011110010", 
    58 => "11100001100110110001", 59 => "01001000100001101011", 
    60 => "00011111100010111001", 61 => "00000001110000110111", 
    62 => "00000111111010001011", 63 => "11111011010100011111" );


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

entity relu_bn6_b_batchnvmd is
    generic (
        DataWidth : INTEGER := 20;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn6_b_batchnvmd is
    component relu_bn6_b_batchnvmd_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn6_b_batchnvmd_rom_U :  component relu_bn6_b_batchnvmd_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


