#include "main.h"
#include <stdio.h>

/**
 * swap_int - the function swaps the values of two integers.
 * @a: int to swap.
 * @b: int to swap.
 * p serves like an empty storage.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *b;
	*b = *a;
	*a = p
}
