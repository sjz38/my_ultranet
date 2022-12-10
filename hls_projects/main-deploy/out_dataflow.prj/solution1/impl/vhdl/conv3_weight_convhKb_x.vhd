-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhKb_x_rom is 
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


architecture rtl of conv3_weight_convhKb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00001", 2 => "11010", 3 => "11001", 4 => "00010", 
    5 => "11011", 6 => "00011", 7 => "00010", 8 => "11010", 9 => "11111", 
    10 => "11110", 11 => "11101", 12 => "11011", 13 to 14=> "11111", 15 => "00011", 
    16 => "00010", 17 => "11110", 18 => "00001", 19 => "11110", 20 => "00100", 
    21 => "00011", 22 => "00010", 23 => "00011", 24 => "00000", 25 => "11110", 
    26 => "11101", 27 => "11111", 28 => "00000", 29 => "11111", 30 => "00100", 
    31 => "00000", 32 => "00010", 33 => "00001", 34 => "11100", 35 => "00100", 
    36 => "00101", 37 to 38=> "11011", 39 => "00010", 40 => "11110", 41 => "00010", 
    42 => "11001", 43 => "00100", 44 => "00000", 45 => "00011", 46 => "11100", 
    47 => "11101", 48 => "00011", 49 => "01000", 50 => "00010", 51 => "11100", 
    52 => "11110", 53 => "11111", 54 => "11100", 55 => "11110", 56 => "00000", 
    57 to 58=> "11111", 59 => "00010", 60 => "00000", 61 => "00100", 62 => "00000", 
    63 => "11010" );

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

entity conv3_weight_convhKb_x is
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

architecture arch of conv3_weight_convhKb_x is
    component conv3_weight_convhKb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhKb_x_rom_U :  component conv3_weight_convhKb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


