-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convfV5_rom is 
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


architecture rtl of conv3_weight_convfV5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1101", 1 to 2=> "0010", 3 => "0001", 4 => "0010", 5 to 6=> "1110", 
    7 to 8=> "0001", 9 => "1101", 10 => "0011", 11 => "1011", 12 => "1001", 
    13 => "1110", 14 => "0000", 15 => "1111", 16 => "1000", 17 to 18=> "1100", 
    19 => "1111", 20 => "0101", 21 => "1111", 22 => "0100", 23 => "1100", 
    24 => "1000", 25 => "0100", 26 => "0011", 27 to 28=> "1101", 29 => "1100", 
    30 => "1010", 31 => "1001", 32 => "1110", 33 => "1001", 34 => "0100", 
    35 => "1100", 36 => "0010", 37 => "1100", 38 to 39=> "1110", 40 => "0101", 
    41 => "1100", 42 => "0011", 43 => "0010", 44 to 46=> "0000", 47 => "0001", 
    48 => "1111", 49 => "1011", 50 => "1110", 51 => "1011", 52 => "0000", 
    53 => "1000", 54 => "0001", 55 => "0010", 56 => "1100", 57 => "1111", 
    58 => "1010", 59 => "1011", 60 => "1111", 61 => "1100", 62 => "0000", 
    63 => "1111" );

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

entity conv3_weight_convfV5 is
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

architecture arch of conv3_weight_convfV5 is
    component conv3_weight_convfV5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convfV5_rom_U :  component conv3_weight_convfV5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


