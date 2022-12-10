-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveBS_rom is 
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


architecture rtl of conv3_weight_conveBS_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00001", 2 => "11111", 3 => "11110", 4 => "00000", 
    5 => "00001", 6 => "11110", 7 => "11011", 8 => "11110", 9 => "00000", 
    10 => "11101", 11 => "00101", 12 => "00011", 13 => "11101", 14 => "01000", 
    15 to 16=> "11101", 17 => "11111", 18 => "00101", 19 to 20=> "11100", 21 => "00011", 
    22 => "11111", 23 to 24=> "00000", 25 => "00011", 26 => "11101", 27 => "11111", 
    28 => "11010", 29 => "00010", 30 => "11000", 31 to 32=> "11111", 33 => "00001", 
    34 => "11110", 35 => "00010", 36 => "11100", 37 => "11110", 38 => "00000", 
    39 => "11111", 40 => "11101", 41 => "11100", 42 => "11111", 43 => "11000", 
    44 => "11111", 45 => "11100", 46 => "00101", 47 => "11010", 48 => "00001", 
    49 => "00111", 50 => "11111", 51 => "00010", 52 => "11011", 53 => "00101", 
    54 => "11100", 55 => "00001", 56 => "00010", 57 => "11101", 58 => "00001", 
    59 => "00010", 60 to 61=> "11101", 62 => "00001", 63 => "11110" );

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

entity conv3_weight_conveBS is
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

architecture arch of conv3_weight_conveBS is
    component conv3_weight_conveBS_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveBS_rom_U :  component conv3_weight_conveBS_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


