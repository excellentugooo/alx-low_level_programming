#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: a double pointer to node
 */

void free_listint2(listint_t **head)
{
	listint_t *empty;

	if (head == NULL)
		return;

	while (*head)
	{
		empty = (*head)->next;
		free(*head);
		(*head) = empty;
	}
	(*head) = NULL;
}
