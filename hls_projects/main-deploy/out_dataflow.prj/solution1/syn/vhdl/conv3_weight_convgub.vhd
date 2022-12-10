-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgub_rom is 
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


architecture rtl of conv3_weight_convgub_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00011", 2 => "11111", 3 => "00010", 4 => "11100", 5 => "11000", 
    6 => "00000", 7 => "00011", 8 => "00110", 9 => "00001", 10 => "11000", 
    11 => "11001", 12 => "11100", 13 => "11000", 14 => "00000", 15 => "00101", 
    16 => "00100", 17 => "11110", 18 to 19=> "00001", 20 => "00110", 21 => "11010", 
    22 => "11100", 23 to 24=> "00000", 25 => "00100", 26 => "11010", 27 => "11011", 
    28 => "00011", 29 => "11110", 30 => "01000", 31 => "11111", 32 to 33=> "11101", 
    34 => "00001", 35 => "11100", 36 => "11000", 37 => "11110", 38 => "00001", 
    39 => "00100", 40 => "11100", 41 => "11101", 42 => "11111", 43 => "11011", 
    44 => "11111", 45 => "11001", 46 => "00001", 47 => "11001", 48 => "00000", 
    49 => "00100", 50 => "11110", 51 => "00010", 52 => "01000", 53 => "11011", 
    54 => "00010", 55 => "11111", 56 => "00000", 57 => "11100", 58 => "00011", 
    59 => "00101", 60 => "11111", 61 => "00100", 62 => "00001", 63 => "00010" );

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

entity conv3_weight_convgub is
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

architecture arch of conv3_weight_convgub is
    component conv3_weight_convgub_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgub_rom_U :  component conv3_weight_convgub_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


