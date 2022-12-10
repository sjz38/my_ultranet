-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviFb_x_rom is 
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


architecture rtl of conv3_weight_conviFb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00100", 2 => "11111", 3 => "00011", 4 => "00001", 
    5 => "11111", 6 => "00111", 7 => "00000", 8 => "00001", 9 => "11100", 
    10 => "11011", 11 => "00001", 12 => "11111", 13 => "11000", 14 => "11110", 
    15 => "00111", 16 => "11110", 17 => "00000", 18 => "11010", 19 => "00010", 
    20 => "00111", 21 to 23=> "11010", 24 => "11111", 25 => "00011", 26 => "11101", 
    27 => "00000", 28 to 29=> "11101", 30 => "11011", 31 => "00100", 32 => "11111", 
    33 => "11110", 34 => "00011", 35 => "11111", 36 => "11101", 37 => "00011", 
    38 => "11101", 39 => "01000", 40 => "00010", 41 => "00000", 42 => "11110", 
    43 => "11101", 44 => "11010", 45 => "11101", 46 => "00101", 47 => "11110", 
    48 => "11111", 49 => "01000", 50 => "11100", 51 => "00000", 52 => "00100", 
    53 => "00001", 54 => "11101", 55 => "00111", 56 => "00101", 57 => "00110", 
    58 => "11111", 59 => "00000", 60 => "11111", 61 => "11110", 62 => "11111", 
    63 => "11101" );

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

entity conv3_weight_conviFb_x is
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

architecture arch of conv3_weight_conviFb_x is
    component conv3_weight_conviFb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviFb_x_rom_U :  component conv3_weight_conviFb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


