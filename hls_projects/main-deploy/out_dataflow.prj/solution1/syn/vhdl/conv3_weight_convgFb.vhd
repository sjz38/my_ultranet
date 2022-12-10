-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgFb_rom is 
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


architecture rtl of conv3_weight_convgFb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 to 2=> "11110", 3 => "00010", 4 to 5=> "00110", 6 => "00010", 
    7 => "11110", 8 => "00010", 9 => "00011", 10 to 11=> "00010", 12 => "00110", 
    13 => "00011", 14 => "00001", 15 => "11000", 16 to 17=> "11111", 18 => "00010", 
    19 => "00011", 20 => "11100", 21 => "11111", 22 => "00101", 23 => "00000", 
    24 => "00001", 25 => "00011", 26 => "00010", 27 => "11111", 28 => "00001", 
    29 => "11111", 30 => "11101", 31 => "11111", 32 => "01000", 33 => "11111", 
    34 => "00011", 35 => "11011", 36 => "11110", 37 => "11111", 38 => "00100", 
    39 => "11110", 40 to 41=> "00001", 42 => "00101", 43 => "11111", 44 => "11110", 
    45 => "11101", 46 => "00001", 47 => "00010", 48 to 49=> "00000", 50 => "11101", 
    51 => "11111", 52 => "00010", 53 => "11111", 54 => "00001", 55 => "11010", 
    56 => "11101", 57 => "00001", 58 => "00011", 59 => "00010", 60 => "11001", 
    61 => "00010", 62 => "00001", 63 => "11111" );

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

entity conv3_weight_convgFb is
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

architecture arch of conv3_weight_convgFb is
    component conv3_weight_convgFb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgFb_rom_U :  component conv3_weight_convgFb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


