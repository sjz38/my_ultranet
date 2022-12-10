-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg1b_rom is 
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


architecture rtl of conv3_weight_convg1b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00001", 2 => "11010", 3 => "11101", 4 => "00010", 
    5 => "11001", 6 => "00011", 7 => "11111", 8 => "11101", 9 => "11111", 
    10 => "01000", 11 => "11110", 12 => "11111", 13 => "11011", 14 => "00010", 
    15 => "00011", 16 => "11010", 17 => "11100", 18 => "00001", 19 => "00100", 
    20 => "00101", 21 => "00011", 22 => "11110", 23 => "11000", 24 to 25=> "00010", 
    26 => "11011", 27 => "00010", 28 => "11110", 29 => "00010", 30 => "11110", 
    31 => "00001", 32 => "00100", 33 => "00101", 34 => "00011", 35 => "11110", 
    36 => "00011", 37 => "11011", 38 => "00110", 39 => "00100", 40 => "11111", 
    41 => "00001", 42 => "00000", 43 => "11100", 44 => "11000", 45 => "00000", 
    46 => "00110", 47 => "00011", 48 => "11111", 49 => "00111", 50 => "11101", 
    51 => "11000", 52 to 53=> "11111", 54 => "11001", 55 => "11101", 56 => "11100", 
    57 to 58=> "00100", 59 => "00001", 60 => "11110", 61 => "00000", 62 to 63=> "11111" );

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

entity conv3_weight_convg1b is
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

architecture arch of conv3_weight_convg1b is
    component conv3_weight_convg1b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg1b_rom_U :  component conv3_weight_convg1b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


