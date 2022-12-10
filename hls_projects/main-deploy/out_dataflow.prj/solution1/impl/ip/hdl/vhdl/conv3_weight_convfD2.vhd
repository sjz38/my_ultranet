-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfD2_rom is 
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


architecture rtl of conv3_weight_convfD2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11000", 2 => "01000", 3 => "00000", 4 => "11101", 
    5 => "00110", 6 => "00001", 7 to 8=> "11111", 9 => "00011", 10 => "11100", 
    11 => "11111", 12 => "00000", 13 => "00001", 14 => "00010", 15 => "01000", 
    16 => "11111", 17 => "11001", 18 => "00001", 19 => "11100", 20 => "11110", 
    21 => "00001", 22 => "01000", 23 to 24=> "11101", 25 => "00110", 26 => "11101", 
    27 => "11010", 28 => "11111", 29 to 30=> "00000", 31 => "00011", 32 => "00000", 
    33 => "00011", 34 => "00101", 35 to 37=> "00010", 38 => "00011", 39 => "00111", 
    40 => "00010", 41 => "01000", 42 => "11100", 43 => "11111", 44 => "11100", 
    45 => "11001", 46 => "00011", 47 => "00111", 48 => "00000", 49 => "00001", 
    50 => "00000", 51 => "11111", 52 => "11100", 53 => "01000", 54 => "11110", 
    55 => "00101", 56 => "00110", 57 => "00111", 58 => "11100", 59 => "11101", 
    60 => "00010", 61 => "11101", 62 => "00001", 63 => "11100" );

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

entity conv3_weight_convfD2 is
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

architecture arch of conv3_weight_convfD2 is
    component conv3_weight_convfD2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfD2_rom_U :  component conv3_weight_convfD2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


