-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgLb_rom is 
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


architecture rtl of conv3_weight_convgLb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00111", 2 => "11101", 3 => "00001", 4 => "11110", 
    5 => "00011", 6 => "11111", 7 => "11000", 8 => "00100", 9 => "11101", 
    10 => "00000", 11 => "11110", 12 => "11101", 13 to 14=> "00001", 15 => "11001", 
    16 => "11101", 17 => "00010", 18 => "11111", 19 to 20=> "00011", 21 => "11100", 
    22 => "00100", 23 => "00001", 24 => "00011", 25 => "00101", 26 => "11100", 
    27 to 28=> "11111", 29 => "01000", 30 => "11011", 31 => "11100", 32 => "11110", 
    33 => "11011", 34 => "00001", 35 => "11001", 36 => "00100", 37 => "11100", 
    38 => "00110", 39 => "11100", 40 => "00001", 41 => "11100", 42 => "00010", 
    43 to 45=> "11111", 46 => "00101", 47 => "00100", 48 => "11110", 49 => "00010", 
    50 => "00101", 51 => "11001", 52 => "00010", 53 => "00110", 54 => "00011", 
    55 => "11110", 56 => "00100", 57 => "11010", 58 => "11110", 59 => "11111", 
    60 => "11000", 61 => "11101", 62 => "00000", 63 => "11101" );

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

entity conv3_weight_convgLb is
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

architecture arch of conv3_weight_convgLb is
    component conv3_weight_convgLb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgLb_rom_U :  component conv3_weight_convgLb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


