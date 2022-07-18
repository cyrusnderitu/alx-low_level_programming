#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to the memory location
 * @b: constant byte to fill
 * @n: bytes to fill to the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
char *storage = s;
int index;
for (index = 0; index < n; index++)
storage[index] = b;
return (s);
}
