-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhHb_x_rom is 
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


architecture rtl of conv3_weight_convhHb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "00000", 2 to 3=> "11111", 4 => "00001", 5 => "11110", 
    6 => "11111", 7 => "01000", 8 to 9=> "11111", 10 => "11001", 11 => "11100", 
    12 => "01000", 13 => "00100", 14 => "00000", 15 => "00100", 16 => "00010", 
    17 to 19=> "11010", 20 => "00000", 21 => "11101", 22 => "00100", 23 to 24=> "11101", 
    25 to 26=> "00001", 27 => "00101", 28 => "00010", 29 => "01000", 30 => "00010", 
    31 => "00001", 32 => "11010", 33 => "11110", 34 => "00011", 35 => "11001", 
    36 to 37=> "00100", 38 => "00011", 39 => "11000", 40 => "00100", 41 => "11101", 
    42 => "00111", 43 => "11111", 44 => "00101", 45 => "00010", 46 => "11101", 
    47 => "11110", 48 => "11111", 49 => "00101", 50 => "00010", 51 => "00011", 
    52 => "11011", 53 => "11100", 54 => "11010", 55 => "11000", 56 => "00111", 
    57 => "11011", 58 => "00100", 59 => "11101", 60 => "11011", 61 => "11111", 
    62 to 63=> "00001" );

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

entity conv3_weight_convhHb_x is
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

architecture arch of conv3_weight_convhHb_x is
    component conv3_weight_convhHb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhHb_x_rom_U :  component conv3_weight_convhHb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


