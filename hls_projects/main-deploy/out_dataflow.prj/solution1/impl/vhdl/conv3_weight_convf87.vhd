-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convf87_rom is 
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


architecture rtl of conv3_weight_convf87_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "00000", 2 => "11100", 3 => "00011", 4 => "11111", 
    5 => "00010", 6 => "11100", 7 => "11110", 8 => "00001", 9 => "11001", 
    10 => "00011", 11 => "11110", 12 => "00010", 13 to 14=> "00000", 15 => "11011", 
    16 to 17=> "11110", 18 => "00000", 19 => "11101", 20 => "11100", 21 => "11110", 
    22 => "00000", 23 => "11010", 24 => "11101", 25 => "00010", 26 => "11101", 
    27 => "11110", 28 => "00100", 29 => "11000", 30 to 31=> "11100", 32 => "11110", 
    33 => "00100", 34 => "00001", 35 => "01000", 36 => "00101", 37 => "00011", 
    38 => "11100", 39 => "11001", 40 => "11111", 41 => "00010", 42 => "01000", 
    43 => "11110", 44 => "00001", 45 to 46=> "11100", 47 => "11010", 48 => "00100", 
    49 => "00010", 50 => "00100", 51 => "11100", 52 => "11000", 53 => "11010", 
    54 => "11110", 55 => "00111", 56 => "11110", 57 => "11001", 58 => "11011", 
    59 => "11010", 60 => "11000", 61 => "00000", 62 => "00001", 63 => "11110" );

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

entity conv3_weight_convf87 is
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

architecture arch of conv3_weight_convf87 is
    component conv3_weight_convf87_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convf87_rom_U :  component conv3_weight_convf87_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


