-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfF3_rom is 
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


architecture rtl of conv3_weight_convfF3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "11100", 2 to 3=> "00001", 4 => "00101", 5 => "11101", 
    6 to 7=> "00100", 8 => "00010", 9 => "11101", 10 => "11100", 11 => "00100", 
    12 to 13=> "11111", 14 => "11010", 15 => "11101", 16 => "00011", 17 => "00111", 
    18 => "11110", 19 => "01000", 20 => "00000", 21 => "00010", 22 => "11101", 
    23 => "00001", 24 => "00011", 25 => "11110", 26 => "00010", 27 to 28=> "00000", 
    29 => "00101", 30 => "01000", 31 => "11110", 32 => "00000", 33 => "11000", 
    34 => "11100", 35 to 36=> "00101", 37 => "11011", 38 => "00001", 39 => "11101", 
    40 => "11110", 41 => "11001", 42 => "11111", 43 => "00000", 44 => "00111", 
    45 => "11100", 46 => "01000", 47 to 48=> "11111", 49 => "00010", 50 => "11101", 
    51 => "00100", 52 => "01000", 53 => "00000", 54 to 55=> "11110", 56 => "00000", 
    57 to 58=> "11110", 59 => "00011", 60 => "00000", 61 => "11101", 62 => "00000", 
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

entity conv3_weight_convfF3 is
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

architecture arch of conv3_weight_convfF3 is
    component conv3_weight_convfF3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfF3_rom_U :  component conv3_weight_convfF3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


