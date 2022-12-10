-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi9b_rom is 
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


architecture rtl of conv3_weight_convi9b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 => "0010", 2 => "0011", 3 => "0100", 4 => "1101", 
    5 => "0010", 6 => "1111", 7 => "0101", 8 to 9=> "1101", 10 => "0010", 
    11 => "1111", 12 => "0110", 13 => "0011", 14 => "1111", 15 => "1110", 
    16 => "0100", 17 => "0010", 18 to 19=> "0011", 20 => "0110", 21 => "0011", 
    22 => "0010", 23 to 25=> "1111", 26 => "0000", 27 => "1110", 28 => "1111", 
    29 => "0011", 30 => "1011", 31 => "1111", 32 => "1101", 33 => "1110", 
    34 => "0011", 35 => "0010", 36 => "1110", 37 => "1010", 38 to 39=> "0000", 
    40 => "1101", 41 => "1111", 42 => "1110", 43 => "0011", 44 => "1100", 
    45 => "0000", 46 => "0001", 47 => "1101", 48 => "0101", 49 => "1101", 
    50 to 51=> "0010", 52 => "1101", 53 => "0000", 54 to 55=> "0011", 56 => "0010", 
    57 => "0100", 58 => "0000", 59 => "0001", 60 => "0000", 61 => "1100", 
    62 => "0000", 63 => "1111" );

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

entity conv3_weight_convi9b is
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

architecture arch of conv3_weight_convi9b is
    component conv3_weight_convi9b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi9b_rom_U :  component conv3_weight_convi9b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

