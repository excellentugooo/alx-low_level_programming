#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 *
 * Return: lenght
 */

unsigned int _strlen(char *s)
{
	unsigned int lenght = 0;

	while (*s != '\0')
	{
	lenght++;
	s++;
	}
return (lenght);
}

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

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
 * checks - checks string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int checks(char *str)
{
	unsigned int count;

	count = 0;
	while (count < _strlen(str))
	{
		if (!_isdigit(str[count]))
		{
			return (0);
		}


	count++;
	}
		return (1);
}



/**
 * main - that adds positive numbers.
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 success, 1 error
 */

int main(int argc, char *argv[])
{
	int count;
	int i;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (checks(argv[count]))
		{
			i = _atoi(argv[count]);
			sum += i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
