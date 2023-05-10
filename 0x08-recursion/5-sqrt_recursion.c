#include "main.h"

int natural_sqrt(int num, int it);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 *
 * Return: squareroot and -1 when n has none
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (natural_sqrt(n, 0));
	}
}

/**
 * natural_sqrt - find the natural square root
 * using recursion
 * @num: input integer
 * @it: iterator
 *
 * Return: square root
 */

int natural_sqrt(int num, int it)
{
	if (it * it > num)
	{
		return (-1);
	}
	else if (it * it == num)
	{
		return (it);
	}
	else
	{
		return (natural_sqrt(num, it + 1));
	}
}
