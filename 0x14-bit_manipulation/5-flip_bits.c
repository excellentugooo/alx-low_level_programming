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
	int a, record = 0;
	unsigned long int number;
	unsigned long int xor;

	xor = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		number = xor >> a;
		if (number & 1)
			record++;
	}
	return (record);
}
