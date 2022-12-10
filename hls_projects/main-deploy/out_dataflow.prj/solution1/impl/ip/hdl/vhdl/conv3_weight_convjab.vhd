-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convjab_rom is 
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


architecture rtl of conv3_weight_convjab_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00010", 2 => "00011", 3 => "00010", 4 => "11111", 
    5 => "00010", 6 => "11111", 7 => "00010", 8 => "11110", 9 => "11011", 
    10 => "11111", 11 => "00011", 12 => "11101", 13 => "00011", 14 => "11111", 
    15 => "00100", 16 => "11110", 17 => "11111", 18 => "00010", 19 => "00001", 
    20 => "00011", 21 => "00001", 22 => "00010", 23 => "11011", 24 => "11100", 
    25 => "00001", 26 => "00000", 27 => "11010", 28 => "00000", 29 => "00010", 
    30 => "11011", 31 => "11111", 32 => "11110", 33 => "11011", 34 => "11110", 
    35 => "00011", 36 => "00001", 37 => "11100", 38 => "00010", 39 => "11011", 
    40 => "00000", 41 => "00001", 42 => "11110", 43 => "00010", 44 => "11111", 
    45 => "11100", 46 => "11011", 47 => "00001", 48 => "00010", 49 => "00101", 
    50 => "00100", 51 => "00010", 52 => "11101", 53 => "11010", 54 => "11110", 
    55 => "01000", 56 => "00000", 57 => "11111", 58 => "00001", 59 to 60=> "11111", 
    61 => "11110", 62 => "00000", 63 => "00100" );

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

entity conv3_weight_convjab is
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

architecture arch of conv3_weight_convjab is
    component conv3_weight_convjab_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convjab_rom_U :  component conv3_weight_convjab_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


