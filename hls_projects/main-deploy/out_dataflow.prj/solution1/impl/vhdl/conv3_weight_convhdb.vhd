-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhdb_rom is 
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


architecture rtl of conv3_weight_convhdb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 to 2=> "1111", 3 => "0100", 4 => "0010", 5 => "1111", 
    6 => "0001", 7 => "0100", 8 => "1111", 9 => "0000", 10 => "1100", 
    11 => "0010", 12 => "1110", 13 => "0001", 14 => "1110", 15 to 16=> "0001", 
    17 => "1011", 18 => "0011", 19 => "0100", 20 => "0011", 21 => "0000", 
    22 => "0001", 23 => "1100", 24 => "1110", 25 => "0000", 26 => "1001", 
    27 => "0011", 28 => "1101", 29 => "1100", 30 => "0011", 31 => "0001", 
    32 => "1101", 33 => "1110", 34 => "1111", 35 => "1100", 36 => "0011", 
    37 => "0001", 38 => "1011", 39 => "0010", 40 => "1111", 41 => "0011", 
    42 => "1010", 43 => "1111", 44 => "0111", 45 => "0001", 46 => "0100", 
    47 => "0001", 48 => "1101", 49 => "1110", 50 => "0101", 51 => "0011", 
    52 => "0010", 53 => "1101", 54 => "0000", 55 to 56=> "0010", 57 => "1011", 
    58 to 59=> "0011", 60 => "1110", 61 => "0110", 62 => "1111", 63 => "1110" );

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

entity conv3_weight_convhdb is
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

architecture arch of conv3_weight_convhdb is
    component conv3_weight_convhdb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhdb_rom_U :  component conv3_weight_convhdb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


