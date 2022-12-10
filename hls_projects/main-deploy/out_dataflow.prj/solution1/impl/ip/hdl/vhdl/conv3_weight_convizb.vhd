-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convizb_rom is 
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


architecture rtl of conv3_weight_convizb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "1101", 2 => "0000", 3 => "0001", 4 to 5=> "1101", 6 => "1011", 
    7 => "1111", 8 => "0001", 9 => "0000", 10 => "0011", 11 => "0010", 
    12 => "0101", 13 => "0001", 14 => "0000", 15 => "1110", 16 => "0000", 
    17 => "1001", 18 => "1010", 19 => "1011", 20 => "0011", 21 => "1011", 
    22 => "0010", 23 => "1110", 24 => "1100", 25 => "0001", 26 => "1101", 
    27 => "0111", 28 => "0001", 29 to 30=> "0010", 31 to 32=> "1110", 33 => "1111", 
    34 to 35=> "0001", 36 => "1011", 37 to 38=> "0100", 39 => "0011", 40 => "1011", 
    41 => "0010", 42 to 43=> "1111", 44 => "0001", 45 => "0010", 46 => "1111", 
    47 => "1011", 48 => "0011", 49 => "0000", 50 => "1000", 51 => "0100", 
    52 => "0011", 53 => "1101", 54 => "0000", 55 => "0001", 56 => "0010", 
    57 => "1110", 58 => "0100", 59 => "0101", 60 => "1001", 61 => "0010", 
    62 => "0001", 63 => "1101" );

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

entity conv3_weight_convizb is
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

architecture arch of conv3_weight_convizb is
    component conv3_weight_convizb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convizb_rom_U :  component conv3_weight_convizb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


