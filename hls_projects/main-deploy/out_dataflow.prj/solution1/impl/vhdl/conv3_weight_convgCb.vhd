-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgCb_rom is 
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


architecture rtl of conv3_weight_convgCb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00101", 1 => "11101", 2 => "00001", 3 => "00110", 4 => "00101", 
    5 => "11111", 6 => "00000", 7 to 8=> "00010", 9 => "00111", 10 => "00001", 
    11 => "00011", 12 => "00100", 13 => "00011", 14 => "00001", 15 => "11110", 
    16 => "00010", 17 => "11110", 18 => "00010", 19 => "00100", 20 => "11010", 
    21 to 22=> "00010", 23 => "00001", 24 => "00000", 25 to 26=> "00010", 27 => "11101", 
    28 => "11111", 29 => "11101", 30 => "11111", 31 => "11100", 32 => "01000", 
    33 => "00001", 34 => "00101", 35 => "11101", 36 => "11110", 37 => "00000", 
    38 => "00010", 39 => "11110", 40 => "00100", 41 => "00010", 42 => "00001", 
    43 => "00011", 44 to 45=> "11100", 46 => "11111", 47 to 48=> "00011", 49 => "11111", 
    50 => "11110", 51 to 52=> "00001", 53 => "00000", 54 to 55=> "11111", 56 => "00001", 
    57 => "00011", 58 => "11111", 59 => "00001", 60 => "11111", 61 => "00001", 
    62 => "11111", 63 => "00000" );

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

entity conv3_weight_convgCb is
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

architecture arch of conv3_weight_convgCb is
    component conv3_weight_convgCb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgCb_rom_U :  component conv3_weight_convgCb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


