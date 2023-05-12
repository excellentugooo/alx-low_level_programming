#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
	lenght++;
	s++;
	}
return (lenght);
}
