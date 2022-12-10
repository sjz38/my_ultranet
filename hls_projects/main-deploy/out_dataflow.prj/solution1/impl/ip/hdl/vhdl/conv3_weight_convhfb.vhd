-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhfb_rom is 
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


architecture rtl of conv3_weight_convhfb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "00000", 2 => "11001", 3 => "00001", 4 => "11111", 
    5 => "00001", 6 => "11111", 7 => "01000", 8 => "00110", 9 => "11100", 
    10 => "11111", 11 => "00001", 12 => "11101", 13 => "11110", 14 => "00100", 
    15 => "00010", 16 => "00101", 17 => "00001", 18 => "11000", 19 => "00001", 
    20 => "00010", 21 => "11011", 22 => "11110", 23 => "00111", 24 => "11100", 
    25 => "11010", 26 => "00000", 27 => "00010", 28 => "11100", 29 => "11101", 
    30 => "00001", 31 => "00011", 32 => "11111", 33 to 34=> "00001", 35 => "00011", 
    36 => "00010", 37 => "11100", 38 => "00001", 39 => "00100", 40 => "11010", 
    41 to 42=> "11100", 43 => "11111", 44 => "11100", 45 => "00010", 46 => "11011", 
    47 => "00111", 48 => "00001", 49 => "00111", 50 => "11111", 51 to 52=> "00001", 
    53 => "11010", 54 => "00000", 55 => "11110", 56 => "00101", 57 to 58=> "11110", 
    59 => "11100", 60 => "11110", 61 => "11010", 62 => "11111", 63 => "00010" );

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

entity conv3_weight_convhfb is
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

architecture arch of conv3_weight_convhfb is
    component conv3_weight_convhfb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhfb_rom_U :  component conv3_weight_convhfb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


