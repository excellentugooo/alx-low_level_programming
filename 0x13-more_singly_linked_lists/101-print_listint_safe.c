#include "lists.h"

/**
 * looped - Counts the number of unique nodes in a loop
 * @head: A pointer to the head
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped(const listint_t *head)
{
	const listint_t *store, *box;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	store = head->next;
	box = (head->next)->next;

	while (box)
	{
		if (store == box)
		{
			store = head;
			while (store != box)
			{
				count++;
				store = store->next;
				box = box->next;
			}

			store = store->next;
			while (store != box)
			{
				count++;
				store = store->next;
			}

			return (count);
		}

		store = store->next;
		box = (box->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;

	count = looped(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}

