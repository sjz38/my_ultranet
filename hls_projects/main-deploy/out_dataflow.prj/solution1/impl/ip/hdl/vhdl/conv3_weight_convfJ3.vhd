-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfJ3_rom is 
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


architecture rtl of conv3_weight_convfJ3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00110", 2 => "11011", 3 => "01000", 4 => "11011", 5 => "01000", 
    6 => "11110", 7 => "11000", 8 => "00100", 9 => "00011", 10 => "00101", 
    11 => "11100", 12 to 13=> "11110", 14 => "11101", 15 => "00011", 16 => "11101", 
    17 => "00101", 18 => "11101", 19 => "00111", 20 to 21=> "01000", 22 => "00001", 
    23 => "11101", 24 => "00101", 25 => "11100", 26 to 27=> "11111", 28 => "11101", 
    29 => "11100", 30 => "00000", 31 => "11111", 32 => "01000", 33 => "00101", 
    34 => "11100", 35 => "11110", 36 => "00011", 37 => "11011", 38 to 39=> "00000", 
    40 => "00001", 41 to 42=> "00100", 43 => "11100", 44 => "00001", 45 => "11111", 
    46 to 47=> "00011", 48 => "00000", 49 => "11100", 50 => "00100", 51 => "11101", 
    52 => "11100", 53 => "11111", 54 => "00011", 55 => "00111", 56 => "11110", 
    57 => "00110", 58 => "11010", 59 => "00010", 60 to 61=> "00000", 62 => "11111", 
    63 => "00001" );

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

entity conv3_weight_convfJ3 is
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

architecture arch of conv3_weight_convfJ3 is
    component conv3_weight_convfJ3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfJ3_rom_U :  component conv3_weight_convfJ3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


