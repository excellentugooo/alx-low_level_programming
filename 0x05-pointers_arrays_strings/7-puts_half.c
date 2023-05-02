#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string and a new line
 * @str: string
 */

void puts_half(char *str)
{
	int l, n, lenght;

	lenght = 0;

	for (l = 0; str[l] != '\0'; l++)
	{
		lenght++;
	}
	n = (lenght / 2);

	if ((lenght % 2) == 1)
	{
		n = ((lenght + 1) / 2);
	}
	for (l = n; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
