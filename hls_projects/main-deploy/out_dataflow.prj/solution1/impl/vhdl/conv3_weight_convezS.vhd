-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convezS_rom is 
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


architecture rtl of conv3_weight_convezS_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "00111", 2 => "11101", 3 => "00101", 4 => "11110", 
    5 => "11101", 6 => "11100", 7 => "00001", 8 => "00010", 9 => "11101", 
    10 => "00010", 11 => "11111", 12 => "11110", 13 => "00101", 14 => "11110", 
    15 => "00011", 16 => "00101", 17 => "00011", 18 => "00001", 19 => "11000", 
    20 => "11011", 21 => "11100", 22 => "11010", 23 => "11101", 24 => "00101", 
    25 => "00011", 26 to 27=> "11111", 28 => "11100", 29 => "11110", 30 => "00010", 
    31 to 32=> "00100", 33 => "00010", 34 => "11100", 35 => "00011", 36 to 37=> "11110", 
    38 => "00010", 39 => "11111", 40 => "11100", 41 => "00011", 42 => "00010", 
    43 => "11111", 44 => "11110", 45 => "11101", 46 => "11111", 47 to 48=> "00001", 
    49 => "00000", 50 => "00011", 51 => "00111", 52 => "00011", 53 => "11100", 
    54 to 55=> "00011", 56 => "00100", 57 => "00000", 58 => "11101", 59 => "00011", 
    60 => "11110", 61 => "01000", 62 => "00001", 63 => "00100" );

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

entity conv3_weight_convezS is
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

architecture arch of conv3_weight_convezS is
    component conv3_weight_convezS_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convezS_rom_U :  component conv3_weight_convezS_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


