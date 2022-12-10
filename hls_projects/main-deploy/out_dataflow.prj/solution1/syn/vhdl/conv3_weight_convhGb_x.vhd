-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhGb_x_rom is 
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


architecture rtl of conv3_weight_convhGb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00001", 2 => "01000", 3 to 4=> "00010", 5 => "00000", 
    6 => "11011", 7 => "00100", 8 => "00101", 9 => "00000", 10 => "00101", 
    11 => "00001", 12 => "00101", 13 => "11000", 14 => "00000", 15 => "00101", 
    16 => "11011", 17 => "00101", 18 => "11111", 19 => "00001", 20 => "00011", 
    21 => "11110", 22 => "00001", 23 => "11101", 24 => "00000", 25 => "00001", 
    26 => "11110", 27 => "11010", 28 => "00000", 29 => "00011", 30 => "00010", 
    31 => "00101", 32 to 33=> "11101", 34 => "00101", 35 => "00001", 36 => "11110", 
    37 => "00100", 38 => "11100", 39 to 40=> "00011", 41 => "00000", 42 => "00010", 
    43 => "00011", 44 => "00010", 45 => "11011", 46 => "00111", 47 => "00001", 
    48 => "00101", 49 => "11111", 50 => "00100", 51 => "11100", 52 => "00000", 
    53 => "00100", 54 => "11111", 55 => "00001", 56 => "11001", 57 => "11100", 
    58 => "11111", 59 => "00010", 60 => "00000", 61 => "00010", 62 => "00000", 
    63 => "11111" );

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

entity conv3_weight_convhGb_x is
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

architecture arch of conv3_weight_convhGb_x is
    component conv3_weight_convhGb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhGb_x_rom_U :  component conv3_weight_convhGb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


