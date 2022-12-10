-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg6b_rom is 
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


architecture rtl of conv3_weight_convg6b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11001", 2 => "01000", 3 => "00000", 4 => "01000", 5 => "11111", 
    6 => "11011", 7 => "00110", 8 => "11011", 9 => "00110", 10 => "11100", 
    11 => "00001", 12 => "11111", 13 => "01000", 14 to 15=> "11000", 16 => "11010", 
    17 => "00000", 18 => "11101", 19 => "01000", 20 => "11011", 21 => "11110", 
    22 => "00010", 23 => "11101", 24 => "00100", 25 => "11110", 26 => "11011", 
    27 => "11110", 28 => "00010", 29 => "11101", 30 => "00011", 31 => "11111", 
    32 => "00000", 33 => "11001", 34 => "01000", 35 => "11110", 36 => "11011", 
    37 => "00010", 38 => "01000", 39 => "11100", 40 => "11001", 41 => "11110", 
    42 => "00011", 43 => "00000", 44 => "11011", 45 => "00111", 46 => "00011", 
    47 => "11101", 48 => "00010", 49 => "11000", 50 => "11111", 51 => "11010", 
    52 => "00110", 53 => "01000", 54 => "11111", 55 => "11101", 56 => "00110", 
    57 => "11000", 58 => "11001", 59 => "11011", 60 => "00010", 61 to 62=> "00000", 
    63 => "00100" );

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

entity conv3_weight_convg6b is
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

architecture arch of conv3_weight_convg6b is
    component conv3_weight_convg6b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg6b_rom_U :  component conv3_weight_convg6b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


