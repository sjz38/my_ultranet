-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convieb_rom is 
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


architecture rtl of conv3_weight_convieb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "11000", 2 => "11111", 3 => "00010", 4 to 5=> "11111", 
    6 => "00011", 7 => "11100", 8 => "00001", 9 => "11110", 10 => "11111", 
    11 => "00011", 12 => "11111", 13 => "11110", 14 => "11111", 15 to 16=> "00011", 
    17 => "00000", 18 => "11111", 19 => "11101", 20 => "00011", 21 => "11110", 
    22 => "11101", 23 => "00100", 24 => "00001", 25 => "11101", 26 => "00001", 
    27 => "00011", 28 to 29=> "00001", 30 => "11110", 31 => "00010", 32 => "01000", 
    33 => "11100", 34 => "00000", 35 => "00100", 36 to 37=> "00010", 38 => "00011", 
    39 => "01000", 40 => "00011", 41 => "00101", 42 => "11110", 43 => "11011", 
    44 => "00010", 45 => "00001", 46 => "00110", 47 => "11011", 48 => "11101", 
    49 => "00011", 50 => "00100", 51 to 52=> "11111", 53 => "00010", 54 => "11100", 
    55 => "11101", 56 => "11110", 57 => "11111", 58 => "11011", 59 => "11110", 
    60 => "00001", 61 => "00011", 62 => "11111", 63 => "11101" );

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

entity conv3_weight_convieb is
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

architecture arch of conv3_weight_convieb is
    component conv3_weight_convieb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convieb_rom_U :  component conv3_weight_convieb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

