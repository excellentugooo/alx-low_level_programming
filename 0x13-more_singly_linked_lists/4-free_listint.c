#include "list.h"

/**
 * free_listint - that frees a listint_t list.
 * @head: pointer to the node
 */

void free_listint(listint_t *head)
{
	listint_t *empty;

	while (head != NULL)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
}
