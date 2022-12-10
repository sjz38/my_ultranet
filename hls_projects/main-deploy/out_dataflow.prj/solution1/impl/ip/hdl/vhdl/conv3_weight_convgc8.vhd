-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgc8_rom is 
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


architecture rtl of conv3_weight_convgc8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "00010", 2 => "11100", 3 => "11011", 4 => "11100", 
    5 => "11111", 6 => "00011", 7 => "11100", 8 => "00001", 9 => "00011", 
    10 => "11110", 11 => "00111", 12 => "11101", 13 => "11001", 14 => "00011", 
    15 => "01000", 16 => "00000", 17 => "00001", 18 => "11111", 19 => "11010", 
    20 => "00100", 21 => "11001", 22 => "11101", 23 => "00100", 24 => "00010", 
    25 => "00100", 26 => "11010", 27 => "11111", 28 => "00001", 29 => "11100", 
    30 => "00110", 31 => "00001", 32 => "00010", 33 => "00011", 34 => "11001", 
    35 => "00010", 36 => "11101", 37 => "00010", 38 => "11110", 39 => "11111", 
    40 to 42=> "00010", 43 => "00000", 44 => "11111", 45 => "00000", 46 => "11011", 
    47 => "00010", 48 => "11100", 49 => "11011", 50 => "00001", 51 => "00011", 
    52 => "11101", 53 to 54=> "00011", 55 => "00110", 56 => "11110", 57 to 58=> "11111", 
    59 => "00000", 60 => "11101", 61 => "11100", 62 => "11111", 63 => "00001" );

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

entity conv3_weight_convgc8 is
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

architecture arch of conv3_weight_convgc8 is
    component conv3_weight_convgc8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgc8_rom_U :  component conv3_weight_convgc8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


