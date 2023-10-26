#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to change
 * to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that must be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index;
unsigned int bitCount = 0;
unsigned long int diffBits = n ^ m;

for (index = 63; index >= 0; index--)
{
unsigned long int currentBit = diffBits >> index;
if (currentBit & 1)
bitCount++;
}
return (bitCount);
}
