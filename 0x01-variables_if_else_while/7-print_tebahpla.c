#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'C program for writing alpahbets lowercase in reverse.'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 'Z'; n >= 'A'; n--)
{
putchar(tolower(n));
}
putchar('\n');
return (0);
}
