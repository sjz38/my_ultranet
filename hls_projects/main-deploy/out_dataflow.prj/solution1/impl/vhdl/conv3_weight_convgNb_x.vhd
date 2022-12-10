-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgNb_x_rom is 
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


architecture rtl of conv3_weight_convgNb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "0001", 2 => "1000", 3 => "0111", 4 => "0100", 5 to 6=> "0000", 
    7 => "1001", 8 => "0100", 9 => "1011", 10 => "1010", 11 => "0001", 
    12 => "0010", 13 => "1010", 14 => "0110", 15 => "1101", 16 => "1011", 
    17 => "0010", 18 => "1010", 19 => "1000", 20 => "0000", 21 => "1101", 
    22 => "0010", 23 => "1010", 24 => "1100", 25 => "0111", 26 => "1100", 
    27 => "0010", 28 => "1100", 29 => "1010", 30 => "0110", 31 => "0001", 
    32 => "0011", 33 => "1001", 34 => "1000", 35 => "1111", 36 => "0000", 
    37 => "1110", 38 => "0011", 39 => "1101", 40 => "0010", 41 to 42=> "1110", 
    43 => "1111", 44 to 45=> "1101", 46 => "0001", 47 to 48=> "1000", 49 to 50=> "1011", 
    51 => "0001", 52 => "1000", 53 => "1001", 54 => "1011", 55 to 56=> "0011", 
    57 => "1000", 58 => "1101", 59 => "0101", 60 => "0000", 61 => "0010", 
    62 => "1111", 63 => "1101" );

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

entity conv3_weight_convgNb_x is
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

architecture arch of conv3_weight_convgNb_x is
    component conv3_weight_convgNb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgNb_x_rom_U :  component conv3_weight_convgNb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


