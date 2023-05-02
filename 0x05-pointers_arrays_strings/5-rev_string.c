#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int count = 0;
	int range;

	while (s[count] != '\0')
	{
		count++;
	}
	for (range = 0; range < count; range++)
	{
		count--;
		reverse = s[range];
		s[range] = s[count];
		s[count] = reverse;
	}
}
