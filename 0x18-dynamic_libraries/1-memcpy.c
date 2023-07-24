#include "main.h"

/**
 *_memcpy -  copies memory area
 *@dest: destination
 *@src: source
 *@n: bytes
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
