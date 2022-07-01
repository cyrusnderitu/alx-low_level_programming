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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d", n);
printf(" is positive\n");
}
else if (n < 0)
{
printf("%d", n);
printf(" is negative\n");
}
else
{
printf("%d", n);
printf(" is zero\n");
}
return (0);
}
