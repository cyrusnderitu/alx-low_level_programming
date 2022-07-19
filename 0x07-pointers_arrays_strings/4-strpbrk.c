#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: Pointer s that matches the the accept
 */
char *_strpbrk(char *s, char *accept)
{
int index;
while (s[index++])
{
for (index = 0 ; accept[index]; index++)
{
if (*s == accept[index])
{
return (s);
}
}
}
return ('\0');
}
