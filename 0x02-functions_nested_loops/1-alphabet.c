#include "main.h"

/**
 * main - Print lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
for (int c = 'A'; c < 'Z'; c++)
_purchar(tolower(c));
_putchar('\n');
return (0);
}
