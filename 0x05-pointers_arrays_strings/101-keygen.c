#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int paswd[100];
	int a, sum, b;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		paswd[a] = rand() % 78;
		sum += (paswd[a] + '0');
		putchar(paswd[a] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
