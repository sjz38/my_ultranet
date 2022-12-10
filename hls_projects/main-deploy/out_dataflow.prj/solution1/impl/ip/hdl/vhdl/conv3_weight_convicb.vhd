-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convicb_rom is 
    generic(
             DWIDTH     : integer := 5; 
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


architecture rtl of conv3_weight_convicb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 to 2=> "11101", 3 => "00100", 4 => "00011", 5 => "00111", 
    6 => "00010", 7 => "11000", 8 => "00000", 9 => "11110", 10 => "11111", 
    11 => "00000", 12 => "11111", 13 => "11110", 14 => "00101", 15 => "00011", 
    16 => "00010", 17 => "00001", 18 to 19=> "00000", 20 => "00011", 21 => "00101", 
    22 => "00111", 23 => "11001", 24 => "11101", 25 => "11100", 26 => "00010", 
    27 => "00011", 28 => "11111", 29 => "11010", 30 => "11111", 31 => "00110", 
    32 => "01000", 33 => "11000", 34 => "11111", 35 => "00111", 36 => "00010", 
    37 => "11000", 38 => "00011", 39 => "11000", 40 => "00011", 41 => "00110", 
    42 => "11110", 43 => "11010", 44 => "00011", 45 => "00101", 46 => "00100", 
    47 => "11111", 48 => "11110", 49 => "00000", 50 => "00001", 51 to 52=> "00010", 
    53 => "11101", 54 => "01000", 55 => "00100", 56 => "11101", 57 => "00010", 
    58 => "11001", 59 => "00010", 60 => "11011", 61 to 62=> "11111", 63 => "00100" );

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

entity conv3_weight_convicb is
    generic (
        DataWidth : INTEGER := 5;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convicb is
    component conv3_weight_convicb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convicb_rom_U :  component conv3_weight_convicb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


