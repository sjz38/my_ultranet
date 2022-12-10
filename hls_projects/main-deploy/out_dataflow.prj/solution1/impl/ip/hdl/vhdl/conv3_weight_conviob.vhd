-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviob_rom is 
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


architecture rtl of conv3_weight_conviob_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11000", 2 => "00010", 3 => "11110", 4 => "00010", 
    5 to 6=> "00000", 7 => "11011", 8 => "11111", 9 => "00011", 10 => "00001", 
    11 => "00000", 12 => "00010", 13 => "01000", 14 => "11100", 15 => "01000", 
    16 => "11111", 17 => "00010", 18 => "00101", 19 => "00001", 20 => "00100", 
    21 => "00010", 22 => "11010", 23 => "00010", 24 to 25=> "11100", 26 => "00010", 
    27 => "00101", 28 => "00010", 29 => "01000", 30 => "11101", 31 => "00100", 
    32 => "00010", 33 => "00101", 34 => "00011", 35 => "00101", 36 => "00000", 
    37 => "00001", 38 => "01000", 39 => "11110", 40 => "00011", 41 => "11110", 
    42 => "11011", 43 => "11111", 44 => "00110", 45 => "00001", 46 => "00110", 
    47 => "00000", 48 => "11010", 49 => "11011", 50 => "00100", 51 to 52=> "00001", 
    53 => "11010", 54 => "11001", 55 => "00011", 56 => "11111", 57 => "00110", 
    58 => "00001", 59 to 60=> "11111", 61 => "00000", 62 => "11111", 63 => "00000" );

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

entity conv3_weight_conviob is
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

architecture arch of conv3_weight_conviob is
    component conv3_weight_conviob_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviob_rom_U :  component conv3_weight_conviob_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


