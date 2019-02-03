
#include "tables.hpp"

void table::AND(uint b)
{
    std::cout << "And - " << b << " bits\n";
    for (uint i{}; i < binary::no_values(b); ++i)
    {
        uint f{1};
        std::vector<uint> v{binary::new_number(b + 1, i)};
        for (uint i{1}; i < v.size(); ++i)
        {
            f &= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << f << '\n';
    }

    return;
}

void table::IOR(uint b)
{
    std::cout << "Inclusive Or - " << b << " bits\n";
    for (uint i{}; i < binary::no_values(b); ++i)
    {
        uint f{0};
        std::vector<uint> v{binary::new_number(b + 1, i)};
        for (uint i{1}; i < v.size(); ++i)
        {
            f |= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << f << '\n';
    }

    return;
}

void table::XOR(uint b)
{
    std::cout << "Exclusive Or - " << b << " bits\n";
    for (uint i{}; i < binary::no_values(b); ++i)
    {
        uint f{0};
        std::vector<uint> v{binary::new_number(b + 1, i)};
        for (uint i{1}; i < v.size(); ++i)
        {
            f ^= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << f << '\n';
    }

    return;
}

void table::NAND(uint b)
{
    std::cout << "Not And - " << b << " bits\n";
    for (uint i{}; i < binary::no_values(b); ++i)
    {
        uint f{1};
        std::vector<uint> v{binary::new_number(b + 1, i)};
        for (uint i{1}; i < v.size(); ++i)
        {
            f &= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << !f << '\n';
    }

    return;
}

void table::NXOR(uint b)
{
    std::cout << "Not Enclusive Or - " << b << " bits\n";
    for (uint i{}; i < binary::no_values(b); ++i)
    {
        uint f{0};
        std::vector<uint> v{binary::new_number(b + 1, i)};
        for (uint i{1}; i < v.size(); ++i)
        {
            f ^= v[i];
            std::cout << v[i] << '\t';
        }
        std::cout << '|' << '\t';
        std::cout << !f << '\n';
    }

    return;
}

void table::NOR(uint b)
{
    std::cout << "Not Inclusive Or - " << b << " bits\n";
    for (uint i{}; i < binary::no_values(b); ++i)
    {
        uint f{0};
        std::vector<uint> v{binary::new_number(b + 1, i)};
        for (uint i{1}; i < v.size(); ++i)
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
    for (uint i{}; i < binary::no_values(1); ++i)
    {
        std::vector<uint> v{binary::new_number(2, i)};
        std::cout << v[1] << '\t';
        std::cout << '|' << '\t';
        std::cout << !v[1] << '\n';
    }

    return;
}
