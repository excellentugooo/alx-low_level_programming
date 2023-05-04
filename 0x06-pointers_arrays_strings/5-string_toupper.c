#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: pointer
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int z;

	z = 0;
	while (a[z] != '\0')
	{
		if (a[z] >= 'a' && a[z] <= 'z')
			a[z] = a[z] - 32;
			z++;
	}
	return (a);
}
