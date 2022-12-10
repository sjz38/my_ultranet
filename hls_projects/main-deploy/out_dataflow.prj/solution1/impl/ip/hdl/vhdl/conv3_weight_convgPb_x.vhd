-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgPb_x_rom is 
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


architecture rtl of conv3_weight_convgPb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00000", 2 => "00110", 3 to 5=> "00000", 6 => "11010", 
    7 => "11101", 8 => "11001", 9 to 10=> "11110", 11 => "11101", 12 => "11000", 
    13 => "00010", 14 => "00110", 15 => "00100", 16 => "11101", 17 => "11010", 
    18 => "00010", 19 => "11111", 20 => "00001", 21 => "11001", 22 => "00010", 
    23 => "01000", 24 => "11110", 25 => "11011", 26 => "11101", 27 => "00100", 
    28 => "11011", 29 => "00011", 30 => "11000", 31 => "00001", 32 => "11011", 
    33 => "00000", 34 => "00101", 35 to 37=> "11100", 38 => "11101", 39 => "11111", 
    40 => "00101", 41 => "00001", 42 => "00101", 43 => "11001", 44 => "01000", 
    45 => "00010", 46 => "00100", 47 => "11111", 48 => "11001", 49 => "00001", 
    50 => "00000", 51 => "00101", 52 => "11001", 53 => "11010", 54 => "11101", 
    55 => "00000", 56 => "00011", 57 to 58=> "00001", 59 => "11111", 60 => "11000", 
    61 => "11011", 62 => "00000", 63 => "00010" );

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

entity conv3_weight_convgPb_x is
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

architecture arch of conv3_weight_convgPb_x is
    component conv3_weight_convgPb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgPb_x_rom_U :  component conv3_weight_convgPb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


