-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfX5_rom is 
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


architecture rtl of conv3_weight_convfX5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 => "0011", 2 => "0001", 3 => "0011", 4 => "0000", 
    5 to 6=> "1011", 7 to 8=> "1110", 9 => "1100", 10 => "1110", 11 => "0011", 
    12 => "1100", 13 => "1101", 14 => "0101", 15 => "1110", 16 => "1000", 
    17 => "1010", 18 => "1110", 19 => "0110", 20 => "1111", 21 => "1010", 
    22 => "0100", 23 => "0111", 24 => "1000", 25 => "1110", 26 => "0000", 
    27 => "1110", 28 to 30=> "0000", 31 => "1100", 32 => "0011", 33 => "0010", 
    34 => "0011", 35 => "0010", 36 => "0101", 37 to 38=> "1111", 39 => "1000", 
    40 => "1111", 41 => "0010", 42 => "0011", 43 => "1111", 44 => "0100", 
    45 to 46=> "0010", 47 => "1110", 48 => "1111", 49 => "0001", 50 => "1111", 
    51 to 52=> "0010", 53 => "0000", 54 => "1101", 55 to 56=> "1110", 57 => "0010", 
    58 => "1110", 59 => "0001", 60 => "1110", 61 => "1101", 62 => "0000", 
    63 => "1111" );

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

entity conv3_weight_convfX5 is
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

architecture arch of conv3_weight_convfX5 is
    component conv3_weight_convfX5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfX5_rom_U :  component conv3_weight_convfX5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


