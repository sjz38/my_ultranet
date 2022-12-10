-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfS5_rom is 
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


architecture rtl of conv3_weight_convfS5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "00001", 2 => "00000", 3 => "11011", 4 => "11111", 
    5 => "00010", 6 => "11101", 7 => "11011", 8 => "11100", 9 => "00010", 
    10 => "11111", 11 => "00010", 12 to 13=> "11101", 14 to 15=> "11110", 16 => "00001", 
    17 => "11010", 18 => "00001", 19 => "00000", 20 => "00010", 21 => "01000", 
    22 => "00101", 23 => "11111", 24 => "11010", 25 => "11101", 26 => "00101", 
    27 => "11110", 28 => "11100", 29 => "00000", 30 to 31=> "11011", 32 => "00110", 
    33 => "11101", 34 => "00000", 35 => "11110", 36 => "11101", 37 => "00011", 
    38 to 39=> "11110", 40 => "00100", 41 => "11110", 42 => "00101", 43 => "00010", 
    44 => "00000", 45 => "11101", 46 => "00010", 47 => "11111", 48 => "00001", 
    49 => "11110", 50 => "11100", 51 => "11011", 52 => "11111", 53 => "11110", 
    54 => "00101", 55 => "00001", 56 => "11100", 57 => "00011", 58 => "00001", 
    59 => "11110", 60 => "11111", 61 => "11100", 62 => "00000", 63 => "11000" );

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

entity conv3_weight_convfS5 is
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

architecture arch of conv3_weight_convfS5 is
    component conv3_weight_convfS5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfS5_rom_U :  component conv3_weight_convfS5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


