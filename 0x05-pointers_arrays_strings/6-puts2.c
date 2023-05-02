#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string.
 * @str: string
 */

void puts_half(char *str)
{
	int lenght = 0;
	int l = 0;
	char *s = str;
	int w;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	l = lenght - 1;
	for (w = 0; w <= l; w++)
	{
		if (w % 2 == 0)
		{
			_putchar(str[w]);
		}
	}
	_putchar('\n');
}
