#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: input string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
