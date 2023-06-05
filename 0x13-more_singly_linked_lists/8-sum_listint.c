#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *box;
	int sum = 0;

	box = head;
	if (box == NULL)
		return (0);

	while (box != NULL)
	{
		sum += box->n;
		box = box->next;
	}
	return (sum);
}

