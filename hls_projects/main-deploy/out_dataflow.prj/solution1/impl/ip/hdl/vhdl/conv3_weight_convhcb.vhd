-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhcb_rom is 
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


architecture rtl of conv3_weight_convhcb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0010", 1 => "1011", 2 => "1110", 3 => "0000", 4 => "0010", 
    5 => "1010", 6 => "1011", 7 => "0001", 8 => "1110", 9 => "1111", 
    10 => "1100", 11 => "0010", 12 => "1110", 13 => "1100", 14 => "0001", 
    15 => "0011", 16 => "0001", 17 => "0000", 18 => "1111", 19 => "1110", 
    20 to 21=> "0010", 22 => "1011", 23 to 24=> "0010", 25 => "1001", 26 => "0001", 
    27 => "0011", 28 => "0010", 29 to 31=> "0011", 32 => "0001", 33 => "0010", 
    34 => "1110", 35 => "0001", 36 => "1110", 37 => "1010", 38 => "1011", 
    39 => "0010", 40 => "1000", 41 => "1010", 42 => "0101", 43 => "0000", 
    44 => "1100", 45 => "0001", 46 => "1111", 47 => "0100", 48 => "1100", 
    49 => "0011", 50 => "1100", 51 => "1101", 52 => "0100", 53 => "1101", 
    54 => "1000", 55 => "1110", 56 => "0101", 57 => "1011", 58 => "1001", 
    59 => "1111", 60 => "1101", 61 => "1111", 62 to 63=> "0001" );

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

entity conv3_weight_convhcb is
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

architecture arch of conv3_weight_convhcb is
    component conv3_weight_convhcb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhcb_rom_U :  component conv3_weight_convhcb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


