-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convipb_rom is 
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


architecture rtl of conv3_weight_convipb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11000", 2 => "11101", 3 => "11110", 4 => "00101", 
    5 to 6=> "00001", 7 => "11011", 8 => "11100", 9 to 10=> "00011", 11 => "00010", 
    12 => "11110", 13 => "00000", 14 => "00001", 15 => "00110", 16 => "00101", 
    17 to 18=> "00010", 19 => "11111", 20 => "11010", 21 => "00001", 22 => "11100", 
    23 => "11101", 24 => "11100", 25 => "11001", 26 => "00111", 27 => "01000", 
    28 => "11110", 29 => "11001", 30 => "11111", 31 => "00011", 32 => "00000", 
    33 => "00011", 34 => "00000", 35 => "00101", 36 => "11100", 37 => "11110", 
    38 => "11010", 39 => "00001", 40 => "00010", 41 => "00011", 42 => "11101", 
    43 => "00001", 44 => "00101", 45 => "11100", 46 => "00001", 47 => "11000", 
    48 => "11111", 49 => "11000", 50 => "00001", 51 => "11011", 52 => "11110", 
    53 => "11111", 54 => "11100", 55 => "00110", 56 to 57=> "11111", 58 => "01000", 
    59 => "11011", 60 => "00110", 61 => "00001", 62 => "11111", 63 => "00111" );

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

entity conv3_weight_convipb is
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

architecture arch of conv3_weight_convipb is
    component conv3_weight_convipb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convipb_rom_U :  component conv3_weight_convipb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

