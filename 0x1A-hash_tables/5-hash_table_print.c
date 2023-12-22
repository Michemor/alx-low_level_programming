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
	int is_first = 1;

	if (ht == NULL)
	{
	printf("{}\n");
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	temp = ht->array[i];
	while (temp)
	{
	if (!is_first)
		printf(", ");
	else
		is_first = 0;
	printf("'%s' : '%s'", temp->key, temp->value);
	temp = temp->next;
	}
	}
	printf("}\n");
}
