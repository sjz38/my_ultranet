-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhxb_rom is 
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


architecture rtl of conv3_weight_convhxb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11001", 2 => "00000", 3 to 4=> "11100", 5 => "11011", 
    6 => "11001", 7 => "00100", 8 => "11010", 9 => "00111", 10 => "00110", 
    11 => "11100", 12 => "01000", 13 => "11110", 14 => "11100", 15 => "00010", 
    16 => "00110", 17 => "00100", 18 => "00001", 19 => "00010", 20 => "11011", 
    21 => "11100", 22 => "11111", 23 => "00010", 24 => "11101", 25 => "11010", 
    26 => "00001", 27 => "11111", 28 => "00101", 29 => "00010", 30 => "00001", 
    31 => "00110", 32 => "00000", 33 => "11110", 34 => "00111", 35 to 36=> "00010", 
    37 to 38=> "00110", 39 => "11110", 40 to 42=> "00011", 43 => "00100", 44 => "11111", 
    45 => "00011", 46 => "11000", 47 to 48=> "11110", 49 => "11101", 50 => "00001", 
    51 => "11100", 52 to 54=> "11110", 55 => "11000", 56 => "11110", 57 => "11001", 
    58 => "00001", 59 => "11101", 60 => "11110", 61 => "00011", 62 => "00001", 
    63 => "00100" );

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

entity conv3_weight_convhxb is
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

architecture arch of conv3_weight_convhxb is
    component conv3_weight_convhxb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhxb_rom_U :  component conv3_weight_convhxb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


