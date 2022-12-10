-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn2_b_batchnevR_rom is 
    generic(
             DWIDTH     : integer := 20; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of relu_bn2_b_batchnevR_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11001111100011011101", 1 => "11111110111010111000", 
    2 => "11111100111101111011", 3 => "11111111110001010001", 
    4 => "00000011000010111110", 5 => "00101111110111010101", 
    6 => "01000001111111011100", 7 => "10110111011010010010", 
    8 => "00010001111000111001", 9 => "11111110010110010110", 
    10 => "00110101100101111101", 11 => "11111010001001100101", 
    12 => "01001101011010000101", 13 => "00001001010110101001", 
    14 => "00001101100110010100", 15 => "11100111110001000110", 
    16 => "11010000110100101001", 17 => "11010100101101000100", 
    18 => "11100110110011001010", 19 => "11011111100000111000", 
    20 => "11110010000011001010", 21 => "01100100100000100011", 
    22 => "11011010100001111010", 23 => "11101001101010111001", 
    24 => "11110010011000100110", 25 => "11111100011001011100", 
    26 => "11111101110000100100", 27 => "11110000011100111100", 
    28 => "10011111110110001110", 29 => "11110110110101001011", 
    30 => "11101111100011001101", 31 => "11111010111001011101" );

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

entity relu_bn2_b_batchnevR is
    generic (
        DataWidth : INTEGER := 20;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn2_b_batchnevR is
    component relu_bn2_b_batchnevR_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn2_b_batchnevR_rom_U :  component relu_bn2_b_batchnevR_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


