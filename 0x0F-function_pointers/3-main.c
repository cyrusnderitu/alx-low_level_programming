#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_error - prints errors
*/
void print_error()
{
int i = 0;
char err[] = "Error";
while (err[i] != '\0')
{
	putchar(err[i]);
	i++;
}
putchar('\n');
}

/**
 * main - return result of desired calculation from command line options
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always success(0) else (-1).
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;
	int (*op_func)(int, int);
	char *op;
	if (argc != 4)
	{
		print_error();
		exit(98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		print_error();
		exit(100);
	}
	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		print_error();
		exit(99);
	}
	ans = op_func(num1, num2);
	putchar(ans +'0');
	putchar('\n');
	return (0);
}
