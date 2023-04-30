#include "3-calc.h"

/**
 *
 *
 *
 */
int main(int argc, char argv[])
{
	int num1, num2, result;
	char *op;
	char err = "Error";
	if (argc > 4)
		_putchar(err);
		exit(98);
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		_putchar(err);
		exit(100);
	}
	result = get_op_funct(op)(num1, num2);
	_putchar(result + '0');
	_putchar('\n');
}
