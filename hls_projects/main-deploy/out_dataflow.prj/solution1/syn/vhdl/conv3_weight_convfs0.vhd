-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfs0_rom is 
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


architecture rtl of conv3_weight_convfs0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "11111", 2 => "00001", 3 => "01000", 4 => "00101", 
    5 => "00011", 6 => "11110", 7 => "00101", 8 => "11111", 9 to 10=> "00011", 
    11 => "00111", 12 => "00001", 13 to 14=> "00011", 15 => "00000", 16 => "00111", 
    17 => "00100", 18 => "11111", 19 => "00110", 20 => "11010", 21 => "11100", 
    22 => "00100", 23 => "00001", 24 => "00111", 25 => "00001", 26 => "11100", 
    27 => "11001", 28 => "11110", 29 => "00010", 30 => "11001", 31 => "00000", 
    32 => "00011", 33 => "00010", 34 => "00100", 35 => "11100", 36 to 37=> "11101", 
    38 => "00001", 39 => "11001", 40 => "11100", 41 => "11101", 42 => "00011", 
    43 => "00010", 44 => "00000", 45 to 46=> "11000", 47 => "11011", 48 => "01000", 
    49 => "11110", 50 => "11010", 51 => "00011", 52 => "11111", 53 => "11110", 
    54 => "00000", 55 => "00010", 56 => "11100", 57 => "00111", 58 => "11010", 
    59 => "11111", 60 => "00110", 61 => "00011", 62 => "00001", 63 => "00011" );

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

entity conv3_weight_convfs0 is
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

architecture arch of conv3_weight_convfs0 is
    component conv3_weight_convfs0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfs0_rom_U :  component conv3_weight_convfs0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


