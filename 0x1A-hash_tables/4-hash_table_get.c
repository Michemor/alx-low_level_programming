#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves the value assosiated with a given key
 * @ht: pointer to the hash table
 * @key: key we are searching for
 *
 * Return: value assosiated with key or NULL if the key was ot found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
	return (NULL);
	}

	i = 0;
	while (i < ht->size)
	{
	temp = ht->array[i];
	if (temp)
	{
	while (temp->next)
	{
	if (strcmp(temp->key, key) == 0)
		return (temp->value);
	temp = temp->next;
	}
	if (strcmp(temp->key, key) == 0)
		return (temp->value);
	}
	i++;
	}
	return (NULL);
}
