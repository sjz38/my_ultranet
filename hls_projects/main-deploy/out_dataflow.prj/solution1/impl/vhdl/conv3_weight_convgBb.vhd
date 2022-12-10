-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgBb_rom is 
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


architecture rtl of conv3_weight_convgBb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11111", 2 => "11110", 3 => "00010", 4 => "00110", 
    5 => "11101", 6 to 7=> "00001", 8 => "00000", 9 => "11111", 10 => "00100", 
    11 => "00011", 12 => "00010", 13 => "00000", 14 => "00101", 15 => "00000", 
    16 => "00001", 17 => "11111", 18 => "11011", 19 => "00010", 20 => "11111", 
    21 => "00100", 22 => "00010", 23 => "00001", 24 => "00100", 25 => "00010", 
    26 => "00001", 27 => "11110", 28 => "11010", 29 => "11100", 30 => "00010", 
    31 => "11101", 32 => "01000", 33 => "11110", 34 => "00000", 35 => "11110", 
    36 => "00100", 37 => "11101", 38 to 39=> "00001", 40 => "00011", 41 => "00000", 
    42 => "00110", 43 => "00100", 44 => "11010", 45 => "11101", 46 => "00010", 
    47 => "00101", 48 => "11111", 49 to 51=> "00010", 52 => "00111", 53 => "11110", 
    54 => "00010", 55 => "00001", 56 to 57=> "00011", 58 => "11111", 59 to 60=> "11110", 
    61 => "00010", 62 => "11111", 63 => "11101" );

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

entity conv3_weight_convgBb is
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

architecture arch of conv3_weight_convgBb is
    component conv3_weight_convgBb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgBb_rom_U :  component conv3_weight_convgBb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

