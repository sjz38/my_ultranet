-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhnb_rom is 
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


architecture rtl of conv3_weight_convhnb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "00100", 2 => "00011", 3 => "11110", 4 => "00010", 
    5 => "11001", 6 => "00011", 7 => "11110", 8 => "00010", 9 => "00111", 
    10 => "00101", 11 => "11101", 12 => "11010", 13 => "11011", 14 => "01000", 
    15 => "11111", 16 => "00001", 17 => "01000", 18 to 19=> "11010", 20 => "00001", 
    21 => "11100", 22 => "11000", 23 => "00001", 24 => "00011", 25 => "11010", 
    26 => "00001", 27 => "11110", 28 => "00010", 29 => "00110", 30 => "00010", 
    31 => "11110", 32 => "11011", 33 to 34=> "11111", 35 => "11100", 36 => "11110", 
    37 => "00111", 38 => "00010", 39 => "00100", 40 to 41=> "00001", 42 => "00110", 
    43 => "00001", 44 => "11101", 45 => "11110", 46 => "00001", 47 => "00011", 
    48 => "00000", 49 => "11000", 50 => "00100", 51 => "11110", 52 => "00010", 
    53 => "11111", 54 to 55=> "00010", 56 => "00101", 57 => "00001", 58 to 59=> "11110", 
    60 => "11101", 61 => "11010", 62 => "11111", 63 => "11101" );

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

entity conv3_weight_convhnb is
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

architecture arch of conv3_weight_convhnb is
    component conv3_weight_convhnb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhnb_rom_U :  component conv3_weight_convhnb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


