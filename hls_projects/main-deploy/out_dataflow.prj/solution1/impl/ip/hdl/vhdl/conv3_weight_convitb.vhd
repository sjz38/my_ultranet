-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convitb_rom is 
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


architecture rtl of conv3_weight_convitb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001", 1 => "0101", 2 => "1101", 3 => "0010", 4 => "1111", 
    5 => "0111", 6 => "1011", 7 => "1000", 8 => "0000", 9 => "1101", 
    10 => "1001", 11 => "1100", 12 => "1111", 13 => "1000", 14 => "1110", 
    15 => "0000", 16 to 17=> "1110", 18 => "0001", 19 => "0100", 20 => "1010", 
    21 => "1111", 22 => "0010", 23 => "1010", 24 => "1110", 25 => "1010", 
    26 => "0100", 27 => "1111", 28 => "0110", 29 to 31=> "0010", 32 => "0110", 
    33 => "0001", 34 => "1011", 35 => "0010", 36 => "0001", 37 => "1100", 
    38 => "0010", 39 => "1001", 40 => "1100", 41 => "0010", 42 => "0001", 
    43 => "1010", 44 => "0011", 45 => "0001", 46 => "0011", 47 => "1111", 
    48 => "0000", 49 => "0010", 50 => "0100", 51 => "1111", 52 => "1000", 
    53 => "0000", 54 => "1111", 55 => "0010", 56 => "1111", 57 => "1100", 
    58 => "0110", 59 => "1111", 60 => "1101", 61 => "0110", 62 => "0000", 
    63 => "1001" );

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

entity conv3_weight_convitb is
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

architecture arch of conv3_weight_convitb is
    component conv3_weight_convitb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convitb_rom_U :  component conv3_weight_convitb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


