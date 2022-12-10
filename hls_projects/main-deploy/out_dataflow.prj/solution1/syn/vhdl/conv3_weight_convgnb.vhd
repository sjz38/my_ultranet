-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgnb_rom is 
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


architecture rtl of conv3_weight_convgnb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00001", 1 => "11101", 2 => "11111", 3 => "11000", 4 => "11111", 
    5 => "11110", 6 => "11010", 7 => "11110", 8 => "11001", 9 => "00001", 
    10 => "11001", 11 => "00011", 12 => "11111", 13 => "00011", 14 => "11000", 
    15 => "11001", 16 => "00100", 17 => "11110", 18 => "11100", 19 => "11111", 
    20 => "00100", 21 to 22=> "00010", 23 => "00001", 24 => "11110", 25 => "00101", 
    26 => "01000", 27 => "11101", 28 => "00100", 29 to 30=> "11100", 31 => "00000", 
    32 => "11101", 33 => "11001", 34 to 35=> "00001", 36 => "11001", 37 => "00111", 
    38 => "00001", 39 => "11001", 40 => "00101", 41 => "00100", 42 => "00011", 
    43 => "11111", 44 => "11000", 45 => "11010", 46 => "00001", 47 => "11110", 
    48 => "01000", 49 => "00010", 50 => "11001", 51 => "11101", 52 => "00101", 
    53 => "11101", 54 => "01000", 55 => "00011", 56 to 57=> "11000", 58 => "00101", 
    59 => "11001", 60 => "00000", 61 => "00010", 62 => "00000", 63 => "00100" );

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

entity conv3_weight_convgnb is
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

architecture arch of conv3_weight_convgnb is
    component conv3_weight_convgnb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgnb_rom_U :  component conv3_weight_convgnb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


