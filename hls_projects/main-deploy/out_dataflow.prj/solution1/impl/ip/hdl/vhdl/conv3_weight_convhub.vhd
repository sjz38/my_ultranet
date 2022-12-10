-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhub_rom is 
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


architecture rtl of conv3_weight_convhub_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00110", 1 => "00001", 2 => "11111", 3 => "00000", 4 => "00011", 
    5 => "11000", 6 => "11111", 7 => "00000", 8 => "00010", 9 => "00100", 
    10 => "00111", 11 => "11010", 12 => "00101", 13 => "11010", 14 => "00001", 
    15 to 16=> "00011", 17 => "11111", 18 to 19=> "00000", 20 => "00011", 21 => "11111", 
    22 => "11010", 23 => "11110", 24 => "00000", 25 => "11010", 26 => "00110", 
    27 => "11001", 28 => "11110", 29 => "11000", 30 => "00001", 31 => "01000", 
    32 => "11111", 33 => "00110", 34 => "00010", 35 => "00011", 36 => "00000", 
    37 => "11110", 38 => "00000", 39 => "11101", 40 => "00000", 41 => "00010", 
    42 => "00100", 43 => "11101", 44 => "00000", 45 => "00010", 46 => "11100", 
    47 => "00010", 48 => "00001", 49 => "11101", 50 => "00000", 51 => "00100", 
    52 => "00011", 53 => "00010", 54 to 55=> "11000", 56 => "11111", 57 => "00000", 
    58 => "11000", 59 => "11011", 60 => "11010", 61 => "01000", 62 => "00001", 
    63 => "00100" );

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

entity conv3_weight_convhub is
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

architecture arch of conv3_weight_convhub is
    component conv3_weight_convhub_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhub_rom_U :  component conv3_weight_convhub_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


