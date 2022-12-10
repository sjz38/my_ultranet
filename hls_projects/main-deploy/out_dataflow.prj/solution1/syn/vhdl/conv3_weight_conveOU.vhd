-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveOU_rom is 
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


architecture rtl of conv3_weight_conveOU_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "11111", 2 => "11011", 3 => "00110", 4 => "00111", 
    5 => "11010", 6 => "00001", 7 => "11110", 8 => "01000", 9 => "00010", 
    10 => "00101", 11 => "11010", 12 => "11100", 13 => "11101", 14 => "00011", 
    15 => "11110", 16 => "00110", 17 => "01000", 18 => "11000", 19 => "00100", 
    20 => "11100", 21 => "00110", 22 => "11110", 23 => "00000", 24 => "01000", 
    25 to 26=> "00000", 27 => "11111", 28 => "00001", 29 => "00110", 30 => "00010", 
    31 => "00001", 32 => "11111", 33 => "11110", 34 => "00100", 35 => "11101", 
    36 => "11000", 37 => "00010", 38 => "00011", 39 => "00101", 40 => "00001", 
    41 => "11101", 42 => "00110", 43 => "11111", 44 => "00001", 45 => "00000", 
    46 => "00110", 47 => "11111", 48 to 49=> "00000", 50 => "00010", 51 => "00101", 
    52 => "00100", 53 => "00010", 54 => "11111", 55 => "11000", 56 => "00010", 
    57 => "01000", 58 => "00001", 59 => "11011", 60 => "01000", 61 => "11000", 
    62 => "00001", 63 => "11101" );

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

entity conv3_weight_conveOU is
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

architecture arch of conv3_weight_conveOU is
    component conv3_weight_conveOU_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveOU_rom_U :  component conv3_weight_conveOU_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


