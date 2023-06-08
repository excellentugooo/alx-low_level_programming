#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: numbetr to convert
 */

void print_binary(unsigned long int n)
{
	int i, digit = 0;
	unsigned long int number;

	int size = (sizeof(unsigned long int) * 8);

	for (i = (size - 1); i >= 0 ; i--)
	{
		number = n >> i;
		if (number & 1)
		{
			_putchar('1');
			digit++;
		}
		else if (digit)
			_putchar('0');
	}
	if (!digit)
	{
		_putchar('0');
	}
}
