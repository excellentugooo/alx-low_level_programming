#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a list
 * @h: the head node
 *
 * Return: the number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
