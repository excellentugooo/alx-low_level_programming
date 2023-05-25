#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameter
 * @...: parameters
 *
 * Return: sum of n, 0 when n = 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int x;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(add, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(add, int)
	}
	va_end;
	return (sum);
}
