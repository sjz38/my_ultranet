-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convgQb_x_rom is 
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


architecture rtl of conv3_weight_convgQb_x_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000", 1 => "1111", 2 => "1000", 3 => "0000", 4 => "1111", 
    5 => "0110", 6 => "0000", 7 => "1100", 8 => "1011", 9 => "1100", 
    10 => "1111", 11 => "1001", 12 to 13=> "0011", 14 => "0110", 15 => "0101", 
    16 => "0000", 17 => "1010", 18 => "1110", 19 => "1000", 20 => "1011", 
    21 => "1101", 22 to 23=> "0000", 24 => "1000", 25 => "0100", 26 => "0000", 
    27 => "1111", 28 => "1100", 29 => "1001", 30 => "1110", 31 => "1101", 
    32 to 33=> "1011", 34 => "1001", 35 => "0001", 36 => "0000", 37 => "1110", 
    38 => "0001", 39 => "1101", 40 => "1110", 41 => "1101", 42 => "0011", 
    43 => "1011", 44 => "1101", 45 => "0011", 46 => "0001", 47 => "0100", 
    48 => "0101", 49 => "1100", 50 => "1101", 51 => "1111", 52 => "0001", 
    53 => "1001", 54 => "1000", 55 => "0011", 56 => "0001", 57 => "1011", 
    58 => "0010", 59 to 60=> "1011", 61 to 62=> "0000", 63 => "1011" );

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

entity conv3_weight_convgQb_x is
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

architecture arch of conv3_weight_convgQb_x is
    component conv3_weight_convgQb_x_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convgQb_x_rom_U :  component conv3_weight_convgQb_x_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


