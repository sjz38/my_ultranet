-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhhb_rom is 
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


architecture rtl of conv3_weight_convhhb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111", 1 => "0001", 2 => "1110", 3 => "1101", 4 => "1110", 
    5 => "0011", 6 => "0100", 7 => "1000", 8 => "1110", 9 => "0001", 
    10 => "0011", 11 => "1101", 12 => "0011", 13 => "0101", 14 => "0010", 
    15 => "0011", 16 => "0001", 17 => "0011", 18 => "1111", 19 => "0010", 
    20 => "1110", 21 => "1000", 22 => "1110", 23 => "1011", 24 => "0101", 
    25 => "0011", 26 => "1111", 27 => "0110", 28 => "1000", 29 to 30=> "0011", 
    31 => "0000", 32 => "0011", 33 => "0001", 34 => "1011", 35 => "1111", 
    36 => "1010", 37 => "0000", 38 => "0101", 39 => "0011", 40 => "1100", 
    41 => "1111", 42 => "1000", 43 => "1011", 44 => "0001", 45 => "0110", 
    46 => "1101", 47 => "0000", 48 => "0010", 49 => "0000", 50 => "0011", 
    51 => "0000", 52 => "1101", 53 => "1011", 54 => "0001", 55 => "1101", 
    56 => "1111", 57 => "0100", 58 => "1110", 59 => "1111", 60 => "0001", 
    61 => "0010", 62 => "0000", 63 => "1011" );

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

entity conv3_weight_convhhb is
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

architecture arch of conv3_weight_convhhb is
    component conv3_weight_convhhb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhhb_rom_U :  component conv3_weight_convhhb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


