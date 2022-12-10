-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgi9_rom is 
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


architecture rtl of conv3_weight_convgi9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00010", 2 => "11001", 3 => "11110", 4 => "11111", 
    5 => "00010", 6 => "00101", 7 => "00111", 8 to 9=> "00010", 10 => "00000", 
    11 => "00110", 12 => "11111", 13 => "11110", 14 => "11101", 15 => "11111", 
    16 => "11100", 17 => "00101", 18 to 19=> "00100", 20 => "11101", 21 => "11100", 
    22 => "00011", 23 => "00100", 24 => "00001", 25 => "00010", 26 => "00111", 
    27 to 28=> "11110", 29 => "00000", 30 => "11011", 31 => "00001", 32 => "01000", 
    33 => "11011", 34 => "11111", 35 => "00010", 36 => "00001", 37 => "11000", 
    38 => "11111", 39 => "00010", 40 => "11100", 41 => "00101", 42 => "00000", 
    43 => "11101", 44 => "00010", 45 => "11111", 46 => "11101", 47 => "00001", 
    48 => "11000", 49 => "11110", 50 => "00000", 51 => "11001", 52 => "11111", 
    53 => "00100", 54 => "11100", 55 => "00100", 56 to 57=> "11111", 58 => "11000", 
    59 => "11011", 60 => "11001", 61 => "11011", 62 => "00001", 63 => "11110" );

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

entity conv3_weight_convgi9 is
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

architecture arch of conv3_weight_convgi9 is
    component conv3_weight_convgi9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgi9_rom_U :  component conv3_weight_convgi9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


