-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveSV_rom is 
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


architecture rtl of conv3_weight_conveSV_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00011", 2 => "00001", 3 => "01000", 4 => "00101", 
    5 => "01000", 6 => "11110", 7 => "00000", 8 => "11000", 9 => "11111", 
    10 => "11010", 11 => "11000", 12 => "00011", 13 => "11111", 14 to 15=> "11000", 
    16 => "11111", 17 => "11100", 18 => "11101", 19 => "00000", 20 => "00001", 
    21 => "00000", 22 => "01000", 23 => "11010", 24 => "11011", 25 => "00100", 
    26 => "11011", 27 => "11010", 28 => "00000", 29 => "00010", 30 => "11010", 
    31 => "11000", 32 => "00111", 33 => "11100", 34 => "00100", 35 => "11000", 
    36 to 37=> "11100", 38 => "11000", 39 => "00011", 40 => "11010", 41 => "11111", 
    42 => "11110", 43 => "00000", 44 => "11001", 45 => "11100", 46 => "11110", 
    47 => "00001", 48 to 49=> "00101", 50 => "00000", 51 => "00010", 52 => "11010", 
    53 to 54=> "11110", 55 => "01000", 56 => "11001", 57 => "00010", 58 => "11000", 
    59 => "00100", 60 => "00001", 61 => "00111", 62 => "00000", 63 => "00011" );

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

entity conv3_weight_conveSV is
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

architecture arch of conv3_weight_conveSV is
    component conv3_weight_conveSV_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveSV_rom_U :  component conv3_weight_conveSV_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


