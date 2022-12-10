-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhBb_x_rom is 
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


architecture rtl of conv3_weight_convhBb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "00000", 2 => "01000", 3 => "11110", 4 => "00111", 
    5 => "00110", 6 => "11110", 7 => "00110", 8 to 9=> "11111", 10 => "11110", 
    11 => "00000", 12 => "11101", 13 => "00001", 14 => "11100", 15 => "11110", 
    16 to 17=> "11111", 18 => "11011", 19 => "00000", 20 => "01000", 21 => "11110", 
    22 => "00010", 23 => "00001", 24 => "00101", 25 to 26=> "11101", 27 => "00000", 
    28 => "00001", 29 => "11100", 30 => "00000", 31 => "11110", 32 => "11111", 
    33 => "00001", 34 => "11001", 35 => "11101", 36 => "00101", 37 => "11100", 
    38 => "11110", 39 => "00010", 40 => "11110", 41 => "00010", 42 => "00110", 
    43 => "11010", 44 => "11011", 45 => "11000", 46 => "00010", 47 => "11011", 
    48 => "00000", 49 => "11110", 50 to 51=> "00110", 52 => "11101", 53 => "00010", 
    54 => "00101", 55 => "00111", 56 => "01000", 57 => "11110", 58 => "11010", 
    59 => "00001", 60 => "11010", 61 => "11101", 62 => "11111", 63 => "11011" );

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

entity conv3_weight_convhBb_x is
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

architecture arch of conv3_weight_convhBb_x is
    component conv3_weight_convhBb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhBb_x_rom_U :  component conv3_weight_convhBb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


