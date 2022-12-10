-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfW5_rom is 
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


architecture rtl of conv3_weight_convfW5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11100", 2 => "00001", 3 => "00010", 4 => "00000", 
    5 => "11101", 6 => "11110", 7 => "00100", 8 => "00000", 9 => "11111", 
    10 => "01000", 11 => "11011", 12 => "11111", 13 => "11001", 14 => "00001", 
    15 => "11100", 16 => "11101", 17 => "00100", 18 => "11110", 19 to 20=> "00010", 
    21 => "11111", 22 => "00100", 23 => "00010", 24 => "11001", 25 => "00010", 
    26 => "00100", 27 => "11010", 28 => "11110", 29 => "11001", 30 => "00001", 
    31 => "11010", 32 => "11101", 33 => "11100", 34 => "00011", 35 => "11111", 
    36 => "11110", 37 => "11101", 38 => "00101", 39 => "11111", 40 => "00010", 
    41 => "00001", 42 => "00101", 43 to 44=> "00010", 45 => "11000", 46 => "11110", 
    47 => "00000", 48 => "00001", 49 => "00000", 50 => "11111", 51 => "00000", 
    52 => "00101", 53 => "11000", 54 to 55=> "11110", 56 => "00000", 57 => "11000", 
    58 => "11111", 59 => "00000", 60 => "00100", 61 to 63=> "00000" );

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

entity conv3_weight_convfW5 is
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

architecture arch of conv3_weight_convfW5 is
    component conv3_weight_convfW5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfW5_rom_U :  component conv3_weight_convfW5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


