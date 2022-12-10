-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfgY_rom is 
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


architecture rtl of conv3_weight_convfgY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 to 2=> "00011", 3 => "11110", 4 => "00000", 5 => "11111", 
    6 => "01000", 7 => "11101", 8 => "00010", 9 => "00100", 10 => "00000", 
    11 => "11001", 12 => "01000", 13 => "11100", 14 to 15=> "00001", 16 => "11000", 
    17 => "00110", 18 to 19=> "00111", 20 => "00010", 21 => "11111", 22 => "00000", 
    23 => "11011", 24 => "11010", 25 => "00000", 26 => "00010", 27 => "00001", 
    28 => "00110", 29 => "11101", 30 => "11111", 31 => "11101", 32 => "11100", 
    33 => "00011", 34 => "00000", 35 => "11111", 36 => "00000", 37 => "01000", 
    38 => "00000", 39 => "11111", 40 => "00001", 41 => "11001", 42 => "11110", 
    43 => "00001", 44 => "11100", 45 => "00100", 46 to 47=> "11110", 48 => "00100", 
    49 => "11110", 50 => "00101", 51 => "00111", 52 => "00000", 53 => "11100", 
    54 => "00000", 55 => "11111", 56 to 57=> "00000", 58 => "11111", 59 => "00001", 
    60 => "11101", 61 => "11010", 62 to 63=> "00000" );

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

entity conv3_weight_convfgY is
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

architecture arch of conv3_weight_convfgY is
    component conv3_weight_convfgY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfgY_rom_U :  component conv3_weight_convfgY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


