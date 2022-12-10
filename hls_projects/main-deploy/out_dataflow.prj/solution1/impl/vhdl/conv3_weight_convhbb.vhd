-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhbb_rom is 
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


architecture rtl of conv3_weight_convhbb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "00001", 2 => "00011", 3 => "11110", 4 => "11010", 
    5 => "00011", 6 => "00010", 7 => "00100", 8 => "00011", 9 to 10=> "11101", 
    11 => "00011", 12 => "00000", 13 => "00010", 14 => "11100", 15 => "11111", 
    16 => "00000", 17 => "11111", 18 => "00000", 19 => "11100", 20 => "11101", 
    21 => "11110", 22 => "11111", 23 => "00100", 24 => "11110", 25 => "00000", 
    26 => "11100", 27 => "00010", 28 => "11111", 29 => "00001", 30 => "11101", 
    31 => "00000", 32 => "00110", 33 => "00010", 34 => "00110", 35 to 36=> "11110", 
    37 => "00101", 38 => "11000", 39 => "11101", 40 => "11110", 41 => "11101", 
    42 => "00101", 43 => "00010", 44 => "11100", 45 => "00110", 46 => "11011", 
    47 => "00011", 48 => "00010", 49 => "00000", 50 => "11100", 51 to 52=> "11111", 
    53 => "11110", 54 => "11001", 55 => "00010", 56 => "01000", 57 => "11000", 
    58 => "00001", 59 => "11111", 60 => "11110", 61 => "00011", 62 => "00000", 
    63 => "11100" );

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

entity conv3_weight_convhbb is
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

architecture arch of conv3_weight_convhbb is
    component conv3_weight_convhbb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhbb_rom_U :  component conv3_weight_convhbb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


