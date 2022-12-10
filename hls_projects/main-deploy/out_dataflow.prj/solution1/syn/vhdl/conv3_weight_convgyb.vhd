-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgyb_rom is 
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


architecture rtl of conv3_weight_convgyb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11010", 2 => "11011", 3 => "11100", 4 => "00010", 
    5 => "11100", 6 => "11111", 7 => "11101", 8 => "01000", 9 => "00100", 
    10 => "00110", 11 => "11100", 12 => "00001", 13 => "00101", 14 => "00110", 
    15 => "00011", 16 => "11101", 17 => "00100", 18 to 19=> "00000", 20 => "11111", 
    21 => "11101", 22 => "00001", 23 => "11111", 24 => "11000", 25 => "00111", 
    26 => "00001", 27 => "00000", 28 => "11111", 29 => "00111", 30 => "00100", 
    31 => "11100", 32 => "00001", 33 => "00110", 34 => "00010", 35 => "00000", 
    36 => "01000", 37 => "00010", 38 => "00000", 39 => "11111", 40 => "11011", 
    41 => "00001", 42 => "00000", 43 => "00011", 44 => "11101", 45 => "00000", 
    46 => "00001", 47 => "00101", 48 => "00111", 49 => "11011", 50 => "00010", 
    51 => "00000", 52 => "00111", 53 => "11101", 54 => "00100", 55 => "11100", 
    56 => "11101", 57 to 58=> "11110", 59 => "00000", 60 => "00101", 61 => "11011", 
    62 to 63=> "00000" );

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

entity conv3_weight_convgyb is
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

architecture arch of conv3_weight_convgyb is
    component conv3_weight_convgyb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgyb_rom_U :  component conv3_weight_convgyb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


