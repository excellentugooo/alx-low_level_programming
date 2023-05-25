#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *string, *s = "";
	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", s, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(all, double));
					break;
				case 's':
					string = va_arg(all, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", s, string);
					break;
				default:
					x++;
					continue;
			}
			s = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(all);
}
