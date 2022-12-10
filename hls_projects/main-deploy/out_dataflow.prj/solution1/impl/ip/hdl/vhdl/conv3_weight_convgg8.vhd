-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgg8_rom is 
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


architecture rtl of conv3_weight_convgg8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "11100", 2 => "00010", 3 => "11100", 4 => "11111", 
    5 => "00011", 6 => "00000", 7 => "00011", 8 => "00010", 9 => "00111", 
    10 => "11001", 11 => "00000", 12 => "00110", 13 => "11110", 14 => "11001", 
    15 to 16=> "00000", 17 => "00010", 18 => "11111", 19 => "00000", 20 => "00010", 
    21 => "11101", 22 => "00000", 23 => "00110", 24 => "11111", 25 => "00011", 
    26 => "11101", 27 => "00001", 28 => "00000", 29 => "00001", 30 => "11111", 
    31 => "00010", 32 to 33=> "11111", 34 => "00000", 35 => "11110", 36 => "11001", 
    37 => "00010", 38 => "00001", 39 to 40=> "11110", 41 => "00110", 42 => "00001", 
    43 => "11110", 44 => "11101", 45 => "11110", 46 to 47=> "11101", 48 => "00010", 
    49 => "11010", 50 => "01000", 51 => "11101", 52 => "11111", 53 => "00011", 
    54 => "00000", 55 => "11101", 56 => "00011", 57 => "11101", 58 => "00010", 
    59 => "11001", 60 => "00010", 61 => "11000", 62 => "00000", 63 => "11110" );

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

entity conv3_weight_convgg8 is
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

architecture arch of conv3_weight_convgg8 is
    component conv3_weight_convgg8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgg8_rom_U :  component conv3_weight_convgg8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


