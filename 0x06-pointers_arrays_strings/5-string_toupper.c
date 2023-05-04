#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: pointer
 *
 * Return: c
 */

char *string_toupper(char *c)
{
	int j;

	j = 0;
	while (c[j] != '\0')
	{
		if (c[j] >= 'a' && c[j] <= 'z')
		{
			c[j] = c[j] - 32;
		}
		j++;
	}
	return (c);
}
