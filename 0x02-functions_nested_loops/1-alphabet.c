#include "main.h"

/**
 * main - Print lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
for (c = 97; c < 122; c++)
_purchar(tolower(c));
_putchar('\n');
return (0);
}
