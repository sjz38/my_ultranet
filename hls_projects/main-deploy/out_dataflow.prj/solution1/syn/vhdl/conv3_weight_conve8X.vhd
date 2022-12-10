-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve8X_rom is 
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


architecture rtl of conv3_weight_conve8X_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001", 1 => "0000", 2 => "0010", 3 to 4=> "0000", 5 => "1100", 
    6 => "0110", 7 => "1110", 8 => "1001", 9 => "1110", 10 => "1100", 
    11 => "1101", 12 => "0010", 13 => "1110", 14 => "1011", 15 => "1101", 
    16 => "0100", 17 => "1100", 18 => "1000", 19 => "0011", 20 to 21=> "0001", 
    22 => "0010", 23 => "1010", 24 to 25=> "1011", 26 => "0010", 27 => "1110", 
    28 to 30=> "1011", 31 => "1000", 32 => "1011", 33 => "1101", 34 => "1110", 
    35 => "1010", 36 => "0001", 37 => "1010", 38 => "1111", 39 => "1011", 
    40 => "1100", 41 => "0001", 42 => "1111", 43 => "1011", 44 => "0100", 
    45 => "0011", 46 => "1010", 47 => "1011", 48 => "0001", 49 => "1101", 
    50 => "1010", 51 => "0100", 52 => "1101", 53 => "0011", 54 => "0001", 
    55 => "0110", 56 => "1011", 57 => "0111", 58 => "0010", 59 to 60=> "1111", 
    61 => "0000", 62 => "1111", 63 => "0001" );

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

entity conv3_weight_conve8X is
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

architecture arch of conv3_weight_conve8X is
    component conv3_weight_conve8X_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve8X_rom_U :  component conv3_weight_conve8X_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


