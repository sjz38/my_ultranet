-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhTb_x_rom is 
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


architecture rtl of conv3_weight_convhTb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "0001", 2 => "0100", 3 to 4=> "1110", 5 => "0001", 
    6 => "1111", 7 => "0001", 8 => "1111", 9 => "1110", 10 => "1111", 
    11 => "1011", 12 => "0010", 13 to 14=> "1101", 15 => "0001", 16 => "0110", 
    17 => "1111", 18 => "0011", 19 to 20=> "1101", 21 to 22=> "0001", 23 => "1101", 
    24 => "0011", 25 => "1111", 26 => "0101", 27 to 28=> "0000", 29 to 30=> "1111", 
    31 => "0001", 32 to 34=> "0011", 35 => "0000", 36 => "1111", 37 => "0000", 
    38 => "0100", 39 => "1001", 40 to 41=> "0001", 42 => "0000", 43 => "1111", 
    44 => "0011", 45 => "1111", 46 => "0100", 47 => "0010", 48 => "0001", 
    49 => "0010", 50 => "0001", 51 => "1110", 52 => "1101", 53 => "1110", 
    54 => "0100", 55 to 56=> "1111", 57 => "0000", 58 => "1111", 59 => "1110", 
    60 => "0111", 61 => "0000", 62 => "0001", 63 => "1101" );

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

entity conv3_weight_convhTb_x is
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

architecture arch of conv3_weight_convhTb_x is
    component conv3_weight_convhTb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhTb_x_rom_U :  component conv3_weight_convhTb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


