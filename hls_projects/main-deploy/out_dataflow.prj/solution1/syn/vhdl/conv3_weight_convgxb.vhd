-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgxb_rom is 
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


architecture rtl of conv3_weight_convgxb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "11011", 2 => "11110", 3 => "11111", 4 => "00100", 
    5 => "11011", 6 => "11101", 7 => "11110", 8 => "00100", 9 => "11110", 
    10 => "11011", 11 => "11000", 12 => "11011", 13 => "11100", 14 => "00110", 
    15 => "00011", 16 => "11011", 17 => "01000", 18 => "11011", 19 to 20=> "00000", 
    21 => "11000", 22 => "00010", 23 => "11111", 24 => "11001", 25 => "00011", 
    26 => "11111", 27 => "11011", 28 => "11111", 29 to 30=> "00100", 31 => "11111", 
    32 => "00010", 33 => "00001", 34 => "01000", 35 => "00010", 36 => "11100", 
    37 => "00101", 38 => "11111", 39 => "00011", 40 => "11001", 41 => "00011", 
    42 => "00010", 43 => "11110", 44 => "00011", 45 => "00000", 46 => "00010", 
    47 => "00100", 48 => "11111", 49 => "00110", 50 => "11110", 51 => "11111", 
    52 => "00101", 53 => "00000", 54 => "00100", 55 => "11101", 56 => "11111", 
    57 => "00001", 58 => "00110", 59 => "00100", 60 => "11111", 61 => "00010", 
    62 => "00001", 63 => "00000" );

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

entity conv3_weight_convgxb is
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

architecture arch of conv3_weight_convgxb is
    component conv3_weight_convgxb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgxb_rom_U :  component conv3_weight_convgxb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


