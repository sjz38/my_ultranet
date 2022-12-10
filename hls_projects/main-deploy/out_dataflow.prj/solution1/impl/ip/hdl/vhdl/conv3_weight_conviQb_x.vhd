-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviQb_x_rom is 
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


architecture rtl of conv3_weight_conviQb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "11010", 2 => "11111", 3 => "11101", 4 => "00110", 
    5 => "00100", 6 => "11111", 7 => "00001", 8 => "11101", 9 to 10=> "00011", 
    11 => "11110", 12 => "01000", 13 => "11101", 14 => "00001", 15 to 16=> "11101", 
    17 => "00010", 18 => "11111", 19 => "00010", 20 => "00000", 21 => "00010", 
    22 => "00011", 23 => "11111", 24 => "00100", 25 => "00000", 26 to 27=> "00100", 
    28 => "00001", 29 => "00110", 30 => "00101", 31 => "00100", 32 => "01000", 
    33 => "11011", 34 => "00010", 35 => "00001", 36 => "00000", 37 => "00101", 
    38 => "00100", 39 => "11010", 40 => "11101", 41 to 42=> "00000", 43 => "00010", 
    44 => "11101", 45 => "11111", 46 to 47=> "00000", 48 => "00100", 49 => "11001", 
    50 to 51=> "11101", 52 => "11110", 53 => "00010", 54 => "00101", 55 => "00011", 
    56 => "11011", 57 => "00011", 58 => "00010", 59 => "11111", 60 => "00000", 
    61 => "00011", 62 => "00001", 63 => "11101" );

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

entity conv3_weight_conviQb_x is
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

architecture arch of conv3_weight_conviQb_x is
    component conv3_weight_conviQb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviQb_x_rom_U :  component conv3_weight_conviQb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


