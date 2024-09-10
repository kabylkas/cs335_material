#include "Valu.h"

#include <iostream>

int main()
{
    Valu* dut = new Valu();
    dut->a = 1;
    dut->b = 2;
    dut->eval();

    int expected_output = 3;
    int dut_output = (int)dut->c;

    if (expected_output == dut_output)
    {
        std::cout << "OK" << std::endl;
    }
    else
    {
        std::cout << "Fail!" << std::endl;
    }

    return 0;
}
