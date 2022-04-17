
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity test_mul_mul_5ns_d5N_DSP48_5 is
port (
    a: in std_logic_vector(5 - 1 downto 0);
    b: in std_logic_vector(15 - 1 downto 0);
    p: out std_logic_vector(18 - 1 downto 0));

end entity;

architecture behav of test_mul_mul_5ns_d5N_DSP48_5 is
    signal a_cvt: unsigned(5 - 1 downto 0);
    signal b_cvt: unsigned(15 - 1 downto 0);
    signal p_cvt: unsigned(18 - 1 downto 0);


begin

    a_cvt <= unsigned(a);
    b_cvt <= unsigned(b);
    p_cvt <= unsigned (resize(unsigned (unsigned (a_cvt) * unsigned (b_cvt)), 18));
    p <= std_logic_vector(p_cvt);

end architecture;
Library IEEE;
use IEEE.std_logic_1164.all;

entity test_mul_mul_5ns_d5N is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of test_mul_mul_5ns_d5N is
    component test_mul_mul_5ns_d5N_DSP48_5 is
        port (
            a : IN STD_LOGIC_VECTOR;
            b : IN STD_LOGIC_VECTOR;
            p : OUT STD_LOGIC_VECTOR);
    end component;



begin
    test_mul_mul_5ns_d5N_DSP48_5_U :  component test_mul_mul_5ns_d5N_DSP48_5
    port map (
        a => din0,
        b => din1,
        p => dout);

end architecture;


