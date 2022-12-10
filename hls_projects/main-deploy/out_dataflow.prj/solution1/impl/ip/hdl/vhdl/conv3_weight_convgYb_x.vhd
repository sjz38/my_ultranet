-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgYb_x_rom is 
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


architecture rtl of conv3_weight_convgYb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11000", 1 => "11001", 2 => "00010", 3 => "00001", 4 => "11100", 
    5 => "11000", 6 => "11011", 7 => "11101", 8 => "11110", 9 => "00000", 
    10 => "11000", 11 => "00101", 12 => "11011", 13 => "11100", 14 => "11101", 
    15 => "00100", 16 => "00010", 17 => "11101", 18 => "11111", 19 => "00001", 
    20 => "11111", 21 => "00001", 22 => "11101", 23 to 24=> "11011", 25 => "11101", 
    26 => "00010", 27 => "11001", 28 => "11111", 29 => "00011", 30 => "01000", 
    31 => "00000", 32 => "11110", 33 => "11100", 34 => "11101", 35 => "00100", 
    36 => "00011", 37 => "11000", 38 => "11011", 39 => "11110", 40 => "11011", 
    41 => "00011", 42 => "11000", 43 => "11110", 44 => "00101", 45 => "11000", 
    46 => "11111", 47 => "00010", 48 => "11111", 49 => "00101", 50 => "11100", 
    51 => "00110", 52 => "00101", 53 => "11010", 54 => "00110", 55 => "11101", 
    56 => "00100", 57 => "00001", 58 => "00010", 59 => "11010", 60 => "00010", 
    61 => "00011", 62 => "00000", 63 => "00010" );

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

entity conv3_weight_convgYb_x is
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

architecture arch of conv3_weight_convgYb_x is
    component conv3_weight_convgYb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgYb_x_rom_U :  component conv3_weight_convgYb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


