#include "function_pointers.h"

/**
 * int_index - Function for integer comparrison
 * @array: array containing int for compairing
 * @size: size of array
 * @cmp: function pointer for compairing int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
