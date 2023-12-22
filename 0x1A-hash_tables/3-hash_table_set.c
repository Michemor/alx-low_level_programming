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
	char *key_val, *value_val;

	key_val = (char *)key;
	value_val = (char *)value;
	if (key_val == NULL || ht == NULL || *key_val == '\0' || value == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = key_val;
	node->value = value_val;
	node->next = NULL;
	kindex = key_index((unsigned char *)key_val, ht->size);
	if (ht->array[kindex] == NULL)
	{
	/* adds a new node since cell in array at kindex is empty */
	ht->array[kindex] = node;
	}
	else
	{
	/* updates the value of an index */
	temp = ht->array[kindex];
	while (temp)
	{
		if (strcmp(temp->key, key_val) == 0)
		{
		free(ht->array[kindex]->value);
		ht->array[kindex]->value = node->value;
		return (1);
		}
		else
		{
		node->next = ht->array[kindex];
		ht->array[kindex] = node;
		}
	temp = temp->next;
	}
	}
	return (1);
}
