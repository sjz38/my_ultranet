-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgzb_rom is 
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


architecture rtl of conv3_weight_convgzb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000", 1 to 2=> "11011", 3 => "00001", 4 => "11101", 5 => "11111", 
    6 => "00001", 7 => "11110", 8 => "00101", 9 => "00100", 10 => "11100", 
    11 => "11001", 12 => "11010", 13 => "00001", 14 => "00011", 15 => "11111", 
    16 => "00100", 17 => "11101", 18 => "00011", 19 to 20=> "00000", 21 => "11101", 
    22 to 23=> "11100", 24 => "11110", 25 => "01000", 26 => "11110", 27 to 28=> "11101", 
    29 to 30=> "11111", 31 to 32=> "11101", 33 => "11111", 34 => "00111", 35 => "11101", 
    36 => "11011", 37 to 38=> "11111", 39 => "00010", 40 => "11110", 41 => "00001", 
    42 => "00010", 43 to 44=> "00100", 45 => "11111", 46 => "11110", 47 to 48=> "00011", 
    49 => "00110", 50 => "00111", 51 => "11101", 52 => "00111", 53 => "11110", 
    54 => "00101", 55 => "11110", 56 => "00000", 57 => "11110", 58 => "00010", 
    59 => "11010", 60 => "11101", 61 => "11110", 62 => "00000", 63 => "11111" );

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

entity conv3_weight_convgzb is
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

architecture arch of conv3_weight_convgzb is
    component conv3_weight_convgzb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgzb_rom_U :  component conv3_weight_convgzb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


