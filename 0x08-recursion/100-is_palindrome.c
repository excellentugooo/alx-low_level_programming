#include "main.h"

int checks(char *s, int it, int lenght);
int strlen(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if it is, else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
	return (checks(s, 0, strlen(s)));
	}
}

/**
 * strlen - returns the length of a string
 * using recursion
 * @s: input string
 *
 * Return: length
 */
int strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + strlen(s + 1));
	}
}

/**
 * checks - checks the palindrome
 * using recursion
 * @s: string
 * @it: iterator
 * @lenght: length of the string
 *
 * Return: 1 if palindrome, else 0
 */
int checks(char *s, int it, int lenght)
{
	if (*(s + it) != *(s + lenght - 1))
	{
		return (0);
	}
	else if (it >= lenght)
	{
		return (1);
	}
	else
	{
	return (checks(s, it + 1, lenght - 1));
	}
}

