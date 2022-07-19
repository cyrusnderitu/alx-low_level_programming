#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string to be scanned
 * @needle: sub-string to be searched in haystack string
 * Return:  pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
int index = 0;
if (!needle)
{
return (haystack);
}
while (haystack[index++])
{
if (haystack[index] == needle[index])
{
return (haystack + index);
}
}
return ('\0');
}
