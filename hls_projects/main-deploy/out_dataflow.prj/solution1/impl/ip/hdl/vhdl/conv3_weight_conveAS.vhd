-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveAS_rom is 
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


architecture rtl of conv3_weight_conveAS_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00101", 2 => "00010", 3 => "01000", 4 => "00100", 
    5 => "00001", 6 => "00011", 7 => "11111", 8 => "00100", 9 => "00011", 
    10 => "00001", 11 => "11000", 12 => "00010", 13 => "11100", 14 => "11011", 
    15 => "11010", 16 => "00010", 17 => "00000", 18 => "00001", 19 => "11001", 
    20 => "00010", 21 => "11111", 22 => "00010", 23 => "00001", 24 to 25=> "00000", 
    26 => "00010", 27 => "00011", 28 => "11111", 29 to 31=> "11110", 32 => "00010", 
    33 => "11111", 34 => "00101", 35 => "11110", 36 => "00001", 37 => "11101", 
    38 => "11110", 39 => "00010", 40 => "11101", 41 => "00010", 42 => "00101", 
    43 => "11000", 44 => "11111", 45 => "11101", 46 => "00001", 47 => "00000", 
    48 => "00100", 49 => "00011", 50 => "11111", 51 => "01000", 52 => "00111", 
    53 => "00100", 54 => "00110", 55 => "00001", 56 => "11101", 57 => "00101", 
    58 => "11110", 59 => "11111", 60 => "00110", 61 => "11110", 62 => "11111", 
    63 => "11001" );

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

entity conv3_weight_conveAS is
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

architecture arch of conv3_weight_conveAS is
    component conv3_weight_conveAS_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveAS_rom_U :  component conv3_weight_conveAS_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


