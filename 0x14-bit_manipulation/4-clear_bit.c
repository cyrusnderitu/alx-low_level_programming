#include "main.h"

/**
 * clear_bit - reverse of get_bit(at index, bit = 0)
 * @n: pointer to bit
 * @index: position of the val to convert
 * Return: 1 if success else (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
