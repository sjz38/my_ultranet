-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfjZ_rom is 
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


architecture rtl of conv3_weight_convfjZ_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "00011", 2 => "11110", 3 => "00001", 4 => "11110", 
    5 => "01000", 6 => "11011", 7 => "00010", 8 to 9=> "11011", 10 to 11=> "11010", 
    12 => "11001", 13 => "11101", 14 => "00100", 15 => "00011", 16 => "11100", 
    17 => "00010", 18 => "11000", 19 => "00101", 20 => "00100", 21 => "11010", 
    22 => "00100", 23 => "00001", 24 => "00101", 25 => "11111", 26 => "11011", 
    27 => "00001", 28 => "00011", 29 => "11111", 30 => "00010", 31 => "11001", 
    32 => "00010", 33 => "11000", 34 => "00001", 35 => "00010", 36 => "11101", 
    37 => "11110", 38 => "00010", 39 => "00101", 40 to 41=> "00011", 42 => "11111", 
    43 => "11010", 44 => "11110", 45 => "01000", 46 => "11010", 47 => "00100", 
    48 => "00101", 49 => "00001", 50 to 51=> "00100", 52 => "11011", 53 => "00100", 
    54 => "00010", 55 => "00111", 56 => "00001", 57 => "11011", 58 => "11100", 
    59 => "00001", 60 => "11110", 61 => "00010", 62 => "00001", 63 => "01000" );

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

entity conv3_weight_convfjZ is
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

architecture arch of conv3_weight_convfjZ is
    component conv3_weight_convfjZ_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfjZ_rom_U :  component conv3_weight_convfjZ_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


