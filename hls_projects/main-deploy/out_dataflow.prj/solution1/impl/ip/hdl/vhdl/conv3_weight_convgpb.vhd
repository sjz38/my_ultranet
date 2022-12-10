-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgpb_rom is 
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


architecture rtl of conv3_weight_convgpb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "11000", 2 to 3=> "11011", 4 => "11000", 5 => "00101", 6 to 7=> "11110", 
    8 => "00001", 9 => "00000", 10 => "11111", 11 => "11011", 12 => "00100", 
    13 => "00010", 14 => "11000", 15 => "11111", 16 => "00110", 17 => "11110", 
    18 => "00100", 19 => "11100", 20 => "00011", 21 => "11110", 22 => "11000", 
    23 => "11110", 24 => "00011", 25 => "11111", 26 => "00011", 27 => "00001", 
    28 => "00000", 29 => "11111", 30 => "00000", 31 => "11110", 32 => "11100", 
    33 => "01000", 34 => "11110", 35 => "00001", 36 => "11110", 37 => "01000", 
    38 => "11110", 39 => "11111", 40 => "00101", 41 => "01000", 42 => "11101", 
    43 to 44=> "00101", 45 => "00000", 46 => "11111", 47 => "11101", 48 => "00011", 
    49 => "11010", 50 => "11101", 51 => "00101", 52 => "11011", 53 => "11010", 
    54 => "11100", 55 => "11110", 56 => "11011", 57 => "00001", 58 => "00100", 
    59 => "11010", 60 => "00010", 61 => "11110", 62 => "11111", 63 => "11001" );

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

entity conv3_weight_convgpb is
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

architecture arch of conv3_weight_convgpb is
    component conv3_weight_convgpb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgpb_rom_U :  component conv3_weight_convgpb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


