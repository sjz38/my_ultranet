-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg9b_rom is 
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


architecture rtl of conv3_weight_convg9b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "01000", 2 => "11101", 3 => "00101", 4 to 5=> "00111", 
    6 => "11110", 7 => "11101", 8 => "11110", 9 => "11111", 10 => "11100", 
    11 => "00110", 12 to 13=> "00001", 14 => "11000", 15 => "11001", 16 => "11100", 
    17 => "01000", 18 => "00011", 19 => "01000", 20 => "00000", 21 => "00010", 
    22 => "00011", 23 => "11000", 24 => "11100", 25 => "00101", 26 => "11110", 
    27 => "00001", 28 => "00000", 29 => "11011", 30 => "11001", 31 => "11011", 
    32 => "00001", 33 => "11000", 34 => "00101", 35 => "11011", 36 => "11000", 
    37 => "11111", 38 => "00011", 39 => "00001", 40 => "00010", 41 => "00101", 
    42 => "01000", 43 => "11111", 44 => "11100", 45 => "01000", 46 => "11111", 
    47 => "11011", 48 => "00010", 49 => "11101", 50 => "11001", 51 => "11000", 
    52 => "11110", 53 => "00110", 54 => "00001", 55 => "11010", 56 => "01000", 
    57 => "11010", 58 => "00001", 59 to 60=> "01000", 61 => "11110", 62 to 63=> "00001" );

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

entity conv3_weight_convg9b is
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

architecture arch of conv3_weight_convg9b is
    component conv3_weight_convg9b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg9b_rom_U :  component conv3_weight_convg9b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


