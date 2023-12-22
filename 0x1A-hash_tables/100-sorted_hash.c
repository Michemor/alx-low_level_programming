#include "hash_tables.h"

/**
 * shash_table_create - creates a PHP hash table
 * @size: size of the table
 *
 * Return: pointer to the hash table
 *
 * Description - A PHP hash table:
 * 1. support string keys and non-continuous integer keys
 * 2. uses a doubly linked list
 * 3. for both forward and backward traversal it implements four pointers
 * - pListhead
 * - pListtail
 * - plistnext
 * - pListprev 
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == 0)
	{
		free(table->array);
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
	table->array[i] = NULL;
	}
	return (table);
}

/**
 * shash_table_set - sets elements into the table
 * @ht: pointer to table
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: 1 if successful and 0 if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	return (1);
}

/**
 * shash_table_get - gets the value of the key
 * @ht: pointer to table
 * @key: pointer to key
 *
 * Return: key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	return (key);
}

/**
 * shash_table_print - prints the shash table
 * @ht: pointer to table
 */
void shash_table_print(const shash_table_t *ht)
{

}

/**
 * shash_table_print_rev - prints the hash tables key/value pairs in
 * reverse order using the sorted linked list
 * @ht: pointer to head
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;

}

