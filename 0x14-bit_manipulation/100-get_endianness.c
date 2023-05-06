#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian else (1)
 */
int get_endianness(void)
{
int num = 1;
char *end_ian = (char *)&num;
if (*end_ian == 1)
return (1);
return (0);
}
