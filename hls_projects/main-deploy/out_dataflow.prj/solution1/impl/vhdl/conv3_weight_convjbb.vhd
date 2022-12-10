-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convjbb_rom is 
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


architecture rtl of conv3_weight_convjbb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "0011", 2 to 3=> "0010", 4 => "1111", 5 => "0011", 
    6 => "1110", 7 => "0001", 8 => "0000", 9 => "1100", 10 => "1111", 
    11 => "0010", 12 => "1001", 13 => "1111", 14 => "0000", 15 => "0111", 
    16 => "1101", 17 => "0011", 18 => "1001", 19 => "1110", 20 => "0010", 
    21 => "0100", 22 => "0010", 23 => "0011", 24 => "0100", 25 => "0000", 
    26 to 27=> "1111", 28 => "1110", 29 => "0011", 30 => "1111", 31 => "0011", 
    32 => "1011", 33 => "1111", 34 => "0000", 35 to 36=> "0101", 37 => "1110", 
    38 => "1010", 39 => "1111", 40 => "1101", 41 => "0100", 42 => "1100", 
    43 => "0100", 44 => "0011", 45 => "1110", 46 => "1100", 47 => "0010", 
    48 => "0000", 49 => "0011", 50 => "0001", 51 => "0010", 52 => "0000", 
    53 => "1011", 54 => "1110", 55 => "0111", 56 => "1101", 57 => "1110", 
    58 => "1100", 59 => "1101", 60 => "1111", 61 => "0010", 62 => "0001", 
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

entity conv3_weight_convjbb is
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

architecture arch of conv3_weight_convjbb is
    component conv3_weight_convjbb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convjbb_rom_U :  component conv3_weight_convjbb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


