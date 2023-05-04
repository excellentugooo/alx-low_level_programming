#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: input value
 *
 * Return: c
 */

char *leet(char *c)
{
	int y, z;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (y = 0; c[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (c[y] == a[z])
			{
				c[y] = b[z];
			}
		}
	}
	return (c);
}
