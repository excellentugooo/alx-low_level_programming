#include "lists.h"

/**
 * free_dlistint - frees up the entire list after using malloc
 * @head: the begining of thr list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *box;

	while (head)
	{
		box = head;
		head = head->next;
		free(box);
	}
}
