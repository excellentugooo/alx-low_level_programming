#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer
 * @str: string
 *
 * Return: address.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	unsigned int l;
	list_t *empty = *head;

	for (l = 0; str[l] != '\0'; l++)
		;

	last = malloc(sizeof(list_t));

	if (last == NULL)
		return (NULL);

	last->str = strdup(str);
	last->len = l;
	last->next = NULL;

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
