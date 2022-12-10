-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convisb_rom is 
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


architecture rtl of conv3_weight_convisb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00101", 2 => "11011", 3 => "11110", 4 => "11100", 
    5 => "11111", 6 => "00011", 7 => "11001", 8 => "00000", 9 => "00110", 
    10 => "00100", 11 => "00010", 12 => "00100", 13 => "00001", 14 => "11110", 
    15 => "00000", 16 => "00010", 17 => "11101", 18 to 19=> "11111", 20 => "11010", 
    21 => "00010", 22 => "11000", 23 => "00100", 24 => "00011", 25 => "11110", 
    26 => "00101", 27 => "01000", 28 => "11011", 29 => "00110", 30 => "11100", 
    31 => "00100", 32 => "00011", 33 to 34=> "00000", 35 => "00110", 36 to 37=> "11101", 
    38 => "11100", 39 => "00011", 40 => "11110", 41 => "00010", 42 => "00001", 
    43 => "11001", 44 => "11101", 45 => "11110", 46 => "00010", 47 => "11000", 
    48 => "11110", 49 => "11100", 50 => "00001", 51 => "11000", 52 => "00000", 
    53 => "11110", 54 => "00001", 55 => "00010", 56 => "11011", 57 => "11111", 
    58 => "00000", 59 => "00111", 60 => "00010", 61 => "11110", 62 => "00001", 
    63 => "01000" );

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

entity conv3_weight_convisb is
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

architecture arch of conv3_weight_convisb is
    component conv3_weight_convisb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convisb_rom_U :  component conv3_weight_convisb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


