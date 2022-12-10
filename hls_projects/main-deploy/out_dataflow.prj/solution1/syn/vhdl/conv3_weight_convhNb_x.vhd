-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convhNb_x_rom is 
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


architecture rtl of conv3_weight_convhNb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00010", 2 to 3=> "11011", 4 => "00000", 5 => "11101", 
    6 to 7=> "00011", 8 => "11000", 9 to 10=> "00000", 11 => "11110", 12 => "11101", 
    13 => "11100", 14 => "00011", 15 => "00001", 16 => "11000", 17 => "11011", 
    18 => "00001", 19 => "11011", 20 to 22=> "11100", 23 => "11110", 24 => "00001", 
    25 => "00010", 26 => "00000", 27 => "11011", 28 => "00010", 29 => "11110", 
    30 => "00011", 31 => "00001", 32 => "11111", 33 to 34=> "11101", 35 => "00110", 
    36 => "01000", 37 => "11001", 38 to 39=> "11111", 40 => "11101", 41 => "11110", 
    42 => "11000", 43 => "00010", 44 => "00001", 45 => "00101", 46 => "11110", 
    47 => "11001", 48 => "11100", 49 => "00011", 50 => "00000", 51 => "11010", 
    52 => "11101", 53 => "00011", 54 => "00101", 55 => "11001", 56 => "00001", 
    57 => "00110", 58 to 59=> "11110", 60 => "00000", 61 => "00100", 62 => "11111", 
    63 => "00001" );

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

entity conv3_weight_convhNb_x is
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

architecture arch of conv3_weight_convhNb_x is
    component conv3_weight_convhNb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convhNb_x_rom_U :  component conv3_weight_convhNb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


