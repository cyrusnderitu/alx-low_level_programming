#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void) 
{  
int x;
for (x = 'A'; x <= 'Z'; x++)    
{
putchar(tolower(x));      
}
for (x = 'A'; x <= 'Z'; x++)    
{
putchar(toupper(x));      
}  
putchar('\n');  
return (0); 
}
