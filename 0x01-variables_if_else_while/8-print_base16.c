#include <stdio.h>

#include <ctype.h>



/**
 * main - Prints all single digit numbers of base 16 in lowercase,
 * only using putchar and without char variables.
 * Return: Always 0 (Success).
 */
int main(void) 
{  
int num;
char letter;
for (num = 0; num < 10; num++)    
{
putchar((num % 10) + '0');
}
for (letter = 'A'; letter <= 'F'; letter++)
{
putchar(tolower(letter))
}
putchar('\n');
return (0); 
}
