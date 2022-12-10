-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhFb_x_rom is 
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


architecture rtl of conv3_weight_convhFb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00100", 2 => "11100", 3 => "00101", 4 => "11100", 5 => "11110", 
    6 => "11011", 7 => "00001", 8 => "11011", 9 => "11000", 10 => "11010", 
    11 => "00010", 12 => "11000", 13 => "00001", 14 => "00000", 15 => "11110", 
    16 => "00001", 17 => "01000", 18 => "00110", 19 => "00001", 20 => "00000", 
    21 => "00010", 22 => "11011", 23 => "00000", 24 => "11000", 25 => "00001", 
    26 => "11111", 27 => "11110", 28 to 29=> "11100", 30 => "00010", 31 => "00011", 
    32 => "11110", 33 => "00001", 34 => "11110", 35 => "00011", 36 => "00100", 
    37 => "11111", 38 => "00101", 39 => "11101", 40 => "00001", 41 => "11100", 
    42 => "00010", 43 => "00101", 44 => "00010", 45 => "00011", 46 => "11001", 
    47 => "00011", 48 => "11000", 49 => "00011", 50 => "11110", 51 => "11011", 
    52 => "00101", 53 => "00001", 54 => "11101", 55 => "00010", 56 => "11010", 
    57 => "00000", 58 => "00011", 59 => "11111", 60 => "01000", 61 => "00101", 
    62 => "00000", 63 => "00110" );

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

entity conv3_weight_convhFb_x is
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

architecture arch of conv3_weight_convhFb_x is
    component conv3_weight_convhFb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhFb_x_rom_U :  component conv3_weight_convhFb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


