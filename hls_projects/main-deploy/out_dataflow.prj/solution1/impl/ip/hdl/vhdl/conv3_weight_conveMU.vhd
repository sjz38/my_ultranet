-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveMU_rom is 
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


architecture rtl of conv3_weight_conveMU_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11101", 2 => "11110", 3 => "01000", 4 => "11100", 
    5 => "00111", 6 => "00100", 7 => "00011", 8 => "11000", 9 => "00000", 
    10 => "00111", 11 to 12=> "00100", 13 => "11111", 14 => "11100", 15 => "11111", 
    16 => "11001", 17 => "00000", 18 => "00111", 19 => "00100", 20 => "11110", 
    21 => "00111", 22 to 24=> "11111", 25 => "00010", 26 to 27=> "00001", 28 => "00101", 
    29 => "00010", 30 => "11101", 31 => "00100", 32 => "11001", 33 => "11110", 
    34 => "00001", 35 => "11101", 36 => "11000", 37 => "00011", 38 => "00000", 
    39 => "00010", 40 => "00111", 41 => "00000", 42 => "00100", 43 => "00000", 
    44 => "00001", 45 => "11100", 46 => "00001", 47 => "11110", 48 => "00010", 
    49 => "11101", 50 to 51=> "11111", 52 => "11011", 53 => "00101", 54 => "00111", 
    55 => "11111", 56 => "11000", 57 => "01000", 58 => "11101", 59 => "00000", 
    60 => "00010", 61 => "11000", 62 => "00000", 63 => "00100" );

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

entity conv3_weight_conveMU is
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

architecture arch of conv3_weight_conveMU is
    component conv3_weight_conveMU_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveMU_rom_U :  component conv3_weight_conveMU_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


