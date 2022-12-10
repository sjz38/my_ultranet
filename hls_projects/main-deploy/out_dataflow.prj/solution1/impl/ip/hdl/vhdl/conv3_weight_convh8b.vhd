-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh8b_rom is 
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


architecture rtl of conv3_weight_convh8b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11001", 2 => "11110", 3 => "00000", 4 => "00010", 
    5 => "00000", 6 => "11101", 7 => "00011", 8 => "00010", 9 => "00110", 
    10 => "00001", 11 => "11111", 12 => "00001", 13 => "11111", 14 => "00001", 
    15 => "00100", 16 => "00110", 17 => "11101", 18 to 19=> "00100", 20 => "00101", 
    21 => "00010", 22 => "00000", 23 => "11011", 24 => "00011", 25 => "00000", 
    26 to 27=> "11100", 28 => "00100", 29 => "11110", 30 => "00011", 31 to 32=> "11110", 
    33 => "11111", 34 => "00000", 35 => "00001", 36 => "01000", 37 => "11100", 
    38 => "11011", 39 => "11110", 40 => "00011", 41 => "00000", 42 => "00011", 
    43 => "11111", 44 => "00111", 45 => "00011", 46 => "11000", 47 => "11011", 
    48 => "00001", 49 => "00101", 50 => "00011", 51 => "00101", 52 => "11101", 
    53 => "11000", 54 => "00101", 55 => "11011", 56 => "00000", 57 => "00101", 
    58 => "00001", 59 => "11011", 60 => "11110", 61 => "00001", 62 => "11111", 
    63 => "00110" );

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

entity conv3_weight_convh8b is
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

architecture arch of conv3_weight_convh8b is
    component conv3_weight_convh8b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh8b_rom_U :  component conv3_weight_convh8b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


