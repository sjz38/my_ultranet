-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveXV_rom is 
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


architecture rtl of conv3_weight_conveXV_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "11011", 2 => "11010", 3 to 5=> "11000", 6 => "00010", 
    7 => "11001", 8 => "00011", 9 => "00010", 10 => "00110", 11 => "00010", 
    12 => "00001", 13 => "11110", 14 => "11100", 15 => "00010", 16 => "11101", 
    17 => "01000", 18 => "00100", 19 => "11001", 20 => "11000", 21 => "11101", 
    22 => "11000", 23 to 24=> "01000", 25 => "11001", 26 => "00001", 27 => "00110", 
    28 => "11111", 29 => "01000", 30 => "00010", 31 => "00001", 32 => "00000", 
    33 => "00100", 34 => "11111", 35 => "11000", 36 => "00101", 37 to 38=> "00110", 
    39 => "01000", 40 => "00010", 41 => "11001", 42 => "00011", 43 => "11001", 
    44 => "11000", 45 => "11011", 46 => "00110", 47 => "00001", 48 => "00010", 
    49 => "11101", 50 => "11001", 51 => "00010", 52 => "11110", 53 => "00111", 
    54 => "11111", 55 => "11010", 56 => "00111", 57 => "00000", 58 => "01000", 
    59 to 60=> "11101", 61 => "11000", 62 => "00000", 63 => "11001" );

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

entity conv3_weight_conveXV is
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

architecture arch of conv3_weight_conveXV is
    component conv3_weight_conveXV_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveXV_rom_U :  component conv3_weight_conveXV_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


