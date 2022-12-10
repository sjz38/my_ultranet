-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviJb_x_rom is 
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


architecture rtl of conv3_weight_conviJb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 to 2=> "00101", 3 => "11010", 4 => "00100", 5 => "00001", 
    6 => "11111", 7 => "11100", 8 to 9=> "00010", 10 => "11000", 11 => "11101", 
    12 => "00101", 13 => "11100", 14 => "11110", 15 => "00001", 16 => "00110", 
    17 => "01000", 18 to 19=> "00010", 20 => "11110", 21 => "11100", 22 => "11110", 
    23 => "11011", 24 => "00101", 25 => "01000", 26 => "00010", 27 => "01000", 
    28 => "00010", 29 => "00111", 30 => "00011", 31 => "11111", 32 => "00100", 
    33 => "11100", 34 => "11110", 35 => "11010", 36 to 37=> "00100", 38 => "00001", 
    39 => "00000", 40 => "11110", 41 => "00010", 42 => "00000", 43 to 44=> "00110", 
    45 => "00000", 46 => "11110", 47 => "11000", 48 => "11111", 49 => "11010", 
    50 => "11100", 51 => "00100", 52 => "11000", 53 => "00011", 54 => "00100", 
    55 => "00010", 56 => "00000", 57 => "11100", 58 => "00010", 59 => "11110", 
    60 => "11100", 61 => "11010", 62 => "11111", 63 => "11110" );

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

entity conv3_weight_conviJb_x is
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

architecture arch of conv3_weight_conviJb_x is
    component conv3_weight_conviJb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviJb_x_rom_U :  component conv3_weight_conviJb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


