#include "main.h"

/**
 * _sqrt_recursion - finding sqrt with recursion
 * @n: The number to sqrt.
 * Return: -1 if number is not natural number or
 * the root if number is natural.
 */
int calc_sqrt(int n, int rt)
{
if (rt * rt == num)
{
return (rt);
}
else
{
return (calc_sqrt(n, rt +1));
}
}
/**
 * calc_sqrt - calculates how to get root.
 * @rt: int multiplied to itself to see if it == n.
 * Return: rt if number is == n or
 * return back to its function but with an increment.
 */
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
return(calc_sqrt(n, root))
}
