#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string
 */

void puts2(char *str)
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
