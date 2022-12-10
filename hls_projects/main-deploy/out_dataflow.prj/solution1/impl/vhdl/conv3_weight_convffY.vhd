-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convffY_rom is 
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


architecture rtl of conv3_weight_convffY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00011", 2 => "00100", 3 => "00001", 4 => "11100", 
    5 => "11000", 6 => "00100", 7 => "11100", 8 => "01000", 9 => "11101", 
    10 => "00101", 11 => "11111", 12 => "00001", 13 => "11110", 14 => "00001", 
    15 => "11100", 16 => "11000", 17 => "00110", 18 => "00010", 19 => "11111", 
    20 => "00101", 21 to 22=> "11111", 23 => "00110", 24 => "11010", 25 => "00001", 
    26 => "00100", 27 => "11011", 28 => "11111", 29 => "11001", 30 => "11111", 
    31 => "00000", 32 => "11110", 33 => "11100", 34 => "00101", 35 => "11110", 
    36 => "00111", 37 => "00110", 38 => "11101", 39 to 40=> "00011", 41 => "11000", 
    42 => "00101", 43 => "00000", 44 => "00010", 45 => "11000", 46 => "11110", 
    47 => "00010", 48 to 49=> "11110", 50 => "00000", 51 => "00100", 52 => "00011", 
    53 => "11001", 54 => "11100", 55 => "11101", 56 => "11100", 57 => "11010", 
    58 => "00110", 59 => "11101", 60 => "11001", 61 => "11100", 62 => "11111", 
    63 => "00010" );

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

entity conv3_weight_convffY is
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

architecture arch of conv3_weight_convffY is
    component conv3_weight_convffY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convffY_rom_U :  component conv3_weight_convffY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


