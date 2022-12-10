-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfx1_rom is 
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


architecture rtl of conv3_weight_convfx1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "00000", 2 => "11010", 3 => "11000", 4 => "11010", 
    5 => "00011", 6 => "11001", 7 => "11100", 8 => "11010", 9 => "11100", 
    10 => "00100", 11 => "11001", 12 => "11110", 13 => "00100", 14 => "11011", 
    15 => "00011", 16 => "00001", 17 => "11011", 18 => "00000", 19 => "11000", 
    20 to 21=> "00011", 22 => "00111", 23 => "00001", 24 => "11010", 25 => "00011", 
    26 => "00101", 27 => "00011", 28 => "11011", 29 => "11111", 30 => "00010", 
    31 => "00111", 32 => "00000", 33 => "01000", 34 => "11011", 35 => "11111", 
    36 => "00011", 37 => "11010", 38 => "00010", 39 => "00011", 40 => "00010", 
    41 => "11001", 42 => "11010", 43 => "11110", 44 => "11111", 45 => "11010", 
    46 => "00101", 47 => "01000", 48 => "11101", 49 => "01000", 50 => "11110", 
    51 => "11011", 52 => "11110", 53 => "11101", 54 => "11000", 55 => "00100", 
    56 => "00101", 57 => "11110", 58 => "00111", 59 => "00011", 60 => "11011", 
    61 => "00000", 62 to 63=> "00001" );

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

entity conv3_weight_convfx1 is
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

architecture arch of conv3_weight_convfx1 is
    component conv3_weight_convfx1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfx1_rom_U :  component conv3_weight_convfx1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


