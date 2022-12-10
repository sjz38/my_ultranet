-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhpb_rom is 
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


architecture rtl of conv3_weight_convhpb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "1111", 2 => "0000", 3 => "0010", 4 to 5=> "1101", 6 => "0010", 
    7 => "1111", 8 => "1011", 9 to 10=> "1111", 11 => "1100", 12 => "1101", 
    13 => "1000", 14 => "0010", 15 => "0000", 16 => "1100", 17 => "0010", 
    18 => "1111", 19 => "0011", 20 => "1100", 21 => "1111", 22 => "1011", 
    23 => "1101", 24 to 25=> "1110", 26 => "1011", 27 => "0010", 28 => "0100", 
    29 => "1001", 30 => "0000", 31 => "0010", 32 => "0001", 33 => "0011", 
    34 => "0010", 35 => "0001", 36 => "0101", 37 => "1101", 38 => "1111", 
    39 => "1100", 40 => "0101", 41 to 42=> "0011", 43 => "0000", 44 => "1111", 
    45 => "0000", 46 => "1100", 47 => "0010", 48 => "1100", 49 => "0110", 
    50 => "1111", 51 => "1110", 52 to 53=> "1101", 54 => "0010", 55 => "0001", 
    56 => "0011", 57 => "1110", 58 => "1100", 59 to 60=> "1101", 61 => "1110", 
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

entity conv3_weight_convhpb is
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

architecture arch of conv3_weight_convhpb is
    component conv3_weight_convhpb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhpb_rom_U :  component conv3_weight_convhpb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


