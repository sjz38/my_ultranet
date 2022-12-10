-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgwb_rom is 
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


architecture rtl of conv3_weight_convgwb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11010", 2 => "00101", 3 => "00110", 4 => "11000", 
    5 => "00110", 6 to 7=> "00010", 8 => "11111", 9 => "00001", 10 => "00100", 
    11 => "11010", 12 => "11111", 13 => "00011", 14 => "00100", 15 => "11101", 
    16 => "00000", 17 => "11011", 18 => "00011", 19 => "11101", 20 to 21=> "11010", 
    22 => "11100", 23 => "11111", 24 => "11001", 25 => "00011", 26 => "00000", 
    27 => "11111", 28 => "00000", 29 => "11000", 30 => "00011", 31 => "11000", 
    32 => "11101", 33 => "00011", 34 => "00001", 35 => "11110", 36 => "00000", 
    37 => "00111", 38 => "11010", 39 => "11111", 40 to 41=> "00010", 42 => "11001", 
    43 => "11111", 44 => "00000", 45 => "11101", 46 => "11001", 47 => "00001", 
    48 => "00000", 49 => "00001", 50 => "00010", 51 => "11001", 52 => "11110", 
    53 => "11101", 54 => "11111", 55 => "00101", 56 => "00111", 57 => "11010", 
    58 => "11110", 59 => "11000", 60 => "00111", 61 => "11010", 62 => "00000", 
    63 => "01000" );

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

entity conv3_weight_convgwb is
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

architecture arch of conv3_weight_convgwb is
    component conv3_weight_convgwb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgwb_rom_U :  component conv3_weight_convgwb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

