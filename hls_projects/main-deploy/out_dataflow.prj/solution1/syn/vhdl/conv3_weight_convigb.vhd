-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convigb_rom is 
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


architecture rtl of conv3_weight_convigb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111", 1 => "11000", 2 => "11101", 3 => "11100", 4 => "00000", 
    5 => "00011", 6 => "11101", 7 => "00001", 8 => "11101", 9 => "00010", 
    10 => "00001", 11 => "00010", 12 => "11110", 13 => "00010", 14 => "11101", 
    15 => "11011", 16 => "00010", 17 => "00001", 18 => "00100", 19 to 20=> "11110", 
    21 => "11111", 22 => "00100", 23 => "11011", 24 => "11111", 25 => "11101", 
    26 => "00000", 27 => "00101", 28 => "00011", 29 => "00001", 30 => "00000", 
    31 => "00100", 32 => "01000", 33 => "11011", 34 => "00100", 35 => "00010", 
    36 => "00100", 37 => "11111", 38 => "00110", 39 => "11100", 40 to 41=> "00010", 
    42 => "00001", 43 => "11100", 44 => "00001", 45 => "11110", 46 => "00010", 
    47 to 49=> "11111", 50 => "00010", 51 => "00011", 52 => "11101", 53 => "00001", 
    54 => "11100", 55 => "11110", 56 => "11100", 57 => "11111", 58 => "00001", 
    59 to 60=> "11110", 61 => "00001", 62 => "00000", 63 => "00111" );

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

entity conv3_weight_convigb is
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

architecture arch of conv3_weight_convigb is
    component conv3_weight_convigb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convigb_rom_U :  component conv3_weight_convigb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


