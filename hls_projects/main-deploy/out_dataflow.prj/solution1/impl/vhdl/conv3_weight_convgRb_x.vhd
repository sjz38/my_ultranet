-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgRb_x_rom is 
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


architecture rtl of conv3_weight_convgRb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111", 1 => "1110", 2 => "1101", 3 => "1100", 4 to 6=> "0011", 
    7 => "1101", 8 to 9=> "0101", 10 => "1101", 11 => "0010", 12 => "1110", 
    13 => "0011", 14 => "1110", 15 => "0010", 16 => "0101", 17 => "1101", 
    18 => "1011", 19 => "1000", 20 => "1111", 21 => "0010", 22 => "0101", 
    23 => "1000", 24 => "1100", 25 => "0111", 26 => "0010", 27 => "1110", 
    28 => "1011", 29 => "1000", 30 => "0010", 31 => "0001", 32 => "1101", 
    33 => "1111", 34 => "0101", 35 => "1101", 36 => "1001", 37 => "0000", 
    38 => "1110", 39 to 40=> "0100", 41 => "0000", 42 => "0001", 43 to 44=> "1110", 
    45 => "0100", 46 => "0010", 47 => "0101", 48 => "0000", 49 => "0001", 
    50 => "1101", 51 => "1110", 52 => "0001", 53 => "1000", 54 => "0100", 
    55 to 56=> "0011", 57 => "1101", 58 => "0010", 59 => "1000", 60 => "1100", 
    61 => "0001", 62 to 63=> "0000" );

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

entity conv3_weight_convgRb_x is
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

architecture arch of conv3_weight_convgRb_x is
    component conv3_weight_convgRb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgRb_x_rom_U :  component conv3_weight_convgRb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


