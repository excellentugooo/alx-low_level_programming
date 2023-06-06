#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: double pointer to the first node
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int sub;
	listint_t *box;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			box = (*h)->next;
			free(*h);
			*h = box;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
