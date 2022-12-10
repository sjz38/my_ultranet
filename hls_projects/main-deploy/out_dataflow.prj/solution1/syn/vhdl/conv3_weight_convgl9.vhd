-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgl9_rom is 
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


architecture rtl of conv3_weight_convgl9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001", 1 => "1111", 2 => "1000", 3 => "0001", 4 => "1011", 
    5 => "1111", 6 => "0010", 7 => "1101", 8 => "0100", 9 => "0110", 
    10 => "1101", 11 to 12=> "1110", 13 to 14=> "1000", 15 => "0010", 16 => "0011", 
    17 => "1010", 18 to 19=> "0011", 20 => "1111", 21 => "0101", 22 => "1110", 
    23 => "0000", 24 => "1101", 25 => "0011", 26 => "0110", 27 => "0000", 
    28 => "0111", 29 => "0011", 30 => "0000", 31 => "0110", 32 => "1000", 
    33 => "0010", 34 => "1111", 35 => "1011", 36 => "1010", 37 => "0001", 
    38 => "1111", 39 => "1110", 40 => "0000", 41 => "0101", 42 => "1110", 
    43 => "0100", 44 => "0011", 45 => "0010", 46 => "1110", 47 => "0010", 
    48 => "1000", 49 => "1111", 50 => "1100", 51 => "0001", 52 => "0100", 
    53 to 54=> "0001", 55 => "1110", 56 => "0000", 57 => "1111", 58 => "1011", 
    59 => "1101", 60 => "1110", 61 to 62=> "0000", 63 => "1110" );

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

entity conv3_weight_convgl9 is
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

architecture arch of conv3_weight_convgl9 is
    component conv3_weight_convgl9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgl9_rom_U :  component conv3_weight_convgl9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


