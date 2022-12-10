-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhwb_rom is 
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


architecture rtl of conv3_weight_convhwb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "11000", 2 => "00011", 3 => "11000", 4 => "00001", 
    5 => "00000", 6 => "11110", 7 => "00010", 8 => "01000", 9 => "00011", 
    10 => "11100", 11 => "00011", 12 to 13=> "00110", 14 => "11100", 15 => "00100", 
    16 => "00000", 17 => "01000", 18 => "11111", 19 => "00010", 20 => "11010", 
    21 => "11011", 22 => "11001", 23 => "00000", 24 => "11000", 25 => "00100", 
    26 => "11111", 27 => "00000", 28 => "00101", 29 => "00110", 30 => "00000", 
    31 => "00110", 32 => "00101", 33 => "00001", 34 => "00010", 35 => "00011", 
    36 => "11110", 37 => "00110", 38 => "00111", 39 => "00010", 40 => "00011", 
    41 => "00111", 42 => "11111", 43 => "00001", 44 => "00011", 45 => "00010", 
    46 => "11110", 47 => "00010", 48 => "11110", 49 => "00000", 50 => "11000", 
    51 => "11101", 52 => "00010", 53 => "00001", 54 => "11001", 55 => "11000", 
    56 => "11111", 57 => "11001", 58 => "11011", 59 => "00001", 60 => "00000", 
    61 => "00011", 62 => "00000", 63 => "00101" );

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

entity conv3_weight_convhwb is
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

architecture arch of conv3_weight_convhwb is
    component conv3_weight_convhwb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhwb_rom_U :  component conv3_weight_convhwb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


