-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhab_rom is 
    generic(
             DWIDTH     : integer := 4; 
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


architecture rtl of conv3_weight_convhab_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011", 1 => "1111", 2 => "0010", 3 => "1100", 4 => "1101", 
    5 => "0100", 6 => "1110", 7 => "0010", 8 => "1111", 9 => "0001", 
    10 => "1011", 11 => "0010", 12 => "0000", 13 => "0011", 14 => "1011", 
    15 => "1110", 16 => "1001", 17 => "0010", 18 => "0000", 19 => "1101", 
    20 => "0001", 21 => "1111", 22 to 23=> "0001", 24 => "1111", 25 => "0010", 
    26 => "1111", 27 => "1110", 28 => "0101", 29 => "1111", 30 => "0101", 
    31 => "0010", 32 => "0101", 33 => "1111", 34 => "0100", 35 => "1111", 
    36 => "0010", 37 => "0101", 38 => "1110", 39 => "1010", 40 => "1100", 
    41 => "1011", 42 to 43=> "0100", 44 => "1110", 45 => "1010", 46 => "1111", 
    47 => "0011", 48 => "0101", 49 => "1101", 50 => "1000", 51 => "0010", 
    52 => "1111", 53 => "1101", 54 => "0000", 55 => "0111", 56 to 57=> "1111", 
    58 => "0100", 59 to 60=> "1110", 61 => "0100", 62 => "0001", 63 => "1101" );

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

entity conv3_weight_convhab is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convhab is
    component conv3_weight_convhab_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhab_rom_U :  component conv3_weight_convhab_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


