#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: double pointer to node
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store;
	listint_t *position;
	unsigned int i;

	store = *head;
	position = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(store);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (store != NULL || store->next != NULL)
			return (-1);
		store = store->next;
	}
	position = store->next;
	store->next = position->next;
	free(position);

	return (1);
}
