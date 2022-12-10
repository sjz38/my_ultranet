-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviEb_x_rom is 
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


architecture rtl of conv3_weight_conviEb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111", 1 => "11101", 2 => "00101", 3 => "00001", 4 => "11001", 
    5 => "11010", 6 => "00001", 7 => "00110", 8 => "11010", 9 to 11=> "00100", 
    12 => "00101", 13 => "00110", 14 => "11111", 15 => "11000", 16 => "00000", 
    17 => "11101", 18 => "00000", 19 => "11110", 20 => "11101", 21 => "11100", 
    22 => "11101", 23 => "00000", 24 => "11101", 25 => "11111", 26 => "00101", 
    27 => "11100", 28 => "00001", 29 => "11010", 30 => "11111", 31 => "00000", 
    32 => "11100", 33 => "00100", 34 to 35=> "11111", 36 => "11110", 37 => "11101", 
    38 => "11100", 39 => "00010", 40 => "11101", 41 => "00100", 42 to 43=> "00011", 
    44 => "11100", 45 => "11111", 46 => "11010", 47 => "01000", 48 => "11111", 
    49 => "00001", 50 => "00010", 51 => "01000", 52 => "11001", 53 => "11100", 
    54 => "00010", 55 => "00110", 56 => "00100", 57 => "00111", 58 => "11100", 
    59 => "11110", 60 => "00100", 61 => "00011", 62 => "00000", 63 => "11111" );

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

entity conv3_weight_conviEb_x is
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

architecture arch of conv3_weight_conviEb_x is
    component conv3_weight_conviEb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviEb_x_rom_U :  component conv3_weight_conviEb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


