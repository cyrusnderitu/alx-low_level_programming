#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest file to be copied into
 * @src: file to copy from
 * Return: The Copied into file i.e dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int index;
  while(src)
    {
      for(index = 0; index < n; index++)
	{
	  src[index] = dest[index];
	}
    }
  return (dest);
}
