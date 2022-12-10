-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convf67_rom is 
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


architecture rtl of conv3_weight_convf67_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00100", 1 => "00010", 2 => "11010", 3 => "00010", 4 => "00110", 
    5 => "11111", 6 => "11101", 7 => "00010", 8 => "00011", 9 => "11110", 
    10 to 11=> "00011", 12 => "11110", 13 => "00011", 14 => "11010", 15 => "11110", 
    16 => "11101", 17 => "00101", 18 => "11110", 19 => "11011", 20 => "00001", 
    21 => "11111", 22 => "11001", 23 => "11111", 24 => "11101", 25 => "00101", 
    26 => "00010", 27 => "11000", 28 => "01000", 29 => "00001", 30 => "11101", 
    31 => "11100", 32 => "11110", 33 => "00000", 34 => "11100", 35 => "00101", 
    36 => "11111", 37 => "00001", 38 => "11100", 39 to 40=> "11110", 41 => "11101", 
    42 => "00010", 43 to 44=> "00000", 45 => "00010", 46 => "11111", 47 => "11001", 
    48 => "11110", 49 => "11100", 50 to 51=> "00001", 52 => "11000", 53 => "11101", 
    54 to 55=> "00100", 56 => "11101", 57 => "11110", 58 => "11101", 59 => "00001", 
    60 => "11111", 61 => "00100", 62 => "00000", 63 => "11101" );

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

entity conv3_weight_convf67 is
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

architecture arch of conv3_weight_convf67 is
    component conv3_weight_convf67_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convf67_rom_U :  component conv3_weight_convf67_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


