-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhgb_rom is 
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


architecture rtl of conv3_weight_convhgb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11110", 2 => "00000", 3 => "11101", 4 => "00011", 
    5 => "11101", 6 => "00010", 7 => "11101", 8 to 9=> "11100", 10 => "11111", 
    11 => "11110", 12 => "11111", 13 => "00000", 14 => "00010", 15 => "11111", 
    16 => "00000", 17 => "00010", 18 => "11101", 19 => "00011", 20 => "00000", 
    21 => "11001", 22 => "00010", 23 => "00000", 24 => "00011", 25 => "11110", 
    26 => "11100", 27 => "00011", 28 => "11100", 29 to 30=> "00001", 31 to 32=> "11111", 
    33 => "11010", 34 => "00001", 35 => "00100", 36 => "01000", 37 => "00000", 
    38 => "11101", 39 => "01000", 40 => "00000", 41 => "00100", 42 => "11000", 
    43 => "11110", 44 => "00100", 45 => "11111", 46 => "00001", 47 => "11011", 
    48 => "11101", 49 => "11110", 50 => "00001", 51 => "00010", 52 => "11100", 
    53 => "00011", 54 => "01000", 55 => "11100", 56 => "00010", 57 => "11100", 
    58 => "11110", 59 to 60=> "00001", 61 => "11011", 62 => "00001", 63 => "11111" );

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

entity conv3_weight_convhgb is
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

architecture arch of conv3_weight_convhgb is
    component conv3_weight_convhgb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhgb_rom_U :  component conv3_weight_convhgb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


