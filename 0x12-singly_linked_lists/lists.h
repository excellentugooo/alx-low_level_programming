#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_t - a singly linked list
 * @str: string
 * @len: lenght of string.
 * @next: pointer to the next.
 *
 * Description: this is a data of strings
 * stored using a singly linked data structure.
 */

struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
};

/**
 * list_t- type def of struct list_t
 */
typedef struct list_t list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
