-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conveKT_rom is 
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


architecture rtl of conv3_weight_conveKT_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "00000", 2 => "11101", 3 to 5=> "11110", 6 => "11111", 
    7 to 8=> "00100", 9 => "00011", 10 => "11001", 11 to 13=> "11111", 14 => "00010", 
    15 => "00011", 16 => "00100", 17 => "11011", 18 => "11110", 19 to 20=> "00001", 
    21 => "00101", 22 => "11001", 23 => "11111", 24 => "11001", 25 => "00110", 
    26 => "00001", 27 => "00011", 28 => "00010", 29 => "11101", 30 => "00101", 
    31 => "00100", 32 => "11111", 33 => "00001", 34 => "11010", 35 => "11111", 
    36 => "01000", 37 => "00010", 38 to 39=> "00000", 40 => "11111", 41 => "11011", 
    42 => "11101", 43 => "00110", 44 => "00000", 45 => "00001", 46 => "11010", 
    47 => "00000", 48 => "11011", 49 => "00010", 50 => "11100", 51 => "00100", 
    52 => "00011", 53 => "11000", 54 => "00111", 55 => "00000", 56 => "00100", 
    57 => "11100", 58 => "11111", 59 => "11010", 60 => "00001", 61 => "01000", 
    62 => "00000", 63 => "00010" );

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

entity conv3_weight_conveKT is
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

architecture arch of conv3_weight_conveKT is
    component conv3_weight_conveKT_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conveKT_rom_U :  component conv3_weight_conveKT_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


