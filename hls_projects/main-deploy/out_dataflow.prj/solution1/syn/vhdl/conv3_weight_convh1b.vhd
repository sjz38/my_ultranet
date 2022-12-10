-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh1b_rom is 
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


architecture rtl of conv3_weight_convh1b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110", 1 => "0100", 2 => "0000", 3 => "1111", 4 => "0010", 
    5 => "0000", 6 => "0010", 7 => "1000", 8 => "1100", 9 to 10=> "1111", 
    11 => "1100", 12 => "0110", 13 to 14=> "0001", 15 => "1110", 16 => "1100", 
    17 => "1110", 18 to 19=> "0010", 20 => "1100", 21 => "0001", 22 => "1110", 
    23 => "1100", 24 => "0000", 25 => "1111", 26 => "1010", 27 => "0110", 
    28 => "0011", 29 => "0001", 30 => "0010", 31 => "1111", 32 => "0101", 
    33 to 34=> "0001", 35 to 36=> "1101", 37 => "0000", 38 => "0100", 39 => "1111", 
    40 => "1110", 41 => "0001", 42 => "0011", 43 => "0111", 44 to 45=> "1101", 
    46 => "1111", 47 => "1100", 48 => "0001", 49 => "1101", 50 => "1100", 
    51 => "1101", 52 => "0001", 53 => "1111", 54 => "0010", 55 => "0000", 
    56 => "0010", 57 to 58=> "1111", 59 => "1101", 60 => "1111", 61 => "1101", 
    62 => "0000", 63 => "0011" );

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

entity conv3_weight_convh1b is
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

architecture arch of conv3_weight_convh1b is
    component conv3_weight_convh1b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh1b_rom_U :  component conv3_weight_convh1b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


