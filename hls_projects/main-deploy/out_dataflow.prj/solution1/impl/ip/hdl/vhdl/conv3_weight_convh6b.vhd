-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh6b_rom is 
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


architecture rtl of conv3_weight_convh6b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11001", 1 => "00001", 2 to 3=> "00110", 4 => "00011", 5 => "11101", 
    6 => "11110", 7 => "11001", 8 => "11110", 9 => "00100", 10 => "11101", 
    11 => "00011", 12 => "00010", 13 => "11011", 14 to 15=> "00011", 16 => "00000", 
    17 => "00100", 18 => "11111", 19 => "11101", 20 => "01000", 21 => "00001", 
    22 => "11101", 23 to 24=> "11111", 25 => "00101", 26 => "11100", 27 => "11110", 
    28 => "01000", 29 to 30=> "00001", 31 => "11111", 32 => "00101", 33 => "11111", 
    34 => "00111", 35 => "11111", 36 => "11101", 37 => "11100", 38 to 39=> "00100", 
    40 => "00010", 41 => "00101", 42 => "00010", 43 => "11101", 44 => "00101", 
    45 => "11100", 46 => "11111", 47 => "00010", 48 => "11010", 49 => "11100", 
    50 => "00001", 51 => "11011", 52 => "00000", 53 => "00100", 54 => "11111", 
    55 => "01000", 56 => "00011", 57 => "11111", 58 => "11101", 59 => "11110", 
    60 => "11111", 61 => "00101", 62 => "00000", 63 => "00101" );

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

entity conv3_weight_convh6b is
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

architecture arch of conv3_weight_convh6b is
    component conv3_weight_convh6b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh6b_rom_U :  component conv3_weight_convh6b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


