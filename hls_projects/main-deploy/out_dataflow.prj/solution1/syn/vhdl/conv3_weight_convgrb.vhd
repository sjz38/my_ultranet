-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgrb_rom is 
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


architecture rtl of conv3_weight_convgrb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00010", 1 => "00000", 2 => "11011", 3 => "00011", 4 => "00101", 
    5 => "11011", 6 => "00101", 7 => "11101", 8 => "00101", 9 => "11110", 
    10 => "11001", 11 => "11110", 12 => "00010", 13 => "11010", 14 => "00011", 
    15 => "00010", 16 => "11111", 17 => "11011", 18 => "00010", 19 => "00001", 
    20 => "00101", 21 => "00111", 22 => "11011", 23 => "11100", 24 => "00110", 
    25 => "00010", 26 => "11111", 27 => "11101", 28 to 29=> "00101", 30 => "00111", 
    31 => "11100", 32 => "11110", 33 => "11010", 34 => "11110", 35 => "11010", 
    36 => "11111", 37 => "11100", 38 => "11101", 39 => "11011", 40 => "00010", 
    41 => "11100", 42 => "11101", 43 => "11110", 44 => "11100", 45 => "11001", 
    46 => "00000", 47 to 49=> "00001", 50 to 51=> "00000", 52 => "11110", 53 => "11111", 
    54 => "00011", 55 => "11100", 56 to 57=> "11111", 58 to 59=> "00001", 60 => "00100", 
    61 => "01000", 62 => "11111", 63 => "11100" );

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

entity conv3_weight_convgrb is
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

architecture arch of conv3_weight_convgrb is
    component conv3_weight_convgrb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgrb_rom_U :  component conv3_weight_convgrb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


