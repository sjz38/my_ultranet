-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi6b_rom is 
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


architecture rtl of conv3_weight_convi6b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 => "0010", 2 to 3=> "0011", 4 => "1100", 5 to 6=> "0000", 
    7 => "0011", 8 => "0010", 9 => "1111", 10 => "1101", 11 => "1110", 
    12 => "0011", 13 => "0010", 14 => "1111", 15 => "1101", 16 => "0000", 
    17 => "0010", 18 => "1111", 19 => "0001", 20 => "1111", 21 => "0100", 
    22 => "1111", 23 to 24=> "1110", 25 => "0010", 26 => "0001", 27 => "1111", 
    28 => "0000", 29 to 30=> "1101", 31 => "1111", 32 => "1110", 33 => "0001", 
    34 => "1110", 35 => "0001", 36 => "1110", 37 => "0010", 38 => "0000", 
    39 to 40=> "1101", 41 => "1110", 42 => "0011", 43 => "1100", 44 => "1101", 
    45 to 46=> "0000", 47 => "1110", 48 => "0010", 49 to 50=> "1110", 51 => "0010", 
    52 => "0000", 53 => "1111", 54 => "0000", 55 => "0011", 56 => "0100", 
    57 => "1111", 58 => "0011", 59 => "1110", 60 => "1111", 61 to 62=> "0000", 
    63 => "0001" );

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

entity conv3_weight_convi6b is
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

architecture arch of conv3_weight_convi6b is
    component conv3_weight_convi6b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi6b_rom_U :  component conv3_weight_convi6b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


