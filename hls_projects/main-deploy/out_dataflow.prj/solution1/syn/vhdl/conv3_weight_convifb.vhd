-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convifb_rom is 
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


architecture rtl of conv3_weight_convifb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "11000", 2 => "11111", 3 => "11100", 4 => "00000", 
    5 => "00001", 6 => "00010", 7 => "11000", 8 => "00100", 9 => "11110", 
    10 => "00011", 11 => "00001", 12 => "00000", 13 => "00011", 14 => "11110", 
    15 => "00010", 16 => "00000", 17 => "00001", 18 => "11111", 19 => "11100", 
    20 => "00001", 21 => "00010", 22 => "00101", 23 => "11110", 24 => "00110", 
    25 => "11100", 26 => "11110", 27 to 28=> "00010", 29 => "00100", 30 => "11110", 
    31 => "00011", 32 => "01000", 33 => "11001", 34 => "11111", 35 to 36=> "00100", 
    37 => "11110", 38 => "00111", 39 => "00101", 40 => "00010", 41 => "00110", 
    42 => "11101", 43 => "11011", 44 => "00000", 45 => "00011", 46 => "01000", 
    47 => "11110", 48 to 50=> "00011", 51 => "11010", 52 => "00000", 53 => "11111", 
    54 => "11000", 55 => "11101", 56 => "11100", 57 => "00011", 58 => "11010", 
    59 => "11111", 60 to 62=> "00001", 63 => "00000" );

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

entity conv3_weight_convifb is
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

architecture arch of conv3_weight_convifb is
    component conv3_weight_convifb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convifb_rom_U :  component conv3_weight_convifb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


