-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhzb_rom is 
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


architecture rtl of conv3_weight_convhzb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11101", 1 => "00101", 2 => "00111", 3 => "00001", 4 => "11111", 
    5 => "00011", 6 => "00000", 7 => "00110", 8 => "11111", 9 => "00001", 
    10 => "11000", 11 => "00011", 12 => "00110", 13 => "00010", 14 => "11001", 
    15 => "11111", 16 => "11100", 17 => "11001", 18 => "00001", 19 => "00010", 
    20 => "11000", 21 => "00010", 22 to 23=> "11010", 24 => "11101", 25 => "00110", 
    26 => "00001", 27 => "01000", 28 => "00100", 29 => "11110", 30 => "00110", 
    31 => "00111", 32 => "00100", 33 => "00010", 34 => "00001", 35 => "11101", 
    36 => "00100", 37 => "00110", 38 => "00001", 39 => "11010", 40 => "00000", 
    41 => "00100", 42 => "00101", 43 => "01000", 44 => "00011", 45 => "00001", 
    46 => "11100", 47 => "11000", 48 => "11111", 49 => "00010", 50 => "11000", 
    51 => "00101", 52 => "00001", 53 => "11111", 54 => "11100", 55 => "11010", 
    56 => "00011", 57 => "00010", 58 to 59=> "11101", 60 => "00000", 61 => "00001", 
    62 => "11111", 63 => "00100" );

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

entity conv3_weight_convhzb is
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

architecture arch of conv3_weight_convhzb is
    component conv3_weight_convhzb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhzb_rom_U :  component conv3_weight_convhzb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


