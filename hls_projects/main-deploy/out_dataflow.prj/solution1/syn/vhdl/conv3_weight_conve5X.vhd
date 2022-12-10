-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve5X_rom is 
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


architecture rtl of conv3_weight_conve5X_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110", 1 => "0001", 2 => "1110", 3 => "0011", 4 => "0000", 
    5 => "1101", 6 => "0011", 7 to 8=> "1111", 9 => "1100", 10 => "0010", 
    11 => "1111", 12 => "0101", 13 => "1000", 14 => "0010", 15 to 16=> "1111", 
    17 => "0001", 18 => "1101", 19 => "0001", 20 => "0011", 21 => "0100", 
    22 => "1010", 23 => "1101", 24 => "1110", 25 => "1101", 26 => "1001", 
    27 => "0111", 28 => "0011", 29 => "1101", 30 => "0000", 31 => "1111", 
    32 => "1110", 33 => "1011", 34 => "0011", 35 => "0100", 36 => "1110", 
    37 => "1111", 38 => "0100", 39 to 40=> "1110", 41 to 42=> "0010", 43 => "1010", 
    44 => "0100", 45 => "0000", 46 => "1111", 47 => "1100", 48 => "1111", 
    49 => "0001", 50 => "1010", 51 => "0011", 52 => "0001", 53 => "1111", 
    54 => "0010", 55 => "1111", 56 => "0011", 57 => "1101", 58 => "1110", 
    59 => "0000", 60 => "1111", 61 => "0011", 62 => "0001", 63 => "0000" );

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

entity conv3_weight_conve5X is
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

architecture arch of conv3_weight_conve5X is
    component conv3_weight_conve5X_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve5X_rom_U :  component conv3_weight_conve5X_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


