#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: iterate string and print
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
