#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Character pointing to a string of numbers.
 * Return:  Converted number, else 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0;
if (*b == '\0')
{
return (0);
}
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
sum = (*b - '0') + sum * 2;
b++;
}
return (sum);
}
