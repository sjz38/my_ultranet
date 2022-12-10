-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve7X_rom is 
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


architecture rtl of conv3_weight_conve7X_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "00110", 2 => "00001", 3 => "11110", 4 => "00000", 
    5 => "11000", 6 => "11111", 7 => "11101", 8 => "00000", 9 => "00110", 
    10 => "00100", 11 => "11101", 12 => "00100", 13 => "11101", 14 => "00010", 
    15 => "00011", 16 => "00101", 17 => "11101", 18 => "11111", 19 => "00011", 
    20 => "11001", 21 => "00101", 22 => "11000", 23 to 24=> "00100", 25 => "00001", 
    26 => "00000", 27 => "01000", 28 => "00000", 29 => "00100", 30 => "00011", 
    31 => "00110", 32 => "00010", 33 => "11110", 34 => "00010", 35 to 36=> "00001", 
    37 => "11111", 38 => "00010", 39 => "11111", 40 => "00010", 41 => "00100", 
    42 => "11111", 43 => "01000", 44 => "00010", 45 => "00011", 46 => "11111", 
    47 => "11101", 48 => "00101", 49 => "11010", 50 => "00011", 51 => "11001", 
    52 => "11110", 53 => "00010", 54 to 55=> "11101", 56 => "11100", 57 => "00011", 
    58 => "00001", 59 => "11111", 60 => "00100", 61 => "11100", 62 => "11111", 
    63 => "00011" );

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

entity conv3_weight_conve7X is
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

architecture arch of conv3_weight_conve7X is
    component conv3_weight_conve7X_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve7X_rom_U :  component conv3_weight_conve7X_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


