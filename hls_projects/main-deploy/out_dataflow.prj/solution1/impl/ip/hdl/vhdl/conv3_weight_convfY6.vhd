-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfY6_rom is 
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


architecture rtl of conv3_weight_convfY6_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11110", 2 => "00101", 3 to 4=> "11111", 5 => "11000", 
    6 => "00011", 7 => "11100", 8 => "11010", 9 => "11011", 10 => "11111", 
    11 => "11100", 12 => "11001", 13 => "00011", 14 => "00000", 15 => "11110", 
    16 => "11001", 17 => "00001", 18 => "11011", 19 => "00011", 20 => "00001", 
    21 => "11001", 22 => "00010", 23 => "11011", 24 => "11000", 25 => "00111", 
    26 => "00011", 27 => "11011", 28 => "11111", 29 => "11110", 30 => "00001", 
    31 => "11011", 32 to 33=> "00000", 34 => "11111", 35 => "00000", 36 => "00011", 
    37 => "11000", 38 => "00001", 39 => "11001", 40 => "11100", 41 => "00101", 
    42 to 43=> "00001", 44 => "01000", 45 => "00000", 46 => "00001", 47 => "00000", 
    48 => "00001", 49 => "11100", 50 => "00010", 51 => "00110", 52 => "11101", 
    53 => "11010", 54 => "11000", 55 => "00001", 56 => "11011", 57 => "11010", 
    58 => "11001", 59 => "11111", 60 => "11101", 61 => "00010", 62 => "00000", 
    63 => "11111" );

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

entity conv3_weight_convfY6 is
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

architecture arch of conv3_weight_convfY6 is
    component conv3_weight_convfY6_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfY6_rom_U :  component conv3_weight_convfY6_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


