-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhZb_x_rom is 
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


architecture rtl of conv3_weight_convhZb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0100", 1 => "1111", 2 => "0011", 3 => "0001", 4 => "0010", 
    5 => "1000", 6 => "1110", 7 => "1101", 8 to 9=> "1110", 10 => "1111", 
    11 => "0001", 12 => "1101", 13 => "0000", 14 => "0100", 15 to 16=> "1101", 
    17 => "0111", 18 => "0010", 19 => "0100", 20 => "0000", 21 => "1110", 
    22 => "0001", 23 => "0011", 24 => "1111", 25 => "1110", 26 => "0001", 
    27 => "0000", 28 => "1111", 29 => "1100", 30 => "1110", 31 => "0001", 
    32 => "0000", 33 => "0010", 34 to 35=> "0000", 36 => "1011", 37 => "1111", 
    38 => "0011", 39 => "0010", 40 to 42=> "0000", 43 => "1001", 44 => "0000", 
    45 => "1111", 46 => "0011", 47 => "1101", 48 => "1110", 49 => "0001", 
    50 => "1011", 51 => "1111", 52 => "0100", 53 => "1110", 54 => "1011", 
    55 => "0010", 56 => "1110", 57 => "1101", 58 => "1110", 59 => "0000", 
    60 => "1111", 61 => "0001", 62 => "0000", 63 => "1100" );

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

entity conv3_weight_convhZb_x is
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

architecture arch of conv3_weight_convhZb_x is
    component conv3_weight_convhZb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhZb_x_rom_U :  component conv3_weight_convhZb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


