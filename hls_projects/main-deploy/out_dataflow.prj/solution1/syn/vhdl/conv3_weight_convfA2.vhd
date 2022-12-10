-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfA2_rom is 
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


architecture rtl of conv3_weight_convfA2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "01000", 2 => "00111", 3 => "00001", 4 => "11011", 
    5 => "00010", 6 => "11111", 7 => "11011", 8 => "00010", 9 => "11011", 
    10 => "11000", 11 => "11111", 12 => "11101", 13 => "00010", 14 => "00101", 
    15 => "01000", 16 => "11100", 17 => "11111", 18 => "00000", 19 => "11100", 
    20 => "00011", 21 => "11110", 22 => "00001", 23 => "00010", 24 => "11000", 
    25 => "00001", 26 => "01000", 27 => "11100", 28 => "00011", 29 => "11110", 
    30 => "00000", 31 => "00001", 32 => "11101", 33 => "00011", 34 => "00001", 
    35 => "00101", 36 => "00010", 37 => "00011", 38 => "00000", 39 => "11101", 
    40 => "11111", 41 => "01000", 42 => "00001", 43 => "11101", 44 => "11111", 
    45 => "00100", 46 => "11100", 47 => "11101", 48 => "00001", 49 => "00000", 
    50 => "11110", 51 => "00110", 52 => "11011", 53 => "00001", 54 => "00011", 
    55 => "00010", 56 => "00011", 57 => "11010", 58 => "00010", 59 => "00011", 
    60 => "11110", 61 to 62=> "00000", 63 => "11101" );

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

entity conv3_weight_convfA2 is
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

architecture arch of conv3_weight_convfA2 is
    component conv3_weight_convfA2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfA2_rom_U :  component conv3_weight_convfA2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


