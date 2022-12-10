-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveES_rom is 
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


architecture rtl of conv3_weight_conveES_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11101", 2 => "00000", 3 to 4=> "11110", 5 => "00010", 6 => "00001", 
    7 => "11101", 8 => "11000", 9 => "00100", 10 => "01000", 11 => "11100", 
    12 => "11101", 13 => "00011", 14 => "01000", 15 => "00000", 16 => "11111", 
    17 => "11010", 18 => "00010", 19 => "00111", 20 => "01000", 21 => "00101", 
    22 to 23=> "00001", 24 => "11101", 25 => "00000", 26 => "11100", 27 => "11111", 
    28 to 29=> "11011", 30 => "11100", 31 => "11110", 32 => "00101", 33 => "11001", 
    34 => "00011", 35 => "00101", 36 => "11111", 37 => "00011", 38 => "00001", 
    39 => "11010", 40 => "00010", 41 => "11111", 42 => "00001", 43 => "11000", 
    44 => "00001", 45 => "11110", 46 => "00011", 47 => "00101", 48 => "00001", 
    49 => "11111", 50 => "11101", 51 => "11001", 52 => "00001", 53 => "11101", 
    54 => "11111", 55 => "00001", 56 to 57=> "00000", 58 to 59=> "00101", 60 => "11011", 
    61 => "00010", 62 => "00000", 63 => "11011" );

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

entity conv3_weight_conveES is
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

architecture arch of conv3_weight_conveES is
    component conv3_weight_conveES_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveES_rom_U :  component conv3_weight_conveES_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


