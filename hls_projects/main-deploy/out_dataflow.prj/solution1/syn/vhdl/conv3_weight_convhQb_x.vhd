-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhQb_x_rom is 
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


architecture rtl of conv3_weight_convhQb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010", 1 => "1011", 2 => "1010", 3 => "1000", 4 => "1011", 
    5 => "1100", 6 => "1111", 7 => "1110", 8 => "1000", 9 => "0000", 
    10 => "0011", 11 => "1111", 12 => "1101", 13 => "1011", 14 => "0101", 
    15 => "0010", 16 => "1111", 17 => "0011", 18 => "0010", 19 => "1101", 
    20 => "1001", 21 => "1110", 22 to 23=> "0010", 24 => "1110", 25 => "0000", 
    26 => "1100", 27 => "1111", 28 => "0000", 29 => "1001", 30 => "0100", 
    31 => "0001", 32 => "0101", 33 to 34=> "0000", 35 => "0011", 36 => "1111", 
    37 => "1001", 38 => "1101", 39 => "1011", 40 => "1101", 41 => "0000", 
    42 => "1010", 43 => "0100", 44 => "0000", 45 => "1110", 46 => "1111", 
    47 => "0001", 48 to 49=> "0100", 50 => "1010", 51 => "0010", 52 => "1101", 
    53 => "1111", 54 => "1011", 55 => "1010", 56 => "1100", 57 => "0110", 
    58 => "1100", 59 => "0011", 60 => "1110", 61 => "0010", 62 => "0000", 
    63 => "0011" );

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

entity conv3_weight_convhQb_x is
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

architecture arch of conv3_weight_convhQb_x is
    component conv3_weight_convhQb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhQb_x_rom_U :  component conv3_weight_convhQb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


