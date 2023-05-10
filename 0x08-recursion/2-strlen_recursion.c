#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string
 *
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	int lenght;

	lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
