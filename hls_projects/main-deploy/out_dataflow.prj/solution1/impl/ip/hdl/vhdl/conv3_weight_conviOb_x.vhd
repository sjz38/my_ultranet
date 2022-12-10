-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviOb_x_rom is 
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


architecture rtl of conv3_weight_conviOb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "11111", 2 => "11110", 3 => "00000", 4 to 6=> "00101", 
    7 => "00000", 8 => "11101", 9 => "00010", 10 to 11=> "11111", 12 => "00100", 
    13 => "11010", 14 => "00000", 15 => "00001", 16 => "00011", 17 => "11100", 
    18 => "00000", 19 to 20=> "11101", 21 => "00010", 22 => "00110", 23 => "00011", 
    24 => "11110", 25 => "11101", 26 => "00000", 27 => "11100", 28 => "00001", 
    29 => "11100", 30 => "00010", 31 => "11111", 32 => "00011", 33 to 34=> "00001", 
    35 => "00011", 36 => "11100", 37 => "11011", 38 => "00001", 39 => "11101", 
    40 => "00011", 41 => "00001", 42 => "11101", 43 => "11100", 44 => "11101", 
    45 => "11100", 46 => "00011", 47 to 48=> "11100", 49 => "01000", 50 => "11110", 
    51 => "00111", 52 to 53=> "00001", 54 => "00101", 55 => "00011", 56 => "11010", 
    57 => "00001", 58 => "11110", 59 => "00011", 60 => "11111", 61 => "11110", 
    62 => "11111", 63 => "00000" );

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

entity conv3_weight_conviOb_x is
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

architecture arch of conv3_weight_conviOb_x is
    component conv3_weight_conviOb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviOb_x_rom_U :  component conv3_weight_conviOb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


