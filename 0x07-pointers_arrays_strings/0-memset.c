#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to the memory location
 * @b: constant byte to fill
 * @n: bytes to fill to the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
unsigned char *memory = s, value = b;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
