-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhqb_rom is 
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


architecture rtl of conv3_weight_convhqb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11100", 1 => "00101", 2 => "00010", 3 => "11111", 4 to 6=> "00001", 
    7 => "11111", 8 => "00001", 9 => "01000", 10 => "11111", 11 => "11011", 
    12 to 13=> "11101", 14 => "11001", 15 => "00010", 16 to 17=> "00101", 18 => "11110", 
    19 => "00000", 20 => "00001", 21 => "11001", 22 => "11101", 23 => "11100", 
    24 to 25=> "00001", 26 => "11100", 27 => "11110", 28 to 29=> "00100", 30 => "00000", 
    31 => "00001", 32 => "11011", 33 => "11110", 34 => "11111", 35 => "00000", 
    36 => "11111", 37 => "00100", 38 => "11110", 39 to 40=> "00010", 41 => "00101", 
    42 => "11101", 43 => "00000", 44 => "11011", 45 to 46=> "11111", 47 => "00101", 
    48 => "00010", 49 => "11010", 50 => "11101", 51 => "00010", 52 => "11100", 
    53 => "00011", 54 => "00110", 55 => "11100", 56 => "00011", 57 => "00001", 
    58 => "11100", 59 => "00110", 60 => "00000", 61 => "11011", 62 => "00000", 
    63 => "11011" );

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

entity conv3_weight_convhqb is
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

architecture arch of conv3_weight_convhqb is
    component conv3_weight_convhqb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhqb_rom_U :  component conv3_weight_convhqb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


