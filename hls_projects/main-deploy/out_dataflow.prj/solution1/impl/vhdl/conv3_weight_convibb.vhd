-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convibb_rom is 
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


architecture rtl of conv3_weight_convibb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11110", 2 => "00101", 3 to 4=> "00001", 5 => "11111", 6 => "00101", 
    7 => "11110", 8 => "00011", 9 => "00001", 10 => "00010", 11 => "00000", 
    12 => "00011", 13 => "11110", 14 => "00011", 15 => "11111", 16 => "00010", 
    17 to 18=> "00001", 19 => "00000", 20 => "00001", 21 => "00010", 22 to 23=> "11010", 
    24 => "11110", 25 => "11101", 26 to 27=> "00001", 28 => "00000", 29 => "00010", 
    30 => "11110", 31 => "00110", 32 => "01000", 33 => "11011", 34 => "00000", 
    35 => "00011", 36 => "11111", 37 => "11101", 38 => "00010", 39 => "11001", 
    40 => "11101", 41 => "00100", 42 => "00001", 43 => "11010", 44 => "00001", 
    45 => "00011", 46 => "11111", 47 => "00010", 48 to 49=> "11101", 50 => "00111", 
    51 => "11100", 52 => "11111", 53 => "00000", 54 => "00001", 55 => "00100", 
    56 => "11101", 57 => "11110", 58 => "00000", 59 => "00001", 60 => "11110", 
    61 => "00101", 62 to 63=> "00001" );

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

entity conv3_weight_convibb is
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

architecture arch of conv3_weight_convibb is
    component conv3_weight_convibb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convibb_rom_U :  component conv3_weight_convibb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


