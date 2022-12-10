-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfK3_rom is 
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


architecture rtl of conv3_weight_convfK3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111", 1 => "11111", 2 to 3=> "00001", 4 => "00000", 5 => "11111", 
    6 => "00011", 7 => "11010", 8 => "00010", 9 => "00001", 10 => "00010", 
    11 => "11011", 12 to 13=> "00001", 14 => "11101", 15 => "11001", 16 => "11111", 
    17 => "00111", 18 => "11110", 19 => "00111", 20 => "11111", 21 => "11101", 
    22 => "11110", 23 => "00000", 24 => "11011", 25 to 26=> "00000", 27 => "00011", 
    28 => "00100", 29 => "00010", 30 => "00011", 31 => "11101", 32 => "01000", 
    33 => "11111", 34 => "00010", 35 => "00000", 36 => "00011", 37 => "00100", 
    38 => "11011", 39 => "11110", 40 => "11100", 41 => "11110", 42 => "11010", 
    43 => "11000", 44 => "11010", 45 => "00010", 46 => "00000", 47 => "11101", 
    48 => "00100", 49 => "11101", 50 => "00010", 51 => "00000", 52 => "00100", 
    53 => "00101", 54 to 55=> "11101", 56 => "11111", 57 => "00011", 58 => "11000", 
    59 => "11111", 60 => "00001", 61 => "11111", 62 => "00001", 63 => "00100" );

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

entity conv3_weight_convfK3 is
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

architecture arch of conv3_weight_convfK3 is
    component conv3_weight_convfK3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfK3_rom_U :  component conv3_weight_convfK3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


