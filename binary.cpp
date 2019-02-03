
#include "binary.hpp"

uint binary::bit_init(void)
{
    uint x{};
    std::cin >> x;
    return x;
}

double binary::bits_min(const uint n)
{
    return -pow(2, n - 1);
}

double binary::bits_max(const uint n)
{
    return pow(2, n - 1) - 1;
}

void binary::num_check(int n, int min, int max)
{
    binary::Num_Check x{};
    if (n < min)
        x = binary::Num_Check::underflow;
    else if (n > max)
        x = binary::Num_Check::overflow;
    else
        x = binary::Num_Check::regular;

    try
    {
        switch (static_cast<int>(x))
        {
        case -1:
            std::cout << "\nValue less than " << min << '\n';
            throw std::underflow_error("Underflow");
            break;

        case 1:
            std::cout << "\nValue more than " << max << '\n';
            throw std::overflow_error("Overflow");
            break;

        default:
            return;
            break;
        }
    }
    catch (const std::exception &e)
    {
        std::terminate();
    }
}

std::vector<uint> binary::dec_bin(int n, uint b)
{
    bool neg{};
    if (n < 0)
    {
        neg = true;
        n *= -1;
    }
    std::vector<uint> v;

    for (uint i{}; i < b; ++i)
    {
        v.push_back(n % 2);
        n >>= 1;
    }

    if (neg == true)
        v[v.size() - 1] = 1;

    std::reverse(v.begin(), v.end());
    return v;
}

std::vector<uint> binary::new_number_in(void)
{
    std::cout << "Set the number of bits: ";
    const uint BITS{binary::bit_init()};
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;
    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

std::vector<uint> binary::new_number_in(uint BITS)
{
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;
    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

std::vector<uint> binary::new_number(int n)
{
    std::cout << "Set the number of bits: ";
    const uint BITS{binary::bit_init()};
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

std::vector<uint> binary::new_number(uint BITS, int n)
{
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

size_t binary::no_values(uint BITS)
{
    return pow(2, BITS);
}
