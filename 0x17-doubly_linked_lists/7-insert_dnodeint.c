#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: the head node
 * @idx: the index to insert the new node
 * @n: the value of the new node
 *
 * Return: the address of the new node creater or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert;
	dlistint_t *temp;

	temp = *h;
	insert = malloc(sizeof(dlistint_t));
	if (!insert)
		return (NULL);

	insert->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 0 && temp)
	{
		temp = temp->next;
		idx--;
	}
	if (!temp && idx <= 0)
		return (add_dnodeint_end(h, n));

	insert->prev = temp->prev;
	temp->prev->next = insert;
	temp->prev = insert;
	insert->next = temp;

	return (insert);
}
