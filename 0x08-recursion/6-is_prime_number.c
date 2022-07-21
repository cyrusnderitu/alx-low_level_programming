#include "main.h"

int prime_check(int digit, int div);
/**
 * prime_check - Checks if a number is prime by divibility of 2.
 * @digit: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 */
int prime_check(int digit, int div)
{
if (digit % div == 0)
{
return (0);
}
else
{
return (prime_check(digit, div + 1));
}
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The integer to be checked.
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)  
{  
int div = 2;
if (n <= 1)
{
return (0);
}
else if (n >= 2 && n <= 3)
{
return (1);
}
else
{
return (is_divisible(n, div));
}
}
