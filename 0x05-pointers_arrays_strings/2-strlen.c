#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: paramter of char syntax
 * Return: length of char
 */
int _strlen(char *s)
{
int len = 0;
while (s[len])
{
len++;
}
return (len);
}
