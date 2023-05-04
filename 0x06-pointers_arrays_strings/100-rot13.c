#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @c: pointer
 *
 * Return: c
 */

char *rot13(char *c)
{
	int a;
	int b;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[a] == d1[b])
			{
				c[a] = d2[b];
				break;
			}
		}
	}
	return (c);
}

