-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviBb_x_rom is 
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


architecture rtl of conv3_weight_conviBb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110", 1 to 2=> "0001", 3 => "1101", 4 => "0011", 5 to 6=> "1111", 
    7 => "1100", 8 => "0111", 9 => "0101", 10 => "0001", 11 => "0100", 
    12 => "0101", 13 => "1100", 14 => "0010", 15 => "1010", 16 to 17=> "0000", 
    18 => "0101", 19 => "1111", 20 => "1100", 21 => "1000", 22 => "1110", 
    23 => "1111", 24 => "1100", 25 => "0110", 26 => "1110", 27 => "0100", 
    28 => "0000", 29 => "0111", 30 => "1110", 31 => "1100", 32 to 33=> "1111", 
    34 => "1110", 35 => "0001", 36 => "1111", 37 => "0100", 38 => "0011", 
    39 => "1111", 40 => "0010", 41 => "1110", 42 => "0001", 43 => "0100", 
    44 => "0110", 45 => "1101", 46 => "1110", 47 => "1011", 48 to 50=> "1110", 
    51 => "0001", 52 => "0011", 53 => "1000", 54 => "0010", 55 => "0011", 
    56 to 57=> "0001", 58 => "0010", 59 => "1101", 60 => "1100", 61 => "0101", 
    62 => "0000", 63 => "0110" );

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

entity conv3_weight_conviBb_x is
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

architecture arch of conv3_weight_conviBb_x is
    component conv3_weight_conviBb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviBb_x_rom_U :  component conv3_weight_conviBb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

