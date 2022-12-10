-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convePU_rom is 
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


architecture rtl of conv3_weight_convePU_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11001", 1 => "11110", 2 => "11011", 3 => "01000", 4 => "11010", 
    5 => "11100", 6 => "00110", 7 => "11111", 8 => "00010", 9 => "00111", 
    10 => "01000", 11 => "00010", 12 => "00011", 13 => "00010", 14 => "11110", 
    15 => "11111", 16 => "11001", 17 => "00001", 18 => "01000", 19 => "11111", 
    20 => "11000", 21 => "11101", 22 => "00001", 23 to 25=> "11110", 26 => "00001", 
    27 => "11110", 28 => "00000", 29 => "00101", 30 => "11110", 31 => "00101", 
    32 => "11011", 33 => "11110", 34 => "00101", 35 => "11101", 36 => "11000", 
    37 => "00000", 38 => "01000", 39 => "11110", 40 to 41=> "00100", 42 => "00011", 
    43 => "11110", 44 => "00001", 45 => "11011", 46 => "00100", 47 => "00000", 
    48 => "11111", 49 => "11011", 50 => "00011", 51 => "00001", 52 => "11100", 
    53 => "00000", 54 => "11111", 55 => "11000", 56 => "11110", 57 => "01000", 
    58 to 59=> "11111", 60 => "01000", 61 => "11001", 62 => "00001", 63 => "11100" );

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

entity conv3_weight_convePU is
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

architecture arch of conv3_weight_convePU is
    component conv3_weight_convePU_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convePU_rom_U :  component conv3_weight_convePU_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


