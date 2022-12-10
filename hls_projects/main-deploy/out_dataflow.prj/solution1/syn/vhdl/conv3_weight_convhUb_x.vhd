-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhUb_x_rom is 
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


architecture rtl of conv3_weight_convhUb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00111", 2 => "00001", 3 => "00110", 4 => "11110", 
    5 => "01000", 6 to 7=> "11111", 8 => "11110", 9 => "00000", 10 => "00001", 
    11 => "11101", 12 to 13=> "00001", 14 => "00000", 15 => "00001", 16 to 17=> "11101", 
    18 to 19=> "11110", 20 => "00010", 21 => "00001", 22 => "00000", 23 => "11011", 
    24 => "00010", 25 => "11100", 26 => "00011", 27 => "00010", 28 => "00100", 
    29 to 30=> "11101", 31 => "00001", 32 => "11111", 33 => "11110", 34 to 35=> "11111", 
    36 => "00001", 37 => "11110", 38 => "00010", 39 => "11001", 40 => "11101", 
    41 => "00011", 42 => "11111", 43 => "00000", 44 => "00010", 45 => "11101", 
    46 => "00001", 47 => "00010", 48 => "11110", 49 => "11101", 50 => "11111", 
    51 to 52=> "11101", 53 => "00010", 54 => "00101", 55 => "00010", 56 => "11111", 
    57 => "00100", 58 => "00000", 59 => "11111", 60 => "00011", 61 => "11100", 
    62 => "00001", 63 => "11101" );

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

entity conv3_weight_convhUb_x is
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

architecture arch of conv3_weight_convhUb_x is
    component conv3_weight_convhUb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhUb_x_rom_U :  component conv3_weight_convhUb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


