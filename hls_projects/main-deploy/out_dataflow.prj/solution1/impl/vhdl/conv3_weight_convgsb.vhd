-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgsb_rom is 
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


architecture rtl of conv3_weight_convgsb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00010", 2 => "11110", 3 => "00011", 4 => "11110", 
    5 => "01000", 6 => "00000", 7 => "11111", 8 => "00111", 9 => "11100", 
    10 => "11110", 11 => "11101", 12 => "00001", 13 => "11101", 14 => "11110", 
    15 to 16=> "11011", 17 => "11000", 18 => "11100", 19 => "00110", 20 to 21=> "00011", 
    22 => "11011", 23 => "11110", 24 => "00100", 25 => "11110", 26 => "00100", 
    27 => "11100", 28 => "01000", 29 => "00111", 30 => "11110", 31 => "11001", 
    32 => "00000", 33 => "00011", 34 => "00101", 35 => "11011", 36 => "00000", 
    37 => "11101", 38 => "00001", 39 to 40=> "00011", 41 => "11001", 42 => "00101", 
    43 => "00001", 44 => "11010", 45 => "11110", 46 to 48=> "00010", 49 => "11100", 
    50 => "11110", 51 => "00001", 52 => "11011", 53 => "00101", 54 => "00001", 
    55 => "00000", 56 => "11110", 57 => "00110", 58 => "00011", 59 => "00010", 
    60 => "00001", 61 => "11011", 62 => "00000", 63 => "11010" );

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

entity conv3_weight_convgsb is
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

architecture arch of conv3_weight_convgsb is
    component conv3_weight_convgsb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgsb_rom_U :  component conv3_weight_convgsb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


