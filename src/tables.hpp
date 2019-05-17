
#if !defined(TABLES_HPP)
#define TABLES_HPP

#include "binary.hpp"

namespace table {

void AND(unsigned int BITS);  // and
void IOR(unsigned int BITS);  // inclusive or
void XOR(unsigned int BITS);  // exclusive or
void NOR(unsigned int BITS);  // not or
void NAND(unsigned int BITS); // not and
void NXOR(unsigned int BITS); // not xor
void NOT();                   // not

} // namespace table

#endif // TABLES_HPP
