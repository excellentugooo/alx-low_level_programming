#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: pointer to node
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *store = head;
	listint_t *box = head;

	if (!head)
		return (NULL);

	while (store && box && box->next)
	{
		box = box->next->next;
		store = store->next;
		if (box == store)
		{
			store = head;
			while (store != box)
			{
				store = store->next;
				box = box->next;
			}
			return (box);
		}
	}

	return (NULL);
}
