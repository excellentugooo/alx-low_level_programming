#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer
 * @str: new string
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int l;

	for (l = 0; str[l] != '\0'; l++)
		;

	first = malloc(sizeof(list_t));

	if (first == NULL)
		return (NULL);

	first->str = strdup(str);
	first->len = l;
	first->next = (*head);
	(*head) = first;

	return (*head);
}

