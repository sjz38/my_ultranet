-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgXb_x_rom is 
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


architecture rtl of conv3_weight_convgXb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111", 1 => "00101", 2 => "00001", 3 => "00011", 4 => "00010", 
    5 to 6=> "00100", 7 => "11001", 8 => "11010", 9 => "00001", 10 => "11100", 
    11 => "11110", 12 => "11101", 13 => "00100", 14 => "00010", 15 => "11000", 
    16 => "11110", 17 => "11101", 18 => "00101", 19 => "00000", 20 => "11111", 
    21 => "11000", 22 => "00000", 23 => "11110", 24 => "11010", 25 => "00111", 
    26 => "11101", 27 => "00001", 28 => "00101", 29 => "11011", 30 => "11111", 
    31 => "11000", 32 => "00000", 33 => "00111", 34 => "11111", 35 => "11100", 
    36 => "11011", 37 => "11000", 38 => "11111", 39 => "11000", 40 => "11110", 
    41 => "11111", 42 => "00001", 43 => "00110", 44 => "11111", 45 => "01000", 
    46 => "11011", 47 => "11111", 48 => "11110", 49 => "11100", 50 => "00000", 
    51 => "11110", 52 => "11100", 53 => "00011", 54 => "00000", 55 => "00001", 
    56 => "11011", 57 => "11111", 58 => "00101", 59 => "00011", 60 to 61=> "11111", 
    62 => "00000", 63 => "00110" );

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

entity conv3_weight_convgXb_x is
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

architecture arch of conv3_weight_convgXb_x is
    component conv3_weight_convgXb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgXb_x_rom_U :  component conv3_weight_convgXb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


