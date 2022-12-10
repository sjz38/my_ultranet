-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfv1_rom is 
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


architecture rtl of conv3_weight_convfv1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 to 2=> "00010", 3 => "00101", 4 => "11101", 5 => "11110", 
    6 => "11011", 7 => "11110", 8 => "00111", 9 => "00100", 10 => "00011", 
    11 => "00000", 12 => "00101", 13 => "11011", 14 => "00010", 15 => "00101", 
    16 => "11101", 17 => "00111", 18 => "11110", 19 => "11101", 20 => "11100", 
    21 => "00001", 22 => "11101", 23 => "11011", 24 => "01000", 25 => "00011", 
    26 => "00100", 27 => "11100", 28 => "00011", 29 => "00010", 30 => "11010", 
    31 => "00111", 32 to 33=> "00011", 34 => "01000", 35 => "11111", 36 to 38=> "00011", 
    39 => "11011", 40 => "00100", 41 to 42=> "11100", 43 => "11110", 44 => "00001", 
    45 => "11010", 46 => "00110", 47 => "11000", 48 => "01000", 49 => "11100", 
    50 => "00100", 51 => "00011", 52 => "11011", 53 => "11110", 54 => "11111", 
    55 => "00010", 56 => "11101", 57 => "00000", 58 to 59=> "01000", 60 to 62=> "00001", 
    63 => "00010" );

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

entity conv3_weight_convfv1 is
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

architecture arch of conv3_weight_convfv1 is
    component conv3_weight_convfv1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfv1_rom_U :  component conv3_weight_convfv1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


