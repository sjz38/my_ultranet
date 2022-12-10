-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn4_b_batchnosc_rom is 
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


architecture rtl of relu_bn4_b_batchnosc_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111000100010100111", 1 => "11111111010100011111", 
    2 => "11011011001011001011", 3 => "00000010011100000110", 
    4 => "11101111000000101010", 5 => "11010100000011101101", 
    6 => "11101011011000010010", 7 => "00001010010111010000", 
    8 => "11111101010111011111", 9 => "11100010111011101111", 
    10 => "11000001100101011000", 11 => "11111011100000111001", 
    12 => "00001010000000010110", 13 => "00011100001011010010", 
    14 => "11111110010011000010", 15 => "11111010011111110001", 
    16 => "11111011100010001010", 17 => "11101011011000010111", 
    18 => "10100010110000100111", 19 => "00101101110110010001", 
    20 => "11101000011011111010", 21 => "11011110111101111100", 
    22 => "00011010001000110011", 23 => "11111001101100001011", 
    24 => "11110101010001100100", 25 => "00110110011000111011", 
    26 => "11101000110011010100", 27 => "11111010011000100010", 
    28 => "00000010000010100000", 29 => "00000101100010101111", 
    30 => "11111101001110010011", 31 => "10110100100011011001", 
    32 => "00001110100001101011", 33 => "11100101011110110100", 
    34 => "00001010111000110110", 35 => "11101011110101111001", 
    36 => "11011101111111110011", 37 => "11111000101101101000", 
    38 => "11101001110111100001", 39 => "00000010000000001100", 
    40 => "00000010101011110111", 41 => "11110110000000111100", 
    42 => "00000011100000110010", 43 => "11001000000011000100", 
    44 => "11111011100101000100", 45 => "00100110100100011001", 
    46 => "11111111100011100110", 47 => "11110110111101111111", 
    48 => "01000001000001011010", 49 => "11001110110101110001", 
    50 => "11111010110101010111", 51 => "11111010101111011101", 
    52 => "00000010001110111001", 53 => "00000100110011000011", 
    54 => "11100110000110101101", 55 => "11100110110100000101", 
    56 => "11111100010110111111", 57 => "11100110100101011000", 
    58 => "11011110001101000010", 59 => "00010101110011000000", 
    60 => "11111100110000111011", 61 => "11111000010001001000", 
    62 => "11101011111000000110", 63 => "11111010001001110000" );


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

entity relu_bn4_b_batchnosc is
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

architecture arch of relu_bn4_b_batchnosc is
    component relu_bn4_b_batchnosc_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn4_b_batchnosc_rom_U :  component relu_bn4_b_batchnosc_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


