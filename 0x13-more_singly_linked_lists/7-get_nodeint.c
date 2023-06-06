#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav = head;
	unsigned int i;

	if (trav == NULL)
		return (NULL);

	for (i = 0; trav != NULL && i < index; i++)
	{
		trav = trav->next;
	}
	return (trav);
}
