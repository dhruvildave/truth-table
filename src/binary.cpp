
#include "binary.hpp"

unsigned int binary::bit_init() {
    unsigned int x{};
    std::cin >> x;
    return x;
}

double binary::bits_min(const unsigned int n) { return -pow(2, n - 1); }

double binary::bits_max(const unsigned int n) { return pow(2, n - 1) - 1; }

void binary::num_check(int n, int min, int max) {
    binary::Num_Check x{};
    if (n < min) {
        x = binary::Num_Check::underflow;
    } else if (n > max) {
        x = binary::Num_Check::overflow;
    } else {
        x = binary::Num_Check::regular;
    }

    try {
        switch (x) {
        case Num_Check::underflow:
            std::cout << "\nValue less than " << min << '\n';
            throw std::underflow_error("Underflow");
            break;

        case Num_Check::overflow:
            std::cout << "\nValue more than " << max << '\n';
            throw std::overflow_error("Overflow");
            break;

        default:
            return;
            break;
        }
    } catch (const std::exception &e) {
        std::terminate();
    }
}

std::vector<unsigned int> binary::dec_bin(int n, unsigned int b) {
    bool neg{};
    if (n < 0) {
        neg = true;
        n *= -1;
    }
    std::vector<unsigned int> v;

    for (unsigned int i{}; i < b; ++i) {
        v.push_back(n % 2);
        n >>= 1;
    }

    if (neg) {
        v[v.size() - 1] = 1;
    }

    std::reverse(v.begin(), v.end());
    return v;
}

std::vector<unsigned int> binary::new_number_in() {
    std::cout << "Set the number of bits: ";
    const unsigned int BITS{binary::bit_init()};
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;
    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

std::vector<unsigned int> binary::new_number_in(unsigned int BITS) {
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;
    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

std::vector<unsigned int> binary::new_number(int n) {
    std::cout << "Set the number of bits: ";
    const unsigned int BITS{binary::bit_init()};
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

std::vector<unsigned int> binary::new_number(unsigned int BITS, int n) {
    const double BITS_MIN{binary::bits_min(BITS)};
    const double BITS_MAX{binary::bits_max(BITS)};

    binary::num_check(n, BITS_MIN, BITS_MAX);

    return {binary::dec_bin(n, BITS)};
}

size_t binary::no_values(unsigned int BITS) { return pow(2, BITS); }
