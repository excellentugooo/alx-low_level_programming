#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashed;
	int i;

	hashed = 5381;
	while ((i = *str++))
		hashed = ((hashed << 5) + hashed) + i;

	return (hashed);
}
