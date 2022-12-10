-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhJb_x_rom is 
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


architecture rtl of conv3_weight_convhJb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0111", 1 => "1101", 2 => "0101", 3 => "1011", 4 => "0001", 
    5 => "0010", 6 => "1011", 7 => "0001", 8 => "1100", 9 => "1010", 
    10 => "0010", 11 => "1100", 12 => "0111", 13 => "0110", 14 => "1011", 
    15 => "1101", 16 => "1000", 17 => "1100", 18 => "1000", 19 => "1101", 
    20 => "1110", 21 => "1011", 22 => "1100", 23 => "0100", 24 => "1011", 
    25 to 26=> "0001", 27 => "1011", 28 => "1110", 29 => "0001", 30 => "1011", 
    31 => "0010", 32 => "1110", 33 => "1100", 34 => "0010", 35 => "0000", 
    36 => "0001", 37 => "0110", 38 => "0101", 39 => "0011", 40 => "0010", 
    41 => "0011", 42 => "0111", 43 => "1000", 44 => "1100", 45 => "1011", 
    46 => "0010", 47 => "1111", 48 => "0111", 49 => "0001", 50 => "1111", 
    51 => "0010", 52 => "1101", 53 => "0011", 54 => "1010", 55 => "0010", 
    56 => "1101", 57 => "0001", 58 => "1010", 59 => "0010", 60 to 61=> "0011", 
    62 => "0001", 63 => "1000" );

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

entity conv3_weight_convhJb_x is
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

architecture arch of conv3_weight_convhJb_x is
    component conv3_weight_convhJb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhJb_x_rom_U :  component conv3_weight_convhJb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


