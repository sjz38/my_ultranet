-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh5b_rom is 
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


architecture rtl of conv3_weight_convh5b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011", 1 => "1111", 2 to 3=> "0001", 4 => "0011", 5 => "1111", 
    6 to 7=> "0001", 8 to 9=> "0011", 10 => "0001", 11 => "0000", 12 to 13=> "1111", 
    14 => "0000", 15 => "0011", 16 => "1111", 17 to 18=> "0011", 19 => "0100", 
    20 => "0011", 21 => "1111", 22 => "0001", 23 => "0010", 24 => "0011", 
    25 => "0010", 26 => "1101", 27 => "1110", 28 => "0101", 29 => "0011", 
    30 => "0010", 31 => "0000", 32 => "0001", 33 => "1110", 34 => "0010", 
    35 => "1110", 36 => "0000", 37 => "1110", 38 => "1111", 39 => "0011", 
    40 => "0100", 41 => "0001", 42 => "0100", 43 => "1101", 44 => "0101", 
    45 => "0010", 46 => "1000", 47 => "1111", 48 => "1110", 49 => "0111", 
    50 to 52=> "0000", 53 => "1101", 54 => "0001", 55 => "1011", 56 => "0011", 
    57 => "0101", 58 => "0000", 59 => "1110", 60 => "1011", 61 => "0010", 
    62 => "0000", 63 => "0100" );

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

entity conv3_weight_convh5b is
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

architecture arch of conv3_weight_convh5b is
    component conv3_weight_convh5b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh5b_rom_U :  component conv3_weight_convh5b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


