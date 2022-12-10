-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi5b_rom is 
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


architecture rtl of conv3_weight_convi5b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "1110", 2 => "1100", 3 => "1010", 4 => "1111", 5 to 6=> "1101", 
    7 => "1110", 8 => "0010", 9 => "0001", 10 => "0101", 11 => "0000", 
    12 => "0011", 13 => "1110", 14 => "0001", 15 => "0000", 16 => "1101", 
    17 => "0010", 18 => "0111", 19 => "1110", 20 => "0010", 21 to 22=> "0000", 
    23 => "0001", 24 => "0010", 25 => "0001", 26 => "0000", 27 to 28=> "1111", 
    29 => "1110", 30 => "0000", 31 => "0110", 32 => "1110", 33 => "0010", 
    34 => "1010", 35 => "0111", 36 to 37=> "0010", 38 => "1111", 39 => "1101", 
    40 => "0011", 41 => "0000", 42 => "0001", 43 => "0000", 44 to 45=> "0010", 
    46 => "1110", 47 => "1101", 48 => "0000", 49 => "0011", 50 => "0000", 
    51 => "0001", 52 => "0011", 53 => "1010", 54 => "0001", 55 => "1111", 
    56 => "0000", 57 => "1100", 58 => "0000", 59 => "0001", 60 => "0011", 
    61 to 62=> "1111", 63 => "0000" );

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

entity conv3_weight_convi5b is
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

architecture arch of conv3_weight_convi5b is
    component conv3_weight_convi5b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi5b_rom_U :  component conv3_weight_convi5b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


