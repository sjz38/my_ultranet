-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh9b_rom is 
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


architecture rtl of conv3_weight_convh9b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011", 1 => "11100", 2 => "00110", 3 => "00010", 4 => "11101", 
    5 => "00010", 6 => "11101", 7 => "11000", 8 => "11101", 9 => "00101", 
    10 => "00011", 11 to 12=> "00010", 13 => "11011", 14 => "11100", 15 => "00001", 
    16 => "01000", 17 => "11011", 18 => "11110", 19 to 21=> "00011", 22 => "11011", 
    23 => "00010", 24 => "00110", 25 => "00011", 26 => "00000", 27 => "00011", 
    28 to 29=> "00111", 30 => "00001", 31 => "00011", 32 => "00001", 33 => "00010", 
    34 => "00101", 35 => "11111", 36 => "00110", 37 => "11001", 38 => "00101", 
    39 => "11111", 40 => "11110", 41 => "00110", 42 to 43=> "11101", 44 => "00001", 
    45 to 46=> "11001", 47 => "00110", 48 => "11101", 49 => "11010", 50 => "01000", 
    51 => "00001", 52 => "00000", 53 => "00111", 54 => "00100", 55 => "11111", 
    56 => "00100", 57 => "00011", 58 => "11011", 59 => "11101", 60 => "00101", 
    61 => "00000", 62 to 63=> "00001" );

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

entity conv3_weight_convh9b is
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

architecture arch of conv3_weight_convh9b is
    component conv3_weight_convh9b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh9b_rom_U :  component conv3_weight_convh9b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

