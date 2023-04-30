#include "function_pointers.h"

/**
 * array_iterator - Function t iterate value in array
 * @array: array of values to give to func
 * @size: size of array
 * @action: function pointer to pass values from array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
