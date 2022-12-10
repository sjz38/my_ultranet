-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviab_rom is 
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


architecture rtl of conv3_weight_conviab_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00000", 2 => "11111", 3 => "00101", 4 => "11111", 
    5 => "01000", 6 => "11111", 7 => "11110", 8 => "00000", 9 => "00101", 
    10 => "11011", 11 => "00001", 12 => "00000", 13 => "00011", 14 => "00010", 
    15 => "11101", 16 => "00100", 17 => "11110", 18 => "11101", 19 => "11011", 
    20 => "11001", 21 => "00000", 22 => "00010", 23 => "00001", 24 => "00011", 
    25 => "00100", 26 => "11001", 27 => "00101", 28 to 29=> "00001", 30 => "11101", 
    31 => "00010", 32 => "11101", 33 to 34=> "00010", 35 => "00011", 36 => "11010", 
    37 => "00000", 38 => "00001", 39 => "00100", 40 => "11100", 41 => "00011", 
    42 => "11110", 43 => "11111", 44 => "11110", 45 => "11111", 46 => "11101", 
    47 to 48=> "00011", 49 => "00010", 50 => "11101", 51 => "00000", 52 => "11111", 
    53 => "00011", 54 => "00010", 55 => "11000", 56 => "00010", 57 => "00110", 
    58 => "00010", 59 => "00100", 60 => "00010", 61 => "11111", 62 => "00001", 
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

entity conv3_weight_conviab is
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

architecture arch of conv3_weight_conviab is
    component conv3_weight_conviab_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviab_rom_U :  component conv3_weight_conviab_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


