#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds or updates the key/value pair
 * @ht: pointer to the table
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: on successful execution returns 1
 * on failure returns 0
 *
 * Description - the following is a list of actions to be performed:
 * - create the node
 * - create a hash for the key and search for it in the array
 * - traverse through array checking for the index; its existence
 * add the key and value (check if key is empty; exit if empty)
 * - add the node to the array containing (check if the key is present)
 * if present update key value if absent add the node at the beginning of
 * the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int kindex;
	hash_node_t *node, *temp;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->value);
		return (0);
	}
	node->next = NULL;
	kindex = key_index((unsigned char *)key, ht->size);
	if (ht->array[kindex] == NULL)
	{
	ht->array[kindex] = node;
	free(node->key);
	free(node->value);
	}
	else
	{
	temp = ht->array[kindex];
	while (temp)
	{
	if (strcmp(temp->key, key) == 0)
	{
	free(node->key);
	free(node->value);
	free(node);
	ht->array[kindex]->value = strdup(value);
	return (1);
	}
	temp = temp->next;
	}
	node->next = ht->array[kindex];
	ht->array[kindex] = node;
	free(node->key);
	free(node->value);
	}
	return (1);
}
