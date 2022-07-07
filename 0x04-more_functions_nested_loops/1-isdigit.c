#include "main.h"

/**
 *_isdigit - checks for digits from (0 - 9)
 * @c: parameter charater
 * Return: 1 if c is a digit or 0 when otherwise
 */
int _isdigit(int c)
{
if(c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
