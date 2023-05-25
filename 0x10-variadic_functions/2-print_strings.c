#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int count;

	va_start(str, n);

	for (count = 0; count < n; count++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			print("%s", s);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}


