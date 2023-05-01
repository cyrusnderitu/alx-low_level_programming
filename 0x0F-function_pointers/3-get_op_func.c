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
        {NULL, NULL}
};
while (ops[i].op)
{
    if (ops[i].op[0] == s[0])
	    return ops[i].f;
    else
    {
	printf("Error\n");
	exit(99);
    }
i++;
}
    return (NULL);
}

