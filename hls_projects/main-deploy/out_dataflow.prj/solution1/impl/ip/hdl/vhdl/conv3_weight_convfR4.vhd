-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfR4_rom is 
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


architecture rtl of conv3_weight_convfR4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "1111", 2 => "0001", 3 => "1011", 4 => "1110", 
    5 => "0011", 6 => "0001", 7 => "1110", 8 => "0010", 9 => "0001", 
    10 => "1011", 11 => "1100", 12 => "0000", 13 => "1110", 14 => "0011", 
    15 => "1100", 16 => "0000", 17 => "1101", 18 => "1010", 19 => "1100", 
    20 => "0011", 21 => "1111", 22 => "0101", 23 => "0001", 24 => "1111", 
    25 => "1011", 26 => "1111", 27 => "0010", 28 => "0000", 29 => "1110", 
    30 => "1111", 31 => "0000", 32 => "0100", 33 => "0000", 34 => "1100", 
    35 to 36=> "0100", 37 => "1110", 38 => "1100", 39 => "1101", 40 => "1001", 
    41 => "0011", 42 => "1111", 43 => "1100", 44 => "1000", 45 => "1011", 
    46 => "1100", 47 => "0010", 48 => "0100", 49 => "0000", 50 => "1111", 
    51 => "1100", 52 => "1010", 53 to 54=> "0000", 55 => "1101", 56 => "0001", 
    57 => "0100", 58 => "0010", 59 => "0001", 60 => "1001", 61 => "0011", 
    62 => "0001", 63 => "1011" );

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

entity conv3_weight_convfR4 is
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

architecture arch of conv3_weight_convfR4 is
    component conv3_weight_convfR4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfR4_rom_U :  component conv3_weight_convfR4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


