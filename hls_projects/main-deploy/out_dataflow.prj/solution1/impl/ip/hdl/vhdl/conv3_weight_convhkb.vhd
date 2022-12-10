-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhkb_rom is 
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


architecture rtl of conv3_weight_convhkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 => "11101", 2 => "00101", 3 => "00001", 4 => "00000", 
    5 => "11100", 6 => "00101", 7 => "11110", 8 => "00001", 9 => "00101", 
    10 => "00011", 11 => "11101", 12 => "11100", 13 => "11110", 14 => "00100", 
    15 => "00000", 16 => "11011", 17 => "11110", 18 => "11010", 19 => "00000", 
    20 => "00111", 21 => "01000", 22 => "11011", 23 => "00001", 24 => "01000", 
    25 => "11011", 26 => "00011", 27 => "11111", 28 => "11101", 29 => "11111", 
    30 => "00011", 31 => "11011", 32 => "11101", 33 to 34=> "00000", 35 => "11100", 
    36 => "11011", 37 => "00100", 38 => "00000", 39 => "00001", 40 => "00011", 
    41 => "11110", 42 => "00010", 43 => "00001", 44 => "11001", 45 => "11011", 
    46 => "00001", 47 to 48=> "00011", 49 => "11010", 50 => "00011", 51 => "00100", 
    52 to 53=> "00001", 54 => "11101", 55 => "11111", 56 => "00011", 57 => "00101", 
    58 => "00100", 59 => "00000", 60 => "11110", 61 => "11100", 62 => "11111", 
    63 => "11001" );

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

entity conv3_weight_convhkb is
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

architecture arch of conv3_weight_convhkb is
    component conv3_weight_convhkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhkb_rom_U :  component conv3_weight_convhkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


