-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviHb_x_rom is 
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


architecture rtl of conv3_weight_conviHb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "11010", 2 => "00100", 3 => "00010", 4 => "00001", 
    5 => "11110", 6 => "11111", 7 => "00100", 8 => "11100", 9 => "01000", 
    10 => "00100", 11 => "00001", 12 => "11110", 13 => "01000", 14 => "11110", 
    15 => "11000", 16 => "00010", 17 => "11100", 18 => "01000", 19 => "00011", 
    20 => "00001", 21 => "11100", 22 => "00000", 23 => "11101", 24 => "00000", 
    25 => "11011", 26 => "11110", 27 => "01000", 28 => "00011", 29 => "11100", 
    30 to 31=> "11111", 32 => "11100", 33 => "11110", 34 => "00100", 35 => "11011", 
    36 => "00100", 37 => "00000", 38 => "00010", 39 => "11100", 40 => "00010", 
    41 => "11011", 42 => "00101", 43 => "00000", 44 => "11110", 45 => "00001", 
    46 => "11100", 47 => "00111", 48 to 49=> "11110", 50 => "00000", 51 => "11111", 
    52 => "11110", 53 => "00010", 54 => "00001", 55 => "00010", 56 => "00100", 
    57 => "00010", 58 to 59=> "00001", 60 => "00011", 61 => "11010", 62 => "00000", 
    63 => "00111" );

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

entity conv3_weight_conviHb_x is
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

architecture arch of conv3_weight_conviHb_x is
    component conv3_weight_conviHb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviHb_x_rom_U :  component conv3_weight_conviHb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


