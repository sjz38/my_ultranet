-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfC2_rom is 
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


architecture rtl of conv3_weight_convfC2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "11101", 2 => "00101", 3 => "00011", 4 => "00001", 
    5 => "11100", 6 => "00100", 7 => "00010", 8 to 9=> "11100", 10 => "00010", 
    11 => "00111", 12 => "00010", 13 => "11001", 14 => "11010", 15 => "00110", 
    16 => "00100", 17 => "11000", 18 => "00011", 19 => "01000", 20 => "00010", 
    21 => "01000", 22 => "00001", 23 => "00000", 24 => "00100", 25 => "11011", 
    26 => "11111", 27 => "00000", 28 to 29=> "00011", 30 => "01000", 31 to 32=> "00010", 
    33 => "11100", 34 => "11110", 35 => "00000", 36 => "00001", 37 => "11101", 
    38 => "00000", 39 => "00011", 40 => "11001", 41 => "00011", 42 => "11110", 
    43 => "00000", 44 => "00101", 45 => "11100", 46 => "00101", 47 => "00110", 
    48 => "00101", 49 to 50=> "01000", 51 => "00010", 52 => "00101", 53 => "11101", 
    54 => "00000", 55 => "00101", 56 => "00011", 57 => "00010", 58 => "00011", 
    59 => "00000", 60 => "00101", 61 => "00100", 62 => "00001", 63 => "11110" );

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

entity conv3_weight_convfC2 is
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

architecture arch of conv3_weight_convfC2 is
    component conv3_weight_convfC2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfC2_rom_U :  component conv3_weight_convfC2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


