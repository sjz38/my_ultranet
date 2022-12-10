-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhob_rom is 
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


architecture rtl of conv3_weight_convhob_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00001", 2 => "00000", 3 to 4=> "11110", 5 => "00000", 
    6 => "00011", 7 => "00010", 8 => "11111", 9 => "00110", 10 => "01000", 
    11 => "11001", 12 => "11000", 13 => "00101", 14 => "11111", 15 => "00011", 
    16 => "11111", 17 => "11100", 18 => "01000", 19 => "11111", 20 => "00010", 
    21 => "11100", 22 => "11011", 23 => "00011", 24 => "11111", 25 => "11010", 
    26 => "11101", 27 => "11001", 28 => "00010", 29 => "11101", 30 => "11001", 
    31 => "11010", 32 => "11101", 33 => "00011", 34 => "11001", 35 => "11100", 
    36 => "11111", 37 to 38=> "00011", 39 => "11111", 40 => "00010", 41 to 42=> "11111", 
    43 => "00001", 44 to 45=> "11101", 46 => "00000", 47 => "00011", 48 => "00101", 
    49 => "00001", 50 => "11101", 51 => "11001", 52 => "00000", 53 => "11110", 
    54 => "00100", 55 => "00000", 56 to 57=> "00011", 58 => "11111", 59 => "00110", 
    60 => "11010", 61 => "11100", 62 => "11111", 63 => "11110" );

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

entity conv3_weight_convhob is
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

architecture arch of conv3_weight_convhob is
    component conv3_weight_convhob_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhob_rom_U :  component conv3_weight_convhob_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


