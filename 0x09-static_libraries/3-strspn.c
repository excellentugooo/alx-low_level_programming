#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input segment
 * @accept: use the byte to compare s
 * Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				lenght++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (lenght);
		}
		s++;
	}
	return (lenght);
}
