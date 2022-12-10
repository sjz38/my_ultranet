-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhLb_x_rom is 
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


architecture rtl of conv3_weight_convhLb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "00010", 2 => "00011", 3 => "00010", 4 => "00101", 
    5 to 6=> "11110", 7 => "00010", 8 => "00100", 9 => "00000", 10 => "00101", 
    11 => "00001", 12 => "11110", 13 => "11101", 14 => "11110", 15 => "00001", 
    16 => "11000", 17 to 18=> "11001", 19 => "11010", 20 => "00111", 21 => "01000", 
    22 => "00000", 23 => "00010", 24 => "01000", 25 => "00001", 26 => "00101", 
    27 => "11100", 28 => "11010", 29 => "00111", 30 => "00010", 31 to 32=> "11111", 
    33 => "00000", 34 => "11110", 35 => "11100", 36 => "11101", 37 => "01000", 
    38 => "00001", 39 => "00100", 40 => "11110", 41 => "11101", 42 => "00000", 
    43 => "00101", 44 => "11011", 45 => "11101", 46 => "00010", 47 => "00111", 
    48 => "00011", 49 => "11111", 50 to 51=> "00011", 52 => "00100", 53 => "11011", 
    54 => "11110", 55 => "00110", 56 => "11101", 57 => "00110", 58 => "00001", 
    59 to 60=> "11111", 61 => "11010", 62 => "00001", 63 => "11011" );

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

entity conv3_weight_convhLb_x is
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

architecture arch of conv3_weight_convhLb_x is
    component conv3_weight_convhLb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhLb_x_rom_U :  component conv3_weight_convhLb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


