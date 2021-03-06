#include "main.h"

/**
 * _pow_recursion - caluculates the power of x raised to y
 * @x: The integer to power
 * @y: The power of the integer.
 * Return: -1 if y is less 0, otherwise cal power.
 */
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
