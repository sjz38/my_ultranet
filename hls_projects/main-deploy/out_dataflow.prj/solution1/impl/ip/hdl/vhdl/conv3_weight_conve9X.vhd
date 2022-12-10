-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve9X_rom is 
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


architecture rtl of conv3_weight_conve9X_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "00001", 2 => "11000", 3 => "00101", 4 => "11010", 
    5 => "00101", 6 => "11011", 7 => "11001", 8 => "11111", 9 => "11100", 
    10 => "11011", 11 => "11111", 12 => "00100", 13 => "00010", 14 => "00001", 
    15 => "11110", 16 => "00111", 17 => "11111", 18 => "11011", 19 => "00011", 
    20 => "11110", 21 => "11101", 22 => "00101", 23 => "11010", 24 => "11000", 
    25 => "11110", 26 => "11100", 27 to 28=> "00011", 29 => "11010", 30 to 31=> "11100", 
    32 => "11000", 33 => "11111", 34 => "11100", 35 => "00101", 36 => "00011", 
    37 => "11110", 38 => "11000", 39 => "11110", 40 => "00000", 41 => "00110", 
    42 => "00001", 43 => "11111", 44 => "00001", 45 => "11000", 46 => "00100", 
    47 => "11010", 48 => "11111", 49 => "00101", 50 => "11111", 51 => "11010", 
    52 => "00010", 53 => "11011", 54 to 55=> "11110", 56 => "11001", 57 => "11000", 
    58 => "00010", 59 => "11101", 60 => "01000", 61 => "00001", 62 => "00000", 
    63 => "11100" );

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

entity conv3_weight_conve9X is
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

architecture arch of conv3_weight_conve9X is
    component conv3_weight_conve9X_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve9X_rom_U :  component conv3_weight_conve9X_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


