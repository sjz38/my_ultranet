-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveVV_rom is 
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


architecture rtl of conv3_weight_conveVV_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11100", 2 => "00000", 3 => "00101", 4 => "00010", 
    5 => "01000", 6 => "00010", 7 => "00011", 8 => "11101", 9 => "00101", 
    10 => "00100", 11 => "11000", 12 => "00000", 13 => "01000", 14 => "00000", 
    15 => "11000", 16 => "00100", 17 => "11011", 18 => "01000", 19 => "11100", 
    20 => "11000", 21 => "00001", 22 => "00111", 23 => "11001", 24 => "11100", 
    25 => "11110", 26 => "11100", 27 => "11000", 28 => "11110", 29 => "11000", 
    30 => "11110", 31 => "11000", 32 to 33=> "00011", 34 to 35=> "11000", 36 to 37=> "11110", 
    38 => "00110", 39 => "11000", 40 => "00100", 41 => "00101", 42 => "11100", 
    43 => "00000", 44 to 45=> "11000", 46 => "00110", 47 => "11100", 48 => "01000", 
    49 => "11111", 50 => "00011", 51 to 52=> "11110", 53 => "11010", 54 => "00101", 
    55 => "00110", 56 => "11000", 57 => "00001", 58 => "11110", 59 => "11101", 
    60 => "11111", 61 => "11000", 62 => "11111", 63 => "00100" );

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

entity conv3_weight_conveVV is
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

architecture arch of conv3_weight_conveVV is
    component conv3_weight_conveVV_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveVV_rom_U :  component conv3_weight_conveVV_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


