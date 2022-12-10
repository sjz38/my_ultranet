-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfy1_rom is 
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


architecture rtl of conv3_weight_convfy1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "00001", 2 => "11110", 3 => "11011", 4 => "00010", 
    5 => "11101", 6 => "11001", 7 => "11111", 8 => "11110", 9 => "11001", 
    10 => "00011", 11 => "11000", 12 => "01000", 13 => "11111", 14 => "00001", 
    15 => "11011", 16 to 17=> "11110", 18 => "11101", 19 => "11100", 20 => "00000", 
    21 to 22=> "00100", 23 => "11101", 24 => "11110", 25 => "00011", 26 => "11111", 
    27 => "11101", 28 => "00011", 29 => "00101", 30 => "11101", 31 => "00101", 
    32 => "00100", 33 => "11011", 34 => "00100", 35 => "11011", 36 => "00001", 
    37 => "11110", 38 => "11100", 39 => "11101", 40 => "00001", 41 => "00000", 
    42 => "11101", 43 => "11001", 44 => "00001", 45 => "11111", 46 => "00010", 
    47 => "01000", 48 => "00010", 49 => "11101", 50 => "00110", 51 => "11010", 
    52 => "11110", 53 => "00101", 54 => "11100", 55 => "00101", 56 => "00010", 
    57 => "11111", 58 => "01000", 59 => "00111", 60 => "11011", 61 => "11111", 
    62 => "00001", 63 => "11101" );

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

entity conv3_weight_convfy1 is
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

architecture arch of conv3_weight_convfy1 is
    component conv3_weight_convfy1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfy1_rom_U :  component conv3_weight_convfy1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

