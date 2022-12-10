-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhsb_rom is 
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


architecture rtl of conv3_weight_convhsb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "11110", 2 => "11101", 3 => "00011", 4 => "00010", 
    5 => "00110", 6 => "00011", 7 => "00100", 8 => "00011", 9 => "11111", 
    10 => "00001", 11 => "01000", 12 => "00000", 13 => "11100", 14 => "00101", 
    15 => "11101", 16 => "11111", 17 => "11100", 18 => "00010", 19 => "11101", 
    20 => "11100", 21 => "00000", 22 => "11100", 23 => "00011", 24 => "00100", 
    25 => "11111", 26 => "00101", 27 => "11111", 28 => "00000", 29 => "00010", 
    30 to 31=> "00000", 32 => "00010", 33 => "00001", 34 => "11110", 35 => "00011", 
    36 => "11110", 37 => "11111", 38 => "00001", 39 => "00000", 40 => "11100", 
    41 => "00011", 42 => "00101", 43 => "11101", 44 => "11111", 45 => "11010", 
    46 => "00001", 47 => "11101", 48 => "11001", 49 to 50=> "00000", 51 => "11011", 
    52 => "00011", 53 to 54=> "11110", 55 => "11101", 56 => "00010", 57 => "00001", 
    58 => "00110", 59 => "00001", 60 => "11101", 61 => "11110", 62 => "00001", 
    63 => "00101" );

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

entity conv3_weight_convhsb is
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

architecture arch of conv3_weight_convhsb is
    component conv3_weight_convhsb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhsb_rom_U :  component conv3_weight_convhsb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


