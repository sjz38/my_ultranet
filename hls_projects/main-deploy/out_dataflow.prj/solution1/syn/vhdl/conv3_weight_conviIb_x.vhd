-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviIb_x_rom is 
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


architecture rtl of conv3_weight_conviIb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011", 1 to 2=> "11110", 3 => "11111", 4 => "00100", 5 => "00000", 
    6 => "00111", 7 => "11110", 8 => "11101", 9 => "11100", 10 => "11000", 
    11 => "00101", 12 => "11110", 13 => "11011", 14 => "11110", 15 to 16=> "00001", 
    17 => "00110", 18 => "11111", 19 => "00011", 20 => "11110", 21 to 22=> "11100", 
    23 => "00010", 24 => "01000", 25 => "11111", 26 => "00100", 27 => "11110", 
    28 => "11011", 29 => "11101", 30 to 31=> "00000", 32 => "11101", 33 => "11111", 
    34 => "11110", 35 to 36=> "00100", 37 => "11011", 38 => "11010", 39 => "01000", 
    40 => "11100", 41 => "11111", 42 => "11101", 43 => "11100", 44 => "00111", 
    45 => "11100", 46 => "00000", 47 => "11110", 48 => "00111", 49 => "00011", 
    50 => "00000", 51 => "01000", 52 => "11001", 53 => "11111", 54 => "11100", 
    55 => "00110", 56 => "11010", 57 => "11110", 58 => "11011", 59 => "11110", 
    60 => "00000", 61 => "00101", 62 => "00000", 63 => "11100" );

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

entity conv3_weight_conviIb_x is
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

architecture arch of conv3_weight_conviIb_x is
    component conv3_weight_conviIb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviIb_x_rom_U :  component conv3_weight_conviIb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


