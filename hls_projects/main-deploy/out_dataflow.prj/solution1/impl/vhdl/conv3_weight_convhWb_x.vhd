-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhWb_x_rom is 
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


architecture rtl of conv3_weight_convhWb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001", 1 => "1111", 2 => "0110", 3 => "0010", 4 => "1110", 
    5 => "1100", 6 => "1101", 7 => "0011", 8 => "1110", 9 to 10=> "1101", 
    11 => "0101", 12 => "0000", 13 => "1110", 14 => "0000", 15 => "0100", 
    16 => "0000", 17 => "1111", 18 => "0000", 19 => "0011", 20 => "0100", 
    21 => "0011", 22 => "0001", 23 => "0000", 24 => "0100", 25 => "1111", 
    26 => "0010", 27 => "1111", 28 to 29=> "0000", 30 to 31=> "1111", 32 => "0101", 
    33 => "1111", 34 => "0000", 35 => "0010", 36 to 37=> "0001", 38 => "0010", 
    39 => "0111", 40 => "0001", 41 to 42=> "0010", 43 => "1110", 44 => "0001", 
    45 => "1111", 46 => "0101", 47 => "1100", 48 => "1101", 49 => "0101", 
    50 to 51=> "0001", 52 => "0010", 53 => "1111", 54 => "0000", 55 => "1110", 
    56 to 57=> "1101", 58 => "0001", 59 => "1110", 60 => "0010", 61 => "0001", 
    62 => "0000", 63 => "1101" );

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

entity conv3_weight_convhWb_x is
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

architecture arch of conv3_weight_convhWb_x is
    component conv3_weight_convhWb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhWb_x_rom_U :  component conv3_weight_convhWb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


