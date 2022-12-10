-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviwb_rom is 
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


architecture rtl of conv3_weight_conviwb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011", 1 => "1011", 2 => "1100", 3 => "1111", 4 => "1101", 
    5 => "1111", 6 => "1100", 7 => "1001", 8 => "0001", 9 => "1011", 
    10 => "0010", 11 => "1111", 12 => "0111", 13 => "1010", 14 => "0100", 
    15 => "0001", 16 => "1110", 17 => "1011", 18 => "0000", 19 => "1101", 
    20 => "0110", 21 => "0000", 22 => "0010", 23 => "0100", 24 => "1110", 
    25 => "0010", 26 => "0000", 27 => "0001", 28 => "0011", 29 => "1111", 
    30 => "0011", 31 => "0000", 32 => "0101", 33 => "0000", 34 => "1000", 
    35 => "0010", 36 => "1111", 37 => "0010", 38 => "0110", 39 => "0010", 
    40 => "0100", 41 => "0111", 42 => "0001", 43 => "1100", 44 => "0010", 
    45 => "1111", 46 => "0110", 47 => "1011", 48 => "1111", 49 => "0111", 
    50 => "0010", 51 => "1110", 52 => "1100", 53 => "0100", 54 => "1011", 
    55 to 56=> "0001", 57 => "1100", 58 => "1011", 59 => "0101", 60 => "1111", 
    61 to 62=> "0001", 63 => "1111" );

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

entity conv3_weight_conviwb is
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

architecture arch of conv3_weight_conviwb is
    component conv3_weight_conviwb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviwb_rom_U :  component conv3_weight_conviwb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


