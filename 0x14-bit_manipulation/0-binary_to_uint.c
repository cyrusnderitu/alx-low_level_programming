#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: String of 0 and 1 char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0;
if (b == NULL)
	return 0;
int i = 0;
while (b[i] != '\0')
{
	if (b[i] != '0' && b[i] != '1')
		return 0;
	sum = (sum << 1) + (b[i] - '0');
i++;
}
return sum;
}
