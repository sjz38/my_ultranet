-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfI3_rom is 
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


architecture rtl of conv3_weight_convfI3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 => "00111", 2 => "11100", 3 => "11101", 4 => "11100", 
    5 => "11011", 6 => "11010", 7 => "11101", 8 => "00000", 9 => "11100", 
    10 => "00110", 11 to 12=> "00001", 13 => "11011", 14 => "00010", 15 => "01000", 
    16 => "00100", 17 => "00011", 18 => "00000", 19 => "11111", 20 to 21=> "00101", 
    22 => "00010", 23 to 25=> "00000", 26 => "11110", 27 => "11011", 28 => "00101", 
    29 => "00010", 30 => "11110", 31 => "11111", 32 => "01000", 33 => "11100", 
    34 to 35=> "00011", 36 => "11101", 37 => "00001", 38 => "11111", 39 => "00000", 
    40 => "11011", 41 => "00100", 42 => "00011", 43 => "11101", 44 => "11100", 
    45 => "00001", 46 => "00101", 47 => "00001", 48 to 49=> "11100", 50 => "00001", 
    51 => "11010", 52 => "00011", 53 => "11110", 54 => "11011", 55 => "00111", 
    56 => "00100", 57 => "00001", 58 => "00010", 59 => "00000", 60 => "11010", 
    61 => "11110", 62 => "11111", 63 => "00101" );

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

entity conv3_weight_convfI3 is
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

architecture arch of conv3_weight_convfI3 is
    component conv3_weight_convfI3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfI3_rom_U :  component conv3_weight_convfI3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


