#include "main.h"

/**
 * set_bit - sets bit at a specific index to 1
 * @n: integer whose bit at index is to be 1
 * @index: the specific index of bit  to be replaced
 *
 * Return: (1) if successful or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_n = 0;

	if (index > 32)
	{
		return (-1);
	}
	bit_n = 1 << index;
	*n |= bit_n;
		return (1);
}
