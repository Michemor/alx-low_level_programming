#include "hash_tables.h"

/**
 * hash_djb2 - uses the djb2 algorithm to allocate an index to
 * the str which is a key
 * @str: key to be added to the hash table
 *
 * Return: an integer indicating the index of the str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
		/* hash * 33 + c */
	}
	return (hash);
}
