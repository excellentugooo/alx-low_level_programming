#include <stdlib.h>
#include "main.h"

/**
 * count - count words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count(char *s)
{
	int stop, a, b;

	stop = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
		{
		stop = 0;
		}
		else if (stop == 0)
		{
			stop = 1;
			b++;
		}
	}
	return (b);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer, or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *temp;
	int x, y = 0, lenght = 0, word, z = 0, starts, ends;

	while (*(str + lenght))
	{
		lenght++;
	}
	word = count(str);
	if (word == 0)
	{
		return (NULL);
	}
	mat = (char **) malloc(sizeof(char *) * (word + 1));

	if (mat == NULL)
		return (NULL);
	for (x = 0; x <= lenght; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				ends = x;
				temp = (char *) malloc(sizeof(char) * (z + 1));
				if (temp == NULL)
					return (NULL);
				while (starts < ends)
					*temp++ = str[starts++];
				*temp = '\0';
				mat[y] = temp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			starts = x;
	}
	mat[y] = NULL;
	return (mat);
}
