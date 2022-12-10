-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convihb_rom is 
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


architecture rtl of conv3_weight_convihb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "0001", 2 => "0000", 3 => "0011", 4 => "1110", 5 => "1101", 
    6 => "0010", 7 => "0001", 8 => "0000", 9 => "1100", 10 => "0010", 
    11 => "0000", 12 => "0001", 13 => "1100", 14 => "0011", 15 => "1101", 
    16 => "1110", 17 => "0100", 18 => "1110", 19 => "1101", 20 => "0011", 
    21 => "1101", 22 => "1111", 23 => "0011", 24 => "1111", 25 => "1011", 
    26 => "0011", 27 => "0111", 28 => "0001", 29 => "1110", 30 to 31=> "1111", 
    32 to 33=> "1110", 34 => "0000", 35 => "0100", 36 => "1101", 37 => "0001", 
    38 => "1111", 39 => "1101", 40 => "0000", 41 => "1110", 42 => "0010", 
    43 => "0001", 44 => "0101", 45 to 46=> "0110", 47 => "1100", 48 => "1111", 
    49 => "1110", 50 => "1001", 51 => "0001", 52 => "1110", 53 => "0010", 
    54 => "1100", 55 => "0001", 56 to 57=> "1111", 58 => "1100", 59 => "1111", 
    60 => "1100", 61 => "1110", 62 => "0000", 63 => "0001" );

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

entity conv3_weight_convihb is
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

architecture arch of conv3_weight_convihb is
    component conv3_weight_convihb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convihb_rom_U :  component conv3_weight_convihb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


