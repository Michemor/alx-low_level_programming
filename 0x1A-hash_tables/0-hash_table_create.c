#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	/* allocate memory for the table*/
	table = malloc(sizeof(hash_table_t));
	table->size = size;
	/* allocate memory for the array of elements */
	table->array = malloc(size  * (sizeof(hash_node_t *)));
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
