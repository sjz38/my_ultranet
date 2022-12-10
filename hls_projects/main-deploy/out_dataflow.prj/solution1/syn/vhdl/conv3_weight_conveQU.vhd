-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveQU_rom is 
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


architecture rtl of conv3_weight_conveQU_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 to 2=> "11111", 3 => "11010", 4 => "00111", 5 => "11001", 
    6 => "11000", 7 => "01000", 8 to 9=> "11110", 10 => "00010", 11 => "00011", 
    12 => "00000", 13 => "00001", 14 => "11111", 15 => "00100", 16 => "00111", 
    17 => "11110", 18 => "11010", 19 => "00011", 20 => "01000", 21 => "11111", 
    22 => "11011", 23 => "11111", 24 => "11101", 25 => "11100", 26 => "11110", 
    27 => "00000", 28 => "11111", 29 => "00000", 30 => "00001", 31 => "11011", 
    32 => "01000", 33 => "11000", 34 => "11110", 35 => "11011", 36 => "11110", 
    37 => "11101", 38 to 40=> "11000", 41 => "00011", 42 => "11010", 43 => "00000", 
    44 => "00100", 45 => "00111", 46 => "11101", 47 => "00010", 48 => "11000", 
    49 => "11001", 50 => "11111", 51 => "11000", 52 to 53=> "11100", 54 => "11001", 
    55 => "11011", 56 => "11101", 57 => "11111", 58 => "11000", 59 => "00010", 
    60 => "11111", 61 => "01000", 62 => "00001", 63 => "00011" );

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

entity conv3_weight_conveQU is
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

architecture arch of conv3_weight_conveQU is
    component conv3_weight_conveQU_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveQU_rom_U :  component conv3_weight_conveQU_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


