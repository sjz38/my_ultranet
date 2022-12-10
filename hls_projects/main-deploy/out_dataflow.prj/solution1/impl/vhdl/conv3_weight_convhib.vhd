-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhib_rom is 
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


architecture rtl of conv3_weight_convhib_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "0011", 2 => "1111", 3 => "0001", 4 to 7=> "1110", 
    8 => "0011", 9 => "1101", 10 to 11=> "1110", 12 => "1010", 13 => "1110", 
    14 to 15=> "1111", 16 => "0001", 17 => "1101", 18 => "0000", 19 => "0001", 
    20 => "1101", 21 => "1110", 22 => "1100", 23 => "1111", 24 => "1110", 
    25 => "0100", 26 => "0000", 27 => "0001", 28 => "1101", 29 => "1110", 
    30 => "0010", 31 => "1101", 32 => "0100", 33 => "0001", 34 => "0010", 
    35 => "0101", 36 => "1110", 37 => "1100", 38 => "0000", 39 => "1010", 
    40 => "0100", 41 => "0011", 42 => "0000", 43 to 44=> "1111", 45 => "0001", 
    46 => "0000", 47 => "1010", 48 => "1100", 49 => "0011", 50 => "0000", 
    51 to 52=> "0001", 53 => "1000", 54 => "0110", 55 => "1110", 56 => "1000", 
    57 => "0101", 58 => "0010", 59 => "1110", 60 => "0001", 61 => "1101", 
    62 => "1111", 63 => "0111" );

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

entity conv3_weight_convhib is
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

architecture arch of conv3_weight_convhib is
    component conv3_weight_convhib_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhib_rom_U :  component conv3_weight_convhib_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


