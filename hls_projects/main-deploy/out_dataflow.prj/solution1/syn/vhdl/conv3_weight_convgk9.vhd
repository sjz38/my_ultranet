-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgk9_rom is 
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


architecture rtl of conv3_weight_convgk9_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011", 1 => "00100", 2 => "00000", 3 => "00010", 4 => "11111", 
    5 => "11100", 6 => "11110", 7 => "11100", 8 => "11001", 9 => "00100", 
    10 => "11101", 11 => "00011", 12 => "00000", 13 => "11100", 14 => "11001", 
    15 => "11100", 16 => "00101", 17 => "00110", 18 => "11101", 19 => "00101", 
    20 => "11110", 21 => "11101", 22 => "11111", 23 => "00100", 24 => "11101", 
    25 => "00111", 26 => "00110", 27 => "00011", 28 => "00010", 29 => "11110", 
    30 => "11001", 31 => "11100", 32 => "00110", 33 to 34=> "11110", 35 => "11111", 
    36 => "11011", 37 => "00011", 38 => "11001", 39 => "11010", 40 => "00110", 
    41 to 42=> "00011", 43 => "00001", 44 => "11110", 45 => "00001", 46 => "11010", 
    47 => "00000", 48 => "01000", 49 => "00100", 50 => "11010", 51 => "00010", 
    52 => "11101", 53 => "00000", 54 => "00100", 55 => "11011", 56 => "11000", 
    57 => "11011", 58 => "11100", 59 => "00001", 60 => "11101", 61 => "00001", 
    62 => "00000", 63 => "00011" );

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

entity conv3_weight_convgk9 is
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

architecture arch of conv3_weight_convgk9 is
    component conv3_weight_convgk9_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgk9_rom_U :  component conv3_weight_convgk9_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


