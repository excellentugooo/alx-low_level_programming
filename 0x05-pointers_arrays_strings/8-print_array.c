#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of array
 */

void print_array(int *a, int n)
{
	int range;

	for (range = 0; range < (n - 1); range++)
	{
		printf("%d, ", a[range];
	}
	if (range == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}
