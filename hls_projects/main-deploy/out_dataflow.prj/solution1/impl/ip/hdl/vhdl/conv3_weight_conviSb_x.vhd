-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviSb_x_rom is 
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


architecture rtl of conv3_weight_conviSb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00000", 2 => "00100", 3 => "00001", 4 => "11101", 
    5 => "00001", 6 => "11111", 7 => "11010", 8 => "11101", 9 => "00011", 
    10 => "00001", 11 => "00010", 12 => "01000", 13 => "00100", 14 => "00001", 
    15 => "11101", 16 => "00001", 17 => "00010", 18 => "11110", 19 => "00000", 
    20 => "11101", 21 => "00010", 22 => "00001", 23 => "00010", 24 => "11111", 
    25 => "11011", 26 => "11111", 27 => "00011", 28 => "11110", 29 => "00001", 
    30 => "00010", 31 to 33=> "00001", 34 => "11101", 35 => "00101", 36 => "00010", 
    37 => "11101", 38 => "00011", 39 to 40=> "00001", 41 => "00011", 42 => "11111", 
    43 => "00100", 44 => "11010", 45 => "11100", 46 => "00100", 47 => "00001", 
    48 => "00010", 49 to 50=> "11011", 51 => "00010", 52 => "00000", 53 => "00010", 
    54 => "11100", 55 => "00011", 56 => "11010", 57 to 58=> "11101", 59 => "00001", 
    60 => "00111", 61 => "00010", 62 to 63=> "00001" );

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

entity conv3_weight_conviSb_x is
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

architecture arch of conv3_weight_conviSb_x is
    component conv3_weight_conviSb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviSb_x_rom_U :  component conv3_weight_conviSb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

