-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveDS_rom is 
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


architecture rtl of conv3_weight_conveDS_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "11011", 2 => "00100", 3 => "11111", 4 => "11100", 
    5 => "11110", 6 => "11100", 7 => "00011", 8 => "00101", 9 => "00110", 
    10 => "11100", 11 => "00000", 12 => "11110", 13 => "00110", 14 => "01000", 
    15 => "11011", 16 to 17=> "11101", 18 => "00001", 19 => "11110", 20 => "00001", 
    21 => "11101", 22 => "00100", 23 => "11101", 24 => "00111", 25 => "00101", 
    26 => "11101", 27 => "00110", 28 => "11101", 29 to 30=> "11110", 31 => "00001", 
    32 => "00000", 33 => "00001", 34 => "00100", 35 => "11100", 36 => "11111", 
    37 to 38=> "00000", 39 to 40=> "11011", 41 => "11101", 42 => "00011", 43 => "11001", 
    44 => "00011", 45 => "11110", 46 => "00010", 47 => "11010", 48 => "00010", 
    49 => "11101", 50 => "00001", 51 => "11100", 52 to 53=> "00010", 54 => "11101", 
    55 => "00101", 56 => "00001", 57 => "00100", 58 => "11101", 59 => "00010", 
    60 => "11110", 61 => "00010", 62 => "11111", 63 => "11101" );

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

entity conv3_weight_conveDS is
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

architecture arch of conv3_weight_conveDS is
    component conv3_weight_conveDS_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveDS_rom_U :  component conv3_weight_conveDS_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


