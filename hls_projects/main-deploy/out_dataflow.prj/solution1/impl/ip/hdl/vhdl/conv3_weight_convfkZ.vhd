-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfkZ_rom is 
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


architecture rtl of conv3_weight_convfkZ_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "00011", 2 => "11111", 3 => "11100", 4 => "11011", 
    5 to 6=> "11111", 7 => "00101", 8 => "00011", 9 => "11110", 10 => "00010", 
    11 => "00101", 12 => "11111", 13 => "00100", 14 to 15=> "11100", 16 => "00101", 
    17 => "11010", 18 => "11111", 19 => "11101", 20 => "00010", 21 => "00110", 
    22 => "11111", 23 => "00100", 24 => "11011", 25 => "00000", 26 => "00010", 
    27 => "00000", 28 => "00100", 29 => "00000", 30 => "01000", 31 => "00101", 
    32 => "11001", 33 => "00000", 34 => "11000", 35 => "00100", 36 to 37=> "00001", 
    38 => "11111", 39 => "11110", 40 => "00000", 41 => "00101", 42 to 43=> "00010", 
    44 => "00011", 45 to 46=> "11110", 47 => "00000", 48 => "11001", 49 => "00011", 
    50 => "11010", 51 => "11000", 52 => "00010", 53 => "11110", 54 to 55=> "11111", 
    56 => "00101", 57 => "11101", 58 => "00100", 59 => "11110", 60 => "00011", 
    61 => "00110", 62 => "00000", 63 => "11111" );

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

entity conv3_weight_convfkZ is
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

architecture arch of conv3_weight_convfkZ is
    component conv3_weight_convfkZ_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfkZ_rom_U :  component conv3_weight_convfkZ_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


