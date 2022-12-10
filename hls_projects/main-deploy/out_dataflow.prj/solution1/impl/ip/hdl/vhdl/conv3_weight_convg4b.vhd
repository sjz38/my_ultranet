-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convg4b_rom is 
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


architecture rtl of conv3_weight_convg4b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "11101", 2 => "11001", 3 => "11110", 4 => "00110", 
    5 => "11010", 6 to 7=> "01000", 8 => "11101", 9 => "00001", 10 => "00011", 
    11 => "11010", 12 => "11100", 13 => "11000", 14 => "11101", 15 => "11100", 
    16 => "11101", 17 => "11110", 18 => "00011", 19 => "00001", 20 => "00101", 
    21 => "11011", 22 => "11000", 23 => "00111", 24 => "00110", 25 => "11100", 
    26 => "11000", 27 => "00001", 28 => "11100", 29 => "11110", 30 => "00011", 
    31 => "11110", 32 => "11111", 33 => "00011", 34 => "11101", 35 => "11111", 
    36 => "00011", 37 => "11101", 38 => "00001", 39 => "11100", 40 => "00011", 
    41 => "00001", 42 to 43=> "00011", 44 => "11000", 45 => "11101", 46 => "00101", 
    47 to 48=> "11100", 49 => "01000", 50 => "11100", 51 => "00011", 52 => "11011", 
    53 => "00011", 54 => "00010", 55 => "11110", 56 => "11101", 57 => "00001", 
    58 => "00101", 59 => "00001", 60 => "11111", 61 => "00101", 62 => "00000", 
    63 => "11110" );

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

entity conv3_weight_convg4b is
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

architecture arch of conv3_weight_convg4b is
    component conv3_weight_convg4b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convg4b_rom_U :  component conv3_weight_convg4b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


