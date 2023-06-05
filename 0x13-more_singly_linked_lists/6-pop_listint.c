#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: double pointer
 *
 * Return: n, 0 if link is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *empty;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data  = (*head)->n;
	empty = (*head)->next;
	free(*head);
	*head = empty;

	return (data);
}
