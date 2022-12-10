-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgb8_rom is 
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


architecture rtl of conv3_weight_convgb8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00110", 1 => "01000", 2 => "00000", 3 => "00010", 4 => "11001", 
    5 => "11110", 6 => "11111", 7 => "00001", 8 => "11110", 9 => "00011", 
    10 => "00001", 11 => "11011", 12 => "11111", 13 => "00100", 14 => "00001", 
    15 => "11011", 16 => "00011", 17 => "11101", 18 => "00010", 19 => "11111", 
    20 => "11100", 21 => "00001", 22 => "11110", 23 => "00010", 24 => "11110", 
    25 to 26=> "00001", 27 => "11100", 28 to 30=> "00010", 31 => "11100", 32 => "00100", 
    33 => "00110", 34 => "00010", 35 to 36=> "00000", 37 => "11101", 38 => "00011", 
    39 => "00000", 40 => "00010", 41 => "00000", 42 => "00100", 43 => "11111", 
    44 => "11010", 45 => "11001", 46 => "00010", 47 => "11111", 48 => "00010", 
    49 => "00001", 50 => "00010", 51 => "11111", 52 => "11110", 53 => "00001", 
    54 => "00110", 55 => "11010", 56 to 57=> "11101", 58 => "00001", 59 => "11011", 
    60 => "00001", 61 => "11100", 62 to 63=> "00001" );

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

entity conv3_weight_convgb8 is
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

architecture arch of conv3_weight_convgb8 is
    component conv3_weight_convgb8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgb8_rom_U :  component conv3_weight_convgb8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


