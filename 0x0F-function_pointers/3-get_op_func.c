#include "3-calc.h"

/**
 * get_op_func -  Fetches the right function
 * @s: arithmetic operator to carry out operation
 * Return: return the right operation
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
char err[] = "Error";
op_t ops[] = {
        {"+", op_add},
        {NULL, NULL}
};
while (ops[i].op)
{
    if (ops[i].op[0] == s[0])
	    return ops[i].f;
    else
    {
	while (err[i] != '0')
	_putchar(err[i++]);
	exit(99);
    }
i++;
}
    return (NULL);
}

