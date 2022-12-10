-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveTV_rom is 
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


architecture rtl of conv3_weight_conveTV_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11011", 2 => "11101", 3 => "11000", 4 => "00001", 5 => "11101", 
    6 => "11010", 7 to 8=> "00111", 9 => "00101", 10 => "11100", 11 => "01000", 
    12 => "11000", 13 => "11101", 14 => "00001", 15 => "01000", 16 => "00101", 
    17 => "11110", 18 => "11000", 19 => "00011", 20 => "00010", 21 => "11111", 
    22 => "11010", 23 => "01000", 24 => "00000", 25 => "11101", 26 => "00010", 
    27 => "00100", 28 => "11111", 29 => "11100", 30 => "00110", 31 => "00111", 
    32 => "11110", 33 => "11010", 34 => "00010", 35 => "11100", 36 => "01000", 
    37 => "00100", 38 to 39=> "11010", 40 => "11110", 41 => "00001", 42 => "00010", 
    43 => "00001", 44 => "01000", 45 => "00111", 46 => "00001", 47 => "11000", 
    48 => "11010", 49 => "01000", 50 => "11101", 51 => "00101", 52 => "00010", 
    53 => "11011", 54 => "11100", 55 => "11010", 56 => "00011", 57 to 58=> "11110", 
    59 => "00010", 60 => "11001", 61 => "01000", 62 => "00000", 63 => "00001" );

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

entity conv3_weight_conveTV is
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

architecture arch of conv3_weight_conveTV is
    component conv3_weight_conveTV_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveTV_rom_U :  component conv3_weight_conveTV_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


