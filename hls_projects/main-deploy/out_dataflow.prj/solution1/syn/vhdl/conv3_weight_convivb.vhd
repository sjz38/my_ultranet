-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convivb_rom is 
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


architecture rtl of conv3_weight_convivb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00101", 2 => "11011", 3 => "11111", 4 => "11011", 
    5 => "11111", 6 => "11101", 7 => "11111", 8 => "11010", 9 => "11111", 
    10 => "11000", 11 => "11100", 12 => "11110", 13 => "00010", 14 => "11111", 
    15 => "00010", 16 => "00101", 17 => "00010", 18 => "11001", 19 => "00011", 
    20 => "00100", 21 to 22=> "11101", 23 => "11011", 24 => "00001", 25 => "11011", 
    26 => "00011", 27 => "00100", 28 => "11111", 29 => "00010", 30 => "00100", 
    31 => "11101", 32 to 33=> "00011", 34 => "00111", 35 to 36=> "00001", 37 => "00010", 
    38 => "11100", 39 => "11101", 40 => "11000", 41 => "00001", 42 => "11111", 
    43 => "11010", 44 => "11111", 45 => "00011", 46 => "11111", 47 => "00100", 
    48 => "01000", 49 => "11010", 50 => "11101", 51 => "00001", 52 => "11010", 
    53 => "00111", 54 => "11110", 55 => "00001", 56 => "11100", 57 => "00010", 
    58 => "00001", 59 => "00100", 60 => "00101", 61 => "00011", 62 => "11111", 
    63 => "00000" );

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

entity conv3_weight_convivb is
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

architecture arch of conv3_weight_convivb is
    component conv3_weight_convivb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convivb_rom_U :  component conv3_weight_convivb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


