
#include "tables.hpp"

void table::AND(unsigned int b)
{
    std::cout << "And - " << b << " bits\n";
    for (unsigned int i{}; i < binary::no_values(b); ++i)
    {
        unsigned int f{1};
        std::vector<unsigned int> v{binary::new_number(b + 1, i)};
        for (unsigned int i{1}; i < v.size(); ++i)
        {
            f &= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << f << '\n';
    }

    return;
}

void table::IOR(unsigned int b)
{
    std::cout << "Inclusive Or - " << b << " bits\n";
    for (unsigned int i{}; i < binary::no_values(b); ++i)
    {
        unsigned int f{0};
        std::vector<unsigned int> v{binary::new_number(b + 1, i)};
        for (unsigned int i{1}; i < v.size(); ++i)
        {
            f |= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << f << '\n';
    }

    return;
}

void table::XOR(unsigned int b)
{
    std::cout << "Exclusive Or - " << b << " bits\n";
    for (unsigned int i{}; i < binary::no_values(b); ++i)
    {
        unsigned int f{0};
        std::vector<unsigned int> v{binary::new_number(b + 1, i)};
        for (unsigned int i{1}; i < v.size(); ++i)
        {
            f ^= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << f << '\n';
    }

    return;
}

void table::NAND(unsigned int b)
{
    std::cout << "Not And - " << b << " bits\n";
    for (unsigned int i{}; i < binary::no_values(b); ++i)
    {
        unsigned int f{1};
        std::vector<unsigned int> v{binary::new_number(b + 1, i)};
        for (unsigned int i{1}; i < v.size(); ++i)
        {
            f &= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << !f << '\n';
    }

    return;
}

void table::NXOR(unsigned int b)
{
    std::cout << "Not Enclusive Or - " << b << " bits\n";
    for (unsigned int i{}; i < binary::no_values(b); ++i)
    {
        unsigned int f{0};
        std::vector<unsigned int> v{binary::new_number(b + 1, i)};
        for (unsigned int i{1}; i < v.size(); ++i)
        {
            f ^= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << !f << '\n';
    }

    return;
}

void table::NOR(unsigned int b)
{
    std::cout << "Not Inclusive Or - " << b << " bits\n";
    for (unsigned int i{}; i < binary::no_values(b); ++i)
    {
        unsigned int f{0};
        std::vector<unsigned int> v{binary::new_number(b + 1, i)};
        for (unsigned int i{1}; i < v.size(); ++i)
        {
            f |= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << !f << '\n';
    }

    return;
}

void table::NOT(void)
{
    std::cout << "Not - 2 bits\n";
    for (unsigned int i{}; i < binary::no_values(1); ++i)
    {
        std::vector<unsigned int> v{binary::new_number(2, i)};
        std::cout << v[1] << '\t';
        std::cout << '|' << '\t';
        std::cout << !v[1] << '\n';
    }

    return;
}
