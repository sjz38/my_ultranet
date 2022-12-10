-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhtb_rom is 
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


architecture rtl of conv3_weight_convhtb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "00100", 2 => "11111", 3 to 5=> "00010", 6 => "11110", 
    7 => "11101", 8 => "00100", 9 => "11111", 10 => "00110", 11 => "00101", 
    12 => "00010", 13 => "00000", 14 => "00100", 15 => "00110", 16 => "00011", 
    17 => "11000", 18 to 19=> "11111", 20 => "11101", 21 => "00011", 22 => "00001", 
    23 => "00011", 24 => "00110", 25 => "11011", 26 => "01000", 27 => "11101", 
    28 to 30=> "00010", 31 => "00101", 32 to 33=> "00100", 34 => "11101", 35 => "00110", 
    36 => "11110", 37 => "11100", 38 => "00010", 39 => "11101", 40 => "11110", 
    41 => "00111", 42 => "00010", 43 => "11101", 44 => "00000", 45 => "00100", 
    46 => "00000", 47 => "00101", 48 => "11111", 49 => "11100", 50 => "11001", 
    51 => "00001", 52 => "00111", 53 => "11110", 54 to 55=> "11000", 56 => "11110", 
    57 => "00011", 58 => "11100", 59 => "11111", 60 => "11001", 61 => "00001", 
    62 => "00000", 63 => "01000" );

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

entity conv3_weight_convhtb is
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

architecture arch of conv3_weight_convhtb is
    component conv3_weight_convhtb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhtb_rom_U :  component conv3_weight_convhtb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


