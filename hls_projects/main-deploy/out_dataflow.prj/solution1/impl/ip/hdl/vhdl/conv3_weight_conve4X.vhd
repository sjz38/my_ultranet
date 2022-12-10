-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve4X_rom is 
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


architecture rtl of conv3_weight_conve4X_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "11010", 2 => "00110", 3 => "11101", 4 => "00111", 
    5 => "11101", 6 => "00001", 7 => "11100", 8 => "11111", 9 => "00010", 
    10 => "00001", 11 to 12=> "11111", 13 => "01000", 14 => "00011", 15 => "11101", 
    16 => "00110", 17 => "11001", 18 => "00101", 19 => "00001", 20 => "00110", 
    21 => "00000", 22 => "11000", 23 => "00100", 24 => "11101", 25 => "11111", 
    26 => "00011", 27 => "01000", 28 => "00101", 29 => "11111", 30 => "00110", 
    31 => "01000", 32 => "00010", 33 => "00011", 34 to 35=> "00001", 36 => "11110", 
    37 => "00010", 38 => "00001", 39 => "11000", 40 => "00100", 41 => "00010", 
    42 => "11110", 43 => "00001", 44 => "00011", 45 => "00010", 46 => "00001", 
    47 => "11011", 48 => "00100", 49 => "11011", 50 => "00100", 51 => "11101", 
    52 => "11111", 53 to 54=> "00110", 55 => "01000", 56 => "11100", 57 => "00100", 
    58 => "00110", 59 => "11011", 60 => "00001", 61 => "11011", 62 => "11111", 
    63 => "00100" );

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

entity conv3_weight_conve4X is
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

architecture arch of conv3_weight_conve4X is
    component conv3_weight_conve4X_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve4X_rom_U :  component conv3_weight_conve4X_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

