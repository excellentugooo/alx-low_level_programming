#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: finds needle inside here
 * @needle: what we are searching for
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
	}

	return (0);
}
