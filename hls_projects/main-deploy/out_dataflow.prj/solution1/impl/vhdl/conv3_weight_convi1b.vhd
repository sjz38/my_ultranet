-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv3_weight_convi1b_rom is 
    generic(
             DWIDTH     : integer := 2; 
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


architecture rtl of conv3_weight_convi1b_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "01", 2 => "00", 3 => "11", 4 => "00", 5 => "01", 6 => "00", 
    7 => "11", 8 to 9=> "00", 10 to 11=> "11", 12 => "00", 13 => "11", 14 => "00", 
    15 => "11", 16 to 17=> "00", 18 => "11", 19 => "00", 20 => "01", 21 => "00", 
    22 => "01", 23 => "11", 24 => "00", 25 => "11", 26 => "00", 27 => "01", 
    28 => "00", 29 => "01", 30 => "00", 31 => "11", 32 => "01", 33 => "11", 
    34 => "00", 35 to 36=> "11", 37 => "00", 38 => "01", 39 to 40=> "11", 41 => "01", 
    42 to 45=> "00", 46 => "11", 47 => "00", 48 to 49=> "11", 50 => "00", 51 => "11", 
    52 to 53=> "00", 54 to 55=> "11", 56 => "00", 57 => "11", 58 to 60=> "00", 61 to 62=> "01", 
    63 => "00" );

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

entity conv3_weight_convi1b is
    generic (
        DataWidth : INTEGER := 2;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv3_weight_convi1b is
    component conv3_weight_convi1b_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv3_weight_convi1b_rom_U :  component conv3_weight_convi1b_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


