#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: string
 *
 * Return: 0 or 1
 */

int _isdigit(char *c)
{
	int x = 0;

	while (c[x])
	{
		if (c[x] < '0' || c[x] > '9')
			return (0);
		x++;
	}
	return (1);	
}

/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
	lenght++;
	s++;
	}
return (lenght);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{

	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int l1, l2, lenght, x, c;
	int d1, d2, *result, y = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
	{
		errors();
	}
	l1 = _strlen(str1);
	l2 = _strlen(str2);
	lenght = l1 + l2 + 1;

	result = malloc(sizeof(int) * lenght);
	if (!result)
		return (1);
	for (x = 0; x <= l1 + l2; x++)
		result[x] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = str1[l1] - '0';
		c = 0;
		for (l2 = _strlen(str2) - 1; l2 >= 0; l2--)
		{
			d2 = str2[l2] - '0';
			c += result[l1 + l2 + 1] + (d1 * d2);
			result[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[l1 + l2 + 1] += c;
	}
	for (x = 0; x < lenght - 1; x++)
	{
		if (result[x])
			y = 1;
		if (y)
		_putchar(result[x] + '0');
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
