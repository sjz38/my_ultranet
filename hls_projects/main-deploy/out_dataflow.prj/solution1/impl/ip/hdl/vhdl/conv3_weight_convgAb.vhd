-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgAb_rom is 
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


architecture rtl of conv3_weight_convgAb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1011", 1 => "0011", 2 => "0000", 3 => "1110", 4 => "0011", 
    5 => "1000", 6 => "0001", 7 => "0000", 8 to 9=> "1111", 10 => "1101", 
    11 => "1111", 12 => "0011", 13 => "1111", 14 => "1110", 15 to 16=> "1111", 
    17 => "1110", 18 => "0000", 19 => "1110", 20 => "1111", 21 => "0000", 
    22 => "0010", 23 to 24=> "1110", 25 => "0000", 26 => "1001", 27 => "1111", 
    28 => "0010", 29 => "1011", 30 => "0100", 31 => "0001", 32 => "0011", 
    33 => "1110", 34 => "0011", 35 to 36=> "0001", 37 => "1101", 38 => "1000", 
    39 => "0001", 40 => "0011", 41 => "0000", 42 => "1110", 43 => "1111", 
    44 => "1000", 45 => "1111", 46 => "1110", 47 => "0001", 48 => "1101", 
    49 => "0010", 50 => "1110", 51 => "0110", 52 => "0010", 53 => "0001", 
    54 => "0000", 55 => "0100", 56 => "0011", 57 => "0001", 58 => "1100", 
    59 => "1101", 60 => "0001", 61 => "0010", 62 => "0001", 63 => "0010" );

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

entity conv3_weight_convgAb is
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

architecture arch of conv3_weight_convgAb is
    component conv3_weight_convgAb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgAb_rom_U :  component conv3_weight_convgAb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


