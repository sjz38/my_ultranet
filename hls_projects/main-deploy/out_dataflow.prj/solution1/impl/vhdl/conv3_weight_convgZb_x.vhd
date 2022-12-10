-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgZb_x_rom is 
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


architecture rtl of conv3_weight_convgZb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00010", 2 to 3=> "00011", 4 => "11111", 5 => "11010", 
    6 => "11100", 7 => "11110", 8 to 9=> "00101", 10 => "11001", 11 => "11000", 
    12 => "00101", 13 => "11101", 14 => "00010", 15 => "00000", 16 => "11111", 
    17 => "00010", 18 => "11100", 19 => "00011", 20 => "11001", 21 => "00101", 
    22 => "11111", 23 => "11101", 24 => "01000", 25 => "00100", 26 => "11111", 
    27 => "00000", 28 => "00010", 29 => "00110", 30 => "01000", 31 => "11100", 
    32 => "00010", 33 => "11010", 34 => "01000", 35 => "11010", 36 => "11011", 
    37 => "00101", 38 => "00001", 39 => "11011", 40 => "11111", 41 to 42=> "00100", 
    43 => "00011", 44 => "00001", 45 => "11100", 46 => "11110", 47 => "00011", 
    48 => "00101", 49 => "11000", 50 => "00000", 51 => "00110", 52 => "00011", 
    53 => "11110", 54 => "00101", 55 => "11100", 56 => "11011", 57 => "00011", 
    58 => "11110", 59 => "11011", 60 => "00110", 61 => "11001", 62 => "00000", 
    63 => "11000" );

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

entity conv3_weight_convgZb_x is
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

architecture arch of conv3_weight_convgZb_x is
    component conv3_weight_convgZb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgZb_x_rom_U :  component conv3_weight_convgZb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


