-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviPb_x_rom is 
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


architecture rtl of conv3_weight_conviPb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "11010", 2 to 4=> "00011", 5 => "00010", 6 => "11101", 
    7 => "00001", 8 => "11000", 9 => "00000", 10 => "11111", 11 => "00100", 
    12 => "01000", 13 => "00110", 14 => "11110", 15 => "00100", 16 => "11111", 
    17 => "00011", 18 => "11011", 19 to 20=> "11101", 21 => "00101", 22 => "00010", 
    23 => "11011", 24 => "11110", 25 => "00100", 26 => "00000", 27 => "11101", 
    28 => "11111", 29 => "00110", 30 => "11101", 31 => "00011", 32 to 33=> "00100", 
    34 => "00001", 35 => "00100", 36 => "00111", 37 => "00001", 38 => "00011", 
    39 => "01000", 40 => "00100", 41 => "11110", 42 to 43=> "11101", 44 => "11000", 
    45 => "11011", 46 => "00100", 47 => "11101", 48 => "00010", 49 => "00100", 
    50 => "00110", 51 => "00000", 52 => "11101", 53 => "00010", 54 => "00111", 
    55 => "00010", 56 => "11110", 57 => "11101", 58 to 59=> "11011", 60 to 61=> "00010", 
    62 => "00000", 63 => "00001" );

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

entity conv3_weight_conviPb_x is
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

architecture arch of conv3_weight_conviPb_x is
    component conv3_weight_conviPb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviPb_x_rom_U :  component conv3_weight_conviPb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


