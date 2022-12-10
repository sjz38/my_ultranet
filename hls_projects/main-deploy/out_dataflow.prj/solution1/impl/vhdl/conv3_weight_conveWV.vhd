-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveWV_rom is 
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


architecture rtl of conv3_weight_conveWV_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "11101", 2 => "11111", 3 => "11010", 4 => "11011", 
    5 => "11010", 6 => "11111", 7 => "11011", 8 => "01000", 9 => "11101", 
    10 => "11011", 11 => "00101", 12 to 13=> "11010", 14 => "00000", 15 => "00111", 
    16 => "11010", 17 => "00110", 18 => "11101", 19 => "00111", 20 => "00000", 
    21 => "11110", 22 => "11010", 23 => "01000", 24 => "00001", 25 to 26=> "00011", 
    27 => "00111", 28 to 29=> "00010", 30 => "00100", 31 => "01000", 32 => "00001", 
    33 => "11100", 34 => "00110", 35 => "00000", 36 => "00001", 37 to 39=> "00011", 
    40 => "11100", 41 => "11010", 42 => "00111", 43 => "11001", 44 => "00010", 
    45 => "01000", 46 => "00001", 47 => "11011", 48 => "11000", 49 => "00001", 
    50 => "11001", 51 => "11101", 52 => "00010", 53 => "11110", 54 => "11100", 
    55 => "00010", 56 => "00100", 57 => "11111", 58 => "00110", 59 => "11111", 
    60 => "11000", 61 => "11001", 62 to 63=> "00001" );

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

entity conv3_weight_conveWV is
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

architecture arch of conv3_weight_conveWV is
    component conv3_weight_conveWV_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveWV_rom_U :  component conv3_weight_conveWV_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


