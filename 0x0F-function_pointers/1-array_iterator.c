#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: no of element
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (iterator = 0; iterator < size; iterator++)
	{
		(*action)(array[iterator]);
	}
}

