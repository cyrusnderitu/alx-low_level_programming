#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
/* your code goes there */
if (last_digit > 5)
{
printf("Last digit of %d", n);
printf(" is %d", last_digit);
printf("and is greater than 5\n");
}
else if (last_digit < 6)
{
printf("Last digit of %d", n);
printf(" is %d", last_digit);
printf("and is less than 6 and not 0\n");
}
else if (last_digit == 0)
{
printf("Last digit of %d", n);
printf(" is %d", last_digit);
printf("and is 0\n");
}
else
{
return (0);
}
}
