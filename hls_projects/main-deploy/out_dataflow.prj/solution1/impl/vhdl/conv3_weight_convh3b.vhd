-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh3b_rom is 
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


architecture rtl of conv3_weight_convh3b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 to 3=> "00100", 4 => "00101", 5 => "11001", 6 => "11111", 
    7 => "00011", 8 => "00000", 9 => "00001", 10 to 11=> "11101", 12 => "11111", 
    13 to 14=> "00011", 15 => "00100", 16 => "00001", 17 => "11110", 18 => "00000", 
    19 => "11111", 20 => "00000", 21 => "11111", 22 => "11001", 23 => "00001", 
    24 => "11110", 25 => "00011", 26 => "11101", 27 => "00000", 28 => "00010", 
    29 => "11011", 30 => "11100", 31 => "11110", 32 => "01000", 33 => "00000", 
    34 => "11111", 35 to 36=> "11101", 37 => "11100", 38 => "11011", 39 => "00011", 
    40 => "00000", 41 => "00110", 42 => "00010", 43 => "00001", 44 => "00011", 
    45 => "00000", 46 => "00011", 47 => "11111", 48 => "11110", 49 => "11011", 
    50 to 51=> "11111", 52 => "00010", 53 => "00011", 54 to 55=> "00001", 56 => "00100", 
    57 => "11110", 58 => "11101", 59 => "00001", 60 => "11000", 61 => "11111", 
    62 => "00000", 63 => "00001" );

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

entity conv3_weight_convh3b is
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

architecture arch of conv3_weight_convh3b is
    component conv3_weight_convh3b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh3b_rom_U :  component conv3_weight_convh3b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


