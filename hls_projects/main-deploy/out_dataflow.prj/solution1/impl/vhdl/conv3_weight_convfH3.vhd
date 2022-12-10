-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfH3_rom is 
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


architecture rtl of conv3_weight_convfH3_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "00011", 2 => "11101", 3 => "11110", 4 => "11111", 
    5 => "11100", 6 => "11011", 7 => "00011", 8 => "11101", 9 => "11111", 
    10 => "11001", 11 => "00101", 12 => "00010", 13 => "11100", 14 => "11101", 
    15 => "00000", 16 => "11100", 17 to 18=> "00001", 19 => "11010", 20 => "11000", 
    21 => "11010", 22 => "00101", 23 => "11100", 24 => "11010", 25 => "00110", 
    26 => "11101", 27 => "00010", 28 => "11100", 29 => "11111", 30 => "00000", 
    31 => "00110", 32 => "00000", 33 => "00101", 34 => "00110", 35 => "11101", 
    36 => "00110", 37 => "11011", 38 => "11110", 39 => "00000", 40 => "11101", 
    41 => "11100", 42 => "00100", 43 => "00001", 44 => "11110", 45 => "00111", 
    46 => "00000", 47 => "11100", 48 => "11110", 49 to 50=> "00001", 51 => "11010", 
    52 => "11111", 53 => "00011", 54 => "11100", 55 => "11101", 56 => "00110", 
    57 => "11101", 58 => "00101", 59 => "11101", 60 => "11110", 61 => "00011", 
    62 => "11111", 63 => "01000" );

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

entity conv3_weight_convfH3 is
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

architecture arch of conv3_weight_convfH3 is
    component conv3_weight_convfH3_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfH3_rom_U :  component conv3_weight_convfH3_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


