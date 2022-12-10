-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgDb_rom is 
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


architecture rtl of conv3_weight_convgDb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "11111", 2 => "00100", 3 => "00001", 4 => "00100", 
    5 => "00001", 6 => "11100", 7 => "00001", 8 => "11110", 9 => "00001", 
    10 => "00000", 11 => "00010", 12 => "00011", 13 => "11010", 14 => "00011", 
    15 to 16=> "00010", 17 => "11010", 18 => "11101", 19 to 20=> "11110", 21 => "00000", 
    22 => "00010", 23 => "00110", 24 => "11100", 25 => "00000", 26 => "11011", 
    27 => "11100", 28 => "00011", 29 => "11101", 30 => "00101", 31 => "00000", 
    32 => "00010", 33 => "11100", 34 => "00000", 35 => "00001", 36 => "11111", 
    37 => "11100", 38 => "11110", 39 => "00100", 40 => "00000", 41 => "00011", 
    42 to 43=> "11110", 44 => "11000", 45 => "11110", 46 => "11101", 47 => "00010", 
    48 => "11110", 49 to 50=> "00110", 51 => "01000", 52 => "11111", 53 => "00010", 
    54 to 55=> "00111", 56 to 57=> "00010", 58 => "11110", 59 => "11011", 60 => "00001", 
    61 => "11110", 62 => "00000", 63 => "00010" );

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

entity conv3_weight_convgDb is
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

architecture arch of conv3_weight_convgDb is
    component conv3_weight_convgDb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgDb_rom_U :  component conv3_weight_convgDb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


