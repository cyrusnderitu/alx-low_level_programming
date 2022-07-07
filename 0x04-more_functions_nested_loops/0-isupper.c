#include "main.h"

/**
 *_isupper - checks for uppercase character
 * @c: parameter charater
 * Return: 1 if c is uppercase or 0 when otherwise
 */
int _isupper(int c)
{
if(c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
