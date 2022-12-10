-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity relu_bn4_a_batchnorc_rom is 
    generic(
             DWIDTH     : integer := 8; 
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


architecture rtl of relu_bn4_a_batchnorc_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01111111", 1 => "01100001", 2 => "10000010", 3 => "01100101", 
    4 => "10001011", 5 => "10101100", 6 => "01110111", 7 => "10010001", 
    8 => "01110111", 9 => "01011011", 10 => "10100100", 11 => "01011000", 
    12 => "01111000", 13 => "01011000", 14 => "00001011", 15 => "01010010", 
    16 => "10010100", 17 => "00111100", 18 => "10011000", 19 => "10000101", 
    20 => "01111110", 21 => "10011100", 22 => "01010000", 23 => "01101000", 
    24 => "01010001", 25 => "01110011", 26 => "01000110", 27 => "10011100", 
    28 => "01001000", 29 => "01001110", 30 => "10001110", 31 => "01111101", 
    32 => "10001001", 33 => "10000111", 34 => "10000001", 35 => "10101101", 
    36 => "01110001", 37 => "01100100", 38 => "10011100", 39 => "01010011", 
    40 => "01011001", 41 => "01010101", 42 => "01010111", 43 => "11001110", 
    44 => "01100110", 45 => "10101110", 46 => "01111000", 47 => "01001110", 
    48 => "01001011", 49 => "10000000", 50 => "01111101", 51 => "00010111", 
    52 => "10110100", 53 => "01010011", 54 => "01100111", 55 => "01101010", 
    56 => "01101101", 57 => "10010001", 58 => "10000010", 59 => "10000001", 
    60 => "01100010", 61 => "01000010", 62 => "10000110", 63 => "01101111" );

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

entity relu_bn4_a_batchnorc is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of relu_bn4_a_batchnorc is
    component relu_bn4_a_batchnorc_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    relu_bn4_a_batchnorc_rom_U :  component relu_bn4_a_batchnorc_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


