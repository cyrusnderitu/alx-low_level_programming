#include "3-calc.h"

/**
 * get_op_func -  Fetches the right function
 * @s: arithmetic operator to carry out operation
 * Return: return the right operation
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    for (i = 0; ops[i] != '\0'; i++)
    {
	    if (ops[i].op[0] == s)
		    return ops[i].f;
	    else
	    {
		while (err[i] != '0')
		_putchar(err[i++]);
		exit(99);
	    }
    }
    return (NULL);
}

