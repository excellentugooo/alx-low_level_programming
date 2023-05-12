#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cent, count, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cent = atoi(argv[1]);

	result = 0;

	if (cent < 0)
	{
		printf("0\n");

		return (0);
	}

	for (count = 0; count < 5 && cent >= 0; count++)
	{
		while (cent >= coins[count])
	{
		result++;

		cent -= coins[count];
	}

	}

	printf("%d\n", result);

	return (0);

}
