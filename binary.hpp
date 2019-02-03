
#if !defined(BINARY_HPP)
#define BINARY_HPP

#include "logic.hpp"

namespace binary
{

uint bit_init(void); // initialize number of bits
double bits_min(const uint BITS); // calculate the min value
double bits_max(const uint BITS); // calculate the max value

size_t no_values(uint BITS); // calculate number of values

enum class Num_Check
{
    overflow = 1,
    underflow = -1,
    regular = 0
};

void num_check(int n, int min, int max);

std::vector<uint> dec_bin(int n, uint BITS);
std::vector<uint> new_number(int n);
std::vector<uint> new_number_in(void);
std::vector<uint> new_number(uint BITS, int n);
std::vector<uint> new_number_in(uint BITS);

} // namespace binary

#endif // BINARY_HPP
