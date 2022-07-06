#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: The character to be checked
 * Return: 1 if character is a lowercase or uppercase letter, otherwise return 0
 */
int _isalpha(int c)
{
  if((c >= 97 && c<=122) || (c>=65 && c<=90))
    return(1);
  else
    return(0);
}
