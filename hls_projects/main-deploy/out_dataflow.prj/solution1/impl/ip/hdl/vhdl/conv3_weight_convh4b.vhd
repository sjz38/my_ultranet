-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convh4b_rom is 
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


architecture rtl of conv3_weight_convh4b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0100", 1 => "0001", 2 => "0000", 3 to 4=> "0001", 5 => "0011", 
    6 to 7=> "0001", 8 => "0000", 9 to 10=> "0001", 11 => "1110", 12 => "1111", 
    13 => "0011", 14 => "1101", 15 => "1011", 16 to 17=> "0011", 18 => "1101", 
    19 => "1110", 20 => "0010", 21 => "0001", 22 => "0101", 23 => "0001", 
    24 => "0010", 25 => "0100", 26 to 27=> "0010", 28 => "1110", 29 => "0000", 
    30 => "1100", 31 => "0000", 32 => "1101", 33 to 34=> "0010", 35 => "1111", 
    36 => "1110", 37 to 38=> "1100", 39 => "0011", 40 => "0010", 41 => "0100", 
    42 => "0010", 43 => "0001", 44 => "1111", 45 => "0001", 46 => "1110", 
    47 to 48=> "0010", 49 => "0001", 50 => "1100", 51 => "0001", 52 to 53=> "1111", 
    54 => "1110", 55 => "1111", 56 => "0011", 57 => "0000", 58 => "1101", 
    59 => "0010", 60 => "1000", 61 => "0010", 62 => "0000", 63 => "1110" );

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

entity conv3_weight_convh4b is
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

architecture arch of conv3_weight_convh4b is
    component conv3_weight_convh4b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convh4b_rom_U :  component conv3_weight_convh4b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


