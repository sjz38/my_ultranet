-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convft1_rom is 
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


architecture rtl of conv3_weight_convft1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110", 1 => "00011", 2 => "11100", 3 => "00111", 4 => "11100", 
    5 to 6=> "11111", 7 to 9=> "11011", 10 => "00010", 11 => "00000", 12 => "11011", 
    13 => "00010", 14 => "00101", 15 => "00010", 16 => "11000", 17 => "00000", 
    18 => "00101", 19 => "00000", 20 => "11100", 21 => "00001", 22 => "11101", 
    23 => "00010", 24 => "01000", 25 to 26=> "00111", 27 => "00100", 28 => "00010", 
    29 => "11110", 30 => "11001", 31 => "01000", 32 => "11000", 33 => "01000", 
    34 => "00100", 35 to 36=> "11110", 37 => "11101", 38 => "11011", 39 => "01000", 
    40 => "00001", 41 => "11110", 42 to 43=> "11111", 44 => "00011", 45 => "00101", 
    46 => "00011", 47 => "00001", 48 => "11011", 49 to 50=> "11111", 51 => "00111", 
    52 => "11011", 53 => "00010", 54 => "11101", 55 => "00011", 56 to 57=> "00010", 
    58 => "11100", 59 => "00000", 60 => "00010", 61 => "11101", 62 to 63=> "11111" );

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

entity conv3_weight_convft1 is
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

architecture arch of conv3_weight_convft1 is
    component conv3_weight_convft1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convft1_rom_U :  component conv3_weight_convft1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


