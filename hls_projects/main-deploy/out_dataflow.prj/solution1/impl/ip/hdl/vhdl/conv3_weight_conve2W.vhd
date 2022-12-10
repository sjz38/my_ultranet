-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve2W_rom is 
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


architecture rtl of conv3_weight_conve2W_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "11101", 2 => "11111", 3 => "00011", 4 => "00110", 
    5 => "11010", 6 => "00100", 7 => "11111", 8 => "00001", 9 => "00000", 
    10 => "11110", 11 => "11111", 12 => "00110", 13 => "11001", 14 => "00101", 
    15 => "00010", 16 => "00011", 17 => "00001", 18 to 20=> "00010", 21 => "11110", 
    22 => "11001", 23 => "11101", 24 => "00000", 25 => "11111", 26 => "11110", 
    27 => "00011", 28 to 30=> "11111", 31 => "00011", 32 => "00110", 33 => "00010", 
    34 => "00101", 35 => "00000", 36 => "11110", 37 => "00100", 38 => "11110", 
    39 => "00110", 40 => "11111", 41 => "00001", 42 => "00100", 43 => "11100", 
    44 => "00010", 45 => "00000", 46 => "00011", 47 => "11110", 48 => "11011", 
    49 => "01000", 50 to 51=> "11111", 52 => "00001", 53 => "00011", 54 => "11011", 
    55 => "11000", 56 => "00000", 57 => "11111", 58 => "11100", 59 => "11110", 
    60 to 61=> "00001", 62 => "11111", 63 => "00001" );

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

entity conv3_weight_conve2W is
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

architecture arch of conv3_weight_conve2W is
    component conv3_weight_conve2W_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve2W_rom_U :  component conv3_weight_conve2W_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

