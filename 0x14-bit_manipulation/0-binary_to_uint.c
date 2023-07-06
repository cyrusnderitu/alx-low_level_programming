#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: String of 0 and 1 char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0, times = 1;
int len;
if (*b == '\0')
{
	return (0);
}
else
{
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		sum += (b[len] - '0') * times;
		times *= 2;
	}
return (sum);
}
}
