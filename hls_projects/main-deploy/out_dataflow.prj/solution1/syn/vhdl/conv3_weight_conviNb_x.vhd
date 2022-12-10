-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviNb_x_rom is 
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


architecture rtl of conv3_weight_conviNb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "00010", 2 to 3=> "11111", 4 => "00010", 5 => "00101", 
    6 => "00001", 7 => "11111", 8 => "00001", 9 => "00111", 10 => "00110", 
    11 => "00000", 12 => "00111", 13 => "11111", 14 => "00100", 15 => "00110", 
    16 => "00011", 17 => "00010", 18 to 19=> "00001", 20 => "00010", 21 => "00000", 
    22 => "00101", 23 => "00000", 24 => "00101", 25 => "11110", 26 => "00000", 
    27 => "11110", 28 => "11101", 29 => "11010", 30 to 31=> "00100", 32 => "01000", 
    33 => "00001", 34 => "00011", 35 => "00101", 36 => "11111", 37 => "00100", 
    38 to 39=> "11111", 40 => "00010", 41 => "00000", 42 => "11101", 43 => "00010", 
    44 => "11100", 45 => "11110", 46 => "11111", 47 => "00101", 48 => "00100", 
    49 => "11101", 50 to 51=> "00010", 52 => "11101", 53 => "11110", 54 => "11100", 
    55 => "00011", 56 => "11100", 57 => "00010", 58 => "11011", 59 => "11110", 
    60 to 61=> "11111", 62 => "00001", 63 => "00000" );

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

entity conv3_weight_conviNb_x is
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

architecture arch of conv3_weight_conviNb_x is
    component conv3_weight_conviNb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviNb_x_rom_U :  component conv3_weight_conviNb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

