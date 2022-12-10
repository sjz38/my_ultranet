-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi7b_rom is 
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


architecture rtl of conv3_weight_convi7b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011", 1 => "0100", 2 => "1110", 3 => "1111", 4 => "1101", 
    5 => "0000", 6 => "0001", 7 => "0011", 8 => "1110", 9 => "1100", 
    10 => "1001", 11 to 12=> "0010", 13 => "0000", 14 => "1101", 15 => "1111", 
    16 => "1110", 17 => "0001", 18 to 19=> "0010", 20 to 21=> "0001", 22 => "1111", 
    23 => "0001", 24 => "1010", 25 => "0001", 26 => "0011", 27 => "1110", 
    28 => "0010", 29 => "0001", 30 => "1111", 31 to 33=> "1101", 34 => "1000", 
    35 => "0011", 36 => "1101", 37 => "0000", 38 => "1011", 39 to 40=> "1111", 
    41 => "1011", 42 => "0000", 43 => "1110", 44 => "1100", 45 => "1110", 
    46 => "1001", 47 => "0101", 48 to 49=> "0011", 50 => "1111", 51 => "0010", 
    52 => "1011", 53 => "1111", 54 to 55=> "1110", 56 => "0001", 57 to 58=> "1111", 
    59 => "1101", 60 => "1100", 61 => "0001", 62 => "0000", 63 => "0011" );

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

entity conv3_weight_convi7b is
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

architecture arch of conv3_weight_convi7b is
    component conv3_weight_convi7b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi7b_rom_U :  component conv3_weight_convi7b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


