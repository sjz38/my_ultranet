-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveJT_rom is 
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


architecture rtl of conv3_weight_conveJT_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "00011", 2 => "00000", 3 to 4=> "11101", 5 => "01000", 
    6 => "00000", 7 => "11111", 8 => "11101", 9 => "00001", 10 => "11110", 
    11 => "00010", 12 => "11111", 13 => "00111", 14 to 15=> "11111", 16 => "11011", 
    17 => "11001", 18 to 19=> "00100", 20 => "00010", 21 => "00100", 22 => "00000", 
    23 => "00010", 24 => "11110", 25 => "00001", 26 to 27=> "11110", 28 => "00111", 
    29 => "11101", 30 => "11100", 31 => "11011", 32 to 33=> "11100", 34 => "00000", 
    35 => "11111", 36 => "11000", 37 => "11110", 38 => "00011", 39 => "11100", 
    40 => "00101", 41 => "00001", 42 => "00000", 43 => "11110", 44 => "11111", 
    45 => "01000", 46 => "00001", 47 => "00011", 48 => "11101", 49 => "11110", 
    50 => "11010", 51 => "11011", 52 => "11111", 53 => "01000", 54 to 55=> "00001", 
    56 => "11100", 57 => "00001", 58 => "11010", 59 => "11110", 60 => "11111", 
    61 => "11110", 62 => "00001", 63 => "00100" );

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

entity conv3_weight_conveJT is
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

architecture arch of conv3_weight_conveJT is
    component conv3_weight_conveJT_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveJT_rom_U :  component conv3_weight_conveJT_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


