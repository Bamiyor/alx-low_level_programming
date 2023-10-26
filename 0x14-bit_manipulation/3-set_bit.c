#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a specified index.
 * @n: A pointer to the number where the bit will be set.
 * @index: The index at which the bit will be set to 1.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitToSet;

if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

bitToSet = 1UL << index;
*n = *n | bitToSet;

	return (1);
}
