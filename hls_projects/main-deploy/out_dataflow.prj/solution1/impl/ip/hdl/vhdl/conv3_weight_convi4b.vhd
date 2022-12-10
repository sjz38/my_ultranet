-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi4b_rom is 
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


architecture rtl of conv3_weight_convi4b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "1110", 2 to 4=> "1101", 5 => "1111", 6 => "0001", 
    7 => "1111", 8 => "1110", 9 => "1111", 10 => "0010", 11 => "1110", 
    12 => "0100", 13 => "0011", 14 => "1101", 15 => "1110", 16 => "1011", 
    17 to 18=> "0001", 19 => "1110", 20 => "1111", 21 => "1011", 22 => "1111", 
    23 => "0100", 24 => "1111", 25 => "0001", 26 => "0011", 27 => "1110", 
    28 => "0000", 29 => "0010", 30 => "1111", 31 => "1100", 32 => "1101", 
    33 => "0100", 34 => "1010", 35 => "0100", 36 => "1110", 37 => "0101", 
    38 => "1111", 39 => "0101", 40 => "0000", 41 => "1111", 42 => "1100", 
    43 => "1111", 44 => "1101", 45 to 46=> "1110", 47 to 48=> "0010", 49 => "0000", 
    50 => "1110", 51 => "0000", 52 => "0010", 53 => "1011", 54 => "1111", 
    55 => "1101", 56 => "0010", 57 => "1100", 58 => "0001", 59 to 60=> "1111", 
    61 => "0010", 62 => "1111", 63 => "0010" );

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

entity conv3_weight_convi4b is
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

architecture arch of conv3_weight_convi4b is
    component conv3_weight_convi4b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi4b_rom_U :  component conv3_weight_convi4b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


