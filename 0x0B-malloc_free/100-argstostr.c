#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			d++;
		}
	}
	d += ac;

	s = malloc(sizeof(char) * d + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
	if (s[c] == '\0')
	{
		s[c++] = '\n';
	}
	}
	return (s);
}
