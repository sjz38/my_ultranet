-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgd8_rom is 
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


architecture rtl of conv3_weight_convgd8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "00001", 2 => "00011", 3 => "11111", 4 => "00001", 
    5 => "00000", 6 => "00011", 7 => "11110", 8 => "00101", 9 => "00010", 
    10 => "11100", 11 to 12=> "00100", 13 => "00101", 14 => "00000", 15 => "00110", 
    16 to 18=> "11110", 19 => "00000", 20 => "00001", 21 => "11010", 22 => "11110", 
    23 => "00100", 24 => "11011", 25 => "00100", 26 => "11010", 27 => "00000", 
    28 => "11110", 29 => "11101", 30 => "11111", 31 => "00000", 32 => "00111", 
    33 => "00100", 34 => "11111", 35 => "11100", 36 => "11000", 37 => "00100", 
    38 => "00001", 39 => "11101", 40 => "11100", 41 => "00010", 42 => "00101", 
    43 => "11110", 44 => "00000", 45 to 46=> "11011", 47 => "00011", 48 => "00000", 
    49 => "11011", 50 => "00000", 51 => "00011", 52 => "00101", 53 => "11111", 
    54 => "00110", 55 => "01000", 56 => "00101", 57 => "11011", 58 => "00000", 
    59 => "11011", 60 => "11000", 61 => "11010", 62 => "00000", 63 => "11000" );

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

entity conv3_weight_convgd8 is
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

architecture arch of conv3_weight_convgd8 is
    component conv3_weight_convgd8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgd8_rom_U :  component conv3_weight_convgd8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


