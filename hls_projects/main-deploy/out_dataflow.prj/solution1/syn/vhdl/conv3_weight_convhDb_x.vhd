-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhDb_x_rom is 
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


architecture rtl of conv3_weight_convhDb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "00101", 2 => "00110", 3 => "11111", 4 => "01000", 
    5 => "11100", 6 => "11101", 7 to 8=> "11111", 9 => "00010", 10 => "00001", 
    11 => "11111", 12 => "00010", 13 => "11011", 14 => "00001", 15 => "00100", 
    16 => "00101", 17 => "11011", 18 => "00110", 19 => "00100", 20 => "11100", 
    21 => "11110", 22 => "00100", 23 => "11100", 24 => "00110", 25 => "11111", 
    26 => "11110", 27 => "11100", 28 to 29=> "11101", 30 => "00000", 31 => "11011", 
    32 => "11110", 33 => "00000", 34 to 35=> "11111", 36 => "11010", 37 => "00010", 
    38 => "11101", 39 => "11100", 40 => "00101", 41 => "00001", 42 => "00010", 
    43 => "11100", 44 => "11111", 45 => "11100", 46 => "11101", 47 => "00000", 
    48 => "00010", 49 => "11100", 50 => "00101", 51 => "11101", 52 => "11011", 
    53 => "00111", 54 => "00100", 55 => "11111", 56 => "11110", 57 => "00101", 
    58 => "00001", 59 => "11110", 60 => "11111", 61 => "00101", 62 => "00000", 
    63 => "00110" );

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

entity conv3_weight_convhDb_x is
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

architecture arch of conv3_weight_convhDb_x is
    component conv3_weight_convhDb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhDb_x_rom_U :  component conv3_weight_convhDb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


