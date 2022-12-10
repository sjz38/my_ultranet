-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgOb_x_rom is 
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


architecture rtl of conv3_weight_convgOb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "00011", 2 => "11000", 3 => "00010", 4 => "11111", 
    5 => "11101", 6 => "00010", 7 => "11011", 8 => "01000", 9 => "11110", 
    10 => "11100", 11 => "11111", 12 => "11100", 13 => "00111", 14 => "11100", 
    15 to 16=> "11111", 17 to 18=> "11110", 19 => "11010", 20 => "00010", 21 => "00011", 
    22 => "00001", 23 => "11011", 24 => "11001", 25 => "00111", 26 => "00010", 
    27 => "11100", 28 => "11110", 29 => "00011", 30 => "11101", 31 => "00000", 
    32 => "00001", 33 => "11110", 34 to 35=> "11101", 36 => "11011", 37 => "00010", 
    38 => "00011", 39 => "00010", 40 => "00101", 41 => "00001", 42 => "11111", 
    43 => "11110", 44 => "00011", 45 => "11000", 46 => "11111", 47 => "11011", 
    48 => "01000", 49 => "00011", 50 => "01000", 51 => "11010", 52 => "00010", 
    53 => "11001", 54 => "11111", 55 => "11001", 56 => "00011", 57 => "11000", 
    58 => "00111", 59 => "00011", 60 => "11111", 61 => "00001", 62 => "00000", 
    63 => "11000" );

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

entity conv3_weight_convgOb_x is
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

architecture arch of conv3_weight_convgOb_x is
    component conv3_weight_convgOb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgOb_x_rom_U :  component conv3_weight_convgOb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


