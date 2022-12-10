-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveFT_rom is 
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


architecture rtl of conv3_weight_conveFT_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110", 1 => "1010", 2 => "1110", 3 to 4=> "1101", 5 => "0010", 
    6 => "1011", 7 => "0100", 8 => "1000", 9 => "0100", 10 => "0101", 
    11 => "0111", 12 => "0001", 13 => "1101", 14 => "0010", 15 => "1111", 
    16 => "0100", 17 => "1111", 18 => "1100", 19 => "1011", 20 => "0010", 
    21 => "0100", 22 => "1111", 23 => "0101", 24 => "1011", 25 => "0111", 
    26 => "1110", 27 => "1111", 28 => "1100", 29 => "1111", 30 => "0101", 
    31 => "0010", 32 => "0000", 33 => "0001", 34 => "0101", 35 => "0001", 
    36 => "0100", 37 => "0000", 38 => "1100", 39 => "0010", 40 => "0101", 
    41 => "1011", 42 => "0100", 43 => "1111", 44 to 45=> "0101", 46 => "0010", 
    47 => "0111", 48 => "1100", 49 => "0010", 50 => "1110", 51 => "1010", 
    52 => "0000", 53 => "1011", 54 => "0110", 55 => "1110", 56 => "0101", 
    57 => "1110", 58 => "0001", 59 => "1101", 60 => "1110", 61 => "1101", 
    62 => "0000", 63 => "1010" );

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

entity conv3_weight_conveFT is
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

architecture arch of conv3_weight_conveFT is
    component conv3_weight_conveFT_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveFT_rom_U :  component conv3_weight_conveFT_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


