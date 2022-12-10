-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfiZ_rom is 
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


architecture rtl of conv3_weight_convfiZ_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11001", 1 => "00001", 2 => "11101", 3 => "00010", 4 => "11000", 
    5 => "01000", 6 to 7=> "11011", 8 => "11110", 9 => "11100", 10 => "11110", 
    11 => "11111", 12 => "11000", 13 => "00011", 14 => "00000", 15 => "00011", 
    16 => "11001", 17 => "11000", 18 => "11101", 19 => "00110", 20 => "00011", 
    21 => "00001", 22 => "11010", 23 => "11111", 24 => "11100", 25 to 26=> "11101", 
    27 => "11111", 28 to 29=> "01000", 30 => "11110", 31 => "11011", 32 => "00110", 
    33 => "11110", 34 => "00111", 35 => "11010", 36 => "11011", 37 => "11010", 
    38 => "00111", 39 => "00000", 40 => "00101", 41 => "11101", 42 => "11001", 
    43 => "11100", 44 => "00001", 45 => "00010", 46 => "00001", 47 => "11111", 
    48 to 49=> "11100", 50 => "00110", 51 => "11010", 52 => "11110", 53 => "00010", 
    54 => "11101", 55 => "00011", 56 => "00010", 57 => "11000", 58 => "11110", 
    59 => "00010", 60 => "11100", 61 => "01000", 62 => "11111", 63 => "11100" );

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

entity conv3_weight_convfiZ is
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

architecture arch of conv3_weight_convfiZ is
    component conv3_weight_convfiZ_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfiZ_rom_U :  component conv3_weight_convfiZ_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


