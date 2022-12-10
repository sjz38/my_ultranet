-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfn0_rom is 
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


architecture rtl of conv3_weight_convfn0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00000", 2 => "00001", 3 => "11010", 4 => "00001", 
    5 => "11101", 6 => "00001", 7 => "00011", 8 => "01000", 9 => "11101", 
    10 => "11110", 11 => "11111", 12 to 13=> "11110", 14 => "00001", 15 => "00011", 
    16 to 17=> "11110", 18 => "11011", 19 => "11111", 20 => "00011", 21 => "11000", 
    22 => "11010", 23 => "00001", 24 => "11001", 25 => "00100", 26 => "00111", 
    27 => "00001", 28 => "01000", 29 => "11101", 30 => "00001", 31 => "00101", 
    32 => "11101", 33 => "00101", 34 => "11100", 35 => "11110", 36 => "11100", 
    37 => "11011", 38 => "00010", 39 => "00101", 40 => "11110", 41 => "00010", 
    42 => "00000", 43 => "00100", 44 => "00010", 45 => "11110", 46 => "00000", 
    47 => "11001", 48 => "11011", 49 to 51=> "11111", 52 => "11101", 53 => "11011", 
    54 => "00001", 55 => "00010", 56 => "00101", 57 => "11011", 58 => "11101", 
    59 => "00011", 60 => "11100", 61 => "11010", 62 => "00000", 63 => "11011" );

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

entity conv3_weight_convfn0 is
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

architecture arch of conv3_weight_convfn0 is
    component conv3_weight_convfn0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfn0_rom_U :  component conv3_weight_convfn0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


