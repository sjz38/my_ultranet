-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn5_a_batchnrUc_rom is 
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


architecture rtl of relu_bn5_a_batchnrUc_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010011010", 1 => "0001110111", 2 => "0010101011", 3 => "0010010110", 
    4 => "0100101011", 5 => "0010010100", 6 => "0001110011", 7 => "0010000111", 
    8 => "0010101110", 9 => "0010100111", 10 => "0010000101", 11 => "0010010100", 
    12 => "0010101011", 13 => "0001101000", 14 => "0010100100", 15 => "0011010110", 
    16 => "0010010000", 17 => "0000000011", 18 => "0001100111", 19 => "0010000011", 
    20 => "0001110011", 21 => "0001101010", 22 => "0011101000", 23 => "0010001110", 
    24 => "0010111111", 25 => "0010000101", 26 => "0010101001", 27 => "0001111100", 
    28 => "0001110100", 29 => "0010011110", 30 => "0010101100", 31 => "0010000100", 
    32 => "0010000010", 33 => "0010100010", 34 => "0010011011", 35 => "0010001101", 
    36 => "0010000111", 37 => "0001110001", 38 => "1010110000", 39 => "0001101110", 
    40 => "0010100010", 41 => "0010100001", 42 => "0001101111", 43 => "0010100001", 
    44 => "0010001100", 45 => "0001110011", 46 => "0010000100", 47 => "0010010000", 
    48 => "0001100000", 49 => "0001110100", 50 => "0010000001", 51 => "0001101000", 
    52 => "0001111100", 53 => "0010010111", 54 => "0001110000", 55 => "0001110100", 
    56 => "0010000111", 57 => "0011101100", 58 => "0010110100", 59 => "0010000011", 
    60 => "0001110100", 61 => "0010110111", 62 => "0010001111", 63 => "0010101100" );

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

entity relu_bn5_a_batchnrUc is
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

architecture arch of relu_bn5_a_batchnrUc is
    component relu_bn5_a_batchnrUc_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn5_a_batchnrUc_rom_U :  component relu_bn5_a_batchnrUc_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


