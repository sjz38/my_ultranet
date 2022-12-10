-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi8b_rom is 
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


architecture rtl of conv3_weight_convi8b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111", 1 => "0100", 2 => "0010", 3 => "1011", 4 => "1110", 
    5 => "0001", 6 => "1101", 7 => "1111", 8 => "0100", 9 => "1110", 
    10 => "1001", 11 to 12=> "0001", 13 => "1001", 14 => "1111", 15 => "0101", 
    16 => "1101", 17 => "1110", 18 => "1101", 19 => "1111", 20 => "0100", 
    21 => "0010", 22 => "0000", 23 => "0011", 24 => "1110", 25 => "0000", 
    26 => "0010", 27 => "1110", 28 to 30=> "1111", 31 => "0010", 32 => "1001", 
    33 => "1110", 34 => "1100", 35 => "0101", 36 => "0001", 37 => "0011", 
    38 => "1100", 39 => "0000", 40 => "0001", 41 => "1101", 42 => "1111", 
    43 to 44=> "0001", 45 => "1101", 46 => "1010", 47 to 48=> "1111", 49 to 50=> "0001", 
    51 => "1111", 52 => "1101", 53 => "1011", 54 to 55=> "0000", 56 => "1101", 
    57 => "1011", 58 => "1111", 59 => "1011", 60 => "1110", 61 => "0011", 
    62 => "0000", 63 => "1110" );

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

entity conv3_weight_convi8b is
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

architecture arch of conv3_weight_convi8b is
    component conv3_weight_convi8b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi8b_rom_U :  component conv3_weight_convi8b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


