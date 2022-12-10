-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgIb_rom is 
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


architecture rtl of conv3_weight_convgIb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00011", 2 to 3=> "11111", 4 => "00010", 5 => "00110", 6 => "00001", 
    7 => "11100", 8 => "11110", 9 => "00000", 10 => "11110", 11 => "11100", 
    12 => "00100", 13 => "11111", 14 => "00010", 15 => "11010", 16 => "00001", 
    17 => "00000", 18 => "00011", 19 => "11111", 20 => "11010", 21 => "11111", 
    22 => "00101", 23 => "11110", 24 => "00001", 25 => "00011", 26 => "11111", 
    27 => "11100", 28 to 29=> "00000", 30 => "11101", 31 => "11110", 32 => "00110", 
    33 => "11101", 34 => "00010", 35 => "11111", 36 => "11100", 37 => "11010", 
    38 => "11111", 39 => "11101", 40 => "11110", 41 => "00011", 42 => "00010", 
    43 => "00011", 44 => "11110", 45 => "11101", 46 => "00010", 47 => "00000", 
    48 => "00011", 49 => "00010", 50 => "11100", 51 => "00011", 52 => "00100", 
    53 => "00001", 54 => "00011", 55 => "11100", 56 => "11110", 57 to 58=> "00100", 
    59 => "01000", 60 => "11101", 61 => "00100", 62 => "11111", 63 => "00010" );

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

entity conv3_weight_convgIb is
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

architecture arch of conv3_weight_convgIb is
    component conv3_weight_convgIb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgIb_rom_U :  component conv3_weight_convgIb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


