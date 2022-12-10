-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve6X_rom is 
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


architecture rtl of conv3_weight_conve6X_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 => "00011", 2 => "00000", 3 => "11111", 4 => "11110", 
    5 => "11010", 6 => "00001", 7 => "11101", 8 => "00001", 9 to 10=> "00010", 
    11 => "11101", 12 => "01000", 13 => "00001", 14 => "00010", 15 => "00111", 
    16 => "00010", 17 => "00001", 18 => "11101", 19 => "00100", 20 => "11100", 
    21 => "00100", 22 => "11000", 23 => "00001", 24 => "00100", 25 => "00001", 
    26 => "11100", 27 => "01000", 28 => "00001", 29 => "00011", 30 => "00110", 
    31 => "00010", 32 => "00001", 33 => "11101", 34 => "00101", 35 => "00010", 
    36 => "00110", 37 => "11111", 38 => "00100", 39 => "00010", 40 => "11111", 
    41 => "00001", 42 => "11100", 43 => "00001", 44 => "00110", 45 => "00000", 
    46 => "11101", 47 => "00001", 48 => "00010", 49 => "11101", 50 => "11110", 
    51 => "11101", 52 => "00000", 53 => "00010", 54 => "11111", 55 => "11101", 
    56 => "00001", 57 => "11110", 58 => "00011", 59 => "11011", 60 to 61=> "00001", 
    62 => "00000", 63 => "11100" );

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

entity conv3_weight_conve6X is
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

architecture arch of conv3_weight_conve6X is
    component conv3_weight_conve6X_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve6X_rom_U :  component conv3_weight_conve6X_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


