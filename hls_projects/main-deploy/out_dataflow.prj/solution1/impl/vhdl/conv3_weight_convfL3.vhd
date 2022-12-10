-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfL3_rom is 
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


architecture rtl of conv3_weight_convfL3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11101", 2 to 3=> "00001", 4 => "00101", 5 => "11011", 6 => "11010", 
    7 => "00011", 8 => "11111", 9 => "00111", 10 => "00000", 11 => "01000", 
    12 => "00100", 13 => "11010", 14 => "00101", 15 => "01000", 16 => "00010", 
    17 => "11100", 18 => "11110", 19 => "00000", 20 to 22=> "11111", 23 => "00110", 
    24 => "00011", 25 => "00001", 26 => "11010", 27 => "11011", 28 => "00011", 
    29 => "00110", 30 => "00011", 31 => "00100", 32 to 33=> "00001", 34 => "00000", 
    35 => "00010", 36 => "00001", 37 => "00011", 38 => "11110", 39 => "01000", 
    40 => "00001", 41 => "00110", 42 => "11101", 43 => "11100", 44 => "00101", 
    45 => "00000", 46 => "00111", 47 => "11000", 48 => "00000", 49 => "00001", 
    50 => "00111", 51 => "00011", 52 => "11101", 53 => "00010", 54 => "00001", 
    55 => "00011", 56 => "00100", 57 => "00011", 58 to 59=> "00010", 60 => "00000", 
    61 => "11100", 62 => "00000", 63 => "00100" );

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

entity conv3_weight_convfL3 is
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

architecture arch of conv3_weight_convfL3 is
    component conv3_weight_convfL3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfL3_rom_U :  component conv3_weight_convfL3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


