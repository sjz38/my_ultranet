-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviub_rom is 
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


architecture rtl of conv3_weight_conviub_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00110", 2 => "11010", 3 => "00010", 4 => "11011", 
    5 => "00100", 6 => "11011", 7 => "11000", 8 => "00000", 9 => "11111", 
    10 => "11010", 11 => "11011", 12 => "11101", 13 to 14=> "00000", 15 => "01000", 
    16 => "11111", 17 => "00001", 18 => "11010", 19 => "00101", 20 => "11110", 
    21 => "00101", 22 => "11110", 23 => "11101", 24 => "11111", 25 => "11000", 
    26 => "00101", 27 to 29=> "00000", 30 => "00111", 31 => "00001", 32 to 33=> "00011", 
    34 => "00010", 35 => "00001", 36 => "00011", 37 => "11110", 38 => "00011", 
    39 => "11000", 40 => "11110", 41 => "00101", 42 => "11111", 43 => "11011", 
    44 => "00010", 45 => "00100", 46 => "00010", 47 => "00001", 48 => "11011", 
    49 => "11001", 50 => "00000", 51 => "00011", 52 => "11000", 53 => "00010", 
    54 => "11111", 55 => "00001", 56 => "00010", 57 => "11000", 58 => "00011", 
    59 => "00010", 60 => "11101", 61 => "00111", 62 => "11111", 63 => "11011" );

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

entity conv3_weight_conviub is
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

architecture arch of conv3_weight_conviub is
    component conv3_weight_conviub_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviub_rom_U :  component conv3_weight_conviub_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


