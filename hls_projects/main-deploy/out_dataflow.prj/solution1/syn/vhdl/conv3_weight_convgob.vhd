-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgob_rom is 
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


architecture rtl of conv3_weight_convgob_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 to 2=> "11000", 3 => "00000", 4 => "11110", 5 => "00100", 
    6 => "11101", 7 => "11011", 8 => "01000", 9 => "11111", 10 => "11011", 
    11 => "11110", 12 => "11100", 13 => "11001", 14 => "11011", 15 to 16=> "00001", 
    17 => "11100", 18 => "00011", 19 => "00001", 20 => "11110", 21 => "11001", 
    22 => "00010", 23 => "11011", 24 => "11111", 25 => "00010", 26 to 27=> "11110", 
    28 => "00101", 29 => "00000", 30 => "00011", 31 => "00010", 32 => "11001", 
    33 => "00110", 34 => "11101", 35 => "11111", 36 => "11010", 37 => "00011", 
    38 => "11010", 39 => "11111", 40 => "00001", 41 => "00011", 42 => "00001", 
    43 => "00101", 44 => "00100", 45 => "00011", 46 => "11110", 47 => "00000", 
    48 => "11000", 49 => "00100", 50 => "00001", 51 => "00111", 52 => "00011", 
    53 => "11110", 54 => "11111", 55 => "00011", 56 => "11100", 57 => "00111", 
    58 => "00010", 59 => "11100", 60 => "11001", 61 to 62=> "11111", 63 => "00000" );

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

entity conv3_weight_convgob is
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

architecture arch of conv3_weight_convgob is
    component conv3_weight_convgob_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgob_rom_U :  component conv3_weight_convgob_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


