-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveYW_rom is 
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


architecture rtl of conv3_weight_conveYW_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 to 2=> "00000", 3 => "11001", 4 => "11110", 5 to 6=> "00011", 
    7 => "11110", 8 => "11101", 9 => "01000", 10 => "11011", 11 => "11000", 
    12 => "11101", 13 => "00001", 14 => "11111", 15 => "11011", 16 => "11000", 
    17 => "00011", 18 => "01000", 19 => "11001", 20 => "11000", 21 => "11101", 
    22 to 23=> "00101", 24 => "00110", 25 => "11100", 26 => "11010", 27 => "00001", 
    28 => "00011", 29 => "00001", 30 => "11101", 31 => "11110", 32 => "00110", 
    33 => "11101", 34 => "11100", 35 => "11000", 36 => "11001", 37 => "00010", 
    38 to 39=> "00110", 40 => "00010", 41 => "11001", 42 => "11111", 43 => "11101", 
    44 to 45=> "11000", 46 => "00111", 47 => "00011", 48 => "00100", 49 to 50=> "11111", 
    51 => "01000", 52 => "00010", 53 => "01000", 54 to 55=> "11111", 56 => "00000", 
    57 => "00101", 58 => "01000", 59 => "00010", 60 => "11010", 61 => "11000", 
    62 => "00000", 63 => "00011" );

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

entity conv3_weight_conveYW is
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

architecture arch of conv3_weight_conveYW is
    component conv3_weight_conveYW_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveYW_rom_U :  component conv3_weight_conveYW_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


