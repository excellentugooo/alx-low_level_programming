#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _isdigit - checks if a string contains a non-digit char
 * @c: string
 *
 * Return: 0 if a non-digit,else 1
 */

int _isdigit(char *c)
{
	int x = 0;

	while (c[x])
	{
		if (c[x] < '0' || c[x] > '9')
		{
			return (0);
		}
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @c: string
 *
 * Return: the length of the string
 */

int _strlen(char *c)
{
	int lenght = 0;

	while (c[lenght] != '\0')
	{
		lenght++;
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
 * main - multiplies two positive numb
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int lenght1, lenght2, lenght, x, c, d1, d2, *result, y = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		errors();
	lenght1 = _strlen(str1);
	lenght2 = _strlen(str2);
	lenght = lenght1 + lenght2 + 1;
	result = malloc(sizeof(int) * lenght);
	if (!result)
		return (1);
	for (x = 0; x <= lenght1 + lenght2; x++)
		result[x] = 0;
	for (lenght1 = lenght1 - 1; lenght1 >= 0; lenght1--)
	{
		d1 = str1[lenght1] - '0';
		c = 0;
		for (lenght2 = _strlen(str2) - 1; lenght2 >= 0; lenght2--)
		{
			d2 = str2[lenght2] - '0';
			c += result[lenght1 + lenght2 + 1] + (d1 * d2);
			result[lenght1 + lenght2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[lenght1 + lenght2 + 1] += c;
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
