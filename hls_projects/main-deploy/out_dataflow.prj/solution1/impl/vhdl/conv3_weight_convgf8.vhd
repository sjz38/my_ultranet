-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgf8_rom is 
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


architecture rtl of conv3_weight_convgf8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "11001", 2 => "11101", 3 => "11000", 4 => "11110", 
    5 => "11101", 6 to 7=> "00010", 8 => "00011", 9 => "00010", 10 => "11101", 
    11 => "00001", 12 => "00000", 13 => "11011", 14 => "11010", 15 => "00010", 
    16 => "11110", 17 to 18=> "11111", 19 to 20=> "11101", 21 => "11111", 22 => "11011", 
    23 => "00100", 24 => "00001", 25 => "00011", 26 => "11011", 27 => "11111", 
    28 => "00000", 29 => "00001", 30 => "00010", 31 to 32=> "00011", 33 => "00000", 
    34 => "11110", 35 => "11111", 36 => "00010", 37 => "00100", 38 => "00011", 
    39 => "11100", 40 => "00100", 41 => "00110", 42 => "00011", 43 => "11011", 
    44 => "11100", 45 => "11111", 46 => "11100", 47 => "00010", 48 => "11110", 
    49 => "00101", 50 => "01000", 51 => "00000", 52 => "11100", 53 => "00001", 
    54 => "00000", 55 => "11010", 56 => "00001", 57 => "11111", 58 => "00001", 
    59 => "00010", 60 => "00001", 61 to 62=> "11111", 63 => "00001" );

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

entity conv3_weight_convgf8 is
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

architecture arch of conv3_weight_convgf8 is
    component conv3_weight_convgf8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgf8_rom_U :  component conv3_weight_convgf8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


