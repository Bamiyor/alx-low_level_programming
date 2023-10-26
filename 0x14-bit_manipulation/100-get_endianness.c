#include "main.h"

/**
 * get_endianness - This function determines the endianness of the system.
 *
 * Return: 0 if it's big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
int testValue = 1;
char *bytePointer = (char *)&testValue;
return (*bytePointer);
}

