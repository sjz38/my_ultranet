-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg8b_rom is 
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


architecture rtl of conv3_weight_convg8b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "00001", 2 => "11011", 3 => "11101", 4 => "00100", 
    5 => "00110", 6 => "11111", 7 to 8=> "11110", 9 => "11101", 10 => "11011", 
    11 => "11101", 12 => "00011", 13 => "11111", 14 => "00010", 15 => "11101", 
    16 => "00000", 17 to 18=> "00011", 19 => "00100", 20 => "00010", 21 => "01000", 
    22 => "00000", 23 => "00001", 24 => "00011", 25 => "11010", 26 => "11001", 
    27 => "00010", 28 => "11111", 29 => "00011", 30 => "00111", 31 => "11101", 
    32 => "11111", 33 => "11110", 34 => "00111", 35 => "00010", 36 => "00011", 
    37 => "00001", 38 => "11010", 39 => "11000", 40 to 41=> "00110", 42 => "00100", 
    43 => "11110", 44 to 45=> "11101", 46 => "11110", 47 => "11000", 48 => "00101", 
    49 => "11000", 50 => "11010", 51 => "00010", 52 => "00110", 53 => "00010", 
    54 to 55=> "11111", 56 to 57=> "00001", 58 => "11010", 59 => "11111", 60 => "00101", 
    61 => "11110", 62 => "00001", 63 => "11000" );

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

entity conv3_weight_convg8b is
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

architecture arch of conv3_weight_convg8b is
    component conv3_weight_convg8b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg8b_rom_U :  component conv3_weight_convg8b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


