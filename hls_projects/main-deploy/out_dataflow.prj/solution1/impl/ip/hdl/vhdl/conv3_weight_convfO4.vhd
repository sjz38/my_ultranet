-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfO4_rom is 
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


architecture rtl of conv3_weight_convfO4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111", 1 to 2=> "1101", 3 => "0100", 4 => "0000", 5 to 6=> "1010", 
    7 => "1101", 8 => "1110", 9 => "0001", 10 => "1101", 11 => "0000", 
    12 => "0100", 13 => "1000", 14 => "1101", 15 => "1100", 16 => "1011", 
    17 => "0001", 18 => "0010", 19 => "0001", 20 => "1101", 21 => "1100", 
    22 => "1101", 23 => "0011", 24 => "0010", 25 => "1011", 26 => "1010", 
    27 => "1111", 28 => "0001", 29 => "0000", 30 => "0011", 31 => "0100", 
    32 => "1101", 33 => "0000", 34 => "0010", 35 => "0100", 36 => "1110", 
    37 => "0010", 38 => "0000", 39 => "1011", 40 => "1010", 41 => "0000", 
    42 => "0101", 43 => "1110", 44 => "0111", 45 => "0100", 46 => "0110", 
    47 => "0000", 48 => "0101", 49 => "1110", 50 => "1001", 51 => "0110", 
    52 => "1101", 53 => "0110", 54 => "1111", 55 => "0000", 56 to 57=> "0010", 
    58 to 59=> "0011", 60 => "1100", 61 => "1110", 62 => "0001", 63 => "1100" );

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

entity conv3_weight_convfO4 is
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

architecture arch of conv3_weight_convfO4 is
    component conv3_weight_convfO4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfO4_rom_U :  component conv3_weight_convfO4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

