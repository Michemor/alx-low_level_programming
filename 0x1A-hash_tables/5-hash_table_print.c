#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	/* flag to track the first item*/
	int is_first = 0;

	if (ht == NULL)
	{
	printf("{}\n");
	}
	else
	{
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	if (ht->array[i] != NULL)
	{
	if (is_first == 1)
		printf(", ");
	temp = ht->array[i];
	while (temp)
	{
	printf("'%s' : '%s'", temp->key, temp->value);
	temp = temp->next;
	if (temp != NULL)
		printf(", ");
	}
	is_first = 1;
	}
	}
	}
	printf("}\n");
}
