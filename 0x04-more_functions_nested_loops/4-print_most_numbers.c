#include "main.h"

/**
 * print_most_numbers -  Print numbers excluding 2 and 4
 */
void print_most_numbers(void)
{
for(int c = 0; c <= 9; c++)
{
if(c != 2 && c != 4)
{
_putchar((num % 10) + '0');
}
}
_putchar('\n');
return 0;
}
