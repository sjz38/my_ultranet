-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhvb_rom is 
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


architecture rtl of conv3_weight_convhvb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "11101", 2 => "00010", 3 => "11111", 4 => "11101", 
    5 to 6=> "00110", 7 => "00000", 8 => "11111", 9 => "00010", 10 => "00001", 
    11 => "00100", 12 => "00001", 13 => "11101", 14 => "00000", 15 => "00010", 
    16 => "00000", 17 => "00100", 18 to 20=> "11110", 21 => "00000", 22 => "11101", 
    23 => "11010", 24 => "11100", 25 => "00100", 26 => "11101", 27 => "00010", 
    28 => "00100", 29 => "00000", 30 => "11010", 31 => "00110", 32 => "00000", 
    33 => "00100", 34 => "11011", 35 => "00011", 36 => "11011", 37 => "00001", 
    38 => "00011", 39 => "01000", 40 => "11111", 41 => "00101", 42 => "00001", 
    43 to 44=> "11100", 45 => "00000", 46 => "11110", 47 => "11100", 48 => "11110", 
    49 => "00001", 50 => "11101", 51 => "11110", 52 to 53=> "00010", 54 => "11100", 
    55 => "11001", 56 => "00011", 57 => "00010", 58 => "00001", 59 => "00000", 
    60 => "11111", 61 => "00000", 62 => "00001", 63 => "00011" );

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

entity conv3_weight_convhvb is
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

architecture arch of conv3_weight_convhvb is
    component conv3_weight_convhvb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhvb_rom_U :  component conv3_weight_convhvb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


