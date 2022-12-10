-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfo0_rom is 
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


architecture rtl of conv3_weight_convfo0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00000", 2 => "11110", 3 => "11100", 4 => "00111", 
    5 => "11110", 6 => "00100", 7 => "11101", 8 => "01000", 9 => "11100", 
    10 => "00110", 11 => "01000", 12 => "11110", 13 => "00000", 14 => "11011", 
    15 => "00000", 16 => "11110", 17 => "01000", 18 => "11010", 19 => "00001", 
    20 => "00000", 21 => "11000", 22 => "11011", 23 => "11101", 24 => "11111", 
    25 => "00010", 26 to 27=> "00000", 28 => "01000", 29 => "11111", 30 => "00011", 
    31 => "00001", 32 => "11111", 33 => "01000", 34 => "11000", 35 => "00010", 
    36 => "11100", 37 => "00010", 38 => "00110", 39 => "00111", 40 => "00011", 
    41 => "00000", 42 to 43=> "00010", 44 => "11110", 45 => "11100", 46 => "00001", 
    47 to 49=> "11100", 50 => "11110", 51 => "00000", 52 => "00100", 53 => "11000", 
    54 => "00001", 55 => "11011", 56 => "11111", 57 => "00001", 58 => "11101", 
    59 => "00100", 60 => "00011", 61 => "11000", 62 => "00000", 63 => "11100" );

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

entity conv3_weight_convfo0 is
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

architecture arch of conv3_weight_convfo0 is
    component conv3_weight_convfo0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfo0_rom_U :  component conv3_weight_convfo0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


