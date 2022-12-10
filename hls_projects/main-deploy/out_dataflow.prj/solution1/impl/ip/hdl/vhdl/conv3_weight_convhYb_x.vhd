-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhYb_x_rom is 
    generic(
             DWIDTH     : integer := 4; 
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


architecture rtl of conv3_weight_convhYb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011", 1 => "1010", 2 => "1101", 3 => "1110", 4 => "1111", 
    5 => "0111", 6 to 7=> "1111", 8 => "0010", 9 => "0001", 10 to 11=> "1110", 
    12 => "0010", 13 => "0100", 14 => "0000", 15 => "1110", 16 => "1111", 
    17 => "1110", 18 => "0100", 19 => "0010", 20 => "0001", 21 => "0011", 
    22 => "0010", 23 => "1011", 24 => "1101", 25 => "0001", 26 => "1101", 
    27 => "0010", 28 => "0011", 29 => "1100", 30 => "0010", 31 => "1110", 
    32 => "0001", 33 => "0011", 34 => "1110", 35 => "0001", 36 => "1101", 
    37 to 38=> "1100", 39 => "1110", 40 => "1111", 41 => "0101", 42 => "0001", 
    43 => "1101", 44 to 45=> "1111", 46 => "0000", 47 => "1101", 48 => "0101", 
    49 => "1111", 50 => "0010", 51 => "0011", 52 to 53=> "0000", 54 => "1010", 
    55 => "0000", 56 => "1110", 57 => "1101", 58 => "1011", 59 => "0001", 
    60 => "1111", 61 => "1011", 62 => "1111", 63 => "0011" );

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

entity conv3_weight_convhYb_x is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convhYb_x is
    component conv3_weight_convhYb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhYb_x_rom_U :  component conv3_weight_convhYb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


