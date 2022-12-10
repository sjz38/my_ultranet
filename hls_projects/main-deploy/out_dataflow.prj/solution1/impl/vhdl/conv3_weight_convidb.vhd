-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convidb_rom is 
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


architecture rtl of conv3_weight_convidb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 to 2=> "11110", 3 => "00000", 4 => "00001", 5 => "00011", 
    6 => "00010", 7 => "11101", 8 to 9=> "11111", 10 => "00010", 11 => "11110", 
    12 => "00000", 13 => "11101", 14 => "00011", 15 => "00010", 16 => "11111", 
    17 => "00100", 18 => "11011", 19 => "00000", 20 to 21=> "00010", 22 => "00011", 
    23 => "11110", 24 => "11101", 25 => "11100", 26 => "00010", 27 => "00100", 
    28 => "11111", 29 to 30=> "11110", 31 => "00010", 32 => "01000", 33 => "11010", 
    34 => "00000", 35 => "00101", 36 => "00010", 37 => "11101", 38 => "11100", 
    39 to 40=> "11111", 41 => "00110", 42 => "00001", 43 => "11010", 44 => "11110", 
    45 => "00011", 46 to 47=> "00000", 48 => "00011", 49 => "11111", 50 => "00101", 
    51 => "00100", 52 => "00010", 53 => "11101", 54 => "00011", 55 => "00010", 
    56 => "11110", 57 => "00100", 58 => "11000", 59 => "00010", 60 => "11101", 
    61 to 62=> "00001", 63 => "00010" );

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

entity conv3_weight_convidb is
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

architecture arch of conv3_weight_convidb is
    component conv3_weight_convidb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convidb_rom_U :  component conv3_weight_convidb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


