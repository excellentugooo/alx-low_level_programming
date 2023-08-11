#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *new, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new = ht->array[i];
			while (new != NULL)
			{
				temp = new->next;
				free(new->key);
				free(new->value);
				free(new);
				new = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
