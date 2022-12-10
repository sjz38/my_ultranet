-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfP4_rom is 
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


architecture rtl of conv3_weight_convfP4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "00000", 2 => "00110", 3 => "00010", 4 => "00001", 
    5 => "11100", 6 => "11101", 7 => "00110", 8 => "00111", 9 => "00100", 
    10 => "00001", 11 => "00011", 12 => "00111", 13 => "00011", 14 => "11110", 
    15 => "11011", 16 => "11111", 17 => "00010", 18 => "00001", 19 => "11010", 
    20 => "11001", 21 => "00011", 22 => "00001", 23 => "00100", 24 => "00000", 
    25 => "00001", 26 => "11110", 27 => "01000", 28 => "00111", 29 => "00101", 
    30 => "00000", 31 => "00110", 32 => "11101", 33 => "00010", 34 => "00101", 
    35 => "11101", 36 => "00001", 37 => "01000", 38 => "00110", 39 => "00010", 
    40 => "00101", 41 => "00011", 42 => "11110", 43 => "00110", 44 => "11101", 
    45 => "00101", 46 => "01000", 47 => "00011", 48 => "11110", 49 => "11001", 
    50 => "11000", 51 => "00010", 52 to 53=> "01000", 54 to 55=> "11110", 56 => "00111", 
    57 => "11010", 58 => "00111", 59 => "00100", 60 => "00011", 61 => "11110", 
    62 => "00000", 63 => "11011" );

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

entity conv3_weight_convfP4 is
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

architecture arch of conv3_weight_convfP4 is
    component conv3_weight_convfP4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfP4_rom_U :  component conv3_weight_convfP4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


