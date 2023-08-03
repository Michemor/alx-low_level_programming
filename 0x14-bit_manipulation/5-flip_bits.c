#include "main.h"

/**
 * flip_bits - flips the bits of n and m
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits to be flipped for n to be equal to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int res = 0;

	res = n ^ m;

	count = 0;
	while (res > 0)
	{
	res &= (res - 1);
	count++;
	}
	return (count);
}
