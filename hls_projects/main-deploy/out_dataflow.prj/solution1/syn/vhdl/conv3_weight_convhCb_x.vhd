-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhCb_x_rom is 
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


architecture rtl of conv3_weight_convhCb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00011", 2 => "11110", 3 => "11001", 4 => "00010", 
    5 => "11100", 6 => "11101", 7 => "11110", 8 => "11111", 9 => "11011", 
    10 => "00011", 11 => "00101", 12 => "11101", 13 => "00101", 14 => "11011", 
    15 => "11010", 16 => "00101", 17 => "00100", 18 to 19=> "00010", 20 => "11111", 
    21 => "00011", 22 => "11110", 23 => "00001", 24 => "00100", 25 => "11100", 
    26 => "00001", 27 => "11111", 28 => "11011", 29 => "00010", 30 => "00011", 
    31 => "11110", 32 => "00011", 33 => "00000", 34 => "11000", 35 => "00000", 
    36 => "00101", 37 => "11100", 38 => "01000", 39 => "00101", 40 => "00010", 
    41 => "11101", 42 => "11111", 43 => "11100", 44 => "11011", 45 => "00011", 
    46 => "11111", 47 => "00000", 48 => "11010", 49 => "00101", 50 => "00011", 
    51 => "00010", 52 => "01000", 53 => "00100", 54 => "00010", 55 => "11100", 
    56 => "11011", 57 => "00000", 58 => "11101", 59 => "00001", 60 => "00110", 
    61 => "00111", 62 => "11111", 63 => "00100" );

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

entity conv3_weight_convhCb_x is
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

architecture arch of conv3_weight_convhCb_x is
    component conv3_weight_convhCb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhCb_x_rom_U :  component conv3_weight_convhCb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


