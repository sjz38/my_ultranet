-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convikb_rom is 
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


architecture rtl of conv3_weight_convikb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 to 2=> "00100", 3 => "11111", 4 => "11110", 5 => "00100", 
    6 => "11111", 7 => "00010", 8 to 9=> "11001", 10 => "00010", 11 to 12=> "11111", 
    13 => "11110", 14 => "00001", 15 to 16=> "00100", 17 => "11110", 18 => "00000", 
    19 => "00010", 20 => "00000", 21 => "00011", 22 => "11110", 23 => "00010", 
    24 => "00000", 25 => "00100", 26 to 27=> "00111", 28 to 29=> "11100", 30 => "11111", 
    31 => "00000", 32 => "11100", 33 => "00001", 34 => "11101", 35 => "11111", 
    36 => "11100", 37 => "00111", 38 => "11101", 39 => "11011", 40 to 41=> "00000", 
    42 => "00010", 43 => "00000", 44 => "11111", 45 => "11110", 46 => "00100", 
    47 => "00111", 48 to 49=> "11011", 50 => "00110", 51 => "11111", 52 => "01000", 
    53 => "00100", 54 => "11100", 55 => "00001", 56 => "00010", 57 => "11111", 
    58 => "00001", 59 => "00101", 60 => "00011", 61 => "11100", 62 => "00000", 
    63 => "11111" );

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

entity conv3_weight_convikb is
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

architecture arch of conv3_weight_convikb is
    component conv3_weight_convikb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convikb_rom_U :  component conv3_weight_convikb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

