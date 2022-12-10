-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhyb_rom is 
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


architecture rtl of conv3_weight_convhyb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "11010", 2 => "00110", 3 => "11110", 4 => "11111", 
    5 => "00011", 6 => "00101", 7 => "00011", 8 => "11110", 9 => "00001", 
    10 => "11100", 11 => "00000", 12 => "00011", 13 to 14=> "11101", 15 => "00010", 
    16 => "11110", 17 => "11011", 18 => "00100", 19 => "11101", 20 => "11100", 
    21 => "00100", 22 => "11011", 23 => "11101", 24 => "00000", 25 => "00010", 
    26 => "11110", 27 => "00111", 28 => "00100", 29 => "00001", 30 => "00011", 
    31 => "00001", 32 to 34=> "11111", 35 => "00000", 36 => "11101", 37 => "11111", 
    38 => "00100", 39 => "11110", 40 to 41=> "00001", 42 => "00101", 43 => "11110", 
    44 => "01000", 45 => "00000", 46 => "11101", 47 => "00010", 48 => "00100", 
    49 => "00010", 50 => "11000", 51 => "00110", 52 => "00000", 53 => "00100", 
    54 => "11101", 55 => "00011", 56 => "00001", 57 => "11111", 58 => "00000", 
    59 => "11110", 60 => "11011", 61 => "11101", 62 => "00000", 63 => "00101" );

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

entity conv3_weight_convhyb is
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

architecture arch of conv3_weight_convhyb is
    component conv3_weight_convhyb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhyb_rom_U :  component conv3_weight_convhyb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


