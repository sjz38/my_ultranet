-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convf26_rom is 
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


architecture rtl of conv3_weight_convf26_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "11101", 2 => "11011", 3 to 4=> "11110", 5 => "00101", 
    6 => "00010", 7 => "11101", 8 => "11100", 9 => "00001", 10 => "00011", 
    11 => "11111", 12 => "11101", 13 => "11110", 14 => "00001", 15 => "11111", 
    16 => "00100", 17 to 18=> "11111", 19 => "01000", 20 => "00010", 21 => "00001", 
    22 => "00011", 23 => "11111", 24 => "11110", 25 => "00010", 26 to 27=> "11110", 
    28 => "00100", 29 => "00000", 30 => "11101", 31 => "00001", 32 => "11111", 
    33 => "11100", 34 => "11101", 35 => "00010", 36 => "00101", 37 => "11100", 
    38 => "00000", 39 => "00110", 40 => "11101", 41 => "00011", 42 => "00010", 
    43 => "00011", 44 => "11101", 45 => "00100", 46 => "00001", 47 => "00101", 
    48 => "00100", 49 => "00111", 50 => "00100", 51 => "00110", 52 => "00100", 
    53 => "01000", 54 => "11000", 55 => "00110", 56 => "11011", 57 => "00100", 
    58 => "11111", 59 to 60=> "00000", 61 => "11010", 62 => "00001", 63 => "01000" );

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

entity conv3_weight_convf26 is
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

architecture arch of conv3_weight_convf26 is
    component conv3_weight_convf26_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convf26_rom_U :  component conv3_weight_convf26_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


