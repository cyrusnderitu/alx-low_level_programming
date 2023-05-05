#include "main.h"

/**
 * get_bit - gets value of bit at idx
 * @n: bit itself
 * @index: point of extraction
 * Return: val of index else(-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
