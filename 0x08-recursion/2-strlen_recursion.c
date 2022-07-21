#include "main.h"

/**
 * _strlen_recursion - produces  length of a string.
 * @s: String to be measured length.
 * Return: Length of the s.
 */
int _strlen_recursion(char *s)
{
int len = 0, index;
for (index = 0; s[index] != '\0'; index++)
{
len++;
}
return (len);
}
