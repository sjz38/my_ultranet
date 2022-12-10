-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhVb_x_rom is 
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


architecture rtl of conv3_weight_convhVb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 => "0100", 2 => "1110", 3 => "0100", 4 => "0001", 
    5 => "0100", 6 => "0001", 7 => "1100", 8 to 9=> "1101", 10 => "1110", 
    11 => "1010", 12 => "1111", 13 => "1011", 14 => "0010", 15 => "1111", 
    16 => "0000", 17 => "0001", 18 => "1110", 19 => "0000", 20 => "0010", 
    21 to 22=> "1111", 23 => "0000", 24 => "1100", 25 => "1101", 26 => "0011", 
    27 => "0001", 28 => "0010", 29 => "0100", 30 => "0000", 31 => "1111", 
    32 => "0001", 33 => "0010", 34 => "1011", 35 => "1111", 36 => "0001", 
    37 => "0000", 38 to 39=> "1111", 40 => "1011", 41 => "0010", 42 => "0001", 
    43 => "1011", 44 => "0001", 45 => "0110", 46 => "1110", 47 => "0010", 
    48 => "1111", 49 => "0000", 50 => "1110", 51 => "0010", 52 => "1100", 
    53 to 54=> "0010", 55 => "0000", 56 to 57=> "1110", 58 => "0010", 59 => "1101", 
    60 => "1011", 61 => "1111", 62 to 63=> "0001" );

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

entity conv3_weight_convhVb_x is
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

architecture arch of conv3_weight_convhVb_x is
    component conv3_weight_convhVb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhVb_x_rom_U :  component conv3_weight_convhVb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


