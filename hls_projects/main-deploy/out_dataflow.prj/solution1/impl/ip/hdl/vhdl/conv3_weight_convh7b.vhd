-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh7b_rom is 
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


architecture rtl of conv3_weight_convh7b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111", 1 => "11001", 2 => "00101", 3 => "00001", 4 => "00010", 
    5 => "00011", 6 => "11110", 7 => "11011", 8 => "11111", 9 => "00101", 
    10 => "00000", 11 => "00100", 12 => "11101", 13 => "00110", 14 => "11110", 
    15 => "11000", 16 to 17=> "00101", 18 to 19=> "11100", 20 => "11110", 21 => "11101", 
    22 => "00001", 23 => "00011", 24 => "11110", 25 => "00100", 26 => "11111", 
    27 => "00111", 28 => "00100", 29 => "11101", 30 => "11111", 31 => "00011", 
    32 => "11001", 33 => "00100", 34 => "00110", 35 => "11111", 36 => "11011", 
    37 => "00011", 38 => "00100", 39 => "00010", 40 => "11110", 41 => "00101", 
    42 => "00100", 43 => "11111", 44 => "00011", 45 => "00111", 46 => "11110", 
    47 => "11101", 48 => "00011", 49 => "00000", 50 => "11101", 51 => "11110", 
    52 => "00000", 53 => "00011", 54 => "00000", 55 => "01000", 56 => "00101", 
    57 => "11100", 58 => "11111", 59 => "11101", 60 => "11100", 61 => "11111", 
    62 => "00000", 63 => "11111" );

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

entity conv3_weight_convh7b is
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

architecture arch of conv3_weight_convh7b is
    component conv3_weight_convh7b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh7b_rom_U :  component conv3_weight_convh7b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


