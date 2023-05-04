#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer
 * Return: void
 */

void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char tmp;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
		tmp = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = tmp;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: pointer
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflw = 0, a = 0, b = 0, digits = 0;
	int value1 = 0, value2 = 0, tmp_tot = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >= 0 || a >= 0 || overflw == 1)
	{
		if (a < 0)
			value1 = 0;
		else
			value1 = *(n1 + a) - '0';
		if (b < 0)
			value2 = 0;
		else
			value2 = *(n2 + b) - '0';
		tmp_tot = value1 + value2 + overflw;
		if (tmp_tot >= 10)
			overflw = 1;
		else
			overflw = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_tot % 10) + '0';
		digits++;
		b--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
