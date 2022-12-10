-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convf16_rom is 
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


architecture rtl of conv3_weight_convf16_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11010", 1 => "11101", 2 => "11000", 3 => "00000", 4 => "11000", 
    5 => "00110", 6 => "00011", 7 to 8=> "11110", 9 to 10=> "00011", 11 => "00100", 
    12 => "11111", 13 => "00011", 14 => "11101", 15 => "11100", 16 => "00011", 
    17 => "11100", 18 => "11110", 19 => "00111", 20 => "00101", 21 => "00111", 
    22 => "11110", 23 => "00000", 24 => "00011", 25 => "00001", 26 => "11101", 
    27 => "11111", 28 to 29=> "00011", 30 => "11010", 31 to 32=> "00010", 33 => "00001", 
    34 => "11010", 35 => "11100", 36 => "00011", 37 => "11000", 38 => "00011", 
    39 to 40=> "00010", 41 => "11101", 42 => "11110", 43 => "00000", 44 => "11111", 
    45 => "00010", 46 => "11101", 47 => "01000", 48 => "00000", 49 => "00110", 
    50 => "11101", 51 => "00010", 52 => "11101", 53 => "00100", 54 => "11110", 
    55 => "11010", 56 => "00000", 57 => "01000", 58 => "11110", 59 => "11111", 
    60 => "00001", 61 => "11110", 62 => "11111", 63 => "11110" );

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

entity conv3_weight_convf16 is
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

architecture arch of conv3_weight_convf16 is
    component conv3_weight_convf16_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convf16_rom_U :  component conv3_weight_convf16_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


