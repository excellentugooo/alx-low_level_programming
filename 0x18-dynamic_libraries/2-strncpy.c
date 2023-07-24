#include "main.h"

/**
 * _strncpy - _strncpy
 * work exactly like strncpy
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
