#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: file to be copied into
 * @src: file to copy from
 * @n: the number of time copied in src
 * Return: The Copied into file i.e dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
while(src)
for (index = 0; index < n; index++)
{
dest[index] = src[index];
}
return (dest);
}
