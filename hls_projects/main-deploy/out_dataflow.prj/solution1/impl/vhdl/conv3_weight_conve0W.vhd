-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve0W_rom is 
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


architecture rtl of conv3_weight_conve0W_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00111", 2 => "00000", 3 to 4=> "00101", 5 => "11110", 
    6 => "11111", 7 => "00000", 8 => "00010", 9 => "00100", 10 => "00111", 
    11 to 12=> "00001", 13 => "00011", 14 => "00110", 15 => "11111", 16 => "00001", 
    17 => "11001", 18 => "00001", 19 => "00010", 20 => "00100", 21 => "00001", 
    22 => "11010", 23 => "11011", 24 => "11111", 25 => "00001", 26 => "11100", 
    27 => "00100", 28 => "00010", 29 => "11001", 30 => "00000", 31 => "00001", 
    32 => "01000", 33 => "00011", 34 => "11110", 35 => "11111", 36 => "00001", 
    37 => "11110", 38 => "00100", 39 => "11100", 40 => "00101", 41 => "00011", 
    42 => "00100", 43 => "11111", 44 => "00100", 45 => "00011", 46 => "00101", 
    47 => "00010", 48 => "00001", 49 => "11010", 50 => "00100", 51 => "11001", 
    52 => "01000", 53 => "00001", 54 => "11110", 55 => "00001", 56 => "11100", 
    57 => "00011", 58 => "11101", 59 => "11010", 60 => "00100", 61 => "11101", 
    62 => "11111", 63 => "00010" );

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

entity conv3_weight_conve0W is
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

architecture arch of conv3_weight_conve0W is
    component conv3_weight_conve0W_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve0W_rom_U :  component conv3_weight_conve0W_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


