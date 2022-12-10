-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn7_a_batchnyMd_rom is 
    generic(
             DWIDTH     : integer := 10; 
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


architecture rtl of relu_bn7_a_batchnyMd_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010110011", 1 => "0010010100", 2 => "0001110001", 3 => "0010000111", 
    4 => "0001010110", 5 => "0010011100", 6 => "0000011110", 7 => "0001100000", 
    8 => "0100100000", 9 => "0011100011", 10 => "0010011011", 11 => "0001011001", 
    12 => "0010010011", 13 => "0010101111", 14 => "0010101110", 15 => "0010001000", 
    16 => "0010001010", 17 => "0010100011", 18 => "0001111100", 19 => "0001010110", 
    20 => "0001110011", 21 => "0101011100", 22 => "0001110111", 23 => "0001011111", 
    24 => "0001011011", 25 => "0001111110", 26 => "0101100010", 27 => "0001100000", 
    28 => "0001110111", 29 => "0101101010", 30 => "0001101000", 31 => "0001101011", 
    32 => "0101100001", 33 => "0001110101", 34 => "0111101011", 35 => "0010110100", 
    36 => "0001110111", 37 => "0011111000", 38 => "0010110011", 39 => "0010111011", 
    40 => "0010000111", 41 => "0010000001", 42 => "0010100011", 43 => "0011101100", 
    44 => "0010010110", 45 => "0001010011", 46 => "0001101000", 47 => "0100101010", 
    48 => "0001101000", 49 => "1001101100", 50 => "0001111111", 51 => "0010000101", 
    52 => "0010111011", 53 => "0101011110", 54 => "1000110110", 55 => "0011000101", 
    56 => "0001101101", 57 => "0011000000", 58 => "0010001000", 59 => "0010100001", 
    60 => "0001100011", 61 => "0001111001", 62 => "0001100110", 63 => "0101111110" );

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

entity relu_bn7_a_batchnyMd is
    generic (
        DataWidth : INTEGER := 10;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn7_a_batchnyMd is
    component relu_bn7_a_batchnyMd_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn7_a_batchnyMd_rom_U :  component relu_bn7_a_batchnyMd_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


