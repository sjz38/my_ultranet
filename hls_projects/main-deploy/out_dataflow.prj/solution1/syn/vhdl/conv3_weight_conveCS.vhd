-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveCS_rom is 
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


architecture rtl of conv3_weight_conveCS_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11111", 2 => "11011", 3 => "11000", 4 => "11110", 
    5 => "11101", 6 => "11010", 7 => "11110", 8 to 9=> "00101", 10 => "11110", 
    11 => "00101", 12 => "00000", 13 => "11101", 14 => "01000", 15 => "00010", 
    16 => "00001", 17 => "11110", 18 => "11100", 19 => "11101", 20 => "00001", 
    21 => "11011", 22 => "11110", 23 => "11111", 24 => "00011", 25 => "00111", 
    26 => "11100", 27 => "00000", 28 => "11100", 29 to 30=> "00001", 31 => "00011", 
    32 => "11100", 33 => "00011", 34 => "11110", 35 => "00001", 36 => "00011", 
    37 => "11100", 38 => "00111", 39 => "00011", 40 => "11100", 41 => "11110", 
    42 => "11100", 43 => "11011", 44 => "00011", 45 => "11110", 46 => "00111", 
    47 => "11000", 48 => "00000", 49 => "11111", 50 => "00010", 51 => "11110", 
    52 => "00010", 53 => "11110", 54 => "11010", 55 => "11111", 56 => "00100", 
    57 => "11110", 58 => "00010", 59 => "00101", 60 => "11110", 61 => "00110", 
    62 => "00000", 63 => "11110" );

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

entity conv3_weight_conveCS is
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

architecture arch of conv3_weight_conveCS is
    component conv3_weight_conveCS_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveCS_rom_U :  component conv3_weight_conveCS_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


