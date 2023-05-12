#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * Only print one argument per line,
 * ending with a new line
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
