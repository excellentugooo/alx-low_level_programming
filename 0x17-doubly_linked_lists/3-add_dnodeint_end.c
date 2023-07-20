#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *temp;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}
	else
	{
		*head = end;
	}

	end->prev = temp;
	return (end);
}
