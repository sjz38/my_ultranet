-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviMb_x_rom is 
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


architecture rtl of conv3_weight_conviMb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00010", 2 => "11111", 3 => "11110", 4 => "00011", 5 => "00001", 
    6 => "11110", 7 => "00100", 8 to 10=> "00010", 11 => "00101", 12 => "00010", 
    13 => "11100", 14 => "00010", 15 => "00111", 16 => "00010", 17 => "11011", 
    18 => "11111", 19 => "00010", 20 => "11100", 21 => "11110", 22 => "00100", 
    23 => "11000", 24 => "00010", 25 => "00001", 26 => "00010", 27 => "11110", 
    28 to 29=> "11100", 30 => "11011", 31 => "00010", 32 => "00111", 33 => "00011", 
    34 => "00001", 35 => "00000", 36 => "00111", 37 => "11010", 38 => "00010", 
    39 => "11111", 40 => "00010", 41 => "11110", 42 => "00010", 43 => "11111", 
    44 => "11000", 45 => "00011", 46 => "00101", 47 => "00100", 48 => "00010", 
    49 => "00100", 50 => "00110", 51 => "11011", 52 => "01000", 53 => "00010", 
    54 => "11100", 55 => "11011", 56 => "11110", 57 => "11100", 58 => "00010", 
    59 => "00001", 60 to 61=> "00010", 62 to 63=> "00000" );

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

entity conv3_weight_conviMb_x is
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

architecture arch of conv3_weight_conviMb_x is
    component conv3_weight_conviMb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviMb_x_rom_U :  component conv3_weight_conviMb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


