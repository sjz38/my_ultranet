-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
--
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity test_conv1_0_ram is 
    generic(
            MEM_TYPE    : string := "block"; 
            DWIDTH     : integer := 32; 
            AWIDTH     : integer := 20; 
            MEM_SIZE    : integer := 819200
    ); 
    port (
          addr0     : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          d0        : in std_logic_vector(DWIDTH-1 downto 0); 
          we0       : in std_logic; 
          q0        : out std_logic_vector(DWIDTH-1 downto 0);
          clk        : in std_logic 
    ); 
end entity; 


architecture rtl of test_conv1_0_ram is 

signal addr0_t1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
shared variable ram : mem_array;

attribute syn_ramstyle : string; 
attribute syn_ramstyle of ram : variable is "block_ram";
attribute ram_style : string;
attribute ram_style of ram : variable is MEM_TYPE;
signal addr0_t0 : std_logic_vector(AWIDTH-1 downto 0); 
signal addr0_t1 : std_logic_vector(AWIDTH-1 downto 0); 
signal d0_t0 : std_logic_vector(DWIDTH-1 downto 0); 
signal we0_t0 : std_logic; 
signal d0_t1 : std_logic_vector(DWIDTH-1 downto 0); 
signal we0_t1 : std_logic; 
signal q0_t0 : std_logic_vector(DWIDTH-1 downto 0);
signal q0_t1 : std_logic_vector(DWIDTH-1 downto 0);

begin 

addr0_t0 <= addr0;
d0_t0 <= d0;
we0_t0 <= we0;
q0 <= q0_t1;

p_IO_pipeline_reg : process (clk)  
begin
    if (clk'event and clk = '1') then
      if (ce0 = '1') then
        addr0_t1 <= addr0_t0; 
        d0_t1 <= d0_t0;
        we0_t1 <= we0_t0;
        q0_t1 <= q0_t0;
      end if;
    end if;
end process;

memory_access_guard_0: process (addr0_t1) 
begin
      addr0_t1_tmp <= addr0_t1;
--synthesis translate_off
      if (CONV_INTEGER(addr0_t1) > mem_size-1) then
           addr0_t1_tmp <= (others => '0');
      else 
           addr0_t1_tmp <= addr0_t1;
      end if;
--synthesis translate_on
end process;

p_memory_access_0: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0_t0 <= ram(CONV_INTEGER(addr0_t1_tmp));
            if (we0_t1 = '1') then 
                ram(CONV_INTEGER(addr0_t1_tmp)) := d0_t1; 
            end if;
        end if;
    end if;
end process;


end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity test_conv1_0 is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 819200;
        AddressWidth : INTEGER := 20);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of test_conv1_0 is
    component test_conv1_0_ram is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            we0 : IN STD_LOGIC;
            d0 : IN STD_LOGIC_VECTOR;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    test_conv1_0_ram_U :  component test_conv1_0_ram
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        we0 => we0,
        d0 => d0,
        q0 => q0);

end architecture;


