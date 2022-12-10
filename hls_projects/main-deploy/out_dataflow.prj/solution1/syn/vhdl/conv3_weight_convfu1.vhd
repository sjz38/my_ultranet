-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfu1_rom is 
    generic(
             DWIDTH     : integer := 5; 
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


architecture rtl of conv3_weight_convfu1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "00100", 2 => "11000", 3 => "00100", 4 => "11011", 
    5 => "00010", 6 => "11011", 7 => "11001", 8 => "00011", 9 => "11100", 
    10 => "11110", 11 => "00000", 12 => "00100", 13 => "00011", 14 => "00000", 
    15 => "11101", 16 => "11110", 17 => "00110", 18 => "00100", 19 => "11100", 
    20 => "11000", 21 => "11100", 22 => "00011", 23 => "11101", 24 => "11100", 
    25 => "00111", 26 => "00110", 27 => "00011", 28 => "11111", 29 => "00000", 
    30 => "11001", 31 => "00101", 32 => "11101", 33 => "01000", 34 => "11001", 
    35 => "11111", 36 => "00111", 37 => "11111", 38 => "11011", 39 to 40=> "01000", 
    41 => "00001", 42 => "11101", 43 => "00010", 44 => "11101", 45 => "00001", 
    46 => "00110", 47 => "11111", 48 => "00000", 49 => "00101", 50 => "00011", 
    51 => "00100", 52 => "00011", 53 => "11011", 54 => "11001", 55 to 56=> "11100", 
    57 => "11110", 58 to 59=> "00101", 60 => "00111", 61 => "00011", 62 => "00000", 
    63 => "11101" );

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

entity conv3_weight_convfu1 is
    generic (
        DataWidth : INTEGER := 5;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convfu1 is
    component conv3_weight_convfu1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfu1_rom_U :  component conv3_weight_convfu1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


