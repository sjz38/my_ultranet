-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convimb_rom is 
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


architecture rtl of conv3_weight_convimb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00110", 1 => "00100", 2 => "11001", 3 => "00001", 4 => "00000", 
    5 => "11100", 6 => "11110", 7 => "11011", 8 => "00000", 9 to 10=> "00010", 
    11 => "01000", 12 => "00011", 13 => "11110", 14 => "11011", 15 => "00010", 
    16 => "00001", 17 => "11111", 18 => "11110", 19 to 20=> "00101", 21 => "00010", 
    22 => "00000", 23 => "11011", 24 => "00010", 25 => "11001", 26 => "11100", 
    27 => "01000", 28 => "00001", 29 => "11010", 30 => "11111", 31 => "11110", 
    32 => "11000", 33 => "00000", 34 => "00010", 35 => "00111", 36 => "11101", 
    37 => "11010", 38 => "00000", 39 => "11101", 40 => "00011", 41 => "00010", 
    42 => "00101", 43 => "11001", 44 => "00001", 45 => "11110", 46 => "00011", 
    47 => "11101", 48 => "11100", 49 => "11011", 50 => "11000", 51 => "00011", 
    52 => "11111", 53 => "00011", 54 => "11010", 55 => "11100", 56 => "00000", 
    57 => "11100", 58 => "11000", 59 => "00010", 60 => "00100", 61 => "00000", 
    62 => "00001", 63 => "00010" );

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

entity conv3_weight_convimb is
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

architecture arch of conv3_weight_convimb is
    component conv3_weight_convimb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convimb_rom_U :  component conv3_weight_convimb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


