#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value
 * @index: index starting from 0
 *
 * Return: the value of the bit at index or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = ((n >> index) & 1);
	return (value);
}
