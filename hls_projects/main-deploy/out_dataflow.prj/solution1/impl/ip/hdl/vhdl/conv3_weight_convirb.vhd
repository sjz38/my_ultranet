-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convirb_rom is 
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


architecture rtl of conv3_weight_convirb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "01000", 2 => "11110", 3 => "00001", 4 => "11100", 
    5 => "00001", 6 => "00100", 7 => "11010", 8 => "00101", 9 => "00001", 
    10 => "00110", 11 => "00010", 12 => "00101", 13 => "00100", 14 => "00000", 
    15 => "11011", 16 to 17=> "00010", 18 => "11111", 19 => "00011", 20 => "11100", 
    21 => "00011", 22 => "11010", 23 => "00001", 24 => "11010", 25 => "11110", 
    26 => "00010", 27 => "01000", 28 => "00000", 29 => "00110", 30 => "00010", 
    31 => "00000", 32 => "00010", 33 => "00111", 34 => "11011", 35 => "00011", 
    36 => "01000", 37 to 38=> "11111", 39 => "00101", 40 => "00001", 41 => "11001", 
    42 => "11111", 43 => "11000", 44 => "11101", 45 => "00010", 46 => "11110", 
    47 to 48=> "11001", 49 => "00101", 50 => "11001", 51 => "11010", 52 => "00010", 
    53 => "11111", 54 => "11110", 55 => "00001", 56 => "11110", 57 => "00010", 
    58 to 59=> "00110", 60 => "00111", 61 => "00000", 62 => "11111", 63 => "00001" );

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

entity conv3_weight_convirb is
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

architecture arch of conv3_weight_convirb is
    component conv3_weight_convirb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convirb_rom_U :  component conv3_weight_convirb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


