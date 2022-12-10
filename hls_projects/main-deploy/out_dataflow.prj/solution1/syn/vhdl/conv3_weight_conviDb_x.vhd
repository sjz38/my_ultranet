-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviDb_x_rom is 
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


architecture rtl of conv3_weight_conviDb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00010", 2 => "11110", 3 => "00011", 4 => "11000", 5 => "00110", 
    6 => "11101", 7 => "11111", 8 => "11010", 9 => "11100", 10 => "11110", 
    11 => "11011", 12 to 13=> "00010", 14 => "00110", 15 => "00100", 16 => "00111", 
    17 => "11001", 18 => "00000", 19 => "11101", 20 to 21=> "00011", 22 => "11111", 
    23 => "00111", 24 => "00001", 25 => "11011", 26 => "01000", 27 => "11110", 
    28 => "00000", 29 => "11001", 30 => "11111", 31 => "00000", 32 => "00011", 
    33 => "11100", 34 => "11110", 35 => "00000", 36 => "00001", 37 => "11101", 
    38 => "11111", 39 => "11001", 40 => "00000", 41 => "01000", 42 => "00011", 
    43 to 44=> "00001", 45 => "11111", 46 => "11010", 47 => "00111", 48 => "00000", 
    49 => "11101", 50 => "00100", 51 => "00011", 52 => "00010", 53 => "11000", 
    54 => "00111", 55 => "11010", 56 => "11110", 57 => "01000", 58 to 59=> "11110", 
    60 => "00101", 61 => "00010", 62 to 63=> "00000" );

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

entity conv3_weight_conviDb_x is
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

architecture arch of conv3_weight_conviDb_x is
    component conv3_weight_conviDb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviDb_x_rom_U :  component conv3_weight_conviDb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


