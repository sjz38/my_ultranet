-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfT5_rom is 
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


architecture rtl of conv3_weight_convfT5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11111", 2 => "00010", 3 => "11101", 4 => "00001", 5 => "00010", 
    6 => "11100", 7 => "11111", 8 => "11010", 9 => "00100", 10 => "01000", 
    11 => "00010", 12 => "00001", 13 => "11100", 14 => "00001", 15 => "11101", 
    16 => "00011", 17 to 18=> "11100", 19 => "11111", 20 => "00100", 21 => "11100", 
    22 => "11110", 23 => "11101", 24 => "11011", 25 => "11101", 26 => "00011", 
    27 to 28=> "11110", 29 => "11011", 30 => "11100", 31 => "11111", 32 => "11101", 
    33 => "11111", 34 => "00011", 35 => "00001", 36 => "11001", 37 => "00001", 
    38 => "00100", 39 => "11101", 40 => "00101", 41 => "11101", 42 => "11111", 
    43 => "11101", 44 => "00100", 45 => "11111", 46 => "00001", 47 => "00000", 
    48 => "00110", 49 => "11100", 50 => "11001", 51 to 52=> "11101", 53 => "00000", 
    54 => "00101", 55 => "11110", 56 to 57=> "11101", 58 => "00001", 59 => "00000", 
    60 => "00011", 61 => "00000", 62 => "00001", 63 => "11110" );

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

entity conv3_weight_convfT5 is
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

architecture arch of conv3_weight_convfT5 is
    component conv3_weight_convfT5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfT5_rom_U :  component conv3_weight_convfT5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


