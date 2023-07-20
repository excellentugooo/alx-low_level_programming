#include "lists.h"

/**
 * get_dnodeint_at_index -returns the element of a partucular node
 * @head: the head node
 * @index: the location of the required node
 *
 * Return: the element of the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t iterate = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (iterate == index)
			break;
		head = head->next;
		iterate++;
	}
	return (head);
}
