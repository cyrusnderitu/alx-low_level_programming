#include "main.h"

/**
 * binary_to_uint - Converts binary to number
 * @b: pointer to string of 0 and 1's
 * Return: covnerted num of b else (0)
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0, mult = 1;
int len = 0;
if (*b == '\0')
return (0);
while (b[len])
len++;
for (len -= 1; len >= 0; len--)
{
	if (b[len] != '0' && b[len] != '1')
	return (0);
	num += (b[len] - '0') * mult;
	mult *= 2;
}
return (num);
}
