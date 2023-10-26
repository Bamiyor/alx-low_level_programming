#include "main.h"
#include <math.h>

/**
 * print_binary - Print the binary representation of a number.
 * @n: The number to be printed in binary notation.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char leadingZero = 0;

divisor = pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
leadingZero = 1;
_putchar('1');
}
else if (leadingZero == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
