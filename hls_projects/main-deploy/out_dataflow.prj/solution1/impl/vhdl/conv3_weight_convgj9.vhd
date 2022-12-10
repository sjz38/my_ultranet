-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgj9_rom is 
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


architecture rtl of conv3_weight_convgj9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 => "00011", 2 => "11000", 3 => "11101", 4 => "00010", 
    5 => "11010", 6 => "00000", 7 => "11100", 8 => "00001", 9 => "00100", 
    10 => "11111", 11 => "00011", 12 => "11101", 13 => "00011", 14 => "11011", 
    15 => "00001", 16 => "11110", 17 => "00100", 18 => "11110", 19 => "01000", 
    20 to 21=> "11110", 22 => "11101", 23 => "00000", 24 => "11101", 25 => "00101", 
    26 to 27=> "00010", 28 => "00100", 29 => "11011", 30 => "11000", 31 => "11011", 
    32 => "00110", 33 => "11111", 34 => "00100", 35 => "11111", 36 to 37=> "11101", 
    38 => "00011", 39 => "11111", 40 => "00101", 41 => "00000", 42 => "00011", 
    43 => "00001", 44 => "11100", 45 => "01000", 46 to 47=> "00001", 48 => "11000", 
    49 => "11011", 50 => "11010", 51 => "11100", 52 => "01000", 53 to 54=> "00001", 
    55 => "11110", 56 => "11000", 57 => "11100", 58 => "11000", 59 => "00001", 
    60 => "11110", 61 => "11101", 62 => "00000", 63 => "11110" );

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

entity conv3_weight_convgj9 is
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

architecture arch of conv3_weight_convgj9 is
    component conv3_weight_convgj9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgj9_rom_U :  component conv3_weight_convgj9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


