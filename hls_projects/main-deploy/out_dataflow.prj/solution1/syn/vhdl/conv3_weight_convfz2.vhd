-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfz2_rom is 
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


architecture rtl of conv3_weight_convfz2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 => "0011", 2 => "0001", 3 => "1100", 4 => "1000", 
    5 => "0100", 6 => "0010", 7 => "0000", 8 => "1000", 9 => "1101", 
    10 to 11=> "0100", 12 => "1110", 13 => "1001", 14 => "0001", 15 => "0100", 
    16 => "1000", 17 => "1100", 18 => "1110", 19 => "1011", 20 => "0011", 
    21 to 22=> "0000", 23 => "0001", 24 => "1101", 25 => "1100", 26 => "0110", 
    27 => "0000", 28 => "0101", 29 => "1111", 30 => "0001", 31 => "0011", 
    32 => "1101", 33 => "0100", 34 => "0000", 35 => "0100", 36 => "1010", 
    37 => "0011", 38 => "1111", 39 => "1010", 40 => "1000", 41 => "0101", 
    42 => "0110", 43 => "0010", 44 => "1011", 45 => "1100", 46 => "1101", 
    47 => "0011", 48 => "1111", 49 => "0000", 50 => "0010", 51 => "1101", 
    52 => "1011", 53 => "1110", 54 => "0001", 55 => "0000", 56 => "0001", 
    57 to 58=> "0010", 59 => "0000", 60 => "0101", 61 => "0001", 62 => "1111", 
    63 => "0001" );

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

entity conv3_weight_convfz2 is
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

architecture arch of conv3_weight_convfz2 is
    component conv3_weight_convfz2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfz2_rom_U :  component conv3_weight_convfz2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


