-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfw1_rom is 
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


architecture rtl of conv3_weight_convfw1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 2=> "11101", 3 => "11110", 4 => "11001", 5 => "11101", 6 to 7=> "11100", 
    8 => "11001", 9 => "11111", 10 => "00100", 11 => "00011", 12 => "00000", 
    13 => "00100", 14 => "11101", 15 => "00011", 16 to 17=> "11011", 18 => "00001", 
    19 => "11100", 20 => "11110", 21 to 22=> "00011", 23 => "00100", 24 => "00000", 
    25 to 27=> "00101", 28 => "00011", 29 => "00100", 30 => "11010", 31 => "00110", 
    32 => "00000", 33 => "01000", 34 => "00000", 35 => "11010", 36 to 37=> "11101", 
    38 => "00010", 39 => "00111", 40 => "11110", 41 => "11111", 42 => "11110", 
    43 => "11101", 44 => "11010", 45 => "00100", 46 => "00101", 47 => "00011", 
    48 => "11010", 49 => "11111", 50 => "00110", 51 => "00000", 52 => "11000", 
    53 => "11011", 54 => "11001", 55 => "11011", 56 => "00001", 57 => "00011", 
    58 => "01000", 59 to 60=> "11111", 61 => "11011", 62 => "00001", 63 => "11100" );

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

entity conv3_weight_convfw1 is
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

architecture arch of conv3_weight_convfw1 is
    component conv3_weight_convfw1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfw1_rom_U :  component conv3_weight_convfw1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


