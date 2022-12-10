-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhjb_rom is 
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


architecture rtl of conv3_weight_convhjb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000", 1 => "0010", 2 => "1010", 3 => "1101", 4 => "0011", 
    5 to 6=> "0010", 7 => "1101", 8 => "0010", 9 => "0001", 10 => "0010", 
    11 => "1110", 12 => "1100", 13 => "0001", 14 => "0100", 15 => "0001", 
    16 => "1111", 17 => "0001", 18 => "1110", 19 => "1011", 20 => "1111", 
    21 => "0001", 22 => "1011", 23 to 24=> "0001", 25 => "1101", 26 => "0000", 
    27 => "1111", 28 => "1100", 29 => "1011", 30 => "0110", 31 => "1110", 
    32 => "0001", 33 => "0011", 34 => "0001", 35 => "0101", 36 to 37=> "0011", 
    38 to 39=> "1101", 40 to 42=> "0001", 43 => "0000", 44 => "1011", 45 => "0001", 
    46 => "0010", 47 => "0011", 48 => "0010", 49 => "0011", 50 => "0010", 
    51 => "1101", 52 to 53=> "1111", 54 => "0000", 55 => "1100", 56 => "0110", 
    57 => "1101", 58 => "1110", 59 => "1101", 60 to 61=> "0001", 62 => "0000", 
    63 => "1111" );

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

entity conv3_weight_convhjb is
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

architecture arch of conv3_weight_convhjb is
    component conv3_weight_convhjb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhjb_rom_U :  component conv3_weight_convhjb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


