#include "hash_tables.h"

/**
 * hash_table_delete - deletes a table
 * @ht: pointer to table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		head = ht->array[i];
		while (head)
		{
		temp = head->next;
		free(head->value);
		free(head->key);
		free(head);
		head = temp;
		}
		}
	}
	free(ht->array);
	free(ht);
}
