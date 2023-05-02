#include "main.h"
#include <stdio.h>

/**
 * print_rev -  a function that prints a string, in reverse.
 * @s: sring
 */

void print_rev(char *s)
{
	int lenght = 0;
	int w;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (w = lenght; w = 0; w++)
	{
		_putchar(*s);
		ss--;
	}
	_putchar('\n');
}
