#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int a, b, n, lenght, c, digit;

	a = 0;
	b = 0;
	n = 0;
	lenght = 0;
	c = 0;
	digit = 0;

	while (s[lenght] != '\0')
		lenght++;
	while (a < lenght && c == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}
	if (c == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers.
 * two numbers and result of the multiplication are stored in an integer
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 success, 1 as error
 */

int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		result = n1 * n2;

		printf("%d\n", result);

	}
	return (0);
}
