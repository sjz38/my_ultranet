-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviTb_x_rom is 
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


architecture rtl of conv3_weight_conviTb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "01000", 2 => "11101", 3 to 4=> "00001", 5 => "00010", 
    6 => "00001", 7 => "11011", 8 => "11001", 9 => "00010", 10 => "00110", 
    11 => "00001", 12 => "01000", 13 => "11100", 14 => "00110", 15 => "11010", 
    16 to 17=> "11110", 18 => "00001", 19 => "11111", 20 => "11001", 21 => "11101", 
    22 => "00001", 23 => "11100", 24 => "00100", 25 => "00010", 26 => "11111", 
    27 => "00101", 28 => "00000", 29 => "00100", 30 => "00000", 31 => "00001", 
    32 => "00000", 33 => "11000", 34 => "00001", 35 => "11111", 36 => "11110", 
    37 => "00010", 38 => "11111", 39 => "11011", 40 => "00010", 41 => "00011", 
    42 => "11110", 43 => "00101", 44 to 45=> "11111", 46 => "00001", 47 => "11100", 
    48 => "00011", 49 => "11010", 50 => "11000", 51 => "00011", 52 => "00000", 
    53 => "00001", 54 => "11101", 55 => "11111", 56 => "11100", 57 => "00010", 
    58 => "00001", 59 => "00000", 60 => "00010", 61 => "00011", 62 => "11111", 
    63 => "00001" );

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

entity conv3_weight_conviTb_x is
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

architecture arch of conv3_weight_conviTb_x is
    component conv3_weight_conviTb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviTb_x_rom_U :  component conv3_weight_conviTb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


