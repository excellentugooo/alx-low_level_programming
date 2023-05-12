#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: starting address of memory
 * @b: value
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
