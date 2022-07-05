#include "main.h"

/**
 * print_alphabet - Print lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int count = 0;
char c;
while (count <= 9)
{
for (c ='a'; c <='z'; c++)
{
_putchar(c);
}
_putchar('\n');
count++;
}
}
