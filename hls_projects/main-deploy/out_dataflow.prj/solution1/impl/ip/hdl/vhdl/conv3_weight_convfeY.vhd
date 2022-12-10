-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfeY_rom is 
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


architecture rtl of conv3_weight_convfeY_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "00100", 2 => "00110", 3 => "00000", 4 => "11100", 
    5 => "11000", 6 => "00000", 7 => "00011", 8 => "00101", 9 to 10=> "11101", 
    11 => "01000", 12 => "11110", 13 => "11101", 14 => "11110", 15 => "11111", 
    16 => "11101", 17 => "00100", 18 => "00010", 19 => "11111", 20 => "00010", 
    21 => "11011", 22 => "00010", 23 => "00111", 24 => "00010", 25 to 27=> "01000", 
    28 => "11111", 29 => "00100", 30 => "11001", 31 to 32=> "00011", 33 => "11101", 
    34 => "00111", 35 => "11011", 36 => "11001", 37 => "00100", 38 => "00001", 
    39 => "11011", 40 => "11100", 41 => "11010", 42 => "00101", 43 => "00011", 
    44 => "00001", 45 => "11110", 46 to 47=> "11101", 48 => "00000", 49 => "11100", 
    50 to 51=> "00010", 52 => "00011", 53 => "11011", 54 => "11010", 55 => "11111", 
    56 => "00010", 57 => "00001", 58 => "00011", 59 => "00100", 60 => "11110", 
    61 => "11011", 62 to 63=> "00000" );

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

entity conv3_weight_convfeY is
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

architecture arch of conv3_weight_convfeY is
    component conv3_weight_convfeY_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfeY_rom_U :  component conv3_weight_convfeY_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


