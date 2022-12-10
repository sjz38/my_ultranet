-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfB2_rom is 
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


architecture rtl of conv3_weight_convfB2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00100", 2 => "00000", 3 => "00110", 4 => "00001", 
    5 to 6=> "11101", 7 => "11000", 8 => "00001", 9 => "11101", 10 => "00110", 
    11 to 12=> "00010", 13 => "00100", 14 => "00011", 15 => "00000", 16 => "11010", 
    17 => "00000", 18 => "11111", 19 => "11110", 20 => "00100", 21 => "00010", 
    22 => "11111", 23 => "00000", 24 => "00111", 25 => "11111", 26 => "01000", 
    27 => "11110", 28 => "00011", 29 => "11011", 30 => "11110", 31 to 32=> "11111", 
    33 => "00101", 34 => "00010", 35 => "11110", 36 => "11101", 37 => "11110", 
    38 => "00101", 39 => "11110", 40 => "11111", 41 => "00001", 42 => "11111", 
    43 => "11010", 44 => "00000", 45 => "00101", 46 => "00011", 47 => "11001", 
    48 => "11101", 49 => "11001", 50 => "00011", 51 => "00100", 52 => "11111", 
    53 => "11000", 54 => "00100", 55 => "00011", 56 to 57=> "11111", 58 => "11110", 
    59 => "00001", 60 => "11110", 61 => "01000", 62 => "00000", 63 => "00010" );

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

entity conv3_weight_convfB2 is
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

architecture arch of conv3_weight_convfB2 is
    component conv3_weight_convfB2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfB2_rom_U :  component conv3_weight_convfB2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


