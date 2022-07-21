#include "main.h"

int _calc_sqrt(int n, int rt);
/**
 * _calc_sqrt - calculates how to get root.
 * _sqrt_recursion - finding sqrt with recursion
 * @n: The number to sqrt.
 * @rt: int multiplied to itself to see if it == n.
 * Return: -1 if number is not natural number or
 * the root if number is natural.
 */
int _calc_sqrt(int n, int rt)
{
if (rt * rt == n)
{
return (rt);
}
else
{
return (_calc_sqrt(n, rt + 1));
}
}
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
{
return (_calc_sqrt(n, root));
}
}
