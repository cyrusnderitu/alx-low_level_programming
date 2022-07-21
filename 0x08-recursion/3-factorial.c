#include "main.h"

/**
 * factorial - Gives the factorial of a given number.
 * @n: number to find the factorial of.
 * Return: 0 if n is greater than o and -1 if n is less.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
int ans = n*factorial(n-1);
return (ans);
}
}
