-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfE2_rom is 
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


architecture rtl of conv3_weight_convfE2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "11000", 2 => "11101", 3 => "11100", 4 => "00001", 
    5 => "11110", 6 to 7=> "00001", 8 => "00111", 9 => "11110", 10 => "11001", 
    11 => "11111", 12 => "00100", 13 to 14=> "00111", 15 => "11011", 16 => "11101", 
    17 => "00010", 18 => "11011", 19 to 20=> "11110", 21 => "11101", 22 => "00110", 
    23 => "11011", 24 to 25=> "00101", 26 => "11100", 27 => "00011", 28 => "11110", 
    29 => "11100", 30 => "00001", 31 => "00011", 32 => "11101", 33 => "00100", 
    34 => "11011", 35 => "11101", 36 => "00001", 37 => "11101", 38 => "00001", 
    39 => "00110", 40 => "11011", 41 => "00111", 42 => "00011", 43 => "00001", 
    44 => "11101", 45 => "00011", 46 => "11111", 47 => "11110", 48 => "11101", 
    49 to 50=> "00001", 51 to 52=> "11011", 53 => "00010", 54 => "00000", 55 => "11100", 
    56 => "00000", 57 => "11111", 58 => "11101", 59 => "11100", 60 => "00010", 
    61 => "00111", 62 => "11111", 63 => "01000" );

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

entity conv3_weight_convfE2 is
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

architecture arch of conv3_weight_convfE2 is
    component conv3_weight_convfE2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfE2_rom_U :  component conv3_weight_convfE2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


