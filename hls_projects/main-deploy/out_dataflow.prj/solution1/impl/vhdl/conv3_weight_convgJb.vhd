-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgJb_rom is 
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


architecture rtl of conv3_weight_convgJb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "11101", 2 => "00000", 3 => "11100", 4 => "00000", 
    5 to 7=> "00001", 8 => "11111", 9 => "11110", 10 => "11011", 11 => "11111", 
    12 => "11100", 13 => "00001", 14 => "11111", 15 => "00111", 16 => "11000", 
    17 => "00010", 18 => "00101", 19 => "11100", 20 => "11010", 21 => "11100", 
    22 => "11010", 23 => "00001", 24 => "11110", 25 => "11111", 26 => "11000", 
    27 => "11010", 28 => "00110", 29 => "11011", 30 => "00011", 31 => "11011", 
    32 => "11111", 33 => "11010", 34 => "00010", 35 => "11110", 36 => "00010", 
    37 => "00101", 38 => "00011", 39 => "00000", 40 => "00011", 41 => "00010", 
    42 => "11100", 43 => "11101", 44 => "00001", 45 => "00110", 46 => "00001", 
    47 => "00011", 48 => "11101", 49 => "11110", 50 => "11011", 51 => "11111", 
    52 => "11010", 53 => "00101", 54 => "00100", 55 => "11111", 56 => "11110", 
    57 => "11111", 58 => "00001", 59 => "11101", 60 => "00001", 61 => "01000", 
    62 to 63=> "11111" );

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

entity conv3_weight_convgJb is
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

architecture arch of conv3_weight_convgJb is
    component conv3_weight_convgJb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgJb_rom_U :  component conv3_weight_convgJb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


