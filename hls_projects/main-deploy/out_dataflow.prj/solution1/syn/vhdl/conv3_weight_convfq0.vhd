-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfq0_rom is 
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


architecture rtl of conv3_weight_convfq0_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "00010", 2 => "00100", 3 => "00011", 4 => "00101", 
    5 => "11111", 6 => "11110", 7 => "00010", 8 => "11101", 9 => "11011", 
    10 => "11100", 11 => "00011", 12 => "00001", 13 => "11110", 14 => "11101", 
    15 => "11110", 16 => "11000", 17 => "00010", 18 => "11110", 19 => "00000", 
    20 => "00110", 21 => "00011", 22 => "11100", 23 => "11111", 24 => "11110", 
    25 => "00100", 26 => "11101", 27 => "00001", 28 => "11101", 29 => "00000", 
    30 => "11000", 31 => "00000", 32 => "11100", 33 => "00101", 34 => "11111", 
    35 => "11001", 36 => "00110", 37 => "11010", 38 => "11101", 39 => "00101", 
    40 => "11100", 41 => "11111", 42 to 43=> "11101", 44 => "11110", 45 => "11010", 
    46 => "00000", 47 => "11000", 48 => "11011", 49 => "11101", 50 => "11011", 
    51 => "11101", 52 => "11100", 53 => "00101", 54 => "01000", 55 => "00100", 
    56 to 57=> "00010", 58 => "11001", 59 => "11011", 60 => "00001", 61 => "11100", 
    62 => "00000", 63 => "00010" );

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

entity conv3_weight_convfq0 is
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

architecture arch of conv3_weight_convfq0 is
    component conv3_weight_convfq0_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfq0_rom_U :  component conv3_weight_convfq0_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


