#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{

	char *cat;
	int a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	cat = malloc((a + b + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (s1[a] != '\0')
	{
		cat[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		cat[a] = s1[b];
		a++, b++;
	}
	cat = '\0';

	return (cat);
}
