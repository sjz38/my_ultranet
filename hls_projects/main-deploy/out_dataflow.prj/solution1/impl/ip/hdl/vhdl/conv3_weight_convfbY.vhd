-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfbY_rom is 
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


architecture rtl of conv3_weight_convfbY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11110", 2 => "00110", 3 => "00011", 4 => "11000", 
    5 => "11110", 6 => "00110", 7 => "11111", 8 => "00101", 9 => "00011", 
    10 => "11110", 11 => "00100", 12 => "11100", 13 => "00101", 14 => "11111", 
    15 => "00001", 16 => "01000", 17 => "11101", 18 => "00010", 19 => "00011", 
    20 => "11010", 21 => "00000", 22 => "00110", 23 => "00100", 24 => "00001", 
    25 => "11011", 26 => "01000", 27 => "00011", 28 => "11010", 29 => "11110", 
    30 => "11000", 31 => "11111", 32 => "00001", 33 => "11111", 34 => "00100", 
    35 => "11001", 36 => "11011", 37 => "00001", 38 => "00100", 39 to 41=> "11111", 
    42 => "00010", 43 => "11110", 44 => "00010", 45 => "11110", 46 => "11111", 
    47 => "00010", 48 => "11111", 49 => "11101", 50 to 51=> "00001", 52 => "11010", 
    53 => "11110", 54 => "11010", 55 => "00111", 56 => "11111", 57 => "00000", 
    58 => "00001", 59 => "11111", 60 => "00001", 61 to 62=> "11111", 63 => "00010" );

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

entity conv3_weight_convfbY is
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

architecture arch of conv3_weight_convfbY is
    component conv3_weight_convfbY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfbY_rom_U :  component conv3_weight_convfbY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


