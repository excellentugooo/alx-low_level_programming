#include "main.h"

int prime_number(int num, int it);

/**
 * is_prime_number - identify prime numbers
 * @n: input
 *
 * Return: 1 if n is a prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (prime_number(n, n - 1));
	}
}

/**
 * prime_number - calculates if a number is prime
 * using recursive
 * @num: number to evaluate
 * @it: iterator
 *
 * Return: 1 if n is prime, else 0 if not
 */

int prime_number(int num, int it)
{
	if (it == 1)
	{
		return (1);
	}
	if (num % it == 0 && it > 0)
	{
		return (0);
	}
	else
	{
	return (prime_number(num, it - 1));
	}
}
