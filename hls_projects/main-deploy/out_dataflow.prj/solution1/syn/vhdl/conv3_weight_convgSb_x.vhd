-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgSb_x_rom is 
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


architecture rtl of conv3_weight_convgSb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "11111", 2 => "00011", 3 => "00010", 4 => "00001", 
    5 => "11100", 6 => "11101", 7 => "11011", 8 => "00010", 9 => "11011", 
    10 to 11=> "11110", 12 => "00001", 13 => "11010", 14 => "11110", 15 => "00001", 
    16 => "00100", 17 => "11010", 18 to 19=> "11111", 20 => "00011", 21 => "11110", 
    22 => "00000", 23 => "11111", 24 => "11110", 25 => "00100", 26 => "11101", 
    27 => "11100", 28 => "00001", 29 => "11100", 30 => "00110", 31 => "00010", 
    32 to 33=> "00000", 34 => "11011", 35 => "11110", 36 => "00000", 37 => "11110", 
    38 => "00000", 39 => "00111", 40 => "11000", 41 => "11110", 42 => "11010", 
    43 => "11101", 44 to 47=> "11100", 48 => "00100", 49 => "01000", 50 => "00011", 
    51 => "00100", 52 => "11100", 53 => "11101", 54 => "00010", 55 => "11101", 
    56 => "00001", 57 => "11110", 58 => "00010", 59 => "00001", 60 => "00000", 
    61 => "00001", 62 => "00000", 63 => "11000" );

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

entity conv3_weight_convgSb_x is
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

architecture arch of conv3_weight_convgSb_x is
    component conv3_weight_convgSb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgSb_x_rom_U :  component conv3_weight_convgSb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

