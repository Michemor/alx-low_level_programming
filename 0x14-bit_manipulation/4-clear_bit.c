#include "main.h"

/**
 * clear_bit - clears bit (replaces it with 0) at a specific index
 * @n: integer
 * @index: position to be cleared
 * 
 * Return: 1 if successful or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit_n = 0;

	if (index > 32)
	{
	return (-1);
	}

	bit_n = ~(1 << index);
	(*n) &= bit_n;
	return (1);
}
