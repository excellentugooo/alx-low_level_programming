#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to value
 * @index: index from 0
 *
 * Return: 1 if it worked, or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int size;

	size = ((sizeof(unsigned long int) * 8) - 1)0;

	if (index > size)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
