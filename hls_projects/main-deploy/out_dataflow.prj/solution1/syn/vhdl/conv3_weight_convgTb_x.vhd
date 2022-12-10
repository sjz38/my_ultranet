-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgTb_x_rom is 
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


architecture rtl of conv3_weight_convgTb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 => "00010", 2 => "11101", 3 => "00000", 4 => "00110", 
    5 => "01000", 6 => "11101", 7 => "11011", 8 => "00110", 9 => "00111", 
    10 => "11111", 11 => "11011", 12 => "11111", 13 => "11010", 14 => "01000", 
    15 => "11110", 16 => "11011", 17 => "11101", 18 => "11000", 19 => "11110", 
    20 => "00101", 21 => "11100", 22 => "00000", 23 => "00010", 24 => "00111", 
    25 => "00101", 26 => "00000", 27 => "11011", 28 => "00000", 29 => "00111", 
    30 => "11101", 31 => "11011", 32 => "00101", 33 => "00011", 34 => "00100", 
    35 => "11101", 36 => "00011", 37 => "00000", 38 => "00100", 39 => "00001", 
    40 => "11001", 41 => "11111", 42 => "00010", 43 => "11111", 44 => "00010", 
    45 => "11011", 46 => "00001", 47 to 48=> "11111", 49 => "11000", 50 => "00011", 
    51 => "00001", 52 => "11111", 53 => "00001", 54 => "00011", 55 => "11110", 
    56 => "11101", 57 => "00101", 58 => "00001", 59 => "00100", 60 => "00000", 
    61 => "11100", 62 => "00000", 63 => "11000" );

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

entity conv3_weight_convgTb_x is
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

architecture arch of conv3_weight_convgTb_x is
    component conv3_weight_convgTb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgTb_x_rom_U :  component conv3_weight_convgTb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


