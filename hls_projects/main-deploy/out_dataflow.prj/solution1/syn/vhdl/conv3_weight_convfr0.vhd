-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfr0_rom is 
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


architecture rtl of conv3_weight_convfr0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11110", 2 => "11101", 3 => "00110", 4 => "00010", 
    5 => "00100", 6 => "11111", 7 => "11101", 8 => "00001", 9 => "11111", 
    10 => "11110", 11 => "01000", 12 => "00011", 13 => "00001", 14 => "00010", 
    15 => "11111", 16 => "00010", 17 to 18=> "11101", 19 => "00011", 20 => "11011", 
    21 => "00011", 22 => "11110", 23 => "11100", 24 => "00011", 25 => "00101", 
    26 => "11110", 27 => "00011", 28 => "11010", 29 => "00010", 30 => "11000", 
    31 => "11011", 32 => "11111", 33 => "00111", 34 => "11001", 35 => "11101", 
    36 => "00101", 37 => "11000", 38 to 39=> "00110", 40 => "00000", 41 => "11001", 
    42 => "11110", 43 => "11111", 44 => "11001", 45 => "11111", 46 to 47=> "00011", 
    48 => "00010", 49 => "00011", 50 => "00010", 51 => "11111", 52 => "01000", 
    53 => "11101", 54 => "00100", 55 => "00000", 56 => "11100", 57 => "00011", 
    58 => "11000", 59 => "00010", 60 => "01000", 61 => "00111", 62 => "00001", 
    63 => "11100" );

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

entity conv3_weight_convfr0 is
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

architecture arch of conv3_weight_convfr0 is
    component conv3_weight_convfr0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfr0_rom_U :  component conv3_weight_convfr0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


