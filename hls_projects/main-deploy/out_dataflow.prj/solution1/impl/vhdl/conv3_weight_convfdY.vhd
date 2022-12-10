-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfdY_rom is 
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


architecture rtl of conv3_weight_convfdY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11011", 2 => "00010", 3 => "00110", 4 => "00101", 
    5 => "00111", 6 => "00101", 7 => "00011", 8 to 9=> "11110", 10 => "11101", 
    11 => "00001", 12 => "01000", 13 => "11100", 14 => "11110", 15 => "00101", 
    16 => "11000", 17 => "11110", 18 => "00110", 19 => "00010", 20 => "00110", 
    21 => "00001", 22 => "00011", 23 => "11000", 24 => "11100", 25 to 26=> "11101", 
    27 => "11000", 28 => "00010", 29 => "11110", 30 to 31=> "00001", 32 to 33=> "00100", 
    34 to 35=> "00010", 36 => "11110", 37 => "00010", 38 => "11111", 39 => "00000", 
    40 => "11111", 41 => "11110", 42 => "00011", 43 => "11011", 44 => "00011", 
    45 => "00111", 46 => "11101", 47 => "00101", 48 => "00100", 49 => "00101", 
    50 => "11111", 51 => "00010", 52 => "00111", 53 => "11100", 54 => "11110", 
    55 => "00010", 56 => "00001", 57 => "00100", 58 to 59=> "11101", 60 => "00000", 
    61 => "11100", 62 => "00001", 63 => "00000" );

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

entity conv3_weight_convfdY is
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

architecture arch of conv3_weight_convfdY is
    component conv3_weight_convfdY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfdY_rom_U :  component conv3_weight_convfdY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


