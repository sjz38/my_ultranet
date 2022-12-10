-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveLT_rom is 
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


architecture rtl of conv3_weight_conveLT_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11111", 2 => "11101", 3 to 4=> "00101", 5 => "11000", 6 => "11111", 
    7 to 8=> "00001", 9 => "00100", 10 => "11010", 11 to 12=> "00001", 13 => "11111", 
    14 to 15=> "00010", 16 => "01000", 17 => "00101", 18 => "11100", 19 => "00010", 
    20 => "00011", 21 => "01000", 22 => "11110", 23 => "00000", 24 => "01000", 
    25 => "00010", 26 => "00000", 27 => "11111", 28 => "00011", 29 => "11111", 
    30 => "00111", 31 => "00100", 32 => "11100", 33 => "00001", 34 => "00110", 
    35 => "11111", 36 => "00000", 37 => "11111", 38 => "11010", 39 => "00110", 
    40 => "00001", 41 => "11100", 42 to 43=> "00001", 44 => "11110", 45 => "00001", 
    46 => "00011", 47 to 48=> "11110", 49 => "00010", 50 => "00100", 51 => "11011", 
    52 => "01000", 53 => "00011", 54 => "01000", 55 => "11100", 56 => "11101", 
    57 => "00011", 58 => "11110", 59 => "11101", 60 => "00010", 61 => "11110", 
    62 => "00001", 63 => "11110" );

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

entity conv3_weight_conveLT is
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

architecture arch of conv3_weight_conveLT is
    component conv3_weight_conveLT_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveLT_rom_U :  component conv3_weight_conveLT_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

