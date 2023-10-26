#include "main.h"

/**
 * get_endianness - checks whether the byte order is little or big endian
 *
 * Description - in the program we use 1 as our test number.
 * 1 is stored in memory as 00000001
 *if big-endian it will be stored as 01 00 00 00
 *if little-endian 01 00 00 00
 *
 * Return: 0 if little endian and 1 if small endian
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *)&t;

	if (*c)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
