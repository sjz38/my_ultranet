-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfN4_rom is 
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


architecture rtl of conv3_weight_convfN4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "11000", 2 => "00001", 3 => "00010", 4 => "00100", 
    5 => "00011", 6 => "00000", 7 to 8=> "00101", 9 => "00010", 10 => "00000", 
    11 => "11100", 12 => "00010", 13 => "01000", 14 => "11110", 15 => "11000", 
    16 => "11111", 17 => "11101", 18 => "01000", 19 => "00001", 20 => "11001", 
    21 => "00100", 22 => "00010", 23 => "11000", 24 => "00111", 25 => "11101", 
    26 => "00001", 27 => "01000", 28 => "00100", 29 => "11000", 30 => "11100", 
    31 => "00101", 32 => "00011", 33 => "11001", 34 => "00001", 35 => "00000", 
    36 => "11111", 37 => "00001", 38 => "11100", 39 => "11010", 40 => "01000", 
    41 => "00011", 42 => "01000", 43 => "11110", 44 => "11100", 45 => "11011", 
    46 => "00000", 47 => "11000", 48 to 51=> "00001", 52 => "11011", 53 => "00100", 
    54 => "11101", 55 => "11010", 56 => "00011", 57 => "01000", 58 => "00011", 
    59 => "11101", 60 => "11110", 61 to 62=> "11111", 63 => "01000" );

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

entity conv3_weight_convfN4 is
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

architecture arch of conv3_weight_convfN4 is
    component conv3_weight_convfN4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfN4_rom_U :  component conv3_weight_convfN4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


