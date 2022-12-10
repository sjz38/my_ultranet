-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhRb_x_rom is 
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


architecture rtl of conv3_weight_convhRb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1100", 1 => "0111", 2 => "0011", 3 => "0001", 4 => "0011", 
    5 => "1100", 6 => "1101", 7 => "1011", 8 => "1101", 9 => "0000", 
    10 => "1011", 11 => "1111", 12 => "1001", 13 => "0010", 14 => "0001", 
    15 => "0100", 16 => "0001", 17 => "0111", 18 => "1001", 19 => "1110", 
    20 => "1100", 21 to 22=> "1101", 23 => "1111", 24 => "1100", 25 => "0010", 
    26 => "1110", 27 => "1100", 28 => "1011", 29 => "1111", 30 => "0000", 
    31 => "1010", 32 => "1111", 33 => "0000", 34 => "0001", 35 => "1110", 
    36 => "0010", 37 => "1101", 38 to 39=> "0001", 40 => "1010", 41 => "1011", 
    42 => "1010", 43 => "0100", 44 => "1111", 45 => "0010", 46 => "1111", 
    47 to 48=> "0001", 49 => "1101", 50 => "1111", 51 => "0001", 52 => "1100", 
    53 => "1110", 54 => "1111", 55 => "1110", 56 => "1101", 57 => "0110", 
    58 => "1111", 59 => "0010", 60 => "0101", 61 => "1011", 62 => "1111", 
    63 => "1110" );

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

entity conv3_weight_convhRb_x is
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

architecture arch of conv3_weight_convhRb_x is
    component conv3_weight_convhRb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhRb_x_rom_U :  component conv3_weight_convhRb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


