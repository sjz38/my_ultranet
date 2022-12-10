-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhXb_x_rom is 
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


architecture rtl of conv3_weight_convhXb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 => "1010", 2 => "1101", 3 => "0011", 4 => "0001", 
    5 => "0101", 6 => "0000", 7 to 8=> "1111", 9 => "1100", 10 => "0111", 
    11 => "0010", 12 => "0011", 13 => "1101", 14 => "0010", 15 => "0011", 
    16 => "1111", 17 => "0001", 18 => "0100", 19 => "0000", 20 to 21=> "0010", 
    22 => "0011", 23 => "1110", 24 => "0001", 25 => "1110", 26 => "1101", 
    27 => "0011", 28 => "0001", 29 => "0100", 30 => "0000", 31 => "1110", 
    32 => "0110", 33 => "0001", 34 => "1100", 35 => "1110", 36 => "1100", 
    37 => "1110", 38 => "0111", 39 => "1111", 40 => "0100", 41 => "0000", 
    42 => "0101", 43 => "1110", 44 => "0011", 45 => "1110", 46 => "0110", 
    47 => "1110", 48 => "1111", 49 => "0000", 50 => "0100", 51 => "0001", 
    52 => "0010", 53 => "0001", 54 => "1110", 55 => "0001", 56 => "1111", 
    57 => "0011", 58 => "0001", 59 => "1101", 60 => "1110", 61 => "0000", 
    62 => "0001", 63 => "1111" );

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

entity conv3_weight_convhXb_x is
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

architecture arch of conv3_weight_convhXb_x is
    component conv3_weight_convhXb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhXb_x_rom_U :  component conv3_weight_convhXb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


