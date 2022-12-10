-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviRb_x_rom is 
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


architecture rtl of conv3_weight_conviRb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "11100", 2 => "11110", 3 => "11100", 4 => "00001", 
    5 => "11110", 6 => "00010", 7 => "11010", 8 to 9=> "00001", 10 to 11=> "11111", 
    12 => "01000", 13 => "11010", 14 => "00000", 15 => "11011", 16 => "11110", 
    17 => "11011", 18 => "11111", 19 => "00001", 20 => "11011", 21 => "00011", 
    22 => "00000", 23 => "00100", 24 => "00001", 25 => "11000", 26 => "00100", 
    27 => "11111", 28 => "00001", 29 => "00011", 30 => "00100", 31 => "11101", 
    32 => "00011", 33 => "00000", 34 => "00001", 35 => "00011", 36 => "11111", 
    37 => "11001", 38 => "11110", 39 => "11111", 40 => "00001", 41 => "00100", 
    42 => "00010", 43 => "11100", 44 => "11111", 45 => "11110", 46 => "00110", 
    47 => "11100", 48 => "11101", 49 => "00100", 50 => "00001", 51 => "00011", 
    52 => "11101", 53 => "00000", 54 => "00011", 55 => "11110", 56 => "11011", 
    57 => "00000", 58 => "11100", 59 => "00000", 60 => "00111", 61 => "11110", 
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

entity conv3_weight_conviRb_x is
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

architecture arch of conv3_weight_conviRb_x is
    component conv3_weight_conviRb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviRb_x_rom_U :  component conv3_weight_conviRb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


