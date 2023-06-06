#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a double pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data of node.
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *box = (*head);
	listint_t *insert;
	unsigned int i;

	insert = malloc(sizeof(listint_t));

	if (!insert || !head)
		return (NULL);
	insert->n = n;
	insert->next = NULL;

	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
		return (insert);
	}

	for (i = 0; box && i < idx; i++)
	{
		if (i == idx - 1)
		{
		insert->next = box->next;
		box->next = insert;
		return (insert);
		}
		else
			box = box->next;
	}
	return (NULL);
}

