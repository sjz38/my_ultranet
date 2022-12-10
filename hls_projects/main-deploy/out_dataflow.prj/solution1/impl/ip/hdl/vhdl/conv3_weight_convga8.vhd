-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convga8_rom is 
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


architecture rtl of conv3_weight_convga8_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011", 1 => "0111", 2 => "1111", 3 => "0111", 4 => "0010", 
    5 => "1011", 6 => "0011", 7 => "1101", 8 => "0011", 9 to 10=> "0000", 
    11 => "1111", 12 => "0000", 13 => "1110", 14 => "0001", 15 to 16=> "1110", 
    17 => "1101", 18 => "1110", 19 => "0001", 20 => "1100", 21 => "0000", 
    22 => "1111", 23 => "0001", 24 => "1111", 25 => "0001", 26 => "0010", 
    27 => "1110", 28 => "1101", 29 => "1100", 30 to 31=> "1111", 32 => "0000", 
    33 => "0010", 34 => "0001", 35 => "1011", 36 => "1110", 37 => "0010", 
    38 => "0011", 39 => "0001", 40 => "1111", 41 => "0000", 42 => "0110", 
    43 => "0000", 44 => "0001", 45 => "0000", 46 => "1101", 47 => "0000", 
    48 => "1110", 49 => "1100", 50 to 51=> "1101", 52 => "0110", 53 => "1011", 
    54 => "0101", 55 => "1101", 56 => "0000", 57 => "0001", 58 => "0010", 
    59 => "1111", 60 => "1011", 61 to 62=> "1111", 63 => "1100" );

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

entity conv3_weight_convga8 is
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

architecture arch of conv3_weight_convga8 is
    component conv3_weight_convga8_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convga8_rom_U :  component conv3_weight_convga8_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


