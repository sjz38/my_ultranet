-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convf06_rom is 
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


architecture rtl of conv3_weight_convf06_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "00001", 2 => "11100", 3 => "00100", 4 => "11100", 
    5 => "11110", 6 => "11011", 7 => "00011", 8 => "00100", 9 to 10=> "00001", 
    11 => "11111", 12 => "00010", 13 => "00110", 14 => "11010", 15 => "11111", 
    16 => "01000", 17 => "11100", 18 => "00010", 19 => "00011", 20 => "11010", 
    21 => "11100", 22 => "11111", 23 => "00010", 24 => "00100", 25 => "11111", 
    26 => "11110", 27 => "11111", 28 => "11110", 29 => "00010", 30 => "00000", 
    31 => "11101", 32 => "00001", 33 => "11100", 34 => "00100", 35 => "00000", 
    36 => "11001", 37 => "00100", 38 => "11111", 39 => "00000", 40 => "11001", 
    41 => "00010", 42 to 43=> "00000", 44 => "00101", 45 => "01000", 46 => "11011", 
    47 => "00111", 48 => "11010", 49 => "11101", 50 => "11111", 51 => "11010", 
    52 => "00100", 53 => "11010", 54 => "11111", 55 => "00001", 56 => "01000", 
    57 => "11011", 58 to 59=> "00100", 60 => "00011", 61 => "11100", 62 => "00000", 
    63 => "00010" );

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

entity conv3_weight_convf06 is
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

architecture arch of conv3_weight_convf06 is
    component conv3_weight_convf06_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convf06_rom_U :  component conv3_weight_convf06_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


