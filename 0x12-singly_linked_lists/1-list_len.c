#include "lists.h"

/**
 * list_len - returns the number of elements
 * in a linked list_t list.
 * @h: pointer to element
 *
 * Return: s
 */

size_t list_len(const list_t *h)
{
	size_t s;

	for (s = 1; h-> str != NULL; s++)
	{
		h = h->next;
	}
	return (s);
}
