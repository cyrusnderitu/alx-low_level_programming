#include "main.h"

/**
 * puts_half - prints half of a string
 * @n: holds half of the string
 * @str: String provided
 */
void puts_half(char *str)
{
int len = 0, index, n;
while(str[len])
len++;
if((len % 2) == 0)
n = len / 2;
else
n = (len -1) / 2;
for(index = n; index <= len; index++)
_putchar(str[index]);
_putchar('\n')
}
