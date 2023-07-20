#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of node
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first;
	dlistint_t *temp;

	first = malloc(sizeof(dlistint_t));
	if (first == NULL)
		return (NULL);

	first->n = n;
	first->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	first->next = temp;

	if (temp != NULL)
		temp->prev = first;
	*head = first;

	return (first);
}
