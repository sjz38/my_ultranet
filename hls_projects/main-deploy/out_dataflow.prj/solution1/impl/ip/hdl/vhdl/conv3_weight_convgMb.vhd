-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgMb_rom is 
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


architecture rtl of conv3_weight_convgMb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "0001", 2 => "1100", 3 => "1111", 4 => "0001", 
    5 => "0110", 6 => "1110", 7 => "1111", 8 => "1011", 9 => "1010", 
    10 => "1111", 11 => "1011", 12 => "1111", 13 => "1011", 14 => "0010", 
    15 => "0001", 16 => "1000", 17 => "1111", 18 => "0001", 19 => "1101", 
    20 => "0000", 21 to 22=> "0001", 23 => "0100", 24 => "1001", 25 to 26=> "1111", 
    27 => "1100", 28 => "1111", 29 => "1100", 30 => "1000", 31 => "1111", 
    32 => "1101", 33 => "1111", 34 => "0010", 35 => "0000", 36 => "0100", 
    37 => "1111", 38 => "0001", 39 => "1000", 40 => "0010", 41 => "0100", 
    42 => "1111", 43 to 44=> "1101", 45 => "0001", 46 => "0011", 47 to 48=> "1000", 
    49 => "1110", 50 => "0001", 51 => "1101", 52 => "1000", 53 => "1010", 
    54 => "0000", 55 to 56=> "0010", 57 => "1010", 58 to 59=> "0011", 60 => "1110", 
    61 => "0110", 62 => "0000", 63 => "1111" );

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

entity conv3_weight_convgMb is
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

architecture arch of conv3_weight_convgMb is
    component conv3_weight_convgMb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgMb_rom_U :  component conv3_weight_convgMb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


