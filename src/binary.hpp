
#if !defined(BINARY_HPP)
#define BINARY_HPP

#include "logic.hpp"

namespace binary {

unsigned int bit_init();         // initialize number of bits
double bits_min(unsigned int n); // calculate the min value
double bits_max(unsigned int n); // calculate the max value

size_t no_values(unsigned int BITS); // calculate number of values

enum class Num_Check { overflow = 1, underflow = -1, regular = 0 };

void num_check(int n, int min, int max);

std::vector<unsigned int> dec_bin(int n, unsigned int BITS);
std::vector<unsigned int> new_number(int n);
std::vector<unsigned int> new_number_in();
std::vector<unsigned int> new_number(unsigned int BITS, int n);
std::vector<unsigned int> new_number_in(unsigned int BITS);

} // namespace binary

#endif // BINARY_HPP
