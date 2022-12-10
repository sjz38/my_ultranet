-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgUb_x_rom is 
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


architecture rtl of conv3_weight_convgUb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11011", 2 => "00011", 3 => "11110", 4 => "11101", 
    5 => "00101", 6 => "00010", 7 => "11100", 8 => "11101", 9 => "00011", 
    10 => "00000", 11 => "00101", 12 => "11111", 13 => "01000", 14 => "00100", 
    15 => "11000", 16 => "11101", 17 => "00000", 18 => "00110", 19 => "11110", 
    20 => "00101", 21 => "11010", 22 => "11101", 23 => "00000", 24 => "00010", 
    25 => "00100", 26 => "00001", 27 => "11101", 28 => "00100", 29 => "11100", 
    30 => "11101", 31 => "11000", 32 => "00000", 33 => "01000", 34 => "11101", 
    35 => "11110", 36 => "00010", 37 => "11001", 38 => "00101", 39 to 40=> "11001", 
    41 => "11111", 42 => "00001", 43 => "11101", 44 => "00011", 45 => "00111", 
    46 => "11000", 47 => "11110", 48 => "11101", 49 => "00001", 50 => "11010", 
    51 => "00010", 52 => "11010", 53 => "00100", 54 => "00000", 55 => "11100", 
    56 => "11110", 57 => "11111", 58 => "00001", 59 => "00101", 60 => "00011", 
    61 => "00010", 62 to 63=> "00001" );

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

entity conv3_weight_convgUb_x is
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

architecture arch of conv3_weight_convgUb_x is
    component conv3_weight_convgUb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgUb_x_rom_U :  component conv3_weight_convgUb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


