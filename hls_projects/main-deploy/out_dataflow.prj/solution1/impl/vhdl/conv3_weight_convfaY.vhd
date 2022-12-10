-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfaY_rom is 
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


architecture rtl of conv3_weight_convfaY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00101", 2 => "01000", 3 => "00110", 4 => "11011", 
    5 => "00100", 6 => "11110", 7 => "11111", 8 => "11011", 9 => "00001", 
    10 => "11011", 11 => "11101", 12 => "01000", 13 => "00001", 14 => "11110", 
    15 => "11111", 16 => "11100", 17 => "11011", 18 => "11110", 19 => "11100", 
    20 => "00100", 21 => "11110", 22 => "00011", 23 => "11100", 24 => "11111", 
    25 => "11101", 26 => "11110", 27 => "11100", 28 => "00011", 29 => "00100", 
    30 => "11111", 31 to 32=> "00000", 33 => "00100", 34 => "00110", 35 => "00011", 
    36 => "00101", 37 => "11110", 38 => "11010", 39 => "11100", 40 => "11101", 
    41 => "00010", 42 => "00011", 43 => "11110", 44 => "11111", 45 => "11000", 
    46 => "11010", 47 => "11011", 48 => "00001", 49 => "11011", 50 => "11101", 
    51 => "11000", 52 => "00001", 53 => "00100", 54 => "00000", 55 to 56=> "11111", 
    57 => "11000", 58 to 59=> "00011", 60 => "11110", 61 => "00110", 62 => "00001", 
    63 => "00000" );

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

entity conv3_weight_convfaY is
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

architecture arch of conv3_weight_convfaY is
    component conv3_weight_convfaY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfaY_rom_U :  component conv3_weight_convfaY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


