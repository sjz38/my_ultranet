-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi3b_rom is 
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


architecture rtl of conv3_weight_convi3b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111", 1 => "1011", 2 => "0000", 3 => "0011", 4 => "1100", 
    5 => "1110", 6 => "0100", 7 => "1101", 8 => "0011", 9 => "0000", 
    10 => "1111", 11 => "1100", 12 => "0001", 13 => "0000", 14 => "1101", 
    15 to 16=> "1111", 17 => "0000", 18 => "1110", 19 => "0000", 20 => "1111", 
    21 => "1011", 22 => "0001", 23 to 24=> "0010", 25 to 26=> "0001", 27 => "0011", 
    28 => "1110", 29 => "0011", 30 => "1111", 31 => "1101", 32 => "0001", 
    33 => "0110", 34 => "1011", 35 => "0010", 36 => "1101", 37 => "0001", 
    38 => "0100", 39 => "0000", 40 => "1110", 41 => "1100", 42 => "0100", 
    43 => "0001", 44 => "0010", 45 => "0001", 46 => "1111", 47 => "1101", 
    48 => "0000", 49 => "1110", 50 => "1100", 51 to 52=> "1111", 53 to 54=> "0100", 
    55 => "1010", 56 => "0100", 57 => "1111", 58 => "0101", 59 => "1111", 
    60 to 61=> "1110", 62 => "0000", 63 => "0001" );

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

entity conv3_weight_convi3b is
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

architecture arch of conv3_weight_convi3b is
    component conv3_weight_convi3b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi3b_rom_U :  component conv3_weight_convi3b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


