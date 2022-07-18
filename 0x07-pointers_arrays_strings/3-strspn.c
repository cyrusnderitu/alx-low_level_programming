#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The Char string to be searched
 * @accept: string containing the list of characters to match
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int size = 0;
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
size++;
break;
}
s++;
}
}
return (size);
}
