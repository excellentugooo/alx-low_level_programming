#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: value
 * @m: value
 *
 * Return: numbsr of flipped bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c;
	unsigned long int number;
	unsigned long int xor;

	xor = n ^ m;

	i = 63;
	while (i >= 0)
	{
		number = xor >> i;
		if (number & 1)
			count++;
	}
	return (count);
}
