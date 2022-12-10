-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveRU_rom is 
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


architecture rtl of conv3_weight_conveRU_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "01000", 2 => "00010", 3 => "01000", 4 => "00111", 
    5 => "00010", 6 => "11010", 7 => "11101", 8 => "11010", 9 => "00001", 
    10 => "00000", 11 => "11000", 12 => "00011", 13 => "11111", 14 => "00000", 
    15 => "11000", 16 => "11101", 17 to 18=> "11011", 19 => "00001", 20 to 21=> "01000", 
    22 => "00000", 23 => "11000", 24 => "11100", 25 => "11111", 26 => "11011", 
    27 => "00000", 28 => "11111", 29 => "11101", 30 => "11100", 31 => "11000", 
    32 => "00111", 33 => "11011", 34 => "00011", 35 => "11000", 36 => "11101", 
    37 => "11010", 38 => "11000", 39 => "00011", 40 => "11101", 41 => "00010", 
    42 => "11100", 43 => "00100", 44 => "00001", 45 => "00011", 46 => "00100", 
    47 => "11110", 48 => "11010", 49 => "11100", 50 => "00010", 51 => "11101", 
    52 => "11111", 53 => "00011", 54 => "11110", 55 => "01000", 56 => "11011", 
    57 => "11111", 58 => "11000", 59 => "00001", 60 => "00100", 61 => "01000", 
    62 => "11111", 63 => "11101" );

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

entity conv3_weight_conveRU is
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

architecture arch of conv3_weight_conveRU is
    component conv3_weight_conveRU_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveRU_rom_U :  component conv3_weight_conveRU_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


