-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convf97_rom is 
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


architecture rtl of conv3_weight_convf97_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111", 1 => "0110", 2 => "1010", 3 => "1100", 4 => "1101", 
    5 => "1111", 6 => "0000", 7 => "1111", 8 => "0001", 9 => "0011", 
    10 => "0000", 11 => "0010", 12 => "1100", 13 => "1011", 14 to 15=> "0001", 
    16 => "0011", 17 => "1100", 18 => "1101", 19 => "1100", 20 => "0100", 
    21 => "1100", 22 => "0000", 23 => "0111", 24 => "1111", 25 => "0010", 
    26 to 27=> "1110", 28 => "0011", 29 => "1101", 30 => "0101", 31 => "0000", 
    32 => "0001", 33 => "0010", 34 => "1101", 35 => "0010", 36 => "1101", 
    37 => "0001", 38 => "1110", 39 => "1111", 40 => "0010", 41 => "1101", 
    42 => "0000", 43 => "1111", 44 => "1011", 45 => "1110", 46 => "1101", 
    47 => "1100", 48 => "0000", 49 => "1111", 50 => "1011", 51 => "0011", 
    52 => "0001", 53 => "0100", 54 => "0101", 55 => "1110", 56 => "0001", 
    57 => "0010", 58 => "1111", 59 => "0000", 60 => "1110", 61 => "1111", 
    62 => "0000", 63 => "0010" );

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

entity conv3_weight_convf97 is
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

architecture arch of conv3_weight_convf97 is
    component conv3_weight_convf97_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convf97_rom_U :  component conv3_weight_convf97_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


