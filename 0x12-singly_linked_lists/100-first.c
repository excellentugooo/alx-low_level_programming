#include <stdio.h>

void befirst(void) __attribute__((constructor));

/**
 * befirst - prints a function before main.
 */

void befirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
