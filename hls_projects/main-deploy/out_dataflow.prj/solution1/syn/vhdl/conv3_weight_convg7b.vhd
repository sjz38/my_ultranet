-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg7b_rom is 
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


architecture rtl of conv3_weight_convg7b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 to 2=> "11000", 3 => "11010", 4 => "00001", 5 => "11100", 
    6 => "00101", 7 to 8=> "11110", 9 => "11111", 10 => "00011", 11 => "11011", 
    12 => "11100", 13 => "00001", 14 => "11001", 15 => "11111", 16 => "00000", 
    17 => "11100", 18 => "00011", 19 => "11101", 20 => "11110", 21 => "00101", 
    22 => "11011", 23 => "01000", 24 => "11111", 25 => "11010", 26 to 27=> "11001", 
    28 to 29=> "00001", 30 => "00010", 31 => "11111", 32 => "11100", 33 => "00000", 
    34 => "00010", 35 => "00101", 36 => "00000", 37 => "11000", 38 => "00001", 
    39 => "11011", 40 => "00001", 41 to 42=> "00011", 43 => "11101", 44 => "00100", 
    45 => "11001", 46 => "00000", 47 => "11001", 48 => "11101", 49 => "00110", 
    50 => "11101", 51 => "00010", 52 => "11111", 53 => "00000", 54 => "00010", 
    55 => "11011", 56 => "11101", 57 => "11110", 58 => "00000", 59 => "00001", 
    60 => "11010", 61 => "00100", 62 => "00000", 63 => "00010" );

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

entity conv3_weight_convg7b is
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

architecture arch of conv3_weight_convg7b is
    component conv3_weight_convg7b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg7b_rom_U :  component conv3_weight_convg7b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


