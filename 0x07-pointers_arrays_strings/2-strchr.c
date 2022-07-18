#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: Char String where search is happening
 * @c: Character being searched
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
int index = 0;
while (s[index++]) // Increment index of char *s
if (s[index] == c) // While increment index in  Char *s check if the char c exist
{
return (s + index);
}
return ('\0');
}
