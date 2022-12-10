-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgWb_x_rom is 
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


architecture rtl of conv3_weight_convgWb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011", 1 => "11100", 2 => "00010", 3 => "00011", 4 => "00000", 
    5 to 6=> "11101", 7 => "11001", 8 => "00100", 9 => "11111", 10 => "11010", 
    11 => "11100", 12 => "00111", 13 => "11000", 14 => "00100", 15 => "11011", 
    16 => "11111", 17 => "00011", 18 => "11001", 19 => "00000", 20 => "00100", 
    21 => "00010", 22 => "00011", 23 => "00010", 24 to 25=> "01000", 26 => "11110", 
    27 => "11101", 28 => "00001", 29 => "00111", 30 => "00101", 31 => "11010", 
    32 to 33=> "00000", 34 => "01000", 35 => "11100", 36 => "11101", 37 => "00101", 
    38 => "00010", 39 => "11111", 40 => "11110", 41 => "00001", 42 => "00010", 
    43 => "00001", 44 => "00010", 45 => "11011", 46 => "11111", 47 => "11110", 
    48 => "00001", 49 => "11000", 50 => "00001", 51 => "11010", 52 => "00010", 
    53 => "00011", 54 => "11010", 55 => "11110", 56 => "11100", 57 => "00100", 
    58 => "11111", 59 => "00100", 60 to 61=> "11110", 62 => "00001", 63 => "11000" );

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

entity conv3_weight_convgWb_x is
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

architecture arch of conv3_weight_convgWb_x is
    component conv3_weight_convgWb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgWb_x_rom_U :  component conv3_weight_convgWb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


