#include "main.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int index = 0; 
int len = 0;
while (dest[index++])
{
len++;
}
for (index = 0; src[index]; index++)
{
dest[len++] = src[index];
}
return (dest);
}
