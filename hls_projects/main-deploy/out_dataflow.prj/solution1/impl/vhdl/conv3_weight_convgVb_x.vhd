-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgVb_x_rom is 
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


architecture rtl of conv3_weight_convgVb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "11101", 2 => "00000", 3 => "11101", 4 => "00010", 
    5 => "11000", 6 => "11111", 7 => "11100", 8 => "11011", 9 => "11110", 
    10 => "11101", 11 => "00101", 12 => "00010", 13 => "11001", 14 => "00010", 
    15 => "11111", 16 => "00100", 17 => "11000", 18 => "00000", 19 to 20=> "00010", 
    21 => "11111", 22 => "11010", 23 => "00001", 24 => "11110", 25 => "00011", 
    26 => "11011", 27 => "11001", 28 => "00100", 29 => "00000", 30 => "01000", 
    31 => "11110", 32 => "11100", 33 => "11111", 34 => "11011", 35 => "11111", 
    36 => "11010", 37 => "11110", 38 => "11100", 39 => "00101", 40 => "11000", 
    41 => "11110", 42 => "11001", 43 => "11101", 44 => "00110", 45 => "11001", 
    46 => "11101", 47 => "11111", 48 => "00010", 49 => "00100", 50 => "11101", 
    51 => "00110", 52 => "00001", 53 => "11110", 54 => "11111", 55 => "00000", 
    56 => "00011", 57 => "11111", 58 => "11110", 59 => "00011", 60 => "00010", 
    61 => "01000", 62 => "00000", 63 => "11001" );

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

entity conv3_weight_convgVb_x is
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

architecture arch of conv3_weight_convgVb_x is
    component conv3_weight_convgVb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgVb_x_rom_U :  component conv3_weight_convgVb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


