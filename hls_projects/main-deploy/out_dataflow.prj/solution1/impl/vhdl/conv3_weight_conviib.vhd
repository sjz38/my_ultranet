-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviib_rom is 
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


architecture rtl of conv3_weight_conviib_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00011", 2 => "00001", 3 to 4=> "11110", 5 => "11001", 
    6 => "00010", 7 => "11000", 8 => "00101", 9 => "11101", 10 => "00100", 
    11 => "11110", 12 => "00101", 13 => "11101", 14 => "00011", 15 => "11010", 
    16 => "11110", 17 => "00110", 18 => "00001", 19 => "11001", 20 => "11100", 
    21 => "11111", 22 => "11110", 23 => "00111", 24 => "11101", 25 => "11100", 
    26 => "00011", 27 => "00110", 28 to 30=> "00100", 31 => "00000", 32 => "00111", 
    33 => "00000", 34 => "11100", 35 => "11111", 36 => "00001", 37 => "00110", 
    38 => "00111", 39 => "11100", 40 => "00011", 41 => "11111", 42 => "00011", 
    43 => "00111", 44 => "00010", 45 => "00100", 46 => "01000", 47 => "11000", 
    48 => "00001", 49 => "11100", 50 => "11000", 51 => "11111", 52 to 53=> "00010", 
    54 => "11010", 55 => "00000", 56 => "00010", 57 => "11111", 58 => "11110", 
    59 => "11111", 60 => "00001", 61 to 62=> "11111", 63 => "11110" );

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

entity conv3_weight_conviib is
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

architecture arch of conv3_weight_conviib is
    component conv3_weight_conviib_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviib_rom_U :  component conv3_weight_conviib_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


