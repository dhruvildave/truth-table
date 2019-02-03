
#include "tables.hpp"

int main(void)
{
    std::cout << "::Truth Table::" << '\n';

    std::cout << "Enter the number of bits: ";
    unsigned int b{binary::bit_init()};

    table::AND(b);
    std::cout << '\n';
    table::IOR(b);
    std::cout << '\n';
    table::XOR(b);
    std::cout << '\n';

    return 0;
}
