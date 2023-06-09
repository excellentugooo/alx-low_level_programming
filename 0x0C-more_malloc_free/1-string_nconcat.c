#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string input 1
 * @s2: string input 2
 * @n: number of bites
 *
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int lenght1, lenght2, lenght, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lenght1 = 0; s1[lenght1] != '\0'; lenght1++)
		;
	for (lenght2 = 0; s2[lenght2] != '\0'; lenght2++)
		;

	if (n > lenght2)
		n = lenght2;
	lenght = lenght1 + n;
	s = malloc(lenght + 1);

	if (s == NULL)
		return (NULL);
	for (x = 0; x < lenght; x++)
	{
		if (x < lenght1)
			s[x] = s1[x];
		else
			s[x] = s2[x - lenght1];
	}
	s[x] = '\0';
	return (s);
}
