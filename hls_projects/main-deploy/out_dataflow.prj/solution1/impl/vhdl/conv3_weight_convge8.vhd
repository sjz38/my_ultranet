-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convge8_rom is 
    generic(
             DWIDTH     : integer := 4; 
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


architecture rtl of conv3_weight_convge8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0111", 1 => "1011", 2 => "0001", 3 => "1101", 4 => "1010", 
    5 => "1101", 6 => "1111", 7 => "0011", 8 => "1111", 9 => "0010", 
    10 => "1101", 11 => "1110", 12 => "1111", 13 => "0111", 14 => "1110", 
    15 => "1000", 16 => "1101", 17 => "0001", 18 => "0100", 19 => "0000", 
    20 => "0100", 21 => "0000", 22 => "1110", 23 => "0000", 24 to 25=> "1111", 
    26 to 28=> "0000", 29 => "1100", 30 => "0000", 31 => "0001", 32 to 33=> "1111", 
    34 => "1110", 35 => "1100", 36 => "0011", 37 => "1101", 38 => "0011", 
    39 to 40=> "0001", 41 => "0010", 42 => "0011", 43 => "1110", 44 to 45=> "1011", 
    46 to 47=> "0011", 48 => "0001", 49 => "0010", 50 => "1110", 51 => "0001", 
    52 => "1110", 53 => "0000", 54 => "1110", 55 => "0011", 56 => "0000", 
    57 => "1100", 58 => "0101", 59 => "1000", 60 => "1010", 61 to 62=> "0000", 
    63 => "1101" );

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

entity conv3_weight_convge8 is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convge8 is
    component conv3_weight_convge8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convge8_rom_U :  component conv3_weight_convge8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


