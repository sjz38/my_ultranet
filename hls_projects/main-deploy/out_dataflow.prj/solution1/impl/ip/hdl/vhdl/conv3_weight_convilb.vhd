-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convilb_rom is 
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


architecture rtl of conv3_weight_convilb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00110", 1 => "00101", 2 => "00000", 3 => "00101", 4 => "11111", 
    5 => "00000", 6 => "11100", 7 => "00001", 8 => "11101", 9 => "00001", 
    10 => "00000", 11 => "00001", 12 => "11100", 13 => "00110", 14 => "00000", 
    15 => "01000", 16 => "11110", 17 to 18=> "11101", 19 => "00000", 20 => "00010", 
    21 => "00110", 22 => "11000", 23 => "11011", 24 to 25=> "11101", 26 => "00001", 
    27 => "00011", 28 => "11110", 29 => "11001", 30 => "11100", 31 => "00010", 
    32 => "11101", 33 => "00010", 34 => "11011", 35 => "00001", 36 to 37=> "00000", 
    38 => "00111", 39 => "11010", 40 => "00010", 41 => "00001", 42 => "00100", 
    43 => "11101", 44 => "00010", 45 => "00001", 46 to 47=> "00110", 48 => "11000", 
    49 => "11110", 50 => "00000", 51 => "00101", 52 => "00111", 53 => "11110", 
    54 => "11011", 55 => "00000", 56 => "00010", 57 => "00100", 58 => "11000", 
    59 => "00001", 60 => "00000", 61 => "11111", 62 => "00000", 63 => "00001" );

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

entity conv3_weight_convilb is
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

architecture arch of conv3_weight_convilb is
    component conv3_weight_convilb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convilb_rom_U :  component conv3_weight_convilb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


