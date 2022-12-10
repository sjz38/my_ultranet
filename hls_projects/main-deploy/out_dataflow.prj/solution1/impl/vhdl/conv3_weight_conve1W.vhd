-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_conve1W_rom is 
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


architecture rtl of conv3_weight_conve1W_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000", 1 => "00100", 2 to 3=> "00000", 4 => "00011", 5 => "11100", 
    6 => "00100", 7 to 8=> "00000", 9 => "00011", 10 => "00110", 11 => "00001", 
    12 => "00000", 13 => "00100", 14 => "11100", 15 => "11001", 16 => "00110", 
    17 => "11011", 18 => "00011", 19 => "11110", 20 => "00111", 21 => "11110", 
    22 => "11010", 23 => "11111", 24 => "11011", 25 => "00001", 26 => "11011", 
    27 => "00011", 28 => "01000", 29 => "11000", 30 => "00011", 31 => "00100", 
    32 => "00101", 33 => "00001", 34 => "00011", 35 => "00110", 36 to 37=> "11011", 
    38 => "11101", 39 => "11100", 40 => "00000", 41 => "00011", 42 => "00001", 
    43 => "11100", 44 => "00000", 45 to 46=> "11101", 47 => "00001", 48 => "00000", 
    49 to 50=> "11111", 51 => "11101", 52 => "00001", 53 => "11111", 54 => "00010", 
    55 => "00001", 56 => "11101", 57 => "00011", 58 => "11001", 59 => "00000", 
    60 => "11100", 61 => "11110", 62 => "00000", 63 => "00100" );

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

entity conv3_weight_conve1W is
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

architecture arch of conv3_weight_conve1W is
    component conv3_weight_conve1W_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_conve1W_rom_U :  component conv3_weight_conve1W_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


