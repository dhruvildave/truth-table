
#include "tables.hpp"

int main(void)
{
    // Use the "binary" namespace for binary numbers
    // Use the "tables" namespace for truth tables

    std::cout << "::Truth Table::" << '\n';

    std::cout << "Enter the number of bits: ";
    unsigned int b{binary::bit_init()};

    table::AND(b);
    std::cout << '\n';
    table::IOR(b);
    std::cout << '\n';
    table::XOR(b);
    std::cout << '\n';

    std::vector<unsigned int> v{binary::new_number_in()};
    for (auto i : v)
        std::cout << i;
    std::cout << '\n';

    return 0;
}
