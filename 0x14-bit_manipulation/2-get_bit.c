#include "main.h"

/**
 * get_bit - obtains bit at specific index from integer n
 * @n: decimal to be checked
 * @index: specific bit to be obtained
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char bit_n;

	if (index > 32)
		return (-1);

	bit_n = n >> index;

	if ((bit_n & 1) >= 1)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
