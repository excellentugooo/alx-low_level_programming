#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * use at most n bytes from src
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
