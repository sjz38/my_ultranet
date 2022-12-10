-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviLb_x_rom is 
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


architecture rtl of conv3_weight_conviLb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "00010", 2 => "11111", 3 => "11100", 4 => "00001", 
    5 => "11011", 6 => "00110", 7 => "00001", 8 => "00000", 9 => "00010", 
    10 => "11110", 11 => "00000", 12 => "01000", 13 to 14=> "11110", 15 => "00001", 
    16 => "11111", 17 => "00001", 18 => "00000", 19 => "00011", 20 => "00000", 
    21 => "00001", 22 => "00100", 23 => "11100", 24 => "11110", 25 => "00010", 
    26 => "11101", 27 => "11110", 28 => "11111", 29 => "11110", 30 to 31=> "11111", 
    32 => "00110", 33 => "00001", 34 => "00010", 35 => "00001", 36 => "11101", 
    37 => "11000", 38 => "00001", 39 => "11110", 40 => "00010", 41 => "00000", 
    42 to 43=> "11111", 44 => "11000", 45 => "11110", 46 => "00001", 47 => "00000", 
    48 => "11101", 49 => "00101", 50 => "11010", 51 => "00001", 52 => "00101", 
    53 => "00100", 54 => "11110", 55 => "11011", 56 to 57=> "00001", 58 => "00010", 
    59 => "00000", 60 => "00001", 61 => "11100", 62 to 63=> "00000" );

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

entity conv3_weight_conviLb_x is
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

architecture arch of conv3_weight_conviLb_x is
    component conv3_weight_conviLb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviLb_x_rom_U :  component conv3_weight_conviLb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


