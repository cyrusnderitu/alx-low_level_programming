#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to the memory location
 * @b: constant byte to fill
 * @n: bytes to fill to the pointer
 * Return: The pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0; index < n; index++)
{
s[index] = b;
}
return (s);
}
