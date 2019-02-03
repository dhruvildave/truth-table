
#if !defined(TABLES_HPP)
#define TABLES_HPP

#include "binary.hpp"

namespace table
{

void AND(uint BITS);  // and
void IOR(uint BITS);  // inclusive or
void XOR(uint BITS);  // exclusive or
void NOR(uint BITS);  // not or
void NAND(uint BITS); // not and
void NXOR(uint BITS); // not xor
void NOT(void);       // not

} // namespace table

#endif // TABLES_HPP
