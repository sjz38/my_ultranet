-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviqb_rom is 
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


architecture rtl of conv3_weight_conviqb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11111", 2 => "11101", 3 => "00101", 4 => "11110", 5 => "00100", 
    6 => "00010", 7 => "11101", 8 => "00011", 9 => "11101", 10 => "00001", 
    11 => "00010", 12 => "00110", 13 => "11110", 14 => "00001", 15 => "11011", 
    16 => "00010", 17 => "01000", 18 => "11101", 19 => "00001", 20 => "11111", 
    21 => "00010", 22 => "00001", 23 => "11011", 24 to 25=> "11110", 26 => "11101", 
    27 => "01000", 28 => "00010", 29 => "00001", 30 => "00100", 31 to 32=> "00000", 
    33 to 34=> "00001", 35 => "00110", 36 => "11101", 37 to 38=> "00010", 39 => "11110", 
    40 => "11100", 41 => "11110", 42 => "11100", 43 => "11000", 44 => "11111", 
    45 => "00010", 46 => "11111", 47 => "11001", 48 => "11010", 49 => "11011", 
    50 => "11101", 51 => "00011", 52 => "00001", 53 => "11111", 54 => "00000", 
    55 => "00011", 56 => "11101", 57 => "00000", 58 to 59=> "11111", 60 => "00000", 
    61 => "11101", 62 => "11111", 63 => "11110" );

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

entity conv3_weight_conviqb is
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

architecture arch of conv3_weight_conviqb is
    component conv3_weight_conviqb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviqb_rom_U :  component conv3_weight_conviqb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


