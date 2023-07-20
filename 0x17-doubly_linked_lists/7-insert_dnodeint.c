#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert;
	dlistint_t *head;
	unsigned int i;

	insert = NULL;
	if (idx == 0)
		insert = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					insert = add_dnodeint_end(h, n);
				else
				{
					insert = malloc(sizeof(dlistint_t));
					if (insert != NULL)
					{
						insert->n = n;
						insert->next = head->next;
						insert->prev = head;
						head->next->prev = insert;
						head->next = insert;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (insert);
}
