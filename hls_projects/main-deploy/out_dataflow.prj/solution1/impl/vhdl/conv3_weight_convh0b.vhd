-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh0b_rom is 
    generic(
             DWIDTH     : integer := 4; 
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


architecture rtl of conv3_weight_convh0b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001", 1 => "0000", 2 => "0001", 3 => "1101", 4 => "1110", 
    5 => "1001", 6 => "0011", 7 => "1011", 8 => "1111", 9 => "0100", 
    10 => "0011", 11 => "0001", 12 => "0110", 13 => "0010", 14 => "0101", 
    15 => "0001", 16 => "1110", 17 => "0100", 18 => "0011", 19 => "0001", 
    20 => "1111", 21 => "0000", 22 => "0001", 23 => "0100", 24 to 25=> "1110", 
    26 => "1100", 27 => "0011", 28 => "1111", 29 => "0011", 30 => "0100", 
    31 => "0001", 32 to 33=> "0010", 34 => "1111", 35 => "1110", 36 => "1111", 
    37 => "0011", 38 => "0100", 39 => "1111", 40 => "0001", 41 => "1111", 
    42 => "0011", 43 => "1011", 44 => "1110", 45 => "1011", 46 => "1111", 
    47 => "1011", 48 => "0100", 49 => "1110", 50 => "1101", 51 => "1111", 
    52 to 54=> "1110", 55 => "0010", 56 => "1110", 57 => "1101", 58 => "1111", 
    59 => "0011", 60 => "1111", 61 to 63=> "0000" );

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

entity conv3_weight_convh0b is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convh0b is
    component conv3_weight_convh0b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh0b_rom_U :  component conv3_weight_convh0b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


