-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveGT_rom is 
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


architecture rtl of conv3_weight_conveGT_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011", 1 => "11101", 2 => "11110", 3 => "11011", 4 => "11100", 
    5 => "00001", 6 => "11010", 7 => "00101", 8 => "00111", 9 => "01000", 
    10 => "11100", 11 => "00010", 12 to 13=> "11011", 14 to 15=> "00011", 16 => "00101", 
    17 => "00011", 18 => "11010", 19 to 20=> "11101", 21 => "00100", 22 to 23=> "11111", 
    24 => "00011", 25 => "00110", 26 => "11100", 27 => "00001", 28 => "11001", 
    29 => "00010", 30 => "11010", 31 => "00001", 32 => "00011", 33 => "00001", 
    34 => "00100", 35 => "11011", 36 => "11111", 37 => "00011", 38 => "11110", 
    39 => "00010", 40 => "11111", 41 => "11001", 42 => "00000", 43 => "11110", 
    44 => "00010", 45 => "00100", 46 => "11111", 47 => "00111", 48 => "01000", 
    49 to 50=> "11110", 51 => "11010", 52 to 53=> "00001", 54 => "00100", 55 => "11011", 
    56 => "00001", 57 => "00100", 58 => "00101", 59 => "11110", 60 to 62=> "11111", 
    63 => "00010" );

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

entity conv3_weight_conveGT is
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

architecture arch of conv3_weight_conveGT is
    component conv3_weight_conveGT_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveGT_rom_U :  component conv3_weight_conveGT_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


