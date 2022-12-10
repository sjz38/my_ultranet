-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn8_b_batchnCde_rom is 
    generic(
             DWIDTH     : integer := 22; 
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


architecture rtl of relu_bn8_b_batchnCde_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000110111011011010011", 1 => "1101011110110110011110", 
    2 => "0000000000110111011111", 3 => "0010111000011000000011", 
    4 => "0000001010011000100001", 5 => "0000101110110100111100", 
    6 => "0011111111000011001101", 7 => "0000001101111011010111", 
    8 => "1101111100000011110110", 9 => "0000001100111001100101", 
    10 => "1101011011100101011011", 11 => "1111110010011100111001", 
    12 => "1111101101010111111110", 13 => "0000000001011011001110", 
    14 => "1111000001111001011111", 15 => "0000000110100000100100", 
    16 => "0000110001000000010010", 17 => "0110000001110101000011", 
    18 => "0000011001100110100011", 19 => "0000001100100110001010", 
    20 => "0001000000111110010010", 21 => "0010110100010111110010", 
    22 => "0000010100100100000011", 23 => "0000010011011010001001", 
    24 => "0111111100100111011110", 25 => "1101010010111101010101", 
    26 => "1111110101011001101100", 27 => "0000001110110110110110", 
    28 => "0000010111001011110101", 29 => "0101011011100001001110", 
    30 => "0100010100111101011111", 31 => "0000001000010110100011", 
    32 => "0110110111001110101110", 33 => "0000100100111100100001", 
    34 => "0001100110000001101011", 35 => "0000101010110010001000", 
    36 => "0000001000011100011010", 37 => "0010100000010001000100", 
    38 => "0000010001011110110110", 39 => "1111010111001110110001", 
    40 => "0001100000001001000110", 41 => "1111110011110000010100", 
    42 => "1111110111101010111011", 43 => "1110011010110100111111", 
    44 => "1100000100111111111001", 45 => "0000110010110100001001", 
    46 => "1111001001001101110100", 47 => "0000001011001000100101", 
    48 => "0000011111011000101011", 49 => "0001001001001001011100", 
    50 => "0000010011110100111011", 51 => "0101100100101010111101", 
    52 => "0000000100001010001101", 53 => "0000010101001111000011", 
    54 => "0000000010111000001000", 55 => "1101100001110100001100", 
    56 => "0000011100100001001101", 57 => "0000100000111010001001", 
    58 => "0000000001111010110010", 59 => "0000010011001001010100", 
    60 => "0000011011110000110100", 61 => "0001111001011101011110", 
    62 => "0000010001010101010100", 63 => "0001110111000111111111" );


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

entity relu_bn8_b_batchnCde is
    generic (
        DataWidth : INTEGER := 22;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn8_b_batchnCde is
    component relu_bn8_b_batchnCde_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn8_b_batchnCde_rom_U :  component relu_bn8_b_batchnCde_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


