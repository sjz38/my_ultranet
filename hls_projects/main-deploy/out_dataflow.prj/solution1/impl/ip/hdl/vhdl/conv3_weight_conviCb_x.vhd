-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conviCb_x_rom is 
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


architecture rtl of conv3_weight_conviCb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011", 1 => "00001", 2 => "11111", 3 => "11100", 4 => "11010", 
    5 => "00011", 6 => "00001", 7 => "11111", 8 => "00001", 9 => "11110", 
    10 => "11101", 11 => "00100", 12 => "00001", 13 => "11010", 14 => "01000", 
    15 => "00000", 16 => "00010", 17 => "11111", 18 => "11010", 19 => "00001", 
    20 => "00100", 21 => "11011", 22 => "00010", 23 => "11010", 24 => "00011", 
    25 => "11111", 26 => "00111", 27 => "00000", 28 => "11101", 29 => "11100", 
    30 => "11011", 31 => "00001", 32 to 33=> "11110", 34 => "00001", 35 => "00100", 
    36 => "00101", 37 => "11110", 38 => "00010", 39 => "11011", 40 => "00000", 
    41 => "00011", 42 => "00010", 43 => "00001", 44 => "11001", 45 => "11011", 
    46 => "00110", 47 => "00001", 48 => "00010", 49 => "00111", 50 to 51=> "11111", 
    52 => "00011", 53 => "00100", 54 => "00001", 55 => "00110", 56 => "00101", 
    57 => "11110", 58 to 59=> "11111", 60 => "00010", 61 => "11110", 62 => "00000", 
    63 => "11110" );

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

entity conv3_weight_conviCb_x is
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

architecture arch of conv3_weight_conviCb_x is
    component conv3_weight_conviCb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conviCb_x_rom_U :  component conv3_weight_conviCb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


