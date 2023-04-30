#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name param to print
 * @f: pointer to a func that prints name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
