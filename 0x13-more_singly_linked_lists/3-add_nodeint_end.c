#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to last node
 * @n: element of node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *empty;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;
	empty = *head;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	while (empty->next != NULL)
		empty = empty->next;

	empty->next = last;
	return (last);
}
