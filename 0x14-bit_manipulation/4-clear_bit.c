#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This funct clears the value of a bit to 0 at a specified index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear to 0, starting from 0.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1UL << index);

return (1);
}
