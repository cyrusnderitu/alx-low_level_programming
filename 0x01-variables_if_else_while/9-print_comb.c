#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * only using putchar and without char variables.
 * Return: Always 0 (Success).
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
if (num == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
