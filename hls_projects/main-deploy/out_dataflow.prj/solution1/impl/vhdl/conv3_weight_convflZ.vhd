-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convflZ_rom is 
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


architecture rtl of conv3_weight_convflZ_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "11110", 2 => "11011", 3 => "00010", 4 => "11011", 
    5 => "11100", 6 => "11111", 7 => "00100", 8 => "00011", 9 => "11010", 
    10 => "01000", 11 => "00111", 12 => "11011", 13 => "11110", 14 => "11100", 
    15 => "11111", 16 => "00010", 17 => "11000", 18 => "11001", 19 => "00000", 
    20 => "00100", 21 => "01000", 22 to 23=> "00001", 24 => "00101", 25 to 26=> "11111", 
    27 => "00010", 28 => "01000", 29 => "00010", 30 => "00111", 31 => "11111", 
    32 => "11100", 33 => "00111", 34 => "00101", 35 => "11110", 36 => "00110", 
    37 => "11111", 38 => "11100", 39 => "00100", 40 => "01000", 41 => "00000", 
    42 => "00001", 43 to 44=> "00100", 45 => "11001", 46 => "00001", 47 => "00111", 
    48 => "00000", 49 => "00010", 50 => "11110", 51 => "11000", 52 => "01000", 
    53 to 54=> "00000", 55 => "11000", 56 => "11100", 57 => "00011", 58 to 60=> "00001", 
    61 => "00110", 62 => "00000", 63 => "11101" );

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

entity conv3_weight_convflZ is
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

architecture arch of conv3_weight_convflZ is
    component conv3_weight_convflZ_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convflZ_rom_U :  component conv3_weight_convflZ_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


