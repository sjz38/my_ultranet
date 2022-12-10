-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveyR_rom is 
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


architecture rtl of conv3_weight_conveyR_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011", 1 => "0010", 2 => "0111", 3 => "1111", 4 to 5=> "0010", 
    6 => "1011", 7 => "0010", 8 => "0001", 9 => "1101", 10 => "1111", 
    11 => "0100", 12 => "1111", 13 => "1110", 14 => "1100", 15 to 16=> "0010", 
    17 => "0100", 18 => "0101", 19 => "1011", 20 => "1101", 21 => "0001", 
    22 => "0011", 23 => "1111", 24 => "0011", 25 => "1111", 26 => "0001", 
    27 => "0000", 28 => "1110", 29 => "0001", 30 => "1100", 31 => "1111", 
    32 => "0110", 33 => "0100", 34 => "0000", 35 => "0001", 36 => "1110", 
    37 => "1101", 38 to 39=> "0001", 40 => "1011", 41 => "0010", 42 => "1110", 
    43 => "1100", 44 => "1001", 45 => "0100", 46 to 47=> "0001", 48 to 49=> "1011", 
    50 => "1100", 51 => "0001", 52 => "0111", 53 => "0010", 54 => "1100", 
    55 => "1101", 56 => "0011", 57 => "1011", 58 => "1111", 59 to 60=> "1110", 
    61 => "0001", 62 => "1111", 63 => "1100" );

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

entity conv3_weight_conveyR is
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

architecture arch of conv3_weight_conveyR is
    component conv3_weight_conveyR_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveyR_rom_U :  component conv3_weight_conveyR_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


