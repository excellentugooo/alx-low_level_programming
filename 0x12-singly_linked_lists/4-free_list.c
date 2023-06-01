#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer
 */

void free_list(list_t *head)
{
	list_t *empty;

	while (head != NULL)
	{
		empty = head->next;
		free(head->str);
		free(head);
		head = empty;
	}
}
