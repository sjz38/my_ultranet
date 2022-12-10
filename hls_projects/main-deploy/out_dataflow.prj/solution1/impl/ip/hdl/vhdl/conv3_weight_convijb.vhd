-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convijb_rom is 
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


architecture rtl of conv3_weight_convijb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1010", 1 => "0101", 2 => "0010", 3 => "0000", 4 => "1110", 
    5 to 6=> "1011", 7 => "1100", 8 => "0010", 9 => "1111", 10 => "0001", 
    11 => "0000", 12 => "0011", 13 => "1101", 14 => "0100", 15 => "1101", 
    16 => "0001", 17 => "0000", 18 => "0010", 19 => "1010", 20 to 21=> "1101", 
    22 => "0010", 23 => "0001", 24 => "1111", 25 => "1110", 26 => "0001", 
    27 => "0110", 28 => "0011", 29 to 30=> "0000", 31 => "1111", 32 => "0111", 
    33 => "0001", 34 => "0000", 35 => "1101", 36 => "0100", 37 => "1111", 
    38 => "0010", 39 => "1110", 40 => "0100", 41 => "0001", 42 => "0110", 
    43 => "0101", 44 => "1110", 45 => "0001", 46 => "0100", 47 => "1001", 
    48 to 49=> "0000", 50 => "1100", 51 => "1010", 52 => "1111", 53 => "0010", 
    54 => "1110", 55 => "0010", 56 => "0000", 57 => "1110", 58 to 59=> "1111", 
    60 => "0000", 61 => "1111", 62 => "0000", 63 => "0100" );

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

entity conv3_weight_convijb is
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

architecture arch of conv3_weight_convijb is
    component conv3_weight_convijb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convijb_rom_U :  component conv3_weight_convijb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


