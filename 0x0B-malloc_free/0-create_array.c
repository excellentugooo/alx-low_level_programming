#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char
 *
 * Return: *s or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	int a;
	char *s;

	s = malloc(size * sizeeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (c);
}
