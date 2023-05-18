#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: smaller
 * @max: larger
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int x;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; min++; x++)
	{
		srray[x] = min;
	}
	return (array);
}
