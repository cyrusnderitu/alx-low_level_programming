#include "main.h"

/**
 * _pow_recursion - caluculates the power of x raised to y
 * @x: The integer to power
 * @y: The power of the integer.
 * Return: -1 if y is less 0, otherwise cal power.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
x = x ** y;
return (x);
}
}
