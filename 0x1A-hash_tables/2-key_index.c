#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: pointer to key
 * @size: size of the hash table array size
 *
 * Return: index of the array at which a key has been placed
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;
	unsigned long int kindex;

	kindex = hash_djb2(key);

	index = kindex % size;
	return (index);
}
