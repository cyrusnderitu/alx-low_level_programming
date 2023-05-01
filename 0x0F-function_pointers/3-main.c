#include "3-calc.h"

/**
 * main - main function to run ops
 * @argc - count of argv
 * @argv - array of values passed on func call
 * Return: Always success(0) else (-1) or NULL
 */
int main(int argc, char *argv[])
{
int num1, num2, result, i = 0;
int (*op_func)(int, int);
char *op;
char err[] = "Error";
if (argc != 4)
{
while (err[i] != '0')
_putchar(err[i++]);
exit(98);
}
op = argv[2];
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((op[0] == '/' || op[0] == '%') && num2 == 0)
{
while (err[i] != '0')
_putchar(err[i++]);
exit(100);
}
op_func = get_op_func(op);
result = op_func(num1, num2);
_putchar(result + '0');
_putchar('\n');
exit(EXIT_SUCCESS);
}
