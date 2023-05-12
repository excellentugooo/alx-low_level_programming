#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * followed by a new line.
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
